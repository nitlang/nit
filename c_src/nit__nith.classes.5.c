#include "nit__nith.classes.0.h"
/* runtime class nit__TPercent */
const struct class class_nit__TPercent = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TPercent:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TPercent:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TPercent:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TPercent:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TPercent:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TPercent:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TPercent:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TPercent:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TPercent:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TPercent:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TPercent:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TPercent:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TPercent:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TPercent:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TPercent:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TPercent:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TPercent:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TPercent:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TPercent:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TPercent:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TPercent:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TPercent:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TPercent:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TPercent:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TPercent:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TPercent:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TPercent:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TPercent:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TPercent:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TPercent:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TPercent:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TPercent:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TPercent:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TPercent:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TPercent:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TPercent:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TPercent:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TPercent:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TPercent:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TPercent:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TPercent:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TPercent___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TPercent:lexer#TPercent#parser_index */
(nitmethod_t)nit__lexer___TPercent___init_tk, /* pointer to parser_nodes:TPercent:lexer#TPercent#init_tk */
}
};
/* allocate TPercent */
val* NEW_nit__TPercent(const struct type* type) {
val* self /* : TPercent */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TPercent;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TPercent exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TPercent exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TPercent exact> */
return self;
}
/* runtime class nit__TEq */
const struct class class_nit__TEq = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TEq:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TEq:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TEq:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TEq:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TEq:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TEq:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TEq:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TEq:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TEq:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TEq:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TEq:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TEq:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TEq:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TEq:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TEq:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TEq:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TEq:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TEq:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TEq:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TEq:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TEq:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TEq:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TEq:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TEq:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TEq:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TEq:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TEq:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TEq:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TEq:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TEq:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TEq:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TEq:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TEq:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TEq:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TEq:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TEq:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TEq:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TEq:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TEq:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TEq:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TEq:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TEq:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TEq:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TEq:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TEq:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TEq:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TEq:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TEq:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TEq:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TEq:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TEq:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TEq:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TEq:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TEq___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TEq:lexer#TEq#parser_index */
(nitmethod_t)nit__lexer___TEq___init_tk, /* pointer to parser_nodes:TEq:lexer#TEq#init_tk */
}
};
/* allocate TEq */
val* NEW_nit__TEq(const struct type* type) {
val* self /* : TEq */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TEq;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TEq exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TEq exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TEq exact> */
return self;
}
/* runtime class nit__TNe */
const struct class class_nit__TNe = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TNe:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TNe:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TNe:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TNe:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TNe:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TNe:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TNe:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TNe:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TNe:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TNe:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TNe:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TNe:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TNe:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TNe:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TNe:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TNe:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TNe:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TNe:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TNe:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TNe:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TNe:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TNe:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TNe:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TNe:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TNe:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TNe:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TNe:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TNe:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TNe:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TNe:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TNe:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TNe:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TNe:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TNe:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TNe:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TNe:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TNe:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TNe:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TNe:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TNe:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TNe:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TNe:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TNe:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TNe:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TNe:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TNe:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TNe:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TNe:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TNe:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TNe:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TNe:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TNe:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TNe:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TNe___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TNe:lexer#TNe#parser_index */
(nitmethod_t)nit__lexer___TNe___init_tk, /* pointer to parser_nodes:TNe:lexer#TNe#init_tk */
}
};
/* allocate TNe */
val* NEW_nit__TNe(const struct type* type) {
val* self /* : TNe */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TNe;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TNe exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TNe exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TNe exact> */
return self;
}
/* runtime class nit__TLt */
const struct class class_nit__TLt = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TLt:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TLt:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TLt:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TLt:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TLt:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TLt:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TLt:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TLt:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TLt:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TLt:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TLt:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TLt:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TLt:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TLt:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TLt:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TLt:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TLt:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TLt:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TLt:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TLt:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TLt:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TLt:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TLt:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TLt:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TLt:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TLt:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TLt:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TLt:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TLt:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TLt:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TLt:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TLt:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TLt:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TLt:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TLt:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TLt:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TLt:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TLt:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TLt:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TLt:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TLt:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TLt:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TLt:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TLt:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TLt:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TLt:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TLt:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TLt:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TLt:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TLt:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TLt:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TLt:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TLt:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TLt___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TLt:lexer#TLt#parser_index */
(nitmethod_t)nit__lexer___TLt___init_tk, /* pointer to parser_nodes:TLt:lexer#TLt#init_tk */
}
};
/* allocate TLt */
val* NEW_nit__TLt(const struct type* type) {
val* self /* : TLt */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TLt;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TLt exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TLt exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TLt exact> */
return self;
}
/* runtime class nit__TLe */
const struct class class_nit__TLe = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TLe:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TLe:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TLe:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TLe:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TLe:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TLe:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TLe:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TLe:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TLe:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TLe:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TLe:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TLe:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TLe:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TLe:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TLe:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TLe:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TLe:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TLe:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TLe:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TLe:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TLe:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TLe:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TLe:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TLe:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TLe:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TLe:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TLe:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TLe:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TLe:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TLe:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TLe:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TLe:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TLe:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TLe:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TLe:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TLe:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TLe:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TLe:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TLe:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TLe:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TLe:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TLe:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TLe:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TLe:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TLe:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TLe:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TLe:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TLe:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TLe:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TLe:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TLe:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TLe:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TLe:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TLe___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TLe:lexer#TLe#parser_index */
(nitmethod_t)nit__lexer___TLe___init_tk, /* pointer to parser_nodes:TLe:lexer#TLe#init_tk */
}
};
/* allocate TLe */
val* NEW_nit__TLe(const struct type* type) {
val* self /* : TLe */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TLe;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TLe exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TLe exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TLe exact> */
return self;
}
/* runtime class nit__TLl */
const struct class class_nit__TLl = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TLl:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TLl:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TLl:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TLl:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TLl:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TLl:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TLl:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TLl:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TLl:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TLl:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TLl:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TLl:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TLl:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TLl:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TLl:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TLl:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TLl:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TLl:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TLl:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TLl:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TLl:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TLl:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TLl:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TLl:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TLl:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TLl:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TLl:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TLl:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TLl:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TLl:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TLl:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TLl:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TLl:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TLl:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TLl:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TLl:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TLl:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TLl:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TLl:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TLl:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TLl:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TLl:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TLl:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TLl:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TLl:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TLl:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TLl:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TLl:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TLl:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TLl:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TLl:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TLl:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TLl:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TLl___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TLl:lexer#TLl#parser_index */
(nitmethod_t)nit__lexer___TLl___init_tk, /* pointer to parser_nodes:TLl:lexer#TLl#init_tk */
}
};
/* allocate TLl */
val* NEW_nit__TLl(const struct type* type) {
val* self /* : TLl */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TLl;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TLl exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TLl exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TLl exact> */
return self;
}
/* runtime class nit__TGt */
const struct class class_nit__TGt = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TGt:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TGt:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TGt:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TGt:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TGt:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TGt:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TGt:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TGt:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TGt:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TGt:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TGt:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TGt:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TGt:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TGt:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TGt:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TGt:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TGt:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TGt:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TGt:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TGt:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TGt:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TGt:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TGt:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TGt:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TGt:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TGt:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TGt:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TGt:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TGt:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TGt:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TGt:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TGt:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TGt:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TGt:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TGt:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TGt:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TGt:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TGt:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TGt:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TGt:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TGt:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TGt:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TGt:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TGt:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TGt:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TGt:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TGt:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TGt:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TGt:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TGt:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TGt:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TGt:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TGt:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TGt___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TGt:lexer#TGt#parser_index */
(nitmethod_t)nit__lexer___TGt___init_tk, /* pointer to parser_nodes:TGt:lexer#TGt#init_tk */
}
};
/* allocate TGt */
val* NEW_nit__TGt(const struct type* type) {
val* self /* : TGt */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TGt;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TGt exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TGt exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TGt exact> */
return self;
}
/* runtime class nit__TGe */
const struct class class_nit__TGe = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TGe:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TGe:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TGe:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TGe:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TGe:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TGe:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TGe:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TGe:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TGe:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TGe:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TGe:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TGe:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TGe:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TGe:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TGe:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TGe:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TGe:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TGe:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TGe:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TGe:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TGe:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TGe:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TGe:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TGe:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TGe:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TGe:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TGe:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TGe:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TGe:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TGe:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TGe:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TGe:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TGe:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TGe:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TGe:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TGe:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TGe:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TGe:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TGe:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TGe:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TGe:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TGe:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TGe:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TGe:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TGe:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TGe:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TGe:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TGe:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TGe:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TGe:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TGe:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TGe:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TGe:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TGe___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TGe:lexer#TGe#parser_index */
(nitmethod_t)nit__lexer___TGe___init_tk, /* pointer to parser_nodes:TGe:lexer#TGe#init_tk */
}
};
/* allocate TGe */
val* NEW_nit__TGe(const struct type* type) {
val* self /* : TGe */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TGe;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TGe exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TGe exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TGe exact> */
return self;
}
/* runtime class nit__TGg */
const struct class class_nit__TGg = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TGg:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TGg:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TGg:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TGg:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TGg:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TGg:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TGg:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TGg:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TGg:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TGg:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TGg:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TGg:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TGg:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TGg:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TGg:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TGg:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TGg:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TGg:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TGg:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TGg:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TGg:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TGg:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TGg:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TGg:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TGg:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TGg:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TGg:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TGg:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TGg:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TGg:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TGg:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TGg:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TGg:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TGg:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TGg:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TGg:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TGg:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TGg:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TGg:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TGg:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TGg:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TGg:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TGg:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TGg:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TGg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TGg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TGg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TGg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TGg:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TGg:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TGg:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TGg:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TGg:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TGg___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TGg:lexer#TGg#parser_index */
(nitmethod_t)nit__lexer___TGg___init_tk, /* pointer to parser_nodes:TGg:lexer#TGg#init_tk */
}
};
/* allocate TGg */
val* NEW_nit__TGg(const struct type* type) {
val* self /* : TGg */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TGg;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TGg exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TGg exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TGg exact> */
return self;
}
/* runtime class nit__TStarship */
const struct class class_nit__TStarship = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TStarship:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TStarship:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TStarship:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TStarship:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TStarship:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TStarship:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TStarship:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TStarship:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TStarship:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TStarship:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TStarship:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TStarship:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TStarship:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TStarship:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TStarship:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TStarship:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TStarship:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TStarship:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TStarship:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TStarship:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TStarship:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TStarship:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TStarship:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TStarship:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TStarship:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TStarship:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TStarship:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TStarship:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TStarship:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TStarship:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TStarship:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TStarship:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TStarship:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TStarship:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TStarship:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TStarship:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TStarship:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TStarship:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TStarship:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TStarship:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TStarship:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TStarship___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TStarship:lexer#TStarship#parser_index */
(nitmethod_t)nit__lexer___TStarship___init_tk, /* pointer to parser_nodes:TStarship:lexer#TStarship#init_tk */
}
};
/* allocate TStarship */
val* NEW_nit__TStarship(const struct type* type) {
val* self /* : TStarship */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TStarship;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TStarship exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TStarship exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TStarship exact> */
return self;
}
/* runtime class nit__TBang */
const struct class class_nit__TBang = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TBang:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TBang:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TBang:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TBang:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TBang:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TBang:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TBang:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TBang:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TBang:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenOperator___standard__string__Object__to_s, /* pointer to parser_nodes:TBang:parser_nodes#TokenOperator#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TBang:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TBang:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TBang:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TBang:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TBang:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TBang:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TBang:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TBang:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TBang:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TBang:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TBang:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TBang:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TBang:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TBang:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TBang:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TBang:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TBang:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TBang:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TBang:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TBang:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TBang:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TBang:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TBang:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TBang:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TBang:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TBang:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TBang:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TBang:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TBang:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TBang:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TBang:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TBang:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TBang:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TBang:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TBang:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TBang:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TBang:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TBang:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TBang:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TBang:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TBang:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TBang:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TBang:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TBang___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TBang:lexer#TBang#parser_index */
(nitmethod_t)nit__lexer___TBang___init_tk, /* pointer to parser_nodes:TBang:lexer#TBang#init_tk */
}
};
/* allocate TBang */
val* NEW_nit__TBang(const struct type* type) {
val* self /* : TBang */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TBang;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TBang exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TBang exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TBang exact> */
return self;
}
/* runtime class nit__TAt */
const struct class class_nit__TAt = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TAt:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TAt:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TAt:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TAt:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TAt:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TAt:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TAt:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TAt:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TAt:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Token___standard__string__Object__to_s, /* pointer to parser_nodes:TAt:parser_nodes#Token#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TAt:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TAt:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TAt:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TAt:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TAt:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TAt:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TAt:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TAt:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TAt:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TAt:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TAt:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TAt:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TAt:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TAt:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TAt:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TAt:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TAt:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TAt:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TAt:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TAt:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TAt:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TAt:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TAt:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TAt:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TAt:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TAt:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TAt:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TAt:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TAt:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TAt:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TAt:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TAt:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TAt:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TAt:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TAt:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TAt:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TAt:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TAt:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TAt:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TAt:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TAt:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TAt:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TAt:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TAt___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TAt:lexer#TAt#parser_index */
(nitmethod_t)nit__lexer___TAt___init_tk, /* pointer to parser_nodes:TAt:lexer#TAt#init_tk */
}
};
/* allocate TAt */
val* NEW_nit__TAt(const struct type* type) {
val* self /* : TAt */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TAt;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TAt exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TAt exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TAt exact> */
return self;
}
/* runtime class nit__TClassid */
const struct class class_nit__TClassid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TClassid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TClassid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TClassid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TClassid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TClassid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TClassid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TClassid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TClassid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TClassid:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TClassid___standard__string__Object__to_s, /* pointer to parser_nodes:TClassid:parser_nodes#TClassid#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TClassid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TClassid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TClassid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TClassid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TClassid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TClassid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TClassid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TClassid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TClassid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TClassid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TClassid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TClassid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TClassid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TClassid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TClassid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TClassid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TClassid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TClassid:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TClassid:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TClassid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TClassid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TClassid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TClassid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TClassid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TClassid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TClassid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TClassid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TClassid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TClassid:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TClassid:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TClassid:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TClassid___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TClassid:lexer#TClassid#parser_index */
(nitmethod_t)nit__lexer___TClassid___init_tk, /* pointer to parser_nodes:TClassid:lexer#TClassid#init_tk */
}
};
/* allocate TClassid */
val* NEW_nit__TClassid(const struct type* type) {
val* self /* : TClassid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TClassid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TClassid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TClassid exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TClassid exact> */
return self;
}
/* runtime class nit__TId */
const struct class class_nit__TId = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TId:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TId:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TId:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TId:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TId:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TId:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TId:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TId:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TId:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TId___standard__string__Object__to_s, /* pointer to parser_nodes:TId:parser_nodes#TId#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TId:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TId:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TId:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TId:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TId:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TId:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TId:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TId:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TId:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TId:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TId:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TId:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TId:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TId:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TId:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TId:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TId:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TId:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TId:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TId:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TId:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TId:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TId:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TId:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TId:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TId:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TId:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TId:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TId:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TId:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TId:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TId:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TId:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TId:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TId:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TId:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TId:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TId:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TId:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TId:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TId:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TId:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TId:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TId___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TId:lexer#TId#parser_index */
(nitmethod_t)nit__lexer___TId___init_tk, /* pointer to parser_nodes:TId:lexer#TId#init_tk */
}
};
/* allocate TId */
val* NEW_nit__TId(const struct type* type) {
val* self /* : TId */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TId;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TId exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TId exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TId exact> */
return self;
}
/* runtime class nit__TAttrid */
const struct class class_nit__TAttrid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TAttrid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TAttrid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TAttrid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TAttrid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TAttrid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TAttrid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TAttrid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TAttrid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TAttrid:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TAttrid___standard__string__Object__to_s, /* pointer to parser_nodes:TAttrid:parser_nodes#TAttrid#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TAttrid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TAttrid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TAttrid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TAttrid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TAttrid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TAttrid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TAttrid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TAttrid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TAttrid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TAttrid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TAttrid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TAttrid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TAttrid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TAttrid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TAttrid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TAttrid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TAttrid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TAttrid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TAttrid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TAttrid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TAttrid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TAttrid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TAttrid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TAttrid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TAttrid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TAttrid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TAttrid:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TAttrid___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TAttrid:lexer#TAttrid#parser_index */
(nitmethod_t)nit__lexer___TAttrid___init_tk, /* pointer to parser_nodes:TAttrid:lexer#TAttrid#init_tk */
}
};
/* allocate TAttrid */
val* NEW_nit__TAttrid(const struct type* type) {
val* self /* : TAttrid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TAttrid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TAttrid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TAttrid exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TAttrid exact> */
return self;
}
/* runtime class nit__TokenLiteral */
/* allocate TokenLiteral */
val* NEW_nit__TokenLiteral(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "TokenLiteral is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__TNumber */
const struct class class_nit__TNumber = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TNumber:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TNumber:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TNumber:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TNumber:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TNumber:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TNumber:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TNumber:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TNumber:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TNumber:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TNumber:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TNumber:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TNumber:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TNumber:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TNumber:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TNumber:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TNumber:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TNumber:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TNumber:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TNumber:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TNumber:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TNumber:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TNumber:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TNumber:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TNumber:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TNumber:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TNumber:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TNumber:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TNumber:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TNumber:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TNumber:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TNumber:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TNumber:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TNumber:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TNumber:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TNumber:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TNumber:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TNumber:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TNumber:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TNumber:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TNumber:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TNumber:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TNumber___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TNumber:lexer#TNumber#parser_index */
(nitmethod_t)nit__lexer___TNumber___init_tk, /* pointer to parser_nodes:TNumber:lexer#TNumber#init_tk */
}
};
/* allocate TNumber */
val* NEW_nit__TNumber(const struct type* type) {
val* self /* : TNumber */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TNumber;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TNumber exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TNumber exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TNumber exact> */
return self;
}
/* runtime class nit__THexNumber */
const struct class class_nit__THexNumber = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:THexNumber:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:THexNumber:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:THexNumber:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:THexNumber:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:THexNumber:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:THexNumber:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:THexNumber:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:THexNumber:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:THexNumber:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:THexNumber:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:THexNumber:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:THexNumber:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:THexNumber:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:THexNumber:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:THexNumber:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:THexNumber:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:THexNumber:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:THexNumber:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:THexNumber:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:THexNumber:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:THexNumber:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:THexNumber:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:THexNumber:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:THexNumber:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:THexNumber:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:THexNumber:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:THexNumber:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:THexNumber:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:THexNumber:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:THexNumber:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:THexNumber:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:THexNumber:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:THexNumber:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:THexNumber:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:THexNumber:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:THexNumber:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:THexNumber:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:THexNumber:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:THexNumber:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:THexNumber:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:THexNumber:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:THexNumber:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:THexNumber:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:THexNumber:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:THexNumber:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:THexNumber:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:THexNumber:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___THexNumber___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:THexNumber:lexer#THexNumber#parser_index */
(nitmethod_t)nit__lexer___THexNumber___init_tk, /* pointer to parser_nodes:THexNumber:lexer#THexNumber#init_tk */
}
};
/* allocate THexNumber */
val* NEW_nit__THexNumber(const struct type* type) {
val* self /* : THexNumber */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__THexNumber;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:THexNumber exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:THexNumber exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:THexNumber exact> */
return self;
}
/* runtime class nit__TFloat */
const struct class class_nit__TFloat = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TFloat:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TFloat:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TFloat:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TFloat:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TFloat:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TFloat:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TFloat:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TFloat:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TFloat:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TFloat:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TFloat:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TFloat:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TFloat:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TFloat:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TFloat:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TFloat:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TFloat:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TFloat:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TFloat:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TFloat:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TFloat:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TFloat:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TFloat:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TFloat:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TFloat:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TFloat:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TFloat:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TFloat:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TFloat:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TFloat:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TFloat:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TFloat:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TFloat:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TFloat:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TFloat:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TFloat:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TFloat:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TFloat:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TFloat:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TFloat:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TFloat:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TFloat___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TFloat:lexer#TFloat#parser_index */
(nitmethod_t)nit__lexer___TFloat___init_tk, /* pointer to parser_nodes:TFloat:lexer#TFloat#init_tk */
}
};
/* allocate TFloat */
val* NEW_nit__TFloat(const struct type* type) {
val* self /* : TFloat */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TFloat;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TFloat exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TFloat exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TFloat exact> */
return self;
}
/* runtime class nit__TChar */
const struct class class_nit__TChar = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TChar:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TChar:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TChar:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TChar:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TChar:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TChar:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TChar:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TChar:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TChar:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TChar:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TChar:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TChar:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TChar:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TChar:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TChar:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TChar:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TChar:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TChar:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TChar:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TChar:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TChar:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TChar:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TChar:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TChar:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TChar:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TChar:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TChar:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TChar:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TChar:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TChar:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TChar:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TChar:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TChar:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TChar:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TChar:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TChar:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TChar:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TChar:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TChar:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TChar:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TChar:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TChar:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TChar:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TChar:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TChar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TChar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TChar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TChar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TChar:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TChar:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TChar:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TChar:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TChar:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TChar___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TChar:lexer#TChar#parser_index */
(nitmethod_t)nit__lexer___TChar___init_tk, /* pointer to parser_nodes:TChar:lexer#TChar#init_tk */
}
};
/* allocate TChar */
val* NEW_nit__TChar(const struct type* type) {
val* self /* : TChar */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TChar;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TChar exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TChar exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TChar exact> */
return self;
}
/* runtime class nit__TString */
const struct class class_nit__TString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TString:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TString:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TString:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TString:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TString:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TString:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TString:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TString:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TString:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TString:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TString:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TString:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TString:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TString:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TString:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TString:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TString:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TString:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TString:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TString:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TString___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TString:lexer#TString#parser_index */
(nitmethod_t)nit__lexer___TString___init_tk, /* pointer to parser_nodes:TString:lexer#TString#init_tk */
}
};
/* allocate TString */
val* NEW_nit__TString(const struct type* type) {
val* self /* : TString */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TString;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TString exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TString exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TString exact> */
return self;
}
/* runtime class nit__TStartString */
const struct class class_nit__TStartString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TStartString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TStartString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TStartString:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TStartString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TStartString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TStartString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TStartString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TStartString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TStartString:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TStartString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TStartString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TStartString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TStartString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TStartString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TStartString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TStartString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TStartString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TStartString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TStartString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TStartString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TStartString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TStartString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TStartString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TStartString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TStartString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TStartString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TStartString:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TStartString:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TStartString:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TStartString:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TStartString:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TStartString:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TStartString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TStartString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TStartString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TStartString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TStartString:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TStartString:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TStartString:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TStartString:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TStartString:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TStartString___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TStartString:lexer#TStartString#parser_index */
(nitmethod_t)nit__lexer___TStartString___init_tk, /* pointer to parser_nodes:TStartString:lexer#TStartString#init_tk */
}
};
/* allocate TStartString */
val* NEW_nit__TStartString(const struct type* type) {
val* self /* : TStartString */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TStartString;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TStartString exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TStartString exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TStartString exact> */
return self;
}
/* runtime class nit__TMidString */
const struct class class_nit__TMidString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TMidString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TMidString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TMidString:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TMidString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TMidString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TMidString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TMidString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TMidString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TMidString:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TMidString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TMidString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TMidString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TMidString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TMidString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TMidString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TMidString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TMidString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TMidString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TMidString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TMidString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TMidString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TMidString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TMidString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TMidString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TMidString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TMidString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TMidString:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TMidString:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TMidString:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TMidString:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TMidString:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TMidString:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TMidString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TMidString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TMidString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TMidString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TMidString:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TMidString:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TMidString:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TMidString:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TMidString:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TMidString___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TMidString:lexer#TMidString#parser_index */
(nitmethod_t)nit__lexer___TMidString___init_tk, /* pointer to parser_nodes:TMidString:lexer#TMidString#init_tk */
}
};
/* allocate TMidString */
val* NEW_nit__TMidString(const struct type* type) {
val* self /* : TMidString */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TMidString;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TMidString exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TMidString exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TMidString exact> */
return self;
}
/* runtime class nit__TEndString */
const struct class class_nit__TEndString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TEndString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TEndString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TEndString:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TEndString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TEndString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TEndString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TEndString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TEndString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TEndString:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TokenLiteral___standard__string__Object__to_s, /* pointer to parser_nodes:TEndString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TEndString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TEndString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TEndString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TEndString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TEndString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TEndString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TEndString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TEndString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TEndString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TEndString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TEndString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TEndString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TEndString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TEndString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TEndString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TEndString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TEndString:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TEndString:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TEndString:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TEndString:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TEndString:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TEndString:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TEndString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TEndString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TEndString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TEndString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TEndString:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TEndString:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TEndString:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TEndString:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TEndString:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TEndString___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TEndString:lexer#TEndString#parser_index */
(nitmethod_t)nit__lexer___TEndString___init_tk, /* pointer to parser_nodes:TEndString:lexer#TEndString#init_tk */
}
};
/* allocate TEndString */
val* NEW_nit__TEndString(const struct type* type) {
val* self /* : TEndString */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TEndString;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TEndString exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TEndString exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TEndString exact> */
return self;
}
/* runtime class nit__TBadString */
const struct class class_nit__TBadString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TBadString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TBadString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TBadString:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TBadString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TBadString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TBadString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TBadString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TBadString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TBadString:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TBadString___standard__string__Object__to_s, /* pointer to parser_nodes:TBadString:parser_nodes#TBadString#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TBadString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TBadString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TBadString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TBadString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TBadString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TBadString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TBadString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TBadString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TBadString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TBadString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TBadString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TBadString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TBadString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TBadString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TBadString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TBadString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TBadString:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TBadString:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TBadString:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TBadString:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TBadString:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TBadString:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TBadString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TBadString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TBadString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TBadString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TBadString:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TBadString:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TBadString:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TBadString:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TBadString:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TBadString___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TBadString:lexer#TBadString#parser_index */
(nitmethod_t)nit__lexer___TBadString___init_tk, /* pointer to parser_nodes:TBadString:lexer#TBadString#init_tk */
}
};
/* allocate TBadString */
val* NEW_nit__TBadString(const struct type* type) {
val* self /* : TBadString */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TBadString;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TBadString exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TBadString exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TBadString exact> */
return self;
}
/* runtime class nit__TBadChar */
const struct class class_nit__TBadChar = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TBadChar:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TBadChar:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TBadChar:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TBadChar:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TBadChar:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TBadChar:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TBadChar:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TBadChar:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TBadChar:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__TBadChar___standard__string__Object__to_s, /* pointer to parser_nodes:TBadChar:parser_nodes#TBadChar#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TBadChar:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TBadChar:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TBadChar:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TBadChar:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TBadChar:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TBadChar:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TBadChar:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TBadChar:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TBadChar:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TBadChar:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TBadChar:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TBadChar:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TBadChar:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TBadChar:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TBadChar:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TBadChar:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TBadChar:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TBadChar:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TBadChar:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TBadChar:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TBadChar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TBadChar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TBadChar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TBadChar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TBadChar:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TBadChar:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TBadChar:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TBadChar___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TBadChar:lexer#TBadChar#parser_index */
(nitmethod_t)nit__lexer___TBadChar___init_tk, /* pointer to parser_nodes:TBadChar:lexer#TBadChar#init_tk */
}
};
/* allocate TBadChar */
val* NEW_nit__TBadChar(const struct type* type) {
val* self /* : TBadChar */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TBadChar;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TBadChar exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TBadChar exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TBadChar exact> */
return self;
}
/* runtime class nit__TExternCodeSegment */
const struct class class_nit__TExternCodeSegment = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:TExternCodeSegment:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Token___standard__string__Object__to_s, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:TExternCodeSegment:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:TExternCodeSegment:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:TExternCodeSegment:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:TExternCodeSegment:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:TExternCodeSegment:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:TExternCodeSegment:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:TExternCodeSegment:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:TExternCodeSegment:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:TExternCodeSegment:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:TExternCodeSegment:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:TExternCodeSegment:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:TExternCodeSegment:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:TExternCodeSegment:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:TExternCodeSegment:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:TExternCodeSegment:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:TExternCodeSegment:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:TExternCodeSegment:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:TExternCodeSegment:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:TExternCodeSegment:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:TExternCodeSegment:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:TExternCodeSegment:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:TExternCodeSegment:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___TExternCodeSegment___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:TExternCodeSegment:lexer#TExternCodeSegment#parser_index */
(nitmethod_t)nit__lexer___TExternCodeSegment___init_tk, /* pointer to parser_nodes:TExternCodeSegment:lexer#TExternCodeSegment#init_tk */
}
};
/* allocate TExternCodeSegment */
val* NEW_nit__TExternCodeSegment(const struct type* type) {
val* self /* : TExternCodeSegment */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TExternCodeSegment;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:TExternCodeSegment exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:TExternCodeSegment exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:TExternCodeSegment exact> */
return self;
}
/* runtime class nit__EOF */
const struct class class_nit__EOF = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:EOF:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:EOF:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:EOF:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:EOF:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:EOF:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:EOF:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:EOF:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:EOF:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:EOF:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__EOF___standard__string__Object__to_s, /* pointer to parser_nodes:EOF:parser_nodes#EOF#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:EOF:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:EOF:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:EOF:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:EOF:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:EOF:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:EOF:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:EOF:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:EOF:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:EOF:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:EOF:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:EOF:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:EOF:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:EOF:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:EOF:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:EOF:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:EOF:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:EOF:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:EOF:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:EOF:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:EOF:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:EOF:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:EOF:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:EOF:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:EOF:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:EOF:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:EOF:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:EOF:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:EOF:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:EOF:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:EOF:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:EOF:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:EOF:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:EOF:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:EOF:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:EOF:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:EOF:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:EOF:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:EOF:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:EOF:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:EOF:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:EOF:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:EOF:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:EOF:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___EOF___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:EOF:lexer#EOF#parser_index */
(nitmethod_t)nit__lexer_work___EOF___init_tk, /* pointer to parser_nodes:EOF:lexer_work#EOF#init_tk */
}
};
/* allocate EOF */
val* NEW_nit__EOF(const struct type* type) {
val* self /* : EOF */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__EOF;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:EOF exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:EOF exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:EOF exact> */
return self;
}
/* runtime class nit__AError */
/* allocate AError */
val* NEW_nit__AError(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AError is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ALexerError */
const struct class class_nit__ALexerError = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALexerError:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALexerError:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALexerError:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALexerError:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALexerError:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALexerError:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALexerError:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALexerError:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALexerError:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__EOF___standard__string__Object__to_s, /* pointer to parser_nodes:ALexerError:parser_nodes#EOF#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALexerError:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALexerError:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALexerError:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALexerError:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALexerError:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALexerError:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALexerError:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALexerError:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALexerError:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALexerError:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALexerError:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALexerError:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALexerError:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALexerError:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALexerError:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALexerError:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALexerError:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALexerError:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALexerError:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALexerError:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALexerError:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALexerError:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALexerError:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALexerError:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALexerError:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALexerError:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:ALexerError:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___EOF___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:ALexerError:lexer#EOF#parser_index */
(nitmethod_t)nit__lexer_work___EOF___init_tk, /* pointer to parser_nodes:ALexerError:lexer_work#EOF#init_tk */
(nitmethod_t)nit__lexer_work___AError___message, /* pointer to parser_nodes:ALexerError:lexer_work#AError#message */
(nitmethod_t)nit__lexer_work___AError___message_61d, /* pointer to parser_nodes:ALexerError:lexer_work#AError#message= */
(nitmethod_t)nit__lexer_work___AError___init_error, /* pointer to parser_nodes:ALexerError:lexer_work#AError#init_error */
(nitmethod_t)nit__lexer_work___ALexerError___string_61d, /* pointer to parser_nodes:ALexerError:lexer_work#ALexerError#string= */
(nitmethod_t)nit__lexer_work___ALexerError___init_lexer_error, /* pointer to parser_nodes:ALexerError:lexer_work#ALexerError#init_lexer_error */
}
};
/* allocate ALexerError */
val* NEW_nit__ALexerError(const struct type* type) {
val* self /* : ALexerError */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALexerError;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALexerError exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:ALexerError exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:ALexerError exact> */
return self;
}
/* runtime class nit__AParserError */
const struct class class_nit__AParserError = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AParserError:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AParserError:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AParserError:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AParserError:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AParserError:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AParserError:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AParserError:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AParserError:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AParserError:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__EOF___standard__string__Object__to_s, /* pointer to parser_nodes:AParserError:parser_nodes#EOF#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AParserError:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AParserError:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AParserError:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AParserError:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AParserError:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AParserError:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AParserError:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AParserError:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AParserError:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AParserError:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AParserError:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AParserError:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AParserError:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AParserError:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AParserError:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AParserError:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AParserError:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__Token___ANode__replace_child, /* pointer to parser_nodes:AParserError:parser_nodes#Token#replace_child */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Token___ANode__visit_all, /* pointer to parser_nodes:AParserError:parser_nodes#Token#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AParserError:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AParserError:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AParserError:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AParserError:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AParserError:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AParserError:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AParserError:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AParserError:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AParserError:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit__lexer_work___Token___text, /* pointer to parser_nodes:AParserError:lexer_work#Token#text */
(nitmethod_t)nit___nit__Token___prev_token_61d, /* pointer to parser_nodes:AParserError:parser_nodes#Token#prev_token= */
(nitmethod_t)nit___nit__Token___next_token_61d, /* pointer to parser_nodes:AParserError:parser_nodes#Token#next_token= */
(nitmethod_t)nit__lexer___EOF___nit__lexer_work__Token__parser_index, /* pointer to parser_nodes:AParserError:lexer#EOF#parser_index */
(nitmethod_t)nit__lexer_work___EOF___init_tk, /* pointer to parser_nodes:AParserError:lexer_work#EOF#init_tk */
(nitmethod_t)nit__lexer_work___AError___message, /* pointer to parser_nodes:AParserError:lexer_work#AError#message */
(nitmethod_t)nit__lexer_work___AError___message_61d, /* pointer to parser_nodes:AParserError:lexer_work#AError#message= */
(nitmethod_t)nit__lexer_work___AError___init_error, /* pointer to parser_nodes:AParserError:lexer_work#AError#init_error */
(nitmethod_t)nit__lexer_work___AParserError___token_61d, /* pointer to parser_nodes:AParserError:lexer_work#AParserError#token= */
(nitmethod_t)nit__lexer_work___AParserError___init_parser_error, /* pointer to parser_nodes:AParserError:lexer_work#AParserError#init_parser_error */
}
};
/* allocate AParserError */
val* NEW_nit__AParserError(const struct type* type) {
val* self /* : AParserError */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AParserError;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AParserError exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___prev_token].val = var1; /* _prev_token on <self:AParserError exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__Token___next_token].val = var2; /* _next_token on <self:AParserError exact> */
return self;
}
/* runtime class nit__AModule */
const struct class class_nit__AModule = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AModule:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AModule:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AModule:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AModule:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AModule:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AModule:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AModule:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AModule:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AModule:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AModule:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AModule:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AModule:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AModule:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AModule:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AModule:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AModule:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AModule:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AModule:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AModule:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AModule:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AModule:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AModule:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AModule:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AModule:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AModule:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AModule:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AModule:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AModule:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AModule:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AModule:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AModule:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AModule:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AModule:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AModule:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AModule:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AModule:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AModule:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AModule:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AModule___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AModule:parser_prod#AModule#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AModule:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AModule___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AModule:parser_prod#AModule#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AModule:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AModule:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AModule:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AModule:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AModule:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AModule:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AModule:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AModule:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AModule:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AModule:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AModule:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AModule:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AModule:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AModule:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AModule:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AModule___n_moduledecl, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_moduledecl */
(nitmethod_t)nit__parser_prod___AModule___n_moduledecl_61d, /* pointer to parser_nodes:AModule:parser_prod#AModule#n_moduledecl= */
(nitmethod_t)nit___nit__AModule___n_imports, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_imports */
(nitmethod_t)nit___nit__AModule___n_extern_code_blocks, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_extern_code_blocks */
(nitmethod_t)nit___nit__AModule___n_classdefs, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_classdefs */
(nitmethod_t)nit__parser_prod___AModule___init_amodule, /* pointer to parser_nodes:AModule:parser_prod#AModule#init_amodule */
(nitmethod_t)nit__literal___AModule___do_literal, /* pointer to parser_nodes:AModule:literal#AModule#do_literal */
(nitmethod_t)nit__loader___AModule___mmodule, /* pointer to parser_nodes:AModule:loader#AModule#mmodule */
(nitmethod_t)nit__loader___AModule___mmodule_61d, /* pointer to parser_nodes:AModule:loader#AModule#mmodule= */
(nitmethod_t)nit__loader___AModule___is_importation_done, /* pointer to parser_nodes:AModule:loader#AModule#is_importation_done */
(nitmethod_t)nit__loader___AModule___is_importation_done_61d, /* pointer to parser_nodes:AModule:loader#AModule#is_importation_done= */
(nitmethod_t)nit__modelize_class___AModule___build_classes_is_done, /* pointer to parser_nodes:AModule:modelize_class#AModule#build_classes_is_done */
(nitmethod_t)nit__modelize_class___AModule___build_classes_is_done_61d, /* pointer to parser_nodes:AModule:modelize_class#AModule#build_classes_is_done= */
(nitmethod_t)nit__modelize_class___AModule___mclass2nclassdef, /* pointer to parser_nodes:AModule:modelize_class#AModule#mclass2nclassdef */
}
};
/* allocate AModule */
val* NEW_nit__AModule(const struct type* type) {
val* self /* : AModule */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[AImport] */;
val* var4 /* : ANodes[AExternCodeBlock] */;
val* var5 /* : ANodes[AClassdef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : HashMap[MClass, AClassdef] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AModule;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AModule exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AModule exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val = var2; /* _n_moduledecl on <self:AModule exact> */
var3 = NEW_nit__ANodes(&type_nit__ANodes__nit__AImport);
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[AImport]>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:ANodes[AImport]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val = var3; /* _n_imports on <self:AModule exact> */
var4 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExternCodeBlock);
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var4, self) /* parent= on <var4:ANodes[AExternCodeBlock]>*/;
}
{
((void (*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4) /* init on <var4:ANodes[AExternCodeBlock]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val = var4; /* _n_extern_code_blocks on <self:AModule exact> */
var5 = NEW_nit__ANodes(&type_nit__ANodes__nit__AClassdef);
{
((void (*)(val* self, val* p0))(var5->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var5, self) /* parent= on <var5:ANodes[AClassdef]>*/;
}
{
((void (*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5) /* init on <var5:ANodes[AClassdef]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val = var5; /* _n_classdefs on <self:AModule exact> */
var6 = 0;
self->attrs[COLOR_nit__loader__AModule___is_importation_done].s = var6; /* _is_importation_done on <self:AModule exact> */
var7 = 0;
self->attrs[COLOR_nit__modelize_class__AModule___build_classes_is_done].s = var7; /* _build_classes_is_done on <self:AModule exact> */
var8 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__nit__AClassdef);
{
standard___standard__HashMap___standard__kernel__Object__init(var8); /* Direct call hash_collection#HashMap#init on <var8:HashMap[MClass, AClassdef]>*/
}
self->attrs[COLOR_nit__modelize_class__AModule___mclass2nclassdef].val = var8; /* _mclass2nclassdef on <self:AModule exact> */
return self;
}
/* runtime class nit__ADefinition */
/* allocate ADefinition */
val* NEW_nit__ADefinition(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ADefinition is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AModuledecl */
const struct class class_nit__AModuledecl = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AModuledecl:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AModuledecl:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AModuledecl:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AModuledecl:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AModuledecl:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AModuledecl:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AModuledecl:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AModuledecl:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AModuledecl:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AModuledecl:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AModuledecl:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AModuledecl:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AModuledecl:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AModuledecl:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AModuledecl:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AModuledecl:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AModuledecl:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AModuledecl:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AModuledecl:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AModuledecl:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AModuledecl:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AModuledecl:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AModuledecl:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AModuledecl:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AModuledecl:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AModuledecl:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AModuledecl:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AModuledecl___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AModuledecl___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AModuledecl:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AModuledecl:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AModuledecl:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AModuledecl:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AModuledecl:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AModuledecl:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AModuledecl:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AModuledecl:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AModuledecl:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AModuledecl___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AModuledecl:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AModuledecl:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#replace_with */
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
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:AModuledecl:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:AModuledecl:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:AModuledecl:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_visibility= */
(nitmethod_t)nit__parser_prod___AModuledecl___n_kwmodule_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_kwmodule= */
(nitmethod_t)nit___nit__AModuledecl___n_name, /* pointer to parser_nodes:AModuledecl:parser_nodes#AModuledecl#n_name */
(nitmethod_t)nit__parser_prod___AModuledecl___n_name_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_name= */
(nitmethod_t)nit__parser_prod___AModuledecl___init_amoduledecl, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#init_amoduledecl */
}
};
/* allocate AModuledecl */
val* NEW_nit__AModuledecl(const struct type* type) {
val* self /* : AModuledecl */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AModuledecl;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AModuledecl exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AModuledecl exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var2; /* _n_doc on <self:AModuledecl exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var3; /* _n_kwredef on <self:AModuledecl exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var4; /* _n_visibility on <self:AModuledecl exact> */
return self;
}
/* runtime class nit__AImport */
/* allocate AImport */
val* NEW_nit__AImport(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AImport is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AStdImport */
const struct class class_nit__AStdImport = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStdImport:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStdImport:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStdImport:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStdImport:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStdImport:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStdImport:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStdImport:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStdImport:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStdImport:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStdImport:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStdImport:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStdImport:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStdImport:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStdImport:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStdImport:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStdImport:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStdImport:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStdImport:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStdImport:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStdImport:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStdImport:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStdImport:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStdImport:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStdImport:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStdImport:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStdImport:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStdImport:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStdImport___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStdImport___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStdImport:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStdImport:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStdImport:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStdImport:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStdImport:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStdImport:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AStdImport:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStdImport:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStdImport:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AStdImport___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStdImport:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStdImport:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AImport___n_visibility, /* pointer to parser_nodes:AStdImport:parser_nodes#AImport#n_visibility */
(nitmethod_t)nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_visibility_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_visibility= */
(nitmethod_t)nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_kwimport_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_kwimport= */
(nitmethod_t)nit___nit__AStdImport___n_name, /* pointer to parser_nodes:AStdImport:parser_nodes#AStdImport#n_name */
(nitmethod_t)nit__parser_prod___AStdImport___n_name_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_name= */
(nitmethod_t)nit__parser_prod___AStdImport___init_astdimport, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#init_astdimport */
(nitmethod_t)nit__loader___AStdImport___mmodule, /* pointer to parser_nodes:AStdImport:loader#AStdImport#mmodule */
(nitmethod_t)nit__loader___AStdImport___mmodule_61d, /* pointer to parser_nodes:AStdImport:loader#AStdImport#mmodule= */
}
};
/* allocate AStdImport */
val* NEW_nit__AStdImport(const struct type* type) {
val* self /* : AStdImport */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStdImport;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStdImport exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStdImport exact> */
var2 = NULL;
self->attrs[COLOR_nit__loader__AStdImport___mmodule].val = var2; /* _mmodule on <self:AStdImport exact> */
return self;
}
/* runtime class nit__ANoImport */
const struct class class_nit__ANoImport = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ANoImport:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ANoImport:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ANoImport:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ANoImport:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ANoImport:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ANoImport:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ANoImport:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ANoImport:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ANoImport:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ANoImport:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ANoImport:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ANoImport:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ANoImport:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ANoImport:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ANoImport:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ANoImport:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ANoImport:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ANoImport:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ANoImport:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ANoImport:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ANoImport:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ANoImport:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ANoImport:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ANoImport:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ANoImport:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ANoImport:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ANoImport:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ANoImport___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ANoImport___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ANoImport:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ANoImport:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ANoImport:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ANoImport:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ANoImport:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ANoImport:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ANoImport:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ANoImport:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ANoImport:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ANoImport:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ANoImport:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AImport___n_visibility, /* pointer to parser_nodes:ANoImport:parser_nodes#AImport#n_visibility */
(nitmethod_t)nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_visibility_61d, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#n_visibility= */
(nitmethod_t)nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_kwimport_61d, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#n_kwimport= */
(nitmethod_t)nit__parser_prod___ANoImport___n_kwend_61d, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#n_kwend= */
(nitmethod_t)nit__parser_prod___ANoImport___init_anoimport, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#init_anoimport */
}
};
/* allocate ANoImport */
val* NEW_nit__ANoImport(const struct type* type) {
val* self /* : ANoImport */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ANoImport;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ANoImport exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANoImport exact> */
return self;
}
/* runtime class nit__AVisibility */
/* allocate AVisibility */
val* NEW_nit__AVisibility(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AVisibility is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__APublicVisibility */
const struct class class_nit__APublicVisibility = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APublicVisibility:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APublicVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APublicVisibility:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APublicVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APublicVisibility:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APublicVisibility:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APublicVisibility:kernel#Object#sys */
(nitmethod_t)nit___nit__APublicVisibility___standard__kernel__Object__init, /* pointer to parser_nodes:APublicVisibility:parser_nodes#APublicVisibility#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APublicVisibility:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APublicVisibility:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APublicVisibility:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APublicVisibility:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APublicVisibility:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APublicVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APublicVisibility:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APublicVisibility:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APublicVisibility:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APublicVisibility:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APublicVisibility:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APublicVisibility:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APublicVisibility:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APublicVisibility:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APublicVisibility___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APublicVisibility___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APublicVisibility:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APublicVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APublicVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APublicVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:APublicVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APublicVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:APublicVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APublicVisibility:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APublicVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APublicVisibility:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APublicVisibility:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelbuilder_base___APublicVisibility___AVisibility__mvisibility, /* pointer to parser_nodes:APublicVisibility:modelbuilder_base#APublicVisibility#mvisibility */
(nitmethod_t)nit__parser_prod___APublicVisibility___n_kwpublic_61d, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#n_kwpublic= */
(nitmethod_t)nit__parser_prod___APublicVisibility___init_apublicvisibility, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#init_apublicvisibility */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APublicVisibility:kernel#Object#init */
}
};
/* allocate APublicVisibility */
val* NEW_nit__APublicVisibility(const struct type* type) {
val* self /* : APublicVisibility */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APublicVisibility;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APublicVisibility exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APublicVisibility exact> */
return self;
}
/* runtime class nit__APrivateVisibility */
const struct class class_nit__APrivateVisibility = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APrivateVisibility:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APrivateVisibility:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APrivateVisibility:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APrivateVisibility:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APrivateVisibility:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APrivateVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APrivateVisibility:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APrivateVisibility:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APrivateVisibility:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APrivateVisibility:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APrivateVisibility:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APrivateVisibility:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APrivateVisibility:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APrivateVisibility:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APrivateVisibility___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APrivateVisibility___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APrivateVisibility:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APrivateVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APrivateVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APrivateVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:APrivateVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APrivateVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:APrivateVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APrivateVisibility:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APrivateVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APrivateVisibility:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APrivateVisibility:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelbuilder_base___APrivateVisibility___AVisibility__mvisibility, /* pointer to parser_nodes:APrivateVisibility:modelbuilder_base#APrivateVisibility#mvisibility */
(nitmethod_t)nit__parser_prod___APrivateVisibility___n_kwprivate_61d, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#n_kwprivate= */
(nitmethod_t)nit__parser_prod___APrivateVisibility___init_aprivatevisibility, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#init_aprivatevisibility */
}
};
/* allocate APrivateVisibility */
val* NEW_nit__APrivateVisibility(const struct type* type) {
val* self /* : APrivateVisibility */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APrivateVisibility;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APrivateVisibility exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APrivateVisibility exact> */
return self;
}
/* runtime class nit__AProtectedVisibility */
const struct class class_nit__AProtectedVisibility = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AProtectedVisibility:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AProtectedVisibility:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AProtectedVisibility:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AProtectedVisibility:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AProtectedVisibility:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AProtectedVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AProtectedVisibility:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AProtectedVisibility:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AProtectedVisibility:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AProtectedVisibility:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AProtectedVisibility:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AProtectedVisibility:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AProtectedVisibility:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AProtectedVisibility:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AProtectedVisibility___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AProtectedVisibility___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AProtectedVisibility:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AProtectedVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AProtectedVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AProtectedVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AProtectedVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AProtectedVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AProtectedVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AProtectedVisibility:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AProtectedVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AProtectedVisibility:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AProtectedVisibility:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelbuilder_base___AProtectedVisibility___AVisibility__mvisibility, /* pointer to parser_nodes:AProtectedVisibility:modelbuilder_base#AProtectedVisibility#mvisibility */
(nitmethod_t)nit__parser_prod___AProtectedVisibility___n_kwprotected_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#n_kwprotected= */
(nitmethod_t)nit__parser_prod___AProtectedVisibility___init_aprotectedvisibility, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#init_aprotectedvisibility */
}
};
/* allocate AProtectedVisibility */
val* NEW_nit__AProtectedVisibility(const struct type* type) {
val* self /* : AProtectedVisibility */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AProtectedVisibility;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AProtectedVisibility exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AProtectedVisibility exact> */
return self;
}
/* runtime class nit__AIntrudeVisibility */
const struct class class_nit__AIntrudeVisibility = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIntrudeVisibility:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIntrudeVisibility:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIntrudeVisibility:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIntrudeVisibility:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIntrudeVisibility___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIntrudeVisibility___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIntrudeVisibility:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AIntrudeVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AIntrudeVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIntrudeVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIntrudeVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIntrudeVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AIntrudeVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIntrudeVisibility:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AIntrudeVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIntrudeVisibility:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIntrudeVisibility:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelbuilder_base___AIntrudeVisibility___AVisibility__mvisibility, /* pointer to parser_nodes:AIntrudeVisibility:modelbuilder_base#AIntrudeVisibility#mvisibility */
(nitmethod_t)nit__parser_prod___AIntrudeVisibility___n_kwintrude_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#n_kwintrude= */
(nitmethod_t)nit__parser_prod___AIntrudeVisibility___init_aintrudevisibility, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#init_aintrudevisibility */
}
};
/* allocate AIntrudeVisibility */
val* NEW_nit__AIntrudeVisibility(const struct type* type) {
val* self /* : AIntrudeVisibility */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIntrudeVisibility;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIntrudeVisibility exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIntrudeVisibility exact> */
return self;
}
/* runtime class nit__AClassdef */
/* allocate AClassdef */
val* NEW_nit__AClassdef(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AClassdef is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AStdClassdef */
const struct class class_nit__AStdClassdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStdClassdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStdClassdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStdClassdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStdClassdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStdClassdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStdClassdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStdClassdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStdClassdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStdClassdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStdClassdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStdClassdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStdClassdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStdClassdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStdClassdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStdClassdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStdClassdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStdClassdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStdClassdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStdClassdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStdClassdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStdClassdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStdClassdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__AStdClassdef___ANode__hot_location, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStdClassdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStdClassdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStdClassdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStdClassdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStdClassdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStdClassdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStdClassdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStdClassdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AStdClassdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStdClassdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStdClassdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AStdClassdef___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStdClassdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStdClassdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AClassdef___n_propdefs, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AClassdef#n_propdefs */
(nitmethod_t)nit__modelize_class___AClassdef___mclass, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclass */
(nitmethod_t)nit__modelize_class___AClassdef___mclass_61d, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclass= */
(nitmethod_t)nit__modelize_class___AClassdef___mclassdef, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclassdef */
(nitmethod_t)nit__modelize_class___AClassdef___mclassdef_61d, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclassdef= */
(nitmethod_t)nit__modelize_class___AClassdef___all_defs, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#all_defs */
(nitmethod_t)nit__modelize_class___AClassdef___all_defs_61d, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#all_defs= */
(nitmethod_t)nit__modelize_property___AClassdef___build_properties_is_done, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#build_properties_is_done */
(nitmethod_t)nit__modelize_property___AClassdef___build_properties_is_done_61d, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#build_properties_is_done= */
(nitmethod_t)nit__modelize_property___AClassdef___mfree_init, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#mfree_init */
(nitmethod_t)nit__modelize_property___AClassdef___mfree_init_61d, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#mfree_init= */
(nitmethod_t)nit__abstract_compiler___AClassdef___compile_to_c, /* pointer to parser_nodes:AStdClassdef:abstract_compiler#AClassdef#compile_to_c */
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_visibility= */
(nitmethod_t)nit___nit__AStdClassdef___n_classkind, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_classkind */
(nitmethod_t)nit__parser_prod___AStdClassdef___n_classkind_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_classkind= */
(nitmethod_t)nit___nit__AStdClassdef___n_id, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_id */
(nitmethod_t)nit__parser_prod___AStdClassdef___n_id_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_id= */
(nitmethod_t)nit___nit__AStdClassdef___n_formaldefs, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_formaldefs */
(nitmethod_t)nit__parser_prod___AStdClassdef___n_extern_code_block_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_extern_code_block= */
(nitmethod_t)nit___nit__AStdClassdef___n_superclasses, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_superclasses */
(nitmethod_t)nit__parser_prod___AStdClassdef___n_kwend_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_kwend= */
(nitmethod_t)nit__parser_prod___AStdClassdef___init_astdclassdef, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#init_astdclassdef */
}
};
/* allocate AStdClassdef */
val* NEW_nit__AStdClassdef(const struct type* type) {
val* self /* : AStdClassdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var9 /* : ANodes[AFormaldef] */;
val* var10 /* : null */;
val* var11 /* : ANodes[ASuperclass] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStdClassdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStdClassdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStdClassdef exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__APropdef);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[APropdef]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[APropdef]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val = var2; /* _n_propdefs on <self:AStdClassdef exact> */
var3 = 0;
self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = var3; /* _build_properties_is_done on <self:AStdClassdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var4; /* _mfree_init on <self:AStdClassdef exact> */
var5 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var5; /* _n_doc on <self:AStdClassdef exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var6; /* _n_kwredef on <self:AStdClassdef exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var7; /* _n_visibility on <self:AStdClassdef exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val = var8; /* _n_id on <self:AStdClassdef exact> */
var9 = NEW_nit__ANodes(&type_nit__ANodes__nit__AFormaldef);
{
((void (*)(val* self, val* p0))(var9->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var9, self) /* parent= on <var9:ANodes[AFormaldef]>*/;
}
{
((void (*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9) /* init on <var9:ANodes[AFormaldef]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val = var9; /* _n_formaldefs on <self:AStdClassdef exact> */
var10 = NULL;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val = var10; /* _n_extern_code_block on <self:AStdClassdef exact> */
var11 = NEW_nit__ANodes(&type_nit__ANodes__nit__ASuperclass);
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var11, self) /* parent= on <var11:ANodes[ASuperclass]>*/;
}
{
((void (*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11) /* init on <var11:ANodes[ASuperclass]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val = var11; /* _n_superclasses on <self:AStdClassdef exact> */
return self;
}
/* runtime class nit__ATopClassdef */
const struct class class_nit__ATopClassdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ATopClassdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ATopClassdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ATopClassdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ATopClassdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ATopClassdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ATopClassdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ATopClassdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ATopClassdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ATopClassdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ATopClassdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ATopClassdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ATopClassdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ATopClassdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ATopClassdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ATopClassdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ATopClassdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ATopClassdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ATopClassdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ATopClassdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ATopClassdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ATopClassdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ATopClassdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ATopClassdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ATopClassdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ATopClassdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ATopClassdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ATopClassdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ATopClassdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ATopClassdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ATopClassdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ATopClassdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ATopClassdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ATopClassdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ATopClassdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ATopClassdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AClassdef___n_propdefs, /* pointer to parser_nodes:ATopClassdef:parser_nodes#AClassdef#n_propdefs */
(nitmethod_t)nit__modelize_class___AClassdef___mclass, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclass */
(nitmethod_t)nit__modelize_class___AClassdef___mclass_61d, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclass= */
(nitmethod_t)nit__modelize_class___AClassdef___mclassdef, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclassdef */
(nitmethod_t)nit__modelize_class___AClassdef___mclassdef_61d, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclassdef= */
(nitmethod_t)nit__modelize_class___AClassdef___all_defs, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#all_defs */
(nitmethod_t)nit__modelize_class___AClassdef___all_defs_61d, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#all_defs= */
(nitmethod_t)nit__modelize_property___AClassdef___build_properties_is_done, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#build_properties_is_done */
(nitmethod_t)nit__modelize_property___AClassdef___build_properties_is_done_61d, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#build_properties_is_done= */
(nitmethod_t)nit__modelize_property___AClassdef___mfree_init, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#mfree_init */
(nitmethod_t)nit__modelize_property___AClassdef___mfree_init_61d, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#mfree_init= */
(nitmethod_t)nit__abstract_compiler___AClassdef___compile_to_c, /* pointer to parser_nodes:ATopClassdef:abstract_compiler#AClassdef#compile_to_c */
(nitmethod_t)nit__parser_prod___ATopClassdef___init_atopclassdef, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#init_atopclassdef */
}
};
/* allocate ATopClassdef */
val* NEW_nit__ATopClassdef(const struct type* type) {
val* self /* : ATopClassdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ATopClassdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ATopClassdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ATopClassdef exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__APropdef);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[APropdef]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[APropdef]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val = var2; /* _n_propdefs on <self:ATopClassdef exact> */
var3 = 0;
self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = var3; /* _build_properties_is_done on <self:ATopClassdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var4; /* _mfree_init on <self:ATopClassdef exact> */
return self;
}
/* runtime class nit__AMainClassdef */
const struct class class_nit__AMainClassdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMainClassdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMainClassdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMainClassdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMainClassdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMainClassdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMainClassdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMainClassdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMainClassdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMainClassdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMainClassdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMainClassdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMainClassdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMainClassdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMainClassdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMainClassdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMainClassdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMainClassdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMainClassdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMainClassdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMainClassdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMainClassdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMainClassdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMainClassdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMainClassdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMainClassdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMainClassdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMainClassdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMainClassdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMainClassdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMainClassdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AMainClassdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMainClassdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMainClassdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMainClassdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMainClassdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AClassdef___n_propdefs, /* pointer to parser_nodes:AMainClassdef:parser_nodes#AClassdef#n_propdefs */
(nitmethod_t)nit__modelize_class___AClassdef___mclass, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclass */
(nitmethod_t)nit__modelize_class___AClassdef___mclass_61d, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclass= */
(nitmethod_t)nit__modelize_class___AClassdef___mclassdef, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclassdef */
(nitmethod_t)nit__modelize_class___AClassdef___mclassdef_61d, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclassdef= */
(nitmethod_t)nit__modelize_class___AClassdef___all_defs, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#all_defs */
(nitmethod_t)nit__modelize_class___AClassdef___all_defs_61d, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#all_defs= */
(nitmethod_t)nit__modelize_property___AClassdef___build_properties_is_done, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#build_properties_is_done */
(nitmethod_t)nit__modelize_property___AClassdef___build_properties_is_done_61d, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#build_properties_is_done= */
(nitmethod_t)nit__modelize_property___AClassdef___mfree_init, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#mfree_init */
(nitmethod_t)nit__modelize_property___AClassdef___mfree_init_61d, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#mfree_init= */
(nitmethod_t)nit__abstract_compiler___AClassdef___compile_to_c, /* pointer to parser_nodes:AMainClassdef:abstract_compiler#AClassdef#compile_to_c */
(nitmethod_t)nit__parser_prod___AMainClassdef___init_amainclassdef, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#init_amainclassdef */
}
};
/* allocate AMainClassdef */
val* NEW_nit__AMainClassdef(const struct type* type) {
val* self /* : AMainClassdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMainClassdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMainClassdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMainClassdef exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__APropdef);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[APropdef]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[APropdef]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val = var2; /* _n_propdefs on <self:AMainClassdef exact> */
var3 = 0;
self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = var3; /* _build_properties_is_done on <self:AMainClassdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var4; /* _mfree_init on <self:AMainClassdef exact> */
return self;
}
/* runtime class nit__AClasskind */
/* allocate AClasskind */
val* NEW_nit__AClasskind(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AClasskind is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AConcreteClasskind */
const struct class class_nit__AConcreteClasskind = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AConcreteClasskind:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AConcreteClasskind:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AConcreteClasskind:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AConcreteClasskind:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AConcreteClasskind:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AConcreteClasskind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AConcreteClasskind:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AConcreteClasskind:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AConcreteClasskind:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AConcreteClasskind:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AConcreteClasskind:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AConcreteClasskind:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AConcreteClasskind:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AConcreteClasskind:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AConcreteClasskind___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AConcreteClasskind___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AConcreteClasskind:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AConcreteClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AConcreteClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AConcreteClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AConcreteClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AConcreteClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AConcreteClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AConcreteClasskind:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AConcreteClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AConcreteClasskind:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AConcreteClasskind:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelize_class___AConcreteClasskind___AClasskind__mkind, /* pointer to parser_nodes:AConcreteClasskind:modelize_class#AConcreteClasskind#mkind */
(nitmethod_t)nit__parser_prod___AConcreteClasskind___n_kwclass_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#n_kwclass= */
(nitmethod_t)nit__parser_prod___AConcreteClasskind___init_aconcreteclasskind, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#init_aconcreteclasskind */
}
};
/* allocate AConcreteClasskind */
val* NEW_nit__AConcreteClasskind(const struct type* type) {
val* self /* : AConcreteClasskind */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AConcreteClasskind;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AConcreteClasskind exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AConcreteClasskind exact> */
return self;
}
/* runtime class nit__AAbstractClasskind */
const struct class class_nit__AAbstractClasskind = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAbstractClasskind:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAbstractClasskind:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAbstractClasskind:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAbstractClasskind:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAbstractClasskind:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAbstractClasskind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAbstractClasskind:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAbstractClasskind:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAbstractClasskind:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAbstractClasskind:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAbstractClasskind:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAbstractClasskind:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAbstractClasskind:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAbstractClasskind:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAbstractClasskind___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAbstractClasskind___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAbstractClasskind:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAbstractClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAbstractClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAbstractClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAbstractClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAbstractClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAbstractClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAbstractClasskind:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAbstractClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAbstractClasskind:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAbstractClasskind:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelize_class___AAbstractClasskind___AClasskind__mkind, /* pointer to parser_nodes:AAbstractClasskind:modelize_class#AAbstractClasskind#mkind */
(nitmethod_t)nit__parser_prod___AAbstractClasskind___n_kwabstract_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#n_kwabstract= */
(nitmethod_t)nit__parser_prod___AAbstractClasskind___n_kwclass_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#n_kwclass= */
(nitmethod_t)nit__parser_prod___AAbstractClasskind___init_aabstractclasskind, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#init_aabstractclasskind */
}
};
/* allocate AAbstractClasskind */
val* NEW_nit__AAbstractClasskind(const struct type* type) {
val* self /* : AAbstractClasskind */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAbstractClasskind;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAbstractClasskind exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAbstractClasskind exact> */
return self;
}
/* runtime class nit__AInterfaceClasskind */
const struct class class_nit__AInterfaceClasskind = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AInterfaceClasskind:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AInterfaceClasskind:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AInterfaceClasskind:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AInterfaceClasskind:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AInterfaceClasskind___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AInterfaceClasskind___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AInterfaceClasskind:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AInterfaceClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AInterfaceClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AInterfaceClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AInterfaceClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AInterfaceClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AInterfaceClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AInterfaceClasskind:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AInterfaceClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AInterfaceClasskind:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AInterfaceClasskind:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelize_class___AInterfaceClasskind___AClasskind__mkind, /* pointer to parser_nodes:AInterfaceClasskind:modelize_class#AInterfaceClasskind#mkind */
(nitmethod_t)nit__parser_prod___AInterfaceClasskind___n_kwinterface_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#n_kwinterface= */
(nitmethod_t)nit__parser_prod___AInterfaceClasskind___init_ainterfaceclasskind, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#init_ainterfaceclasskind */
}
};
/* allocate AInterfaceClasskind */
val* NEW_nit__AInterfaceClasskind(const struct type* type) {
val* self /* : AInterfaceClasskind */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AInterfaceClasskind;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AInterfaceClasskind exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AInterfaceClasskind exact> */
return self;
}
/* runtime class nit__AEnumClasskind */
const struct class class_nit__AEnumClasskind = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AEnumClasskind:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AEnumClasskind:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AEnumClasskind:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AEnumClasskind:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AEnumClasskind:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AEnumClasskind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AEnumClasskind:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AEnumClasskind:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AEnumClasskind:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AEnumClasskind:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AEnumClasskind:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AEnumClasskind:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AEnumClasskind:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AEnumClasskind:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AEnumClasskind___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AEnumClasskind___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AEnumClasskind:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AEnumClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AEnumClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AEnumClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AEnumClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AEnumClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AEnumClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AEnumClasskind:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AEnumClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AEnumClasskind:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AEnumClasskind:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelize_class___AEnumClasskind___AClasskind__mkind, /* pointer to parser_nodes:AEnumClasskind:modelize_class#AEnumClasskind#mkind */
(nitmethod_t)nit__parser_prod___AEnumClasskind___n_kwenum_61d, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#n_kwenum= */
(nitmethod_t)nit__parser_prod___AEnumClasskind___init_aenumclasskind, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#init_aenumclasskind */
}
};
/* allocate AEnumClasskind */
val* NEW_nit__AEnumClasskind(const struct type* type) {
val* self /* : AEnumClasskind */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AEnumClasskind;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AEnumClasskind exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AEnumClasskind exact> */
return self;
}
/* runtime class nit__AExternClasskind */
const struct class class_nit__AExternClasskind = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AExternClasskind:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AExternClasskind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AExternClasskind:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AExternClasskind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AExternClasskind:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AExternClasskind:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AExternClasskind:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AExternClasskind:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AExternClasskind:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AExternClasskind:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AExternClasskind:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AExternClasskind:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AExternClasskind:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AExternClasskind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AExternClasskind:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AExternClasskind:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AExternClasskind:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AExternClasskind:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AExternClasskind:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AExternClasskind:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AExternClasskind:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AExternClasskind:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AExternClasskind___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AExternClasskind___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AExternClasskind:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AExternClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AExternClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AExternClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AExternClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AExternClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AExternClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AExternClasskind:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AExternClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AExternClasskind:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AExternClasskind:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__modelize_class___AExternClasskind___AClasskind__mkind, /* pointer to parser_nodes:AExternClasskind:modelize_class#AExternClasskind#mkind */
(nitmethod_t)nit__parser_prod___AExternClasskind___n_kwextern_61d, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#n_kwextern= */
(nitmethod_t)nit__parser_prod___AExternClasskind___n_kwclass_61d, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#n_kwclass= */
(nitmethod_t)nit__parser_prod___AExternClasskind___init_aexternclasskind, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#init_aexternclasskind */
}
};
/* allocate AExternClasskind */
val* NEW_nit__AExternClasskind(const struct type* type) {
val* self /* : AExternClasskind */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AExternClasskind;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AExternClasskind exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AExternClasskind exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val = var2; /* _n_kwclass on <self:AExternClasskind exact> */
return self;
}
/* runtime class nit__AFormaldef */
const struct class class_nit__AFormaldef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AFormaldef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AFormaldef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AFormaldef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AFormaldef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AFormaldef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AFormaldef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AFormaldef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AFormaldef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AFormaldef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AFormaldef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AFormaldef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AFormaldef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AFormaldef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AFormaldef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AFormaldef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AFormaldef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AFormaldef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AFormaldef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AFormaldef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AFormaldef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AFormaldef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AFormaldef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AFormaldef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AFormaldef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AFormaldef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AFormaldef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AFormaldef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AFormaldef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AFormaldef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AFormaldef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AFormaldef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AFormaldef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AFormaldef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AFormaldef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AFormaldef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AFormaldef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AFormaldef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AFormaldef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AFormaldef___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AFormaldef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AFormaldef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AFormaldef___n_id, /* pointer to parser_nodes:AFormaldef:parser_nodes#AFormaldef#n_id */
(nitmethod_t)nit__parser_prod___AFormaldef___n_id_61d, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#n_id= */
(nitmethod_t)nit___nit__AFormaldef___n_type, /* pointer to parser_nodes:AFormaldef:parser_nodes#AFormaldef#n_type */
(nitmethod_t)nit__parser_prod___AFormaldef___n_type_61d, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#n_type= */
(nitmethod_t)nit__parser_prod___AFormaldef___init_aformaldef, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#init_aformaldef */
(nitmethod_t)nit__modelize_class___AFormaldef___bound_61d, /* pointer to parser_nodes:AFormaldef:modelize_class#AFormaldef#bound= */
}
};
/* allocate AFormaldef */
val* NEW_nit__AFormaldef(const struct type* type) {
val* self /* : AFormaldef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AFormaldef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AFormaldef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AFormaldef exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val = var2; /* _n_type on <self:AFormaldef exact> */
var3 = NULL;
self->attrs[COLOR_nit__modelize_class__AFormaldef___mtype].val = var3; /* _mtype on <self:AFormaldef exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_class__AFormaldef___bound].val = var4; /* _bound on <self:AFormaldef exact> */
return self;
}
/* runtime class nit__ASuperclass */
const struct class class_nit__ASuperclass = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASuperclass:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASuperclass:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASuperclass:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASuperclass:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASuperclass:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASuperclass:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASuperclass:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASuperclass:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASuperclass:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASuperclass:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASuperclass:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASuperclass:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASuperclass:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASuperclass:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASuperclass:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASuperclass:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASuperclass:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASuperclass:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASuperclass:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASuperclass:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASuperclass:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASuperclass:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASuperclass:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASuperclass:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASuperclass:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASuperclass:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASuperclass:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASuperclass___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASuperclass___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASuperclass:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASuperclass:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASuperclass:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASuperclass:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ASuperclass:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASuperclass:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperclass:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASuperclass:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASuperclass:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ASuperclass___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASuperclass:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASuperclass:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ASuperclass___n_kwsuper_61d, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#n_kwsuper= */
(nitmethod_t)nit___nit__ASuperclass___n_type, /* pointer to parser_nodes:ASuperclass:parser_nodes#ASuperclass#n_type */
(nitmethod_t)nit__parser_prod___ASuperclass___n_type_61d, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#n_type= */
(nitmethod_t)nit__parser_prod___ASuperclass___init_asuperclass, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#init_asuperclass */
}
};
/* allocate ASuperclass */
val* NEW_nit__ASuperclass(const struct type* type) {
val* self /* : ASuperclass */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASuperclass;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASuperclass exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASuperclass exact> */
return self;
}
/* runtime class nit__APropdef */
/* allocate APropdef */
val* NEW_nit__APropdef(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "APropdef is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AAttrPropdef */
const struct class class_nit__AAttrPropdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAttrPropdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAttrPropdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAttrPropdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAttrPropdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAttrPropdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAttrPropdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAttrPropdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAttrPropdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAttrPropdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAttrPropdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAttrPropdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAttrPropdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAttrPropdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAttrPropdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAttrPropdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAttrPropdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAttrPropdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAttrPropdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAttrPropdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAttrPropdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAttrPropdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAttrPropdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAttrPropdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAttrPropdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAttrPropdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__AAttrPropdef___ANode__hot_location, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#AAttrPropdef#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAttrPropdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAttrPropdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAttrPropdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAttrPropdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___APropdef___ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrPropdef:flow#APropdef#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAttrPropdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAttrPropdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAttrPropdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrPropdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAttrPropdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAttrPropdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AAttrPropdef___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAttrPropdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAttrPropdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ANode#replace_with */
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
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_visibility= */
(nitmethod_t)nit__phase___APropdef___is_phased, /* pointer to parser_nodes:AAttrPropdef:phase#APropdef#is_phased */
(nitmethod_t)nit__phase___APropdef___is_phased_61d, /* pointer to parser_nodes:AAttrPropdef:phase#APropdef#is_phased= */
(nitmethod_t)nit__scope___APropdef___do_scope, /* pointer to parser_nodes:AAttrPropdef:scope#APropdef#do_scope */
(nitmethod_t)nit__flow___APropdef___do_flow, /* pointer to parser_nodes:AAttrPropdef:flow#APropdef#do_flow */
(nitmethod_t)nit__flow___APropdef___before_flow_context_61d, /* pointer to parser_nodes:AAttrPropdef:flow#APropdef#before_flow_context= */
(nitmethod_t)nit__flow___APropdef___after_flow_context_61d, /* pointer to parser_nodes:AAttrPropdef:flow#APropdef#after_flow_context= */
(nitmethod_t)nit__local_var_init___APropdef___do_local_var_init, /* pointer to parser_nodes:AAttrPropdef:local_var_init#APropdef#do_local_var_init */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef, /* pointer to parser_nodes:AAttrPropdef:modelize_property#APropdef#mpropdef */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#APropdef#mpropdef= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___APropdef__build_property, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#build_property */
(nitmethod_t)nit__modelize_property___AAttrPropdef___APropdef__build_signature, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#build_signature */
(nitmethod_t)nit__modelize_property___AAttrPropdef___APropdef__check_signature, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#check_signature */
(nitmethod_t)nit__modelize_property___APropdef___new_property_visibility, /* pointer to parser_nodes:AAttrPropdef:modelize_property#APropdef#new_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___set_doc, /* pointer to parser_nodes:AAttrPropdef:modelize_property#APropdef#set_doc */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_property_visibility, /* pointer to parser_nodes:AAttrPropdef:modelize_property#APropdef#check_redef_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_keyword, /* pointer to parser_nodes:AAttrPropdef:modelize_property#APropdef#check_redef_keyword */
(nitmethod_t)nit__typing___AAttrPropdef___APropdef__do_typing, /* pointer to parser_nodes:AAttrPropdef:typing#AAttrPropdef#do_typing */
(nitmethod_t)nit__typing___APropdef___selfvariable_61d, /* pointer to parser_nodes:AAttrPropdef:typing#APropdef#selfvariable= */
(nitmethod_t)nit__abstract_compiler___AAttrPropdef___APropdef__compile_to_c, /* pointer to parser_nodes:AAttrPropdef:abstract_compiler#AAttrPropdef#compile_to_c */
(nitmethod_t)nit__abstract_compiler___AAttrPropdef___APropdef__can_inline, /* pointer to parser_nodes:AAttrPropdef:abstract_compiler#AAttrPropdef#can_inline */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAttrPropdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___AAttrPropdef___n_kwvar_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_kwvar= */
(nitmethod_t)nit___nit__AAttrPropdef___n_id2, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#AAttrPropdef#n_id2 */
(nitmethod_t)nit__parser_prod___AAttrPropdef___n_id2_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_id2= */
(nitmethod_t)nit___nit__AAttrPropdef___n_type, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#AAttrPropdef#n_type */
(nitmethod_t)nit__parser_prod___AAttrPropdef___n_type_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_type= */
(nitmethod_t)nit___nit__AAttrPropdef___n_expr, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#AAttrPropdef#n_expr */
(nitmethod_t)nit__parser_prod___AAttrPropdef___n_expr_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_expr= */
(nitmethod_t)nit___nit__AAttrPropdef___n_block, /* pointer to parser_nodes:AAttrPropdef:parser_nodes#AAttrPropdef#n_block */
(nitmethod_t)nit__parser_prod___AAttrPropdef___n_block_61d, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#n_block= */
(nitmethod_t)nit__parser_prod___AAttrPropdef___init_aattrpropdef, /* pointer to parser_nodes:AAttrPropdef:parser_prod#AAttrPropdef#init_aattrpropdef */
(nitmethod_t)nit__modelize_property___AAttrPropdef___noinit, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#noinit */
(nitmethod_t)nit__modelize_property___AAttrPropdef___noinit_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#noinit= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___is_lazy, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#is_lazy */
(nitmethod_t)nit__modelize_property___AAttrPropdef___is_lazy_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#is_lazy= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___has_value, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#has_value */
(nitmethod_t)nit__modelize_property___AAttrPropdef___has_value_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#has_value= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___mlazypropdef, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#mlazypropdef */
(nitmethod_t)nit__modelize_property___AAttrPropdef___mlazypropdef_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#mlazypropdef= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___mreadpropdef, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#mreadpropdef */
(nitmethod_t)nit__modelize_property___AAttrPropdef___mreadpropdef_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#mreadpropdef= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___mwritepropdef, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#mwritepropdef */
(nitmethod_t)nit__modelize_property___AAttrPropdef___mwritepropdef_61d, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#mwritepropdef= */
(nitmethod_t)nit__modelize_property___AAttrPropdef___check_method_signature, /* pointer to parser_nodes:AAttrPropdef:modelize_property#AAttrPropdef#check_method_signature */
(nitmethod_t)nit__abstract_compiler___AAttrPropdef___init_expr, /* pointer to parser_nodes:AAttrPropdef:abstract_compiler#AAttrPropdef#init_expr */
(nitmethod_t)nit__abstract_compiler___AAttrPropdef___evaluate_expr, /* pointer to parser_nodes:AAttrPropdef:abstract_compiler#AAttrPropdef#evaluate_expr */
}
};
/* allocate AAttrPropdef */
val* NEW_nit__AAttrPropdef(const struct type* type) {
val* self /* : AAttrPropdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 29*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAttrPropdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrPropdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrPropdef exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var2; /* _n_doc on <self:AAttrPropdef exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var3; /* _n_kwredef on <self:AAttrPropdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var4; /* _n_visibility on <self:AAttrPropdef exact> */
var5 = 0;
self->attrs[COLOR_nit__phase__APropdef___is_phased].s = var5; /* _is_phased on <self:AAttrPropdef exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val = var6; /* _n_type on <self:AAttrPropdef exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val = var7; /* _n_expr on <self:AAttrPropdef exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val = var8; /* _n_block on <self:AAttrPropdef exact> */
var9 = 0;
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s = var9; /* _noinit on <self:AAttrPropdef exact> */
var10 = 0;
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s = var10; /* _is_lazy on <self:AAttrPropdef exact> */
var11 = 0;
self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s = var11; /* _has_value on <self:AAttrPropdef exact> */
return self;
}
/* runtime class nit__AMethPropdef */
const struct class class_nit__AMethPropdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMethPropdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMethPropdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMethPropdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMethPropdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMethPropdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMethPropdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMethPropdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMethPropdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMethPropdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMethPropdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMethPropdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMethPropdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMethPropdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMethPropdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMethPropdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMethPropdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMethPropdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMethPropdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMethPropdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMethPropdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMethPropdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMethPropdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMethPropdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMethPropdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMethPropdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMethPropdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMethPropdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMethPropdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMethPropdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMethPropdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMethPropdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMethPropdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__AMethPropdef___ANode__hot_location, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMethPropdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMethPropdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMethPropdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___APropdef___ANode__accept_flow_visitor, /* pointer to parser_nodes:AMethPropdef:flow#APropdef#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMethPropdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMethPropdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMethPropdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AMethPropdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMethPropdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMethPropdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMethPropdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMethPropdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMethPropdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMethPropdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ANode#replace_with */
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
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:AMethPropdef:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_visibility= */
(nitmethod_t)nit__phase___APropdef___is_phased, /* pointer to parser_nodes:AMethPropdef:phase#APropdef#is_phased */
(nitmethod_t)nit__phase___APropdef___is_phased_61d, /* pointer to parser_nodes:AMethPropdef:phase#APropdef#is_phased= */
(nitmethod_t)nit__scope___APropdef___do_scope, /* pointer to parser_nodes:AMethPropdef:scope#APropdef#do_scope */
(nitmethod_t)nit__flow___APropdef___do_flow, /* pointer to parser_nodes:AMethPropdef:flow#APropdef#do_flow */
(nitmethod_t)nit__flow___APropdef___before_flow_context_61d, /* pointer to parser_nodes:AMethPropdef:flow#APropdef#before_flow_context= */
(nitmethod_t)nit__flow___APropdef___after_flow_context_61d, /* pointer to parser_nodes:AMethPropdef:flow#APropdef#after_flow_context= */
(nitmethod_t)nit__local_var_init___APropdef___do_local_var_init, /* pointer to parser_nodes:AMethPropdef:local_var_init#APropdef#do_local_var_init */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef, /* pointer to parser_nodes:AMethPropdef:modelize_property#APropdef#mpropdef */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef_61d, /* pointer to parser_nodes:AMethPropdef:modelize_property#APropdef#mpropdef= */
(nitmethod_t)nit__modelize_property___AMethPropdef___APropdef__build_property, /* pointer to parser_nodes:AMethPropdef:modelize_property#AMethPropdef#build_property */
(nitmethod_t)nit__modelize_property___AMethPropdef___APropdef__build_signature, /* pointer to parser_nodes:AMethPropdef:modelize_property#AMethPropdef#build_signature */
(nitmethod_t)nit__modelize_property___AMethPropdef___APropdef__check_signature, /* pointer to parser_nodes:AMethPropdef:modelize_property#AMethPropdef#check_signature */
(nitmethod_t)nit__modelize_property___APropdef___new_property_visibility, /* pointer to parser_nodes:AMethPropdef:modelize_property#APropdef#new_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___set_doc, /* pointer to parser_nodes:AMethPropdef:modelize_property#APropdef#set_doc */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_property_visibility, /* pointer to parser_nodes:AMethPropdef:modelize_property#APropdef#check_redef_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_keyword, /* pointer to parser_nodes:AMethPropdef:modelize_property#APropdef#check_redef_keyword */
(nitmethod_t)nit__typing___AMethPropdef___APropdef__do_typing, /* pointer to parser_nodes:AMethPropdef:typing#AMethPropdef#do_typing */
(nitmethod_t)nit__typing___APropdef___selfvariable_61d, /* pointer to parser_nodes:AMethPropdef:typing#APropdef#selfvariable= */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___APropdef__compile_to_c, /* pointer to parser_nodes:AMethPropdef:abstract_compiler#AMethPropdef#compile_to_c */
(nitmethod_t)nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline, /* pointer to parser_nodes:AMethPropdef:separate_compiler#AMethPropdef#can_inline */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMethPropdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_kwmeth_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_kwmeth= */
(nitmethod_t)nit___nit__AMethPropdef___n_kwinit, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#n_kwinit */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_kwinit_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_kwinit= */
(nitmethod_t)nit___nit__AMethPropdef___n_kwnew, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#n_kwnew */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_kwnew_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_kwnew= */
(nitmethod_t)nit___nit__AMethPropdef___n_methid, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#n_methid */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_methid_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_methid= */
(nitmethod_t)nit___nit__AMethPropdef___n_signature, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#n_signature */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_signature_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_signature= */
(nitmethod_t)nit___nit__AMethPropdef___n_block, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#n_block */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_block_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_block= */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_extern_calls_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_extern_calls= */
(nitmethod_t)nit___nit__AMethPropdef___n_extern_code_block, /* pointer to parser_nodes:AMethPropdef:parser_nodes#AMethPropdef#n_extern_code_block */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_extern_code_block_61d, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#n_extern_code_block= */
(nitmethod_t)nit__parser_prod___AMethPropdef___init_amethpropdef, /* pointer to parser_nodes:AMethPropdef:parser_prod#AMethPropdef#init_amethpropdef */
(nitmethod_t)nit__modelize_property___AMethPropdef___look_like_a_root_init, /* pointer to parser_nodes:AMethPropdef:modelize_property#AMethPropdef#look_like_a_root_init */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_inits, /* pointer to parser_nodes:AMethPropdef:auto_super_init#AMethPropdef#auto_super_inits */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_inits_61d, /* pointer to parser_nodes:AMethPropdef:auto_super_init#AMethPropdef#auto_super_inits= */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_call, /* pointer to parser_nodes:AMethPropdef:auto_super_init#AMethPropdef#auto_super_call */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_call_61d, /* pointer to parser_nodes:AMethPropdef:auto_super_init#AMethPropdef#auto_super_call= */
(nitmethod_t)nit__auto_super_init___AMethPropdef___do_auto_super_init, /* pointer to parser_nodes:AMethPropdef:auto_super_init#AMethPropdef#do_auto_super_init */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___compile_intern_to_c, /* pointer to parser_nodes:AMethPropdef:abstract_compiler#AMethPropdef#compile_intern_to_c */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___compile_externmeth_to_c, /* pointer to parser_nodes:AMethPropdef:abstract_compiler#AMethPropdef#compile_externmeth_to_c */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___compile_externinit_to_c, /* pointer to parser_nodes:AMethPropdef:abstract_compiler#AMethPropdef#compile_externinit_to_c */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___APropdef__can_inline, /* pointer to parser_nodes:AMethPropdef:abstract_compiler#AMethPropdef#can_inline */
}
};
/* allocate AMethPropdef */
val* NEW_nit__AMethPropdef(const struct type* type) {
val* self /* : AMethPropdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var10 /* : null */;
val* var11 /* : null */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
short int var15 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 28*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMethPropdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMethPropdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMethPropdef exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var2; /* _n_doc on <self:AMethPropdef exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var3; /* _n_kwredef on <self:AMethPropdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var4; /* _n_visibility on <self:AMethPropdef exact> */
var5 = 0;
self->attrs[COLOR_nit__phase__APropdef___is_phased].s = var5; /* _is_phased on <self:AMethPropdef exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = var6; /* _n_kwmeth on <self:AMethPropdef exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = var7; /* _n_kwinit on <self:AMethPropdef exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = var8; /* _n_kwnew on <self:AMethPropdef exact> */
var9 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = var9; /* _n_methid on <self:AMethPropdef exact> */
var10 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = var10; /* _n_signature on <self:AMethPropdef exact> */
var11 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var11; /* _n_block on <self:AMethPropdef exact> */
var12 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = var12; /* _n_extern_calls on <self:AMethPropdef exact> */
var13 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = var13; /* _n_extern_code_block on <self:AMethPropdef exact> */
var14 = NULL;
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val = var14; /* _auto_super_inits on <self:AMethPropdef exact> */
var15 = 0;
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s = var15; /* _auto_super_call on <self:AMethPropdef exact> */
return self;
}
/* runtime class nit__AMainMethPropdef */
const struct class class_nit__AMainMethPropdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMainMethPropdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMainMethPropdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMainMethPropdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMainMethPropdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMainMethPropdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMainMethPropdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMainMethPropdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMainMethPropdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMainMethPropdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMainMethPropdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMainMethPropdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMainMethPropdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMainMethPropdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMainMethPropdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMainMethPropdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMainMethPropdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMainMethPropdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMainMethPropdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMainMethPropdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMainMethPropdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMainMethPropdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMainMethPropdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMainMethPropdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMainMethPropdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMainMethPropdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__AMethPropdef___ANode__hot_location, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMainMethPropdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMainMethPropdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMainMethPropdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMainMethPropdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___APropdef___ANode__accept_flow_visitor, /* pointer to parser_nodes:AMainMethPropdef:flow#APropdef#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMainMethPropdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMainMethPropdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMainMethPropdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AMainMethPropdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMainMethPropdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMainMethPropdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMainMethPropdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMainMethPropdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ANode#replace_with */
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
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMainMethPropdef#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_visibility= */
(nitmethod_t)nit__phase___APropdef___is_phased, /* pointer to parser_nodes:AMainMethPropdef:phase#APropdef#is_phased */
(nitmethod_t)nit__phase___APropdef___is_phased_61d, /* pointer to parser_nodes:AMainMethPropdef:phase#APropdef#is_phased= */
(nitmethod_t)nit__scope___APropdef___do_scope, /* pointer to parser_nodes:AMainMethPropdef:scope#APropdef#do_scope */
(nitmethod_t)nit__flow___APropdef___do_flow, /* pointer to parser_nodes:AMainMethPropdef:flow#APropdef#do_flow */
(nitmethod_t)nit__flow___APropdef___before_flow_context_61d, /* pointer to parser_nodes:AMainMethPropdef:flow#APropdef#before_flow_context= */
(nitmethod_t)nit__flow___APropdef___after_flow_context_61d, /* pointer to parser_nodes:AMainMethPropdef:flow#APropdef#after_flow_context= */
(nitmethod_t)nit__local_var_init___APropdef___do_local_var_init, /* pointer to parser_nodes:AMainMethPropdef:local_var_init#APropdef#do_local_var_init */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#APropdef#mpropdef */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef_61d, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#APropdef#mpropdef= */
(nitmethod_t)nit__modelize_property___AMethPropdef___APropdef__build_property, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#AMethPropdef#build_property */
(nitmethod_t)nit__modelize_property___AMethPropdef___APropdef__build_signature, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#AMethPropdef#build_signature */
(nitmethod_t)nit__modelize_property___AMethPropdef___APropdef__check_signature, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#AMethPropdef#check_signature */
(nitmethod_t)nit__modelize_property___APropdef___new_property_visibility, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#APropdef#new_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___set_doc, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#APropdef#set_doc */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_property_visibility, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#APropdef#check_redef_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_keyword, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#APropdef#check_redef_keyword */
(nitmethod_t)nit__typing___AMethPropdef___APropdef__do_typing, /* pointer to parser_nodes:AMainMethPropdef:typing#AMethPropdef#do_typing */
(nitmethod_t)nit__typing___APropdef___selfvariable_61d, /* pointer to parser_nodes:AMainMethPropdef:typing#APropdef#selfvariable= */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___APropdef__compile_to_c, /* pointer to parser_nodes:AMainMethPropdef:abstract_compiler#AMethPropdef#compile_to_c */
(nitmethod_t)nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline, /* pointer to parser_nodes:AMainMethPropdef:separate_compiler#AMethPropdef#can_inline */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMainMethPropdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_kwmeth_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_kwmeth= */
(nitmethod_t)nit___nit__AMethPropdef___n_kwinit, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#n_kwinit */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_kwinit_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_kwinit= */
(nitmethod_t)nit___nit__AMethPropdef___n_kwnew, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#n_kwnew */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_kwnew_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_kwnew= */
(nitmethod_t)nit___nit__AMethPropdef___n_methid, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#n_methid */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_methid_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_methid= */
(nitmethod_t)nit___nit__AMethPropdef___n_signature, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#n_signature */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_signature_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_signature= */
(nitmethod_t)nit___nit__AMethPropdef___n_block, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#n_block */
(nitmethod_t)nit__parser_prod___AMainMethPropdef___nit__parser_nodes__AMethPropdef__n_block_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMainMethPropdef#n_block= */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_extern_calls_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_extern_calls= */
(nitmethod_t)nit___nit__AMethPropdef___n_extern_code_block, /* pointer to parser_nodes:AMainMethPropdef:parser_nodes#AMethPropdef#n_extern_code_block */
(nitmethod_t)nit__parser_prod___AMethPropdef___n_extern_code_block_61d, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#n_extern_code_block= */
(nitmethod_t)nit__parser_prod___AMethPropdef___init_amethpropdef, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMethPropdef#init_amethpropdef */
(nitmethod_t)nit__modelize_property___AMethPropdef___look_like_a_root_init, /* pointer to parser_nodes:AMainMethPropdef:modelize_property#AMethPropdef#look_like_a_root_init */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_inits, /* pointer to parser_nodes:AMainMethPropdef:auto_super_init#AMethPropdef#auto_super_inits */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_inits_61d, /* pointer to parser_nodes:AMainMethPropdef:auto_super_init#AMethPropdef#auto_super_inits= */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_call, /* pointer to parser_nodes:AMainMethPropdef:auto_super_init#AMethPropdef#auto_super_call */
(nitmethod_t)nit__auto_super_init___AMethPropdef___auto_super_call_61d, /* pointer to parser_nodes:AMainMethPropdef:auto_super_init#AMethPropdef#auto_super_call= */
(nitmethod_t)nit__auto_super_init___AMethPropdef___do_auto_super_init, /* pointer to parser_nodes:AMainMethPropdef:auto_super_init#AMethPropdef#do_auto_super_init */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___compile_intern_to_c, /* pointer to parser_nodes:AMainMethPropdef:abstract_compiler#AMethPropdef#compile_intern_to_c */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___compile_externmeth_to_c, /* pointer to parser_nodes:AMainMethPropdef:abstract_compiler#AMethPropdef#compile_externmeth_to_c */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___compile_externinit_to_c, /* pointer to parser_nodes:AMainMethPropdef:abstract_compiler#AMethPropdef#compile_externinit_to_c */
(nitmethod_t)nit__abstract_compiler___AMethPropdef___APropdef__can_inline, /* pointer to parser_nodes:AMainMethPropdef:abstract_compiler#AMethPropdef#can_inline */
(nitmethod_t)nit__parser_prod___AMainMethPropdef___init_amainmethpropdef, /* pointer to parser_nodes:AMainMethPropdef:parser_prod#AMainMethPropdef#init_amainmethpropdef */
}
};
/* allocate AMainMethPropdef */
val* NEW_nit__AMainMethPropdef(const struct type* type) {
val* self /* : AMainMethPropdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var10 /* : null */;
val* var11 /* : null */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
short int var15 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 28*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMainMethPropdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMainMethPropdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMainMethPropdef exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var2; /* _n_doc on <self:AMainMethPropdef exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var3; /* _n_kwredef on <self:AMainMethPropdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var4; /* _n_visibility on <self:AMainMethPropdef exact> */
var5 = 0;
self->attrs[COLOR_nit__phase__APropdef___is_phased].s = var5; /* _is_phased on <self:AMainMethPropdef exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = var6; /* _n_kwmeth on <self:AMainMethPropdef exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = var7; /* _n_kwinit on <self:AMainMethPropdef exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = var8; /* _n_kwnew on <self:AMainMethPropdef exact> */
var9 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = var9; /* _n_methid on <self:AMainMethPropdef exact> */
var10 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = var10; /* _n_signature on <self:AMainMethPropdef exact> */
var11 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var11; /* _n_block on <self:AMainMethPropdef exact> */
var12 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = var12; /* _n_extern_calls on <self:AMainMethPropdef exact> */
var13 = NULL;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = var13; /* _n_extern_code_block on <self:AMainMethPropdef exact> */
var14 = NULL;
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val = var14; /* _auto_super_inits on <self:AMainMethPropdef exact> */
var15 = 0;
self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s = var15; /* _auto_super_call on <self:AMainMethPropdef exact> */
return self;
}
/* runtime class nit__AExternCalls */
const struct class class_nit__AExternCalls = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AExternCalls:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AExternCalls:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AExternCalls:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AExternCalls:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AExternCalls:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AExternCalls:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AExternCalls:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AExternCalls:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AExternCalls:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AExternCalls:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AExternCalls:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AExternCalls:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AExternCalls:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AExternCalls:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AExternCalls:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AExternCalls:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AExternCalls:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AExternCalls:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AExternCalls:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AExternCalls:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AExternCalls:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AExternCalls:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AExternCalls:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AExternCalls:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AExternCalls:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AExternCalls:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AExternCalls:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AExternCalls:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AExternCalls:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AExternCalls:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AExternCalls:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AExternCalls:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AExternCalls___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AExternCalls:parser_prod#AExternCalls#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AExternCalls:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AExternCalls___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AExternCalls:parser_prod#AExternCalls#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AExternCalls:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AExternCalls:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AExternCalls:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AExternCalls:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AExternCalls:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AExternCalls:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AExternCalls:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AExternCalls:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AExternCalls:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AExternCalls:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AExternCalls:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AExternCalls:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AExternCalls:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AExternCalls:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AExternCalls:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AExternCalls___n_kwimport_61d, /* pointer to parser_nodes:AExternCalls:parser_prod#AExternCalls#n_kwimport= */
(nitmethod_t)nit___nit__AExternCalls___n_extern_calls, /* pointer to parser_nodes:AExternCalls:parser_nodes#AExternCalls#n_extern_calls */
(nitmethod_t)nit__parser_prod___AExternCalls___init_aexterncalls, /* pointer to parser_nodes:AExternCalls:parser_prod#AExternCalls#init_aexterncalls */
}
};
/* allocate AExternCalls */
val* NEW_nit__AExternCalls(const struct type* type) {
val* self /* : AExternCalls */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[AExternCall] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AExternCalls;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AExternCalls exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AExternCalls exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExternCall);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExternCall]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[AExternCall]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AExternCalls___n_extern_calls].val = var2; /* _n_extern_calls on <self:AExternCalls exact> */
return self;
}
/* runtime class nit__AExternCall */
/* allocate AExternCall */
val* NEW_nit__AExternCall(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AExternCall is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__APropExternCall */
/* allocate APropExternCall */
val* NEW_nit__APropExternCall(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "APropExternCall is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ALocalPropExternCall */
const struct class class_nit__ALocalPropExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALocalPropExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALocalPropExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALocalPropExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALocalPropExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALocalPropExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALocalPropExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALocalPropExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALocalPropExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALocalPropExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALocalPropExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALocalPropExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALocalPropExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALocalPropExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALocalPropExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALocalPropExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALocalPropExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALocalPropExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALocalPropExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALocalPropExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALocalPropExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALocalPropExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALocalPropExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALocalPropExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALocalPropExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALocalPropExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALocalPropExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALocalPropExternCall:parser_prod#ALocalPropExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALocalPropExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALocalPropExternCall:parser_prod#ALocalPropExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALocalPropExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALocalPropExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALocalPropExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALocalPropExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALocalPropExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALocalPropExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALocalPropExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALocalPropExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALocalPropExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALocalPropExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALocalPropExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALocalPropExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ALocalPropExternCall___n_methid_61d, /* pointer to parser_nodes:ALocalPropExternCall:parser_prod#ALocalPropExternCall#n_methid= */
(nitmethod_t)nit__parser_prod___ALocalPropExternCall___init_alocalpropexterncall, /* pointer to parser_nodes:ALocalPropExternCall:parser_prod#ALocalPropExternCall#init_alocalpropexterncall */
}
};
/* allocate ALocalPropExternCall */
val* NEW_nit__ALocalPropExternCall(const struct type* type) {
val* self /* : ALocalPropExternCall */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALocalPropExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALocalPropExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALocalPropExternCall exact> */
return self;
}
/* runtime class nit__AFullPropExternCall */
const struct class class_nit__AFullPropExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AFullPropExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AFullPropExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AFullPropExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AFullPropExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AFullPropExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AFullPropExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AFullPropExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AFullPropExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AFullPropExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AFullPropExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AFullPropExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AFullPropExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AFullPropExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AFullPropExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AFullPropExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AFullPropExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AFullPropExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AFullPropExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AFullPropExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AFullPropExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AFullPropExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AFullPropExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AFullPropExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AFullPropExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AFullPropExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AFullPropExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AFullPropExternCall:parser_prod#AFullPropExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AFullPropExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AFullPropExternCall:parser_prod#AFullPropExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AFullPropExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AFullPropExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AFullPropExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AFullPropExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AFullPropExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AFullPropExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AFullPropExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AFullPropExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AFullPropExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AFullPropExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AFullPropExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AFullPropExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AFullPropExternCall___n_type_61d, /* pointer to parser_nodes:AFullPropExternCall:parser_prod#AFullPropExternCall#n_type= */
(nitmethod_t)nit__parser_prod___AFullPropExternCall___n_dot_61d, /* pointer to parser_nodes:AFullPropExternCall:parser_prod#AFullPropExternCall#n_dot= */
(nitmethod_t)nit__parser_prod___AFullPropExternCall___n_methid_61d, /* pointer to parser_nodes:AFullPropExternCall:parser_prod#AFullPropExternCall#n_methid= */
(nitmethod_t)nit__parser_prod___AFullPropExternCall___init_afullpropexterncall, /* pointer to parser_nodes:AFullPropExternCall:parser_prod#AFullPropExternCall#init_afullpropexterncall */
}
};
/* allocate AFullPropExternCall */
val* NEW_nit__AFullPropExternCall(const struct type* type) {
val* self /* : AFullPropExternCall */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AFullPropExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AFullPropExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AFullPropExternCall exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AFullPropExternCall___n_dot].val = var2; /* _n_dot on <self:AFullPropExternCall exact> */
return self;
}
/* runtime class nit__AInitPropExternCall */
const struct class class_nit__AInitPropExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AInitPropExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AInitPropExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AInitPropExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AInitPropExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AInitPropExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AInitPropExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AInitPropExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AInitPropExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AInitPropExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AInitPropExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AInitPropExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AInitPropExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AInitPropExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AInitPropExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AInitPropExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AInitPropExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AInitPropExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AInitPropExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AInitPropExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AInitPropExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AInitPropExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AInitPropExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AInitPropExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AInitPropExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AInitPropExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AInitPropExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AInitPropExternCall:parser_prod#AInitPropExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AInitPropExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AInitPropExternCall:parser_prod#AInitPropExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AInitPropExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AInitPropExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AInitPropExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AInitPropExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AInitPropExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AInitPropExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AInitPropExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AInitPropExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AInitPropExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AInitPropExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AInitPropExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AInitPropExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AInitPropExternCall___n_type_61d, /* pointer to parser_nodes:AInitPropExternCall:parser_prod#AInitPropExternCall#n_type= */
(nitmethod_t)nit__parser_prod___AInitPropExternCall___init_ainitpropexterncall, /* pointer to parser_nodes:AInitPropExternCall:parser_prod#AInitPropExternCall#init_ainitpropexterncall */
}
};
/* allocate AInitPropExternCall */
val* NEW_nit__AInitPropExternCall(const struct type* type) {
val* self /* : AInitPropExternCall */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AInitPropExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AInitPropExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AInitPropExternCall exact> */
return self;
}
/* runtime class nit__ASuperExternCall */
const struct class class_nit__ASuperExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASuperExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASuperExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASuperExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASuperExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASuperExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASuperExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASuperExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASuperExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASuperExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASuperExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASuperExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASuperExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASuperExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASuperExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASuperExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASuperExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASuperExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASuperExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASuperExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASuperExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASuperExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASuperExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASuperExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASuperExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASuperExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASuperExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASuperExternCall:parser_prod#ASuperExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASuperExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASuperExternCall:parser_prod#ASuperExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASuperExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASuperExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASuperExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASuperExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ASuperExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASuperExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASuperExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASuperExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASuperExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASuperExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASuperExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ASuperExternCall___n_kwsuper_61d, /* pointer to parser_nodes:ASuperExternCall:parser_prod#ASuperExternCall#n_kwsuper= */
(nitmethod_t)nit__parser_prod___ASuperExternCall___init_asuperexterncall, /* pointer to parser_nodes:ASuperExternCall:parser_prod#ASuperExternCall#init_asuperexterncall */
}
};
/* allocate ASuperExternCall */
val* NEW_nit__ASuperExternCall(const struct type* type) {
val* self /* : ASuperExternCall */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASuperExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASuperExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASuperExternCall exact> */
return self;
}
/* runtime class nit__ACastExternCall */
/* allocate ACastExternCall */
val* NEW_nit__ACastExternCall(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ACastExternCall is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ACastAsExternCall */
const struct class class_nit__ACastAsExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ACastAsExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ACastAsExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ACastAsExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ACastAsExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ACastAsExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ACastAsExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ACastAsExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ACastAsExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ACastAsExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ACastAsExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ACastAsExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ACastAsExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ACastAsExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ACastAsExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ACastAsExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ACastAsExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ACastAsExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ACastAsExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ACastAsExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ACastAsExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ACastAsExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ACastAsExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ACastAsExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ACastAsExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ACastAsExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ACastAsExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ACastAsExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ACastAsExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ACastAsExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ACastAsExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ACastAsExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ACastAsExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ACastAsExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ACastAsExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ACastAsExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ACastAsExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ACastAsExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___n_from_type_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#n_from_type= */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___n_dot_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#n_dot= */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___n_kwas_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#n_kwas= */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___n_to_type_61d, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#n_to_type= */
(nitmethod_t)nit__parser_prod___ACastAsExternCall___init_acastasexterncall, /* pointer to parser_nodes:ACastAsExternCall:parser_prod#ACastAsExternCall#init_acastasexterncall */
}
};
/* allocate ACastAsExternCall */
val* NEW_nit__ACastAsExternCall(const struct type* type) {
val* self /* : ACastAsExternCall */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ACastAsExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ACastAsExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACastAsExternCall exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ACastAsExternCall___n_dot].val = var2; /* _n_dot on <self:ACastAsExternCall exact> */
return self;
}
/* runtime class nit__AAsNullableExternCall */
const struct class class_nit__AAsNullableExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAsNullableExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAsNullableExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAsNullableExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAsNullableExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAsNullableExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAsNullableExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAsNullableExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAsNullableExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAsNullableExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAsNullableExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAsNullableExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAsNullableExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAsNullableExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAsNullableExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAsNullableExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAsNullableExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAsNullableExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAsNullableExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAsNullableExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAsNullableExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAsNullableExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAsNullableExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAsNullableExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAsNullableExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAsNullableExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAsNullableExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAsNullableExternCall:parser_prod#AAsNullableExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAsNullableExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAsNullableExternCall:parser_prod#AAsNullableExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAsNullableExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAsNullableExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAsNullableExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAsNullableExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAsNullableExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAsNullableExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAsNullableExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAsNullableExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAsNullableExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAsNullableExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAsNullableExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAsNullableExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AAsNullableExternCall___n_type_61d, /* pointer to parser_nodes:AAsNullableExternCall:parser_prod#AAsNullableExternCall#n_type= */
(nitmethod_t)nit__parser_prod___AAsNullableExternCall___n_kwas_61d, /* pointer to parser_nodes:AAsNullableExternCall:parser_prod#AAsNullableExternCall#n_kwas= */
(nitmethod_t)nit__parser_prod___AAsNullableExternCall___n_kwnullable_61d, /* pointer to parser_nodes:AAsNullableExternCall:parser_prod#AAsNullableExternCall#n_kwnullable= */
(nitmethod_t)nit__parser_prod___AAsNullableExternCall___init_aasnullableexterncall, /* pointer to parser_nodes:AAsNullableExternCall:parser_prod#AAsNullableExternCall#init_aasnullableexterncall */
}
};
/* allocate AAsNullableExternCall */
val* NEW_nit__AAsNullableExternCall(const struct type* type) {
val* self /* : AAsNullableExternCall */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAsNullableExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAsNullableExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAsNullableExternCall exact> */
return self;
}
/* runtime class nit__AAsNotNullableExternCall */
const struct class class_nit__AAsNotNullableExternCall = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAsNotNullableExternCall:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAsNotNullableExternCall:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAsNotNullableExternCall:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAsNotNullableExternCall:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAsNotNullableExternCall:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAsNotNullableExternCall:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAsNotNullableExternCall:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAsNotNullableExternCall:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAsNotNullableExternCall:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAsNotNullableExternCall:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAsNotNullableExternCall:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAsNotNullableExternCall:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAsNotNullableExternCall:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAsNotNullableExternCall:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAsNotNullableExternCall:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAsNotNullableExternCall:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAsNotNullableExternCall:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAsNotNullableExternCall:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAsNotNullableExternCall:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAsNotNullableExternCall:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAsNotNullableExternCall:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAsNotNullableExternCall:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAsNotNullableExternCall:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAsNotNullableExternCall:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAsNotNullableExternCall:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAsNotNullableExternCall:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAsNotNullableExternCall:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAsNotNullableExternCall:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAsNotNullableExternCall:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAsNotNullableExternCall:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAsNotNullableExternCall:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAsNotNullableExternCall:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAsNotNullableExternCall:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAsNotNullableExternCall:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAsNotNullableExternCall:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___n_type_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#n_type= */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___n_kwas_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#n_kwas= */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___n_kwnot_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#n_kwnot= */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___n_kwnullable_61d, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#n_kwnullable= */
(nitmethod_t)nit__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall, /* pointer to parser_nodes:AAsNotNullableExternCall:parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall */
}
};
/* allocate AAsNotNullableExternCall */
val* NEW_nit__AAsNotNullableExternCall(const struct type* type) {
val* self /* : AAsNotNullableExternCall */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAsNotNullableExternCall;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAsNotNullableExternCall exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAsNotNullableExternCall exact> */
return self;
}
/* runtime class nit__ATypePropdef */
const struct class class_nit__ATypePropdef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ATypePropdef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ATypePropdef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ATypePropdef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ATypePropdef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ATypePropdef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ATypePropdef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ATypePropdef:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ATypePropdef:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ATypePropdef:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ATypePropdef:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ATypePropdef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ATypePropdef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ATypePropdef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ATypePropdef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ATypePropdef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ATypePropdef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ATypePropdef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ATypePropdef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ATypePropdef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ATypePropdef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ATypePropdef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ATypePropdef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ATypePropdef___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ATypePropdef___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ATypePropdef:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ATypePropdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___APropdef___ANode__accept_flow_visitor, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ATypePropdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ATypePropdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ATypePropdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ATypePropdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ATypePropdef:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ATypePropdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ATypePropdef___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ATypePropdef:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ATypePropdef:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#replace_with */
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
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_visibility= */
(nitmethod_t)nit__phase___APropdef___is_phased, /* pointer to parser_nodes:ATypePropdef:phase#APropdef#is_phased */
(nitmethod_t)nit__phase___APropdef___is_phased_61d, /* pointer to parser_nodes:ATypePropdef:phase#APropdef#is_phased= */
(nitmethod_t)nit__scope___APropdef___do_scope, /* pointer to parser_nodes:ATypePropdef:scope#APropdef#do_scope */
(nitmethod_t)nit__flow___APropdef___do_flow, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#do_flow */
(nitmethod_t)nit__flow___APropdef___before_flow_context_61d, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#before_flow_context= */
(nitmethod_t)nit__flow___APropdef___after_flow_context_61d, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#after_flow_context= */
(nitmethod_t)nit__local_var_init___APropdef___do_local_var_init, /* pointer to parser_nodes:ATypePropdef:local_var_init#APropdef#do_local_var_init */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#mpropdef */
(nitmethod_t)nit__modelize_property___APropdef___mpropdef_61d, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#mpropdef= */
(nitmethod_t)nit__modelize_property___ATypePropdef___APropdef__build_property, /* pointer to parser_nodes:ATypePropdef:modelize_property#ATypePropdef#build_property */
(nitmethod_t)nit__modelize_property___ATypePropdef___APropdef__build_signature, /* pointer to parser_nodes:ATypePropdef:modelize_property#ATypePropdef#build_signature */
(nitmethod_t)nit__modelize_property___ATypePropdef___APropdef__check_signature, /* pointer to parser_nodes:ATypePropdef:modelize_property#ATypePropdef#check_signature */
(nitmethod_t)nit__modelize_property___APropdef___new_property_visibility, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#new_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___set_doc, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#set_doc */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_property_visibility, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#check_redef_property_visibility */
(nitmethod_t)nit__modelize_property___APropdef___check_redef_keyword, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#check_redef_keyword */
(nitmethod_t)nit__typing___APropdef___do_typing, /* pointer to parser_nodes:ATypePropdef:typing#APropdef#do_typing */
(nitmethod_t)nit__typing___APropdef___selfvariable_61d, /* pointer to parser_nodes:ATypePropdef:typing#APropdef#selfvariable= */
(nitmethod_t)nit__abstract_compiler___APropdef___compile_to_c, /* pointer to parser_nodes:ATypePropdef:abstract_compiler#APropdef#compile_to_c */
(nitmethod_t)nit__abstract_compiler___APropdef___can_inline, /* pointer to parser_nodes:ATypePropdef:abstract_compiler#APropdef#can_inline */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ATypePropdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___ATypePropdef___n_kwtype_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_kwtype= */
(nitmethod_t)nit___nit__ATypePropdef___n_id, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_id */
(nitmethod_t)nit__parser_prod___ATypePropdef___n_id_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_id= */
(nitmethod_t)nit___nit__ATypePropdef___n_type, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_type */
(nitmethod_t)nit__parser_prod___ATypePropdef___n_type_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_type= */
(nitmethod_t)nit__parser_prod___ATypePropdef___init_atypepropdef, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#init_atypepropdef */
}
};
/* allocate ATypePropdef */
val* NEW_nit__ATypePropdef(const struct type* type) {
val* self /* : ATypePropdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
short int var5 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 21*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ATypePropdef;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ATypePropdef exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ATypePropdef exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var2; /* _n_doc on <self:ATypePropdef exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var3; /* _n_kwredef on <self:ATypePropdef exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var4; /* _n_visibility on <self:ATypePropdef exact> */
var5 = 0;
self->attrs[COLOR_nit__phase__APropdef___is_phased].s = var5; /* _is_phased on <self:ATypePropdef exact> */
return self;
}
/* runtime class nit__AMethid */
/* allocate AMethid */
val* NEW_nit__AMethid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AMethid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AIdMethid */
const struct class class_nit__AIdMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIdMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIdMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIdMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIdMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIdMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIdMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIdMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIdMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIdMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIdMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIdMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIdMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIdMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIdMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIdMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIdMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIdMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIdMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIdMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIdMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIdMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIdMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIdMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIdMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIdMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIdMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIdMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIdMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIdMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIdMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AIdMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AIdMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIdMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIdMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIdMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AIdMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIdMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AIdMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIdMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIdMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AIdMethid___n_id, /* pointer to parser_nodes:AIdMethid:parser_nodes#AIdMethid#n_id */
(nitmethod_t)nit__parser_prod___AIdMethid___n_id_61d, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#n_id= */
(nitmethod_t)nit__parser_prod___AIdMethid___init_aidmethid, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#init_aidmethid */
}
};
/* allocate AIdMethid */
val* NEW_nit__AIdMethid(const struct type* type) {
val* self /* : AIdMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIdMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIdMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIdMethid exact> */
return self;
}
/* runtime class nit__APlusMethid */
const struct class class_nit__APlusMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APlusMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APlusMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APlusMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APlusMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APlusMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APlusMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APlusMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APlusMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APlusMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APlusMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APlusMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APlusMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APlusMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APlusMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APlusMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APlusMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APlusMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APlusMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APlusMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APlusMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APlusMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APlusMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APlusMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APlusMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APlusMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APlusMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APlusMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APlusMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APlusMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APlusMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APlusMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APlusMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APlusMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:APlusMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APlusMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:APlusMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APlusMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APlusMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APlusMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APlusMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___APlusMethid___n_plus_61d, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#n_plus= */
(nitmethod_t)nit__parser_prod___APlusMethid___init_aplusmethid, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#init_aplusmethid */
}
};
/* allocate APlusMethid */
val* NEW_nit__APlusMethid(const struct type* type) {
val* self /* : APlusMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APlusMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APlusMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APlusMethid exact> */
return self;
}
/* runtime class nit__AMinusMethid */
const struct class class_nit__AMinusMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMinusMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMinusMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMinusMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMinusMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMinusMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMinusMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMinusMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMinusMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMinusMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMinusMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMinusMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMinusMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMinusMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMinusMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMinusMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMinusMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMinusMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMinusMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMinusMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMinusMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMinusMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMinusMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMinusMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMinusMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMinusMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMinusMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMinusMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMinusMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMinusMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMinusMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMinusMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMinusMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMinusMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMinusMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AMinusMethid___n_minus_61d, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#n_minus= */
(nitmethod_t)nit__parser_prod___AMinusMethid___init_aminusmethid, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#init_aminusmethid */
}
};
/* allocate AMinusMethid */
val* NEW_nit__AMinusMethid(const struct type* type) {
val* self /* : AMinusMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMinusMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMinusMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMinusMethid exact> */
return self;
}
/* runtime class nit__AStarMethid */
const struct class class_nit__AStarMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStarMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStarMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStarMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStarMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStarMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStarMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStarMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStarMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStarMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStarMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStarMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStarMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStarMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStarMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStarMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStarMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStarMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStarMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStarMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStarMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStarMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStarMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStarMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStarMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStarMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStarMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStarMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStarMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStarMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStarMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStarMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStarMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStarMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStarMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStarMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AStarMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStarMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStarMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStarMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStarMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AStarMethid___n_star_61d, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#n_star= */
(nitmethod_t)nit__parser_prod___AStarMethid___init_astarmethid, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#init_astarmethid */
}
};
/* allocate AStarMethid */
val* NEW_nit__AStarMethid(const struct type* type) {
val* self /* : AStarMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStarMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStarMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStarMethid exact> */
return self;
}
/* runtime class nit__AStarstarMethid */
const struct class class_nit__AStarstarMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStarstarMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStarstarMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStarstarMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStarstarMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStarstarMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStarstarMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStarstarMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStarstarMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStarstarMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStarstarMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStarstarMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStarstarMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStarstarMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStarstarMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStarstarMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStarstarMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStarstarMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStarstarMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStarstarMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStarstarMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStarstarMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStarstarMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStarstarMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStarstarMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStarstarMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStarstarMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStarstarMethid:parser_prod#AStarstarMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStarstarMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStarstarMethid:parser_prod#AStarstarMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStarstarMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStarstarMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStarstarMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStarstarMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStarstarMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStarstarMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AStarstarMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStarstarMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStarstarMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStarstarMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStarstarMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStarstarMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AStarstarMethid___n_starstar_61d, /* pointer to parser_nodes:AStarstarMethid:parser_prod#AStarstarMethid#n_starstar= */
(nitmethod_t)nit__parser_prod___AStarstarMethid___init_astarstarmethid, /* pointer to parser_nodes:AStarstarMethid:parser_prod#AStarstarMethid#init_astarstarmethid */
}
};
/* allocate AStarstarMethid */
val* NEW_nit__AStarstarMethid(const struct type* type) {
val* self /* : AStarstarMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStarstarMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStarstarMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStarstarMethid exact> */
return self;
}
/* runtime class nit__ASlashMethid */
const struct class class_nit__ASlashMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASlashMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASlashMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASlashMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASlashMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASlashMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASlashMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASlashMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASlashMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASlashMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASlashMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASlashMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASlashMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASlashMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASlashMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASlashMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASlashMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASlashMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASlashMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASlashMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASlashMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASlashMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASlashMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASlashMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASlashMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASlashMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASlashMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASlashMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASlashMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ASlashMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASlashMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ASlashMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASlashMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASlashMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASlashMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASlashMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ASlashMethid___n_slash_61d, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#n_slash= */
(nitmethod_t)nit__parser_prod___ASlashMethid___init_aslashmethid, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#init_aslashmethid */
}
};
/* allocate ASlashMethid */
val* NEW_nit__ASlashMethid(const struct type* type) {
val* self /* : ASlashMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASlashMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASlashMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASlashMethid exact> */
return self;
}
/* runtime class nit__APercentMethid */
const struct class class_nit__APercentMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APercentMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APercentMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APercentMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APercentMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APercentMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APercentMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APercentMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APercentMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APercentMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APercentMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APercentMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APercentMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APercentMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APercentMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APercentMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APercentMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APercentMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APercentMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APercentMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APercentMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APercentMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APercentMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APercentMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APercentMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APercentMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APercentMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APercentMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APercentMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APercentMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APercentMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APercentMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APercentMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APercentMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:APercentMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APercentMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:APercentMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APercentMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APercentMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APercentMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APercentMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___APercentMethid___n_percent_61d, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#n_percent= */
(nitmethod_t)nit__parser_prod___APercentMethid___init_apercentmethid, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#init_apercentmethid */
}
};
/* allocate APercentMethid */
val* NEW_nit__APercentMethid(const struct type* type) {
val* self /* : APercentMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APercentMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APercentMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APercentMethid exact> */
return self;
}
/* runtime class nit__AEqMethid */
const struct class class_nit__AEqMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AEqMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AEqMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AEqMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AEqMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AEqMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AEqMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AEqMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AEqMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AEqMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AEqMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AEqMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AEqMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AEqMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AEqMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AEqMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AEqMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AEqMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AEqMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AEqMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AEqMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AEqMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AEqMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AEqMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AEqMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AEqMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AEqMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AEqMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AEqMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AEqMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AEqMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AEqMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AEqMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AEqMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AEqMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AEqMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AEqMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AEqMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AEqMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AEqMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AEqMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AEqMethid___n_eq_61d, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#n_eq= */
(nitmethod_t)nit__parser_prod___AEqMethid___init_aeqmethid, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#init_aeqmethid */
}
};
/* allocate AEqMethid */
val* NEW_nit__AEqMethid(const struct type* type) {
val* self /* : AEqMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AEqMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AEqMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AEqMethid exact> */
return self;
}
/* runtime class nit__ANeMethid */
const struct class class_nit__ANeMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ANeMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ANeMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ANeMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ANeMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ANeMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ANeMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ANeMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ANeMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ANeMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ANeMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ANeMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ANeMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ANeMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ANeMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ANeMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ANeMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ANeMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ANeMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ANeMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ANeMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ANeMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ANeMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ANeMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ANeMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ANeMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ANeMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ANeMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ANeMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ANeMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ANeMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ANeMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ANeMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ANeMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ANeMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ANeMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ANeMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ANeMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ANeMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ANeMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ANeMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ANeMethid___n_ne_61d, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#n_ne= */
(nitmethod_t)nit__parser_prod___ANeMethid___init_anemethid, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#init_anemethid */
}
};
/* allocate ANeMethid */
val* NEW_nit__ANeMethid(const struct type* type) {
val* self /* : ANeMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ANeMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ANeMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANeMethid exact> */
return self;
}
/* runtime class nit__ALeMethid */
const struct class class_nit__ALeMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALeMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALeMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALeMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALeMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALeMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALeMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALeMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALeMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALeMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALeMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALeMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALeMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALeMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALeMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALeMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALeMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALeMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALeMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALeMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALeMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALeMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALeMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALeMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALeMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALeMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALeMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALeMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALeMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALeMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALeMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALeMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALeMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALeMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALeMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALeMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALeMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALeMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALeMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALeMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALeMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ALeMethid___n_le_61d, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#n_le= */
(nitmethod_t)nit__parser_prod___ALeMethid___init_alemethid, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#init_alemethid */
}
};
/* allocate ALeMethid */
val* NEW_nit__ALeMethid(const struct type* type) {
val* self /* : ALeMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALeMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALeMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALeMethid exact> */
return self;
}
/* runtime class nit__AGeMethid */
const struct class class_nit__AGeMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AGeMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AGeMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AGeMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AGeMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AGeMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AGeMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AGeMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AGeMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AGeMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AGeMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AGeMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AGeMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AGeMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AGeMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AGeMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AGeMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AGeMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AGeMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AGeMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AGeMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AGeMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AGeMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AGeMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AGeMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AGeMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AGeMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AGeMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AGeMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AGeMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AGeMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AGeMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AGeMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AGeMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AGeMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AGeMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AGeMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AGeMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AGeMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AGeMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AGeMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AGeMethid___n_ge_61d, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#n_ge= */
(nitmethod_t)nit__parser_prod___AGeMethid___init_agemethid, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#init_agemethid */
}
};
/* allocate AGeMethid */
val* NEW_nit__AGeMethid(const struct type* type) {
val* self /* : AGeMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AGeMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AGeMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AGeMethid exact> */
return self;
}
/* runtime class nit__ALtMethid */
const struct class class_nit__ALtMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALtMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALtMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALtMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALtMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALtMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALtMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALtMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALtMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALtMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALtMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALtMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALtMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALtMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALtMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALtMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALtMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALtMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALtMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALtMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALtMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALtMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALtMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALtMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALtMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALtMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALtMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALtMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALtMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALtMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALtMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALtMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALtMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALtMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALtMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALtMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALtMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALtMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALtMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALtMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALtMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ALtMethid___n_lt_61d, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#n_lt= */
(nitmethod_t)nit__parser_prod___ALtMethid___init_altmethid, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#init_altmethid */
}
};
/* allocate ALtMethid */
val* NEW_nit__ALtMethid(const struct type* type) {
val* self /* : ALtMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALtMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALtMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALtMethid exact> */
return self;
}
/* runtime class nit__AGtMethid */
const struct class class_nit__AGtMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AGtMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AGtMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AGtMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AGtMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AGtMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AGtMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AGtMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AGtMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AGtMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AGtMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AGtMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AGtMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AGtMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AGtMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AGtMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AGtMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AGtMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AGtMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AGtMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AGtMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AGtMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AGtMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AGtMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AGtMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AGtMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AGtMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AGtMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AGtMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AGtMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AGtMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AGtMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AGtMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AGtMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AGtMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AGtMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AGtMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AGtMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AGtMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AGtMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AGtMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AGtMethid___n_gt_61d, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#n_gt= */
(nitmethod_t)nit__parser_prod___AGtMethid___init_agtmethid, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#init_agtmethid */
}
};
/* allocate AGtMethid */
val* NEW_nit__AGtMethid(const struct type* type) {
val* self /* : AGtMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AGtMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AGtMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AGtMethid exact> */
return self;
}
/* runtime class nit__ALlMethid */
const struct class class_nit__ALlMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALlMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALlMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALlMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALlMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALlMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALlMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALlMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALlMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALlMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALlMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALlMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALlMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALlMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALlMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALlMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALlMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALlMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALlMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALlMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALlMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALlMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALlMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALlMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALlMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALlMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALlMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALlMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALlMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALlMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALlMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALlMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALlMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALlMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALlMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALlMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALlMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALlMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALlMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALlMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALlMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ALlMethid___n_ll_61d, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#n_ll= */
(nitmethod_t)nit__parser_prod___ALlMethid___init_allmethid, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#init_allmethid */
}
};
/* allocate ALlMethid */
val* NEW_nit__ALlMethid(const struct type* type) {
val* self /* : ALlMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALlMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALlMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALlMethid exact> */
return self;
}
/* runtime class nit__AGgMethid */
const struct class class_nit__AGgMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AGgMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AGgMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AGgMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AGgMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AGgMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AGgMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AGgMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AGgMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AGgMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AGgMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AGgMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AGgMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AGgMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AGgMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AGgMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AGgMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AGgMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AGgMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AGgMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AGgMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AGgMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AGgMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AGgMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AGgMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AGgMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AGgMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AGgMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AGgMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AGgMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AGgMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AGgMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AGgMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AGgMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AGgMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AGgMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AGgMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AGgMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AGgMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AGgMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AGgMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AGgMethid___n_gg_61d, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#n_gg= */
(nitmethod_t)nit__parser_prod___AGgMethid___init_aggmethid, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#init_aggmethid */
}
};
/* allocate AGgMethid */
val* NEW_nit__AGgMethid(const struct type* type) {
val* self /* : AGgMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AGgMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AGgMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AGgMethid exact> */
return self;
}
/* runtime class nit__ABraMethid */
const struct class class_nit__ABraMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABraMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABraMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABraMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABraMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABraMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABraMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABraMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABraMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABraMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABraMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABraMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABraMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABraMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABraMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABraMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABraMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABraMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABraMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABraMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABraMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABraMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABraMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABraMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABraMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABraMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABraMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABraMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABraMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABraMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABraMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABraMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABraMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABraMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ABraMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABraMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ABraMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABraMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABraMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABraMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABraMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ABraMethid___n_obra_61d, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#n_obra= */
(nitmethod_t)nit__parser_prod___ABraMethid___n_cbra_61d, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#n_cbra= */
(nitmethod_t)nit__parser_prod___ABraMethid___init_abramethid, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#init_abramethid */
}
};
/* allocate ABraMethid */
val* NEW_nit__ABraMethid(const struct type* type) {
val* self /* : ABraMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABraMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraMethid exact> */
return self;
}
/* runtime class nit__AStarshipMethid */
const struct class class_nit__AStarshipMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStarshipMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStarshipMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStarshipMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStarshipMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStarshipMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStarshipMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStarshipMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStarshipMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStarshipMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStarshipMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStarshipMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStarshipMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStarshipMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStarshipMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStarshipMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStarshipMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStarshipMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStarshipMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStarshipMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStarshipMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStarshipMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStarshipMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AStarshipMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStarshipMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStarshipMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStarshipMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStarshipMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AStarshipMethid___n_starship_61d, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#n_starship= */
(nitmethod_t)nit__parser_prod___AStarshipMethid___init_astarshipmethid, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#init_astarshipmethid */
}
};
/* allocate AStarshipMethid */
val* NEW_nit__AStarshipMethid(const struct type* type) {
val* self /* : AStarshipMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStarshipMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStarshipMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStarshipMethid exact> */
return self;
}
/* runtime class nit__AAssignMethid */
const struct class class_nit__AAssignMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAssignMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAssignMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAssignMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAssignMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAssignMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAssignMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAssignMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAssignMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAssignMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAssignMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAssignMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAssignMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAssignMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAssignMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAssignMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAssignMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAssignMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAssignMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAssignMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAssignMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAssignMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAssignMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAssignMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAssignMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAssignMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAssignMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAssignMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAssignMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAssignMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAssignMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAssignMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAssignMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAssignMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAssignMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAssignMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AAssignMethid___n_id_61d, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#n_id= */
(nitmethod_t)nit__parser_prod___AAssignMethid___n_assign_61d, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#n_assign= */
(nitmethod_t)nit__parser_prod___AAssignMethid___init_aassignmethid, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#init_aassignmethid */
}
};
/* allocate AAssignMethid */
val* NEW_nit__AAssignMethid(const struct type* type) {
val* self /* : AAssignMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAssignMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAssignMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAssignMethid exact> */
return self;
}
/* runtime class nit__ABraassignMethid */
const struct class class_nit__ABraassignMethid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABraassignMethid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABraassignMethid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABraassignMethid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABraassignMethid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABraassignMethid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABraassignMethid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABraassignMethid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABraassignMethid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABraassignMethid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABraassignMethid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABraassignMethid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABraassignMethid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABraassignMethid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABraassignMethid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABraassignMethid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABraassignMethid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABraassignMethid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABraassignMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABraassignMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABraassignMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ABraassignMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABraassignMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ABraassignMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABraassignMethid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABraassignMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABraassignMethid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABraassignMethid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ABraassignMethid___n_obra_61d, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#n_obra= */
(nitmethod_t)nit__parser_prod___ABraassignMethid___n_cbra_61d, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#n_cbra= */
(nitmethod_t)nit__parser_prod___ABraassignMethid___n_assign_61d, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#n_assign= */
(nitmethod_t)nit__parser_prod___ABraassignMethid___init_abraassignmethid, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#init_abraassignmethid */
}
};
/* allocate ABraassignMethid */
val* NEW_nit__ABraassignMethid(const struct type* type) {
val* self /* : ABraassignMethid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABraassignMethid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraassignMethid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraassignMethid exact> */
return self;
}
/* runtime class nit__ASignature */
const struct class class_nit__ASignature = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASignature:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASignature:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASignature:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASignature:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASignature:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASignature:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASignature:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASignature:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASignature:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASignature:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASignature:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASignature:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASignature:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASignature:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASignature:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASignature:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASignature:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASignature:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASignature:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASignature:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASignature:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASignature:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASignature:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASignature:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASignature:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASignature:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASignature:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASignature___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASignature___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASignature:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASignature:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASignature:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASignature:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ASignature:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASignature:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ASignature:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASignature:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASignature:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASignature:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASignature:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ASignature___n_opar_61d, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#n_opar= */
(nitmethod_t)nit___nit__ASignature___n_params, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#n_params */
(nitmethod_t)nit__parser_prod___ASignature___n_cpar_61d, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#n_cpar= */
(nitmethod_t)nit___nit__ASignature___n_type, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#n_type */
(nitmethod_t)nit__parser_prod___ASignature___n_type_61d, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#n_type= */
(nitmethod_t)nit__parser_prod___ASignature___init_asignature, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#init_asignature */
(nitmethod_t)nit__modelize_property___ASignature___is_visited_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#is_visited= */
(nitmethod_t)nit__modelize_property___ASignature___param_names, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#param_names */
(nitmethod_t)nit__modelize_property___ASignature___param_types, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#param_types */
(nitmethod_t)nit__modelize_property___ASignature___vararg_rank, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#vararg_rank */
(nitmethod_t)nit__modelize_property___ASignature___vararg_rank_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#vararg_rank= */
(nitmethod_t)nit__modelize_property___ASignature___ret_type, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#ret_type */
(nitmethod_t)nit__modelize_property___ASignature___ret_type_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#ret_type= */
(nitmethod_t)nit__modelize_property___ASignature___visit_signature, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#visit_signature */
}
};
/* allocate ASignature */
val* NEW_nit__ASignature(const struct type* type) {
val* self /* : ASignature */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[AParam] */;
val* var4 /* : null */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : Array[String] */;
val* var8 /* : Array[MType] */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
val* var12 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASignature;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASignature exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASignature exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_opar].val = var2; /* _n_opar on <self:ASignature exact> */
var3 = NEW_nit__ANodes(&type_nit__ANodes__nit__AParam);
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[AParam]>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:ANodes[AParam]>*/;
}
self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val = var3; /* _n_params on <self:ASignature exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_cpar].val = var4; /* _n_cpar on <self:ASignature exact> */
var5 = NULL;
self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val = var5; /* _n_type on <self:ASignature exact> */
var6 = 0;
self->attrs[COLOR_nit__modelize_property__ASignature___is_visited].s = var6; /* _is_visited on <self:ASignature exact> */
var7 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[String]>*/
}
self->attrs[COLOR_nit__modelize_property__ASignature___param_names].val = var7; /* _param_names on <self:ASignature exact> */
var8 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[MType]>*/
}
self->attrs[COLOR_nit__modelize_property__ASignature___param_types].val = var8; /* _param_types on <self:ASignature exact> */
var9 = 1;
{
{ /* Inline kernel#Int#unary - (var9) on <var9:Int> */
var11 = -var9;
var10 = var11;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l = var10; /* _vararg_rank on <self:ASignature exact> */
var12 = NULL;
self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val = var12; /* _ret_type on <self:ASignature exact> */
return self;
}
/* runtime class nit__AParam */
const struct class class_nit__AParam = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AParam:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AParam:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AParam:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AParam:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AParam:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AParam:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AParam:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AParam:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AParam:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AParam:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AParam:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AParam:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AParam:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AParam:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AParam:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AParam:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AParam:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AParam:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AParam:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AParam:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AParam:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AParam:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AParam:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AParam:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AParam:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AParam:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AParam:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AParam:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AParam:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AParam:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AParam:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AParam:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AParam:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AParam:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AParam:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AParam:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AParam:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AParam:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AParam___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AParam:parser_prod#AParam#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AParam:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AParam___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AParam:parser_prod#AParam#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AParam:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___AParam___ANode__accept_scope_visitor, /* pointer to parser_nodes:AParam:scope#AParam#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AParam:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AParam:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AParam:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AParam:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AParam:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AParam:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AParam:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AParam:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AParam___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AParam:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AParam:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AParam:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AParam:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AParam___n_id, /* pointer to parser_nodes:AParam:parser_nodes#AParam#n_id */
(nitmethod_t)nit__parser_prod___AParam___n_id_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_id= */
(nitmethod_t)nit___nit__AParam___n_type, /* pointer to parser_nodes:AParam:parser_nodes#AParam#n_type */
(nitmethod_t)nit__parser_prod___AParam___n_type_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_type= */
(nitmethod_t)nit___nit__AParam___n_dotdotdot, /* pointer to parser_nodes:AParam:parser_nodes#AParam#n_dotdotdot */
(nitmethod_t)nit__parser_prod___AParam___n_dotdotdot_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_dotdotdot= */
(nitmethod_t)nit__parser_prod___AParam___init_aparam, /* pointer to parser_nodes:AParam:parser_prod#AParam#init_aparam */
(nitmethod_t)nit__scope___AParam___variable, /* pointer to parser_nodes:AParam:scope#AParam#variable */
(nitmethod_t)nit__scope___AParam___variable_61d, /* pointer to parser_nodes:AParam:scope#AParam#variable= */
(nitmethod_t)nit__modelize_property___AParam___mparameter_61d, /* pointer to parser_nodes:AParam:modelize_property#AParam#mparameter= */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AParam:scope#ANode#accept_scope_visitor */
}
};
/* allocate AParam */
val* NEW_nit__AParam(const struct type* type) {
val* self /* : AParam */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AParam;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AParam exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AParam exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AParam___n_type].val = var2; /* _n_type on <self:AParam exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val = var3; /* _n_dotdotdot on <self:AParam exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_property__AParam___mparameter].val = var4; /* _mparameter on <self:AParam exact> */
return self;
}
/* runtime class nit__AType */
const struct class class_nit__AType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AType:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AType:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AType:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AType:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AType:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AType:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AType:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AType:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AType:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AType:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AType:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AType___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AType:parser_prod#AType#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AType:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AType___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AType:parser_prod#AType#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AType:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AType:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AType:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AType:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AType:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AType:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AType:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AType:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AType:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AType:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AType___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AType:parser_prod#AType#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AType:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AType:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AType:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AType:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AType___n_kwnullable, /* pointer to parser_nodes:AType:parser_nodes#AType#n_kwnullable */
(nitmethod_t)nit__parser_prod___AType___n_kwnullable_61d, /* pointer to parser_nodes:AType:parser_prod#AType#n_kwnullable= */
(nitmethod_t)nit___nit__AType___n_id, /* pointer to parser_nodes:AType:parser_nodes#AType#n_id */
(nitmethod_t)nit__parser_prod___AType___n_id_61d, /* pointer to parser_nodes:AType:parser_prod#AType#n_id= */
(nitmethod_t)nit___nit__AType___n_types, /* pointer to parser_nodes:AType:parser_nodes#AType#n_types */
(nitmethod_t)nit__parser_prod___AType___init_atype, /* pointer to parser_nodes:AType:parser_prod#AType#init_atype */
(nitmethod_t)nit__modelize_class___AType___mtype, /* pointer to parser_nodes:AType:modelize_class#AType#mtype */
(nitmethod_t)nit__modelize_class___AType___mtype_61d, /* pointer to parser_nodes:AType:modelize_class#AType#mtype= */
(nitmethod_t)nit__modelize_class___AType___checked_mtype, /* pointer to parser_nodes:AType:modelize_class#AType#checked_mtype */
(nitmethod_t)nit__modelize_class___AType___checked_mtype_61d, /* pointer to parser_nodes:AType:modelize_class#AType#checked_mtype= */
(nitmethod_t)nit__astbuilder___AType___make, /* pointer to parser_nodes:AType:astbuilder#AType#make */
}
};
/* allocate AType */
val* NEW_nit__AType(const struct type* type) {
val* self /* : AType */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[AType] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AType;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AType exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AType exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val = var2; /* _n_kwnullable on <self:AType exact> */
var3 = NEW_nit__ANodes(&type_nit__ANodes__nit__AType);
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[AType]>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:ANodes[AType]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AType___n_types].val = var3; /* _n_types on <self:AType exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_class__AType___mtype].val = var4; /* _mtype on <self:AType exact> */
var5 = 0;
self->attrs[COLOR_nit__modelize_class__AType___checked_mtype].s = var5; /* _checked_mtype on <self:AType exact> */
return self;
}
/* runtime class nit__ALabel */
const struct class class_nit__ALabel = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALabel:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALabel:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALabel:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALabel:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALabel:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALabel:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALabel:kernel#Object#sys */
(nitmethod_t)nit___nit__ALabel___standard__kernel__Object__init, /* pointer to parser_nodes:ALabel:parser_nodes#ALabel#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALabel:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALabel:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALabel:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALabel:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALabel:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALabel:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALabel:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALabel:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALabel:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALabel:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALabel:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALabel:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALabel:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALabel:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALabel:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALabel:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALabel:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALabel:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALabel:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALabel___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALabel___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALabel:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALabel:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALabel:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALabel:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALabel:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALabel:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALabel:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALabel:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALabel:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALabel:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALabel:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___ALabel___n_kwlabel_61d, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#n_kwlabel= */
(nitmethod_t)nit___nit__ALabel___n_id, /* pointer to parser_nodes:ALabel:parser_nodes#ALabel#n_id */
(nitmethod_t)nit__parser_prod___ALabel___n_id_61d, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#n_id= */
(nitmethod_t)nit__parser_prod___ALabel___init_alabel, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#init_alabel */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALabel:kernel#Object#init */
}
};
/* allocate ALabel */
val* NEW_nit__ALabel(const struct type* type) {
val* self /* : ALabel */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALabel;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALabel exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALabel exact> */
return self;
}
/* runtime class nit__AExpr */
/* allocate AExpr */
val* NEW_nit__AExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABlockExpr */
const struct class class_nit__ABlockExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABlockExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABlockExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABlockExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABlockExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABlockExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABlockExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABlockExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABlockExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABlockExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABlockExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABlockExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABlockExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABlockExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABlockExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABlockExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABlockExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABlockExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABlockExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABlockExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABlockExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABlockExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABlockExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABlockExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABlockExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABlockExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABlockExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ABlockExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ABlockExpr:flow#ABlockExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABlockExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ABlockExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ABlockExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ABlockExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ABlockExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABlockExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABlockExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABlockExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ABlockExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ABlockExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ABlockExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ABlockExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___ABlockExpr___AExpr__mtype, /* pointer to parser_nodes:ABlockExpr:typing#ABlockExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ABlockExpr___AExpr__accept_typing, /* pointer to parser_nodes:ABlockExpr:typing#ABlockExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___ABlockExpr___AExpr__add, /* pointer to parser_nodes:ABlockExpr:astbuilder#ABlockExpr#add */
(nitmethod_t)nit__abstract_compiler___ABlockExpr___AExpr__expr, /* pointer to parser_nodes:ABlockExpr:abstract_compiler#ABlockExpr#expr */
(nitmethod_t)nit__abstract_compiler___ABlockExpr___AExpr__stmt, /* pointer to parser_nodes:ABlockExpr:abstract_compiler#ABlockExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABlockExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABlockExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ABlockExpr___n_expr, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ABlockExpr#n_expr */
(nitmethod_t)nit__parser_prod___ABlockExpr___n_kwend_61d, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#n_kwend= */
(nitmethod_t)nit__parser_prod___ABlockExpr___init_ablockexpr, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#init_ablockexpr */
(nitmethod_t)nit__astbuilder___ABlockExpr___make, /* pointer to parser_nodes:ABlockExpr:astbuilder#ABlockExpr#make */
}
};
/* allocate ABlockExpr */
val* NEW_nit__ABlockExpr(const struct type* type) {
val* self /* : ABlockExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABlockExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABlockExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABlockExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ABlockExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABlockExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABlockExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ABlockExpr exact> */
var6 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var6, self) /* parent= on <var6:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6) /* init on <var6:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val = var6; /* _n_expr on <self:ABlockExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_kwend].val = var7; /* _n_kwend on <self:ABlockExpr exact> */
return self;
}
/* runtime class nit__AVardeclExpr */
const struct class class_nit__AVardeclExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AVardeclExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AVardeclExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AVardeclExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AVardeclExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AVardeclExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AVardeclExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AVardeclExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AVardeclExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AVardeclExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AVardeclExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AVardeclExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AVardeclExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AVardeclExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AVardeclExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AVardeclExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AVardeclExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AVardeclExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___AVardeclExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:AVardeclExpr:scope#AVardeclExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AVardeclExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___AVardeclExpr___ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVardeclExpr:local_var_init#AVardeclExpr#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AVardeclExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AVardeclExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AVardeclExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AVardeclExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AVardeclExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AVardeclExpr:transform#AVardeclExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AVardeclExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AVardeclExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AVardeclExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AVardeclExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AVardeclExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AVardeclExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AVardeclExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AVardeclExpr___AExpr__accept_typing, /* pointer to parser_nodes:AVardeclExpr:typing#AVardeclExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AVardeclExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AVardeclExpr___AExpr__stmt, /* pointer to parser_nodes:AVardeclExpr:abstract_compiler#AVardeclExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AVardeclExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AVardeclExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AVardeclExpr___n_kwvar_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_kwvar= */
(nitmethod_t)nit___nit__AVardeclExpr___n_id, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_id */
(nitmethod_t)nit__parser_prod___AVardeclExpr___n_id_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_id= */
(nitmethod_t)nit___nit__AVardeclExpr___n_type, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_type */
(nitmethod_t)nit__parser_prod___AVardeclExpr___n_type_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_type= */
(nitmethod_t)nit__parser_prod___AVardeclExpr___n_assign_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_assign= */
(nitmethod_t)nit___nit__AVardeclExpr___n_expr, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_expr */
(nitmethod_t)nit__parser_prod___AVardeclExpr___n_expr_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AVardeclExpr___init_avardeclexpr, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#init_avardeclexpr */
(nitmethod_t)nit__scope___AVardeclExpr___variable, /* pointer to parser_nodes:AVardeclExpr:scope#AVardeclExpr#variable */
(nitmethod_t)nit__scope___AVardeclExpr___variable_61d, /* pointer to parser_nodes:AVardeclExpr:scope#AVardeclExpr#variable= */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AVardeclExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AVardeclExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVardeclExpr */
val* NEW_nit__AVardeclExpr(const struct type* type) {
val* self /* : AVardeclExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AVardeclExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AVardeclExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVardeclExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AVardeclExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVardeclExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVardeclExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AVardeclExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val = var6; /* _n_type on <self:AVardeclExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_assign].val = var7; /* _n_assign on <self:AVardeclExpr exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val = var8; /* _n_expr on <self:AVardeclExpr exact> */
return self;
}
/* runtime class nit__AReturnExpr */
const struct class class_nit__AReturnExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AReturnExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AReturnExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AReturnExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AReturnExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AReturnExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AReturnExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AReturnExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AReturnExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AReturnExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AReturnExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AReturnExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AReturnExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AReturnExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AReturnExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AReturnExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AReturnExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AReturnExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AReturnExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AReturnExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AReturnExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AReturnExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AReturnExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AReturnExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AReturnExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AReturnExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AReturnExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AReturnExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AReturnExpr:flow#AReturnExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AReturnExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AReturnExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AReturnExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AReturnExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AReturnExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AReturnExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AReturnExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AReturnExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AReturnExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AReturnExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AReturnExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AReturnExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AReturnExpr___AExpr__accept_typing, /* pointer to parser_nodes:AReturnExpr:typing#AReturnExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AReturnExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AReturnExpr___AExpr__stmt, /* pointer to parser_nodes:AReturnExpr:abstract_compiler#AReturnExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AReturnExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AReturnExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AReturnExpr___n_kwreturn_61d, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#n_kwreturn= */
(nitmethod_t)nit___nit__AReturnExpr___n_expr, /* pointer to parser_nodes:AReturnExpr:parser_nodes#AReturnExpr#n_expr */
(nitmethod_t)nit__parser_prod___AReturnExpr___n_expr_61d, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AReturnExpr___init_areturnexpr, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#init_areturnexpr */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AReturnExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AReturnExpr */
val* NEW_nit__AReturnExpr(const struct type* type) {
val* self /* : AReturnExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AReturnExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AReturnExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AReturnExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AReturnExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AReturnExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AReturnExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AReturnExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_kwreturn].val = var6; /* _n_kwreturn on <self:AReturnExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val = var7; /* _n_expr on <self:AReturnExpr exact> */
return self;
}
/* runtime class nit__ALabelable */
/* allocate ALabelable */
val* NEW_nit__ALabelable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ALabelable is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AEscapeExpr */
/* allocate AEscapeExpr */
val* NEW_nit__AEscapeExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AEscapeExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABreakExpr */
const struct class class_nit__ABreakExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABreakExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABreakExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABreakExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABreakExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABreakExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABreakExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABreakExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABreakExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABreakExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABreakExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABreakExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABreakExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABreakExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABreakExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABreakExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABreakExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABreakExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABreakExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABreakExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABreakExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABreakExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABreakExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABreakExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABreakExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABreakExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ABreakExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ABreakExpr:scope#ABreakExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___AEscapeExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ABreakExpr:flow#AEscapeExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABreakExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ABreakExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ABreakExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ABreakExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ABreakExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABreakExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABreakExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABreakExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ABreakExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ABreakExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ABreakExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ABreakExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ABreakExpr___AExpr__accept_typing, /* pointer to parser_nodes:ABreakExpr:typing#ABreakExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:ABreakExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AEscapeExpr___AExpr__stmt, /* pointer to parser_nodes:ABreakExpr:abstract_compiler#AEscapeExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABreakExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABreakExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ALabelable___n_label, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)nit__parser_prod___ABreakExpr___nit__parser_nodes__ALabelable__n_label_61d, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#n_label= */
(nitmethod_t)nit___nit__AEscapeExpr___n_expr, /* pointer to parser_nodes:ABreakExpr:parser_nodes#AEscapeExpr#n_expr */
(nitmethod_t)nit__scope___AEscapeExpr___escapemark, /* pointer to parser_nodes:ABreakExpr:scope#AEscapeExpr#escapemark */
(nitmethod_t)nit__scope___AEscapeExpr___escapemark_61d, /* pointer to parser_nodes:ABreakExpr:scope#AEscapeExpr#escapemark= */
(nitmethod_t)nit__flow___AEscapeExpr___before_flow_context, /* pointer to parser_nodes:ABreakExpr:flow#AEscapeExpr#before_flow_context */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABreakExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___ABreakExpr___n_kwbreak_61d, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#n_kwbreak= */
(nitmethod_t)nit__parser_prod___ABreakExpr___init_abreakexpr, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#init_abreakexpr */
(nitmethod_t)nit__astbuilder___ABreakExpr___make, /* pointer to parser_nodes:ABreakExpr:astbuilder#ABreakExpr#make */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABreakExpr:scope#ANode#accept_scope_visitor */
}
};
/* allocate ABreakExpr */
val* NEW_nit__ABreakExpr(const struct type* type) {
val* self /* : ABreakExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABreakExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABreakExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABreakExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ABreakExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABreakExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABreakExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ABreakExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:ABreakExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val = var7; /* _n_expr on <self:ABreakExpr exact> */
return self;
}
/* runtime class nit__AAbortExpr */
const struct class class_nit__AAbortExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAbortExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAbortExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAbortExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAbortExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAbortExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAbortExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAbortExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAbortExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAbortExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAbortExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAbortExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAbortExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAbortExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAbortExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAbortExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAbortExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAbortExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAbortExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAbortExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAbortExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAbortExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAbortExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAbortExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAbortExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAbortExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAbortExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AAbortExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AAbortExpr:flow#AAbortExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAbortExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAbortExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAbortExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAbortExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAbortExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAbortExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAbortExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAbortExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAbortExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAbortExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAbortExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAbortExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAbortExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAbortExpr:typing#AAbortExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AAbortExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AAbortExpr___AExpr__stmt, /* pointer to parser_nodes:AAbortExpr:abstract_compiler#AAbortExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAbortExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAbortExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AAbortExpr___n_kwabort_61d, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#n_kwabort= */
(nitmethod_t)nit__parser_prod___AAbortExpr___init_aabortexpr, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#init_aabortexpr */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAbortExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AAbortExpr */
val* NEW_nit__AAbortExpr(const struct type* type) {
val* self /* : AAbortExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAbortExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAbortExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAbortExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAbortExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAbortExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAbortExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAbortExpr exact> */
return self;
}
/* runtime class nit__AContinueExpr */
const struct class class_nit__AContinueExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AContinueExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AContinueExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AContinueExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AContinueExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AContinueExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AContinueExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AContinueExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AContinueExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AContinueExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AContinueExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AContinueExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AContinueExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AContinueExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AContinueExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AContinueExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AContinueExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AContinueExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AContinueExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AContinueExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AContinueExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AContinueExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AContinueExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AContinueExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AContinueExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AContinueExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___AContinueExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:AContinueExpr:scope#AContinueExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___AEscapeExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AContinueExpr:flow#AEscapeExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AContinueExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AContinueExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AContinueExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AContinueExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AContinueExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AContinueExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AContinueExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AContinueExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AContinueExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AContinueExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AContinueExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AContinueExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AContinueExpr___AExpr__accept_typing, /* pointer to parser_nodes:AContinueExpr:typing#AContinueExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AContinueExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AEscapeExpr___AExpr__stmt, /* pointer to parser_nodes:AContinueExpr:abstract_compiler#AEscapeExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AContinueExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AContinueExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ALabelable___n_label, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)nit__parser_prod___AContinueExpr___nit__parser_nodes__ALabelable__n_label_61d, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#n_label= */
(nitmethod_t)nit___nit__AEscapeExpr___n_expr, /* pointer to parser_nodes:AContinueExpr:parser_nodes#AEscapeExpr#n_expr */
(nitmethod_t)nit__scope___AEscapeExpr___escapemark, /* pointer to parser_nodes:AContinueExpr:scope#AEscapeExpr#escapemark */
(nitmethod_t)nit__scope___AEscapeExpr___escapemark_61d, /* pointer to parser_nodes:AContinueExpr:scope#AEscapeExpr#escapemark= */
(nitmethod_t)nit__flow___AEscapeExpr___before_flow_context, /* pointer to parser_nodes:AContinueExpr:flow#AEscapeExpr#before_flow_context */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AContinueExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___AContinueExpr___n_kwcontinue_61d, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#n_kwcontinue= */
(nitmethod_t)nit__parser_prod___AContinueExpr___init_acontinueexpr, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#init_acontinueexpr */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AContinueExpr:scope#ANode#accept_scope_visitor */
}
};
/* allocate AContinueExpr */
val* NEW_nit__AContinueExpr(const struct type* type) {
val* self /* : AContinueExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AContinueExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AContinueExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AContinueExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AContinueExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AContinueExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AContinueExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AContinueExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:AContinueExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val = var7; /* _n_expr on <self:AContinueExpr exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AContinueExpr___n_kwcontinue].val = var8; /* _n_kwcontinue on <self:AContinueExpr exact> */
return self;
}
/* runtime class nit__ADoExpr */
const struct class class_nit__ADoExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ADoExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ADoExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ADoExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ADoExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ADoExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ADoExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ADoExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ADoExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ADoExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ADoExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ADoExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ADoExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ADoExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ADoExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ADoExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ADoExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ADoExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ADoExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ADoExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ADoExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ADoExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ADoExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ADoExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ADoExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ADoExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ADoExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ADoExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ADoExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ADoExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ADoExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ADoExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ADoExpr:scope#ADoExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ADoExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ADoExpr:flow#ADoExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ADoExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ADoExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ADoExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ADoExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ADoExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ADoExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ADoExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ADoExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ADoExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ADoExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ADoExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ADoExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ADoExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ADoExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ADoExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ADoExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ADoExpr___AExpr__accept_typing, /* pointer to parser_nodes:ADoExpr:typing#ADoExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ADoExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___ADoExpr___AExpr__add, /* pointer to parser_nodes:ADoExpr:astbuilder#ADoExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:ADoExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___ADoExpr___AExpr__stmt, /* pointer to parser_nodes:ADoExpr:abstract_compiler#ADoExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ADoExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ADoExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ALabelable___n_label, /* pointer to parser_nodes:ADoExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)nit__parser_prod___ADoExpr___nit__parser_nodes__ALabelable__n_label_61d, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#n_label= */
(nitmethod_t)nit__parser_prod___ADoExpr___n_kwdo_61d, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#n_kwdo= */
(nitmethod_t)nit___nit__ADoExpr___n_block, /* pointer to parser_nodes:ADoExpr:parser_nodes#ADoExpr#n_block */
(nitmethod_t)nit__parser_prod___ADoExpr___n_block_61d, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#n_block= */
(nitmethod_t)nit__parser_prod___ADoExpr___init_adoexpr, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#init_adoexpr */
(nitmethod_t)nit__scope___ADoExpr___break_mark, /* pointer to parser_nodes:ADoExpr:scope#ADoExpr#break_mark */
(nitmethod_t)nit__scope___ADoExpr___break_mark_61d, /* pointer to parser_nodes:ADoExpr:scope#ADoExpr#break_mark= */
(nitmethod_t)nit__astbuilder___ADoExpr___make, /* pointer to parser_nodes:ADoExpr:astbuilder#ADoExpr#make */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ADoExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate ADoExpr */
val* NEW_nit__ADoExpr(const struct type* type) {
val* self /* : ADoExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ADoExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ADoExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADoExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ADoExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADoExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ADoExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ADoExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:ADoExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val = var7; /* _n_block on <self:ADoExpr exact> */
return self;
}
/* runtime class nit__AIfExpr */
const struct class class_nit__AIfExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIfExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIfExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIfExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIfExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIfExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIfExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIfExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIfExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIfExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIfExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIfExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIfExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIfExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIfExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIfExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIfExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIfExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIfExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIfExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIfExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIfExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIfExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIfExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIfExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIfExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIfExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIfExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIfExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIfExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIfExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___AIfExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:AIfExpr:scope#AIfExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___AIfExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AIfExpr:flow#AIfExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AIfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AIfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AIfExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AIfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIfExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AIfExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AIfExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AIfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AIfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AIfExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AIfExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AIfExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AIfExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AIfExpr___AExpr__accept_typing, /* pointer to parser_nodes:AIfExpr:typing#AIfExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AIfExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AIfExpr___AExpr__expr, /* pointer to parser_nodes:AIfExpr:abstract_compiler#AIfExpr#expr */
(nitmethod_t)nit__abstract_compiler___AIfExpr___AExpr__stmt, /* pointer to parser_nodes:AIfExpr:abstract_compiler#AIfExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIfExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIfExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AIfExpr___n_kwif_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_kwif= */
(nitmethod_t)nit___nit__AIfExpr___n_expr, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_expr */
(nitmethod_t)nit__parser_prod___AIfExpr___n_expr_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_expr= */
(nitmethod_t)nit___nit__AIfExpr___n_then, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_then */
(nitmethod_t)nit__parser_prod___AIfExpr___n_then_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_then= */
(nitmethod_t)nit___nit__AIfExpr___n_else, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_else */
(nitmethod_t)nit__parser_prod___AIfExpr___n_else_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_else= */
(nitmethod_t)nit__parser_prod___AIfExpr___init_aifexpr, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#init_aifexpr */
(nitmethod_t)nit__astbuilder___AIfExpr___make, /* pointer to parser_nodes:AIfExpr:astbuilder#AIfExpr#make */
}
};
/* allocate AIfExpr */
val* NEW_nit__AIfExpr(const struct type* type) {
val* self /* : AIfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIfExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIfExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIfExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AIfExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AIfExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AIfExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AIfExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val = var6; /* _n_then on <self:AIfExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val = var7; /* _n_else on <self:AIfExpr exact> */
return self;
}
/* runtime class nit__AIfexprExpr */
const struct class class_nit__AIfexprExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIfexprExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIfexprExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIfexprExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIfexprExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIfexprExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIfexprExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIfexprExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIfexprExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIfexprExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIfexprExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIfexprExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIfexprExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIfexprExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIfexprExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIfexprExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIfexprExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIfexprExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AIfexprExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AIfexprExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AIfexprExpr:flow#AIfexprExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIfexprExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIfexprExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AIfexprExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AIfexprExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AIfexprExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AIfexprExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AIfexprExpr:transform#AIfexprExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIfexprExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIfexprExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AIfexprExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AIfexprExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AIfexprExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AIfexprExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AIfexprExpr___AExpr__accept_typing, /* pointer to parser_nodes:AIfexprExpr:typing#AIfexprExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AIfexprExpr___AExpr__expr, /* pointer to parser_nodes:AIfexprExpr:abstract_compiler#AIfexprExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AIfexprExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIfexprExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIfexprExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AIfexprExpr___n_kwif_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_kwif= */
(nitmethod_t)nit___nit__AIfexprExpr___n_expr, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_expr */
(nitmethod_t)nit__parser_prod___AIfexprExpr___n_expr_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AIfexprExpr___n_kwthen_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_kwthen= */
(nitmethod_t)nit___nit__AIfexprExpr___n_then, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_then */
(nitmethod_t)nit__parser_prod___AIfexprExpr___n_then_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_then= */
(nitmethod_t)nit__parser_prod___AIfexprExpr___n_kwelse_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_kwelse= */
(nitmethod_t)nit___nit__AIfexprExpr___n_else, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_else */
(nitmethod_t)nit__parser_prod___AIfexprExpr___n_else_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_else= */
(nitmethod_t)nit__parser_prod___AIfexprExpr___init_aifexprexpr, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#init_aifexprexpr */
}
};
/* allocate AIfexprExpr */
val* NEW_nit__AIfexprExpr(const struct type* type) {
val* self /* : AIfexprExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIfexprExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIfexprExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIfexprExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AIfexprExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AIfexprExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AIfexprExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AIfexprExpr exact> */
return self;
}
/* runtime class nit__AWhileExpr */
const struct class class_nit__AWhileExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AWhileExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AWhileExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AWhileExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AWhileExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AWhileExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AWhileExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AWhileExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AWhileExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AWhileExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AWhileExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AWhileExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AWhileExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AWhileExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AWhileExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AWhileExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AWhileExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AWhileExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AWhileExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AWhileExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AWhileExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AWhileExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AWhileExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AWhileExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AWhileExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AWhileExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___AWhileExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___AWhileExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AWhileExpr:flow#AWhileExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AWhileExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AWhileExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AWhileExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AWhileExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AWhileExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AWhileExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AWhileExpr:transform#AWhileExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AWhileExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AWhileExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AWhileExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AWhileExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AWhileExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AWhileExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AWhileExpr___AExpr__accept_typing, /* pointer to parser_nodes:AWhileExpr:typing#AWhileExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AWhileExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AWhileExpr___AExpr__stmt, /* pointer to parser_nodes:AWhileExpr:abstract_compiler#AWhileExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AWhileExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AWhileExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ALabelable___n_label, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)nit__parser_prod___AWhileExpr___nit__parser_nodes__ALabelable__n_label_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_label= */
(nitmethod_t)nit__parser_prod___AWhileExpr___n_kwwhile_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_kwwhile= */
(nitmethod_t)nit___nit__AWhileExpr___n_expr, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#n_expr */
(nitmethod_t)nit__parser_prod___AWhileExpr___n_expr_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AWhileExpr___n_kwdo_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_kwdo= */
(nitmethod_t)nit___nit__AWhileExpr___n_block, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#n_block */
(nitmethod_t)nit__parser_prod___AWhileExpr___n_block_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_block= */
(nitmethod_t)nit__parser_prod___AWhileExpr___init_awhileexpr, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#init_awhileexpr */
(nitmethod_t)nit__scope___AWhileExpr___break_mark, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#break_mark */
(nitmethod_t)nit__scope___AWhileExpr___break_mark_61d, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#break_mark= */
(nitmethod_t)nit__scope___AWhileExpr___continue_mark, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#continue_mark */
(nitmethod_t)nit__scope___AWhileExpr___continue_mark_61d, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#continue_mark= */
}
};
/* allocate AWhileExpr */
val* NEW_nit__AWhileExpr(const struct type* type) {
val* self /* : AWhileExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AWhileExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AWhileExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AWhileExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AWhileExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AWhileExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AWhileExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AWhileExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:AWhileExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val = var7; /* _n_block on <self:AWhileExpr exact> */
return self;
}
/* runtime class nit__ALoopExpr */
const struct class class_nit__ALoopExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALoopExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALoopExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALoopExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALoopExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALoopExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALoopExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALoopExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALoopExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALoopExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALoopExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALoopExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALoopExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALoopExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALoopExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALoopExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALoopExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALoopExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALoopExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALoopExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALoopExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALoopExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALoopExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALoopExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALoopExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALoopExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ALoopExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ALoopExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ALoopExpr:flow#ALoopExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALoopExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ALoopExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ALoopExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ALoopExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ALoopExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALoopExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALoopExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALoopExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ALoopExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ALoopExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ALoopExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ALoopExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ALoopExpr___AExpr__accept_typing, /* pointer to parser_nodes:ALoopExpr:typing#ALoopExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___ALoopExpr___AExpr__add, /* pointer to parser_nodes:ALoopExpr:astbuilder#ALoopExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:ALoopExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___ALoopExpr___AExpr__stmt, /* pointer to parser_nodes:ALoopExpr:abstract_compiler#ALoopExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALoopExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALoopExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ALabelable___n_label, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)nit__parser_prod___ALoopExpr___nit__parser_nodes__ALabelable__n_label_61d, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#n_label= */
(nitmethod_t)nit__parser_prod___ALoopExpr___n_kwloop_61d, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#n_kwloop= */
(nitmethod_t)nit___nit__ALoopExpr___n_block, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALoopExpr#n_block */
(nitmethod_t)nit__parser_prod___ALoopExpr___n_block_61d, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#n_block= */
(nitmethod_t)nit__parser_prod___ALoopExpr___init_aloopexpr, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#init_aloopexpr */
(nitmethod_t)nit__scope___ALoopExpr___break_mark, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#break_mark */
(nitmethod_t)nit__scope___ALoopExpr___break_mark_61d, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#break_mark= */
(nitmethod_t)nit__scope___ALoopExpr___continue_mark, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#continue_mark */
(nitmethod_t)nit__scope___ALoopExpr___continue_mark_61d, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#continue_mark= */
(nitmethod_t)nit__astbuilder___ALoopExpr___make, /* pointer to parser_nodes:ALoopExpr:astbuilder#ALoopExpr#make */
}
};
/* allocate ALoopExpr */
val* NEW_nit__ALoopExpr(const struct type* type) {
val* self /* : ALoopExpr */;
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
self->class = &class_nit__ALoopExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALoopExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALoopExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ALoopExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ALoopExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ALoopExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ALoopExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:ALoopExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val = var7; /* _n_block on <self:ALoopExpr exact> */
return self;
}
/* runtime class nit__AForExpr */
const struct class class_nit__AForExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AForExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AForExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AForExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AForExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AForExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AForExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AForExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AForExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AForExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AForExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AForExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AForExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AForExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AForExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AForExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AForExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AForExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AForExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AForExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AForExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AForExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AForExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AForExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AForExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AForExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AForExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AForExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AForExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AForExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AForExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___AForExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:AForExpr:scope#AForExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___AForExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AForExpr:flow#AForExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AForExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AForExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AForExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AForExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AForExpr:rapid_type_analysis#AForExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AForExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AForExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AForExpr:transform#AForExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AForExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AForExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AForExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AForExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AForExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AForExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AForExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AForExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AForExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AForExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AForExpr___AExpr__accept_typing, /* pointer to parser_nodes:AForExpr:typing#AForExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AForExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AForExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AForExpr___AExpr__stmt, /* pointer to parser_nodes:AForExpr:abstract_compiler#AForExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AForExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AForExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ALabelable___n_label, /* pointer to parser_nodes:AForExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)nit__parser_prod___AForExpr___nit__parser_nodes__ALabelable__n_label_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_label= */
(nitmethod_t)nit__parser_prod___AForExpr___n_kwfor_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_kwfor= */
(nitmethod_t)nit___nit__AForExpr___n_ids, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_ids */
(nitmethod_t)nit___nit__AForExpr___n_expr, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_expr */
(nitmethod_t)nit__parser_prod___AForExpr___n_expr_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AForExpr___n_kwdo_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_kwdo= */
(nitmethod_t)nit___nit__AForExpr___n_block, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_block */
(nitmethod_t)nit__parser_prod___AForExpr___n_block_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_block= */
(nitmethod_t)nit__parser_prod___AForExpr___init_aforexpr, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#init_aforexpr */
(nitmethod_t)nit__scope___AForExpr___variables, /* pointer to parser_nodes:AForExpr:scope#AForExpr#variables */
(nitmethod_t)nit__scope___AForExpr___variables_61d, /* pointer to parser_nodes:AForExpr:scope#AForExpr#variables= */
(nitmethod_t)nit__scope___AForExpr___break_mark, /* pointer to parser_nodes:AForExpr:scope#AForExpr#break_mark */
(nitmethod_t)nit__scope___AForExpr___break_mark_61d, /* pointer to parser_nodes:AForExpr:scope#AForExpr#break_mark= */
(nitmethod_t)nit__scope___AForExpr___continue_mark, /* pointer to parser_nodes:AForExpr:scope#AForExpr#continue_mark */
(nitmethod_t)nit__scope___AForExpr___continue_mark_61d, /* pointer to parser_nodes:AForExpr:scope#AForExpr#continue_mark= */
(nitmethod_t)nit__typing___AForExpr___coltype_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#coltype= */
(nitmethod_t)nit__typing___AForExpr___method_iterator, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_iterator */
(nitmethod_t)nit__typing___AForExpr___method_iterator_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_iterator= */
(nitmethod_t)nit__typing___AForExpr___method_is_ok, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_is_ok */
(nitmethod_t)nit__typing___AForExpr___method_is_ok_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_is_ok= */
(nitmethod_t)nit__typing___AForExpr___method_item, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_item */
(nitmethod_t)nit__typing___AForExpr___method_item_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_item= */
(nitmethod_t)nit__typing___AForExpr___method_next, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_next */
(nitmethod_t)nit__typing___AForExpr___method_next_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_next= */
(nitmethod_t)nit__typing___AForExpr___method_key, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_key */
(nitmethod_t)nit__typing___AForExpr___method_key_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_key= */
(nitmethod_t)nit__typing___AForExpr___method_finish, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_finish */
(nitmethod_t)nit__typing___AForExpr___method_finish_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_finish= */
(nitmethod_t)nit__typing___AForExpr___method_lt, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_lt */
(nitmethod_t)nit__typing___AForExpr___method_lt_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_lt= */
(nitmethod_t)nit__typing___AForExpr___method_successor, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_successor */
(nitmethod_t)nit__typing___AForExpr___method_successor_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_successor= */
(nitmethod_t)nit__typing___AForExpr___do_type_iterator, /* pointer to parser_nodes:AForExpr:typing#AForExpr#do_type_iterator */
}
};
/* allocate AForExpr */
val* NEW_nit__AForExpr(const struct type* type) {
val* self /* : AForExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : ANodes[TId] */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 28*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AForExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AForExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AForExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AForExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AForExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AForExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AForExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:AForExpr exact> */
var7 = NEW_nit__ANodes(&type_nit__ANodes__nit__TId);
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var7, self) /* parent= on <var7:ANodes[TId]>*/;
}
{
((void (*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7) /* init on <var7:ANodes[TId]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val = var7; /* _n_ids on <self:AForExpr exact> */
var8 = NULL;
self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val = var8; /* _n_block on <self:AForExpr exact> */
return self;
}
/* runtime class nit__AAssertExpr */
const struct class class_nit__AAssertExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAssertExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAssertExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAssertExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAssertExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAssertExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAssertExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAssertExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAssertExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAssertExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAssertExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAssertExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAssertExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAssertExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAssertExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAssertExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAssertExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAssertExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAssertExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAssertExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAssertExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAssertExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAssertExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAssertExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAssertExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAssertExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAssertExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AAssertExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AAssertExpr:flow#AAssertExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAssertExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAssertExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAssertExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAssertExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAssertExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAssertExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAssertExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAssertExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAssertExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAssertExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAssertExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAssertExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAssertExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAssertExpr:typing#AAssertExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AAssertExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AAssertExpr___AExpr__stmt, /* pointer to parser_nodes:AAssertExpr:abstract_compiler#AAssertExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAssertExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAssertExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AAssertExpr___n_kwassert_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_kwassert= */
(nitmethod_t)nit___nit__AAssertExpr___n_id, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_id */
(nitmethod_t)nit__parser_prod___AAssertExpr___n_id_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_id= */
(nitmethod_t)nit___nit__AAssertExpr___n_expr, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_expr */
(nitmethod_t)nit__parser_prod___AAssertExpr___n_expr_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_expr= */
(nitmethod_t)nit___nit__AAssertExpr___n_else, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_else */
(nitmethod_t)nit__parser_prod___AAssertExpr___n_else_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_else= */
(nitmethod_t)nit__parser_prod___AAssertExpr___init_aassertexpr, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#init_aassertexpr */
}
};
/* allocate AAssertExpr */
val* NEW_nit__AAssertExpr(const struct type* type) {
val* self /* : AAssertExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAssertExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAssertExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAssertExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAssertExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAssertExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAssertExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAssertExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val = var6; /* _n_id on <self:AAssertExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val = var7; /* _n_else on <self:AAssertExpr exact> */
return self;
}
/* runtime class nit__AAssignFormExpr */
/* allocate AAssignFormExpr */
val* NEW_nit__AAssignFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAssignFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AReassignFormExpr */
/* allocate AReassignFormExpr */
val* NEW_nit__AReassignFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AReassignFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AOnceExpr */
const struct class class_nit__AOnceExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AOnceExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AOnceExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AOnceExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AOnceExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AOnceExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AOnceExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AOnceExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AOnceExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AOnceExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AOnceExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AOnceExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AOnceExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AOnceExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AOnceExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AOnceExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AOnceExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AOnceExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AOnceExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AOnceExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AOnceExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AOnceExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AOnceExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AOnceExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AOnceExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AOnceExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AOnceExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AOnceExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AOnceExpr:flow#AOnceExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AOnceExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AOnceExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AOnceExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AOnceExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AOnceExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AOnceExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AOnceExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AOnceExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AOnceExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AOnceExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AOnceExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AOnceExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AOnceExpr___AExpr__accept_typing, /* pointer to parser_nodes:AOnceExpr:typing#AOnceExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AOnceExpr___AExpr__expr, /* pointer to parser_nodes:AOnceExpr:abstract_compiler#AOnceExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AOnceExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AOnceExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AOnceExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AOnceExpr___n_kwonce_61d, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#n_kwonce= */
(nitmethod_t)nit___nit__AOnceExpr___n_expr, /* pointer to parser_nodes:AOnceExpr:parser_nodes#AOnceExpr#n_expr */
(nitmethod_t)nit__parser_prod___AOnceExpr___n_expr_61d, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AOnceExpr___init_aonceexpr, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#init_aonceexpr */
}
};
/* allocate AOnceExpr */
val* NEW_nit__AOnceExpr(const struct type* type) {
val* self /* : AOnceExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AOnceExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AOnceExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AOnceExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AOnceExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AOnceExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AOnceExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AOnceExpr exact> */
return self;
}
/* runtime class nit__ASendExpr */
/* allocate ASendExpr */
val* NEW_nit__ASendExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ASendExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABinopExpr */
/* allocate ABinopExpr */
val* NEW_nit__ABinopExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ABinopExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABoolExpr */
/* allocate ABoolExpr */
val* NEW_nit__ABoolExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ABoolExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABinBoolExpr */
/* allocate ABinBoolExpr */
val* NEW_nit__ABinBoolExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ABinBoolExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AOrExpr */
const struct class class_nit__AOrExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AOrExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AOrExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AOrExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AOrExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AOrExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AOrExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AOrExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AOrExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AOrExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AOrExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AOrExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AOrExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AOrExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AOrExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AOrExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AOrExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AOrExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AOrExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AOrExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AOrExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AOrExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AOrExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AOrExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AOrExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AOrExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AOrExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AOrExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AOrExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AOrExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AOrExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AOrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AOrExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AOrExpr:flow#AOrExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AOrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AOrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AOrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AOrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AOrExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AOrExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AOrExpr:transform#AOrExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AOrExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AOrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AOrExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AOrExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AOrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AOrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AOrExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AOrExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AOrExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AOrExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AOrExpr___AExpr__accept_typing, /* pointer to parser_nodes:AOrExpr:typing#AOrExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AOrExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AOrExpr___AExpr__expr, /* pointer to parser_nodes:AOrExpr:abstract_compiler#AOrExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AOrExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AOrExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AOrExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr, /* pointer to parser_nodes:AOrExpr:parser_nodes#ABinBoolExpr#n_expr */
(nitmethod_t)nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#n_expr= */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr2, /* pointer to parser_nodes:AOrExpr:parser_nodes#ABinBoolExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AOrExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AOrExpr___init_aorexpr, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#init_aorexpr */
}
};
/* allocate AOrExpr */
val* NEW_nit__AOrExpr(const struct type* type) {
val* self /* : AOrExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AOrExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AOrExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AOrExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AOrExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AOrExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AOrExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AOrExpr exact> */
return self;
}
/* runtime class nit__AAndExpr */
const struct class class_nit__AAndExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAndExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAndExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAndExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAndExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAndExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAndExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAndExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAndExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAndExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAndExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAndExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAndExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAndExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAndExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAndExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAndExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAndExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAndExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAndExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAndExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAndExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAndExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAndExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAndExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAndExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAndExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAndExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAndExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAndExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAndExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAndExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AAndExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AAndExpr:flow#AAndExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAndExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAndExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAndExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAndExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAndExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AAndExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AAndExpr:transform#AAndExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAndExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAndExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAndExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAndExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAndExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAndExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAndExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAndExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAndExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAndExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAndExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAndExpr:typing#AAndExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAndExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AAndExpr___AExpr__expr, /* pointer to parser_nodes:AAndExpr:abstract_compiler#AAndExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AAndExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAndExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAndExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr, /* pointer to parser_nodes:AAndExpr:parser_nodes#ABinBoolExpr#n_expr */
(nitmethod_t)nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#n_expr= */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr2, /* pointer to parser_nodes:AAndExpr:parser_nodes#ABinBoolExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AAndExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AAndExpr___init_aandexpr, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#init_aandexpr */
}
};
/* allocate AAndExpr */
val* NEW_nit__AAndExpr(const struct type* type) {
val* self /* : AAndExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAndExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAndExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAndExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAndExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAndExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAndExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAndExpr exact> */
return self;
}
/* runtime class nit__AOrElseExpr */
const struct class class_nit__AOrElseExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AOrElseExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AOrElseExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AOrElseExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AOrElseExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AOrElseExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AOrElseExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AOrElseExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AOrElseExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AOrElseExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AOrElseExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AOrElseExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AOrElseExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AOrElseExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AOrElseExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AOrElseExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AOrElseExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AOrElseExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AOrElseExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AOrElseExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AOrElseExpr:flow#AOrElseExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AOrElseExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AOrElseExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AOrElseExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AOrElseExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AOrElseExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AOrElseExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AOrElseExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AOrElseExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AOrElseExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AOrElseExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AOrElseExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AOrElseExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AOrElseExpr___AExpr__accept_typing, /* pointer to parser_nodes:AOrElseExpr:typing#AOrElseExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AOrElseExpr___AExpr__expr, /* pointer to parser_nodes:AOrElseExpr:abstract_compiler#AOrElseExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AOrElseExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AOrElseExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AOrElseExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ABinBoolExpr#n_expr */
(nitmethod_t)nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#n_expr= */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr2, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ABinBoolExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AOrElseExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AOrElseExpr___init_aorelseexpr, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#init_aorelseexpr */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AOrElseExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AOrElseExpr */
val* NEW_nit__AOrElseExpr(const struct type* type) {
val* self /* : AOrElseExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AOrElseExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AOrElseExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AOrElseExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AOrElseExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AOrElseExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AOrElseExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AOrElseExpr exact> */
return self;
}
/* runtime class nit__AImpliesExpr */
const struct class class_nit__AImpliesExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AImpliesExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AImpliesExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AImpliesExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AImpliesExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AImpliesExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AImpliesExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AImpliesExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AImpliesExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AImpliesExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AImpliesExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AImpliesExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AImpliesExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AImpliesExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AImpliesExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AImpliesExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AImpliesExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AImpliesExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AImpliesExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AImpliesExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AImpliesExpr:flow#AImpliesExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AImpliesExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AImpliesExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AImpliesExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AImpliesExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AImpliesExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AImpliesExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AImpliesExpr:transform#AImpliesExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AImpliesExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AImpliesExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AImpliesExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AImpliesExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AImpliesExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AImpliesExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AImpliesExpr___AExpr__accept_typing, /* pointer to parser_nodes:AImpliesExpr:typing#AImpliesExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AImpliesExpr___AExpr__expr, /* pointer to parser_nodes:AImpliesExpr:abstract_compiler#AImpliesExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AImpliesExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AImpliesExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AImpliesExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ABinBoolExpr#n_expr */
(nitmethod_t)nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr_61d, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#n_expr= */
(nitmethod_t)nit___nit__ABinBoolExpr___n_expr2, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ABinBoolExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AImpliesExpr___nit__parser_nodes__ABinBoolExpr__n_expr2_61d, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AImpliesExpr___init_aimpliesexpr, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#init_aimpliesexpr */
}
};
/* allocate AImpliesExpr */
val* NEW_nit__AImpliesExpr(const struct type* type) {
val* self /* : AImpliesExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AImpliesExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AImpliesExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AImpliesExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AImpliesExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AImpliesExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AImpliesExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AImpliesExpr exact> */
return self;
}
/* runtime class nit__ANotExpr */
const struct class class_nit__ANotExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ANotExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ANotExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ANotExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ANotExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ANotExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ANotExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ANotExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ANotExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ANotExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ANotExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ANotExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ANotExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ANotExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ANotExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ANotExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ANotExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ANotExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ANotExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ANotExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ANotExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ANotExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ANotExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ANotExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ANotExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ANotExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ANotExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ANotExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ANotExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ANotExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ANotExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ANotExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANotExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ANotExpr:flow#ANotExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ANotExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ANotExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ANotExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ANotExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ANotExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ANotExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ANotExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ANotExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ANotExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ANotExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ANotExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ANotExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ANotExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ANotExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ANotExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ANotExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ANotExpr___AExpr__accept_typing, /* pointer to parser_nodes:ANotExpr:typing#ANotExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ANotExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ANotExpr___AExpr__expr, /* pointer to parser_nodes:ANotExpr:abstract_compiler#ANotExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ANotExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ANotExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ANotExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ANotExpr___n_kwnot_61d, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#n_kwnot= */
(nitmethod_t)nit___nit__ANotExpr___n_expr, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANotExpr#n_expr */
(nitmethod_t)nit__parser_prod___ANotExpr___n_expr_61d, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#n_expr= */
(nitmethod_t)nit__parser_prod___ANotExpr___init_anotexpr, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#init_anotexpr */
}
};
/* allocate ANotExpr */
val* NEW_nit__ANotExpr(const struct type* type) {
val* self /* : ANotExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ANotExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ANotExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANotExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ANotExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ANotExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ANotExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ANotExpr exact> */
return self;
}
/* runtime class nit__AEqExpr */
const struct class class_nit__AEqExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AEqExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AEqExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AEqExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AEqExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AEqExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AEqExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AEqExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AEqExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AEqExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AEqExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AEqExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AEqExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AEqExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AEqExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AEqExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AEqExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AEqExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AEqExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AEqExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AEqExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AEqExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AEqExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AEqExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AEqExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AEqExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AEqExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AEqExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AEqExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AEqExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AEqExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AEqExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AEqExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AEqExpr:flow#AEqExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AEqExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AEqExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AEqExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AEqExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AEqExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AEqExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AEqExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AEqExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AEqExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AEqExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AEqExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AEqExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AEqExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AEqExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AEqExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AEqExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AEqExpr___AExpr__accept_typing, /* pointer to parser_nodes:AEqExpr:typing#AEqExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AEqExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AEqExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AEqExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AEqExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AEqExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AEqExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AEqExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AEqExpr___ASendExpr__property_name, /* pointer to parser_nodes:AEqExpr:typing#AEqExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AEqExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AEqExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AEqExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AEqExpr___init_aeqexpr, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#init_aeqexpr */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AEqExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#accept_typing */
}
};
/* allocate AEqExpr */
val* NEW_nit__AEqExpr(const struct type* type) {
val* self /* : AEqExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AEqExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AEqExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AEqExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AEqExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AEqExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AEqExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AEqExpr exact> */
return self;
}
/* runtime class nit__ANeExpr */
const struct class class_nit__ANeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ANeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ANeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ANeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ANeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ANeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ANeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ANeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ANeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ANeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ANeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ANeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ANeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ANeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ANeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ANeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ANeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ANeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ANeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ANeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ANeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ANeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ANeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ANeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ANeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ANeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ANeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ANeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ANeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ANeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ANeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ANeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANeExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ANeExpr:flow#ANeExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ANeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ANeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ANeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ANeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ANeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ANeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ANeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ANeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ANeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ANeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ANeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ANeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ANeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ANeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ANeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ANeExpr___AExpr__accept_typing, /* pointer to parser_nodes:ANeExpr:typing#ANeExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ANeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ANeExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ANeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ANeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ANeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ANeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ANeExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ANeExpr___ASendExpr__property_name, /* pointer to parser_nodes:ANeExpr:typing#ANeExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ANeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:ANeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___ANeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___ANeExpr___init_aneexpr, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#init_aneexpr */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ANeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#accept_typing */
}
};
/* allocate ANeExpr */
val* NEW_nit__ANeExpr(const struct type* type) {
val* self /* : ANeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ANeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ANeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ANeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ANeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ANeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ANeExpr exact> */
return self;
}
