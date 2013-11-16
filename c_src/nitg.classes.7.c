#include "nitg.classes.0.h"
/* runtime class parser_nodes__TKwif */
const struct class class_parser_nodes__TKwif = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwif:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwif:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwif:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwif:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwif:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwif:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwif:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwif:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwif:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwif:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwif:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwif:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwif:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwif:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwif:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwif:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwif:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwif:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwif:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwif:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwif:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwif:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwif:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwif:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwif:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwif:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwif:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwif:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwif:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwif:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwif:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwif:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwif:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwif:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwif:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwif:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwif:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwif:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwif:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwif:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwif:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwif:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwif:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwif:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwif:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwif:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwif:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwif:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwif:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwif:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwif:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwif:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwif:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwif:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwif:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwif:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwif:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwif:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwif:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwif:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwif:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwif:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwif:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwif__parser_index, /* pointer to parser_nodes:TKwif:lexer#TKwif#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwif:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwif__init, /* pointer to parser_nodes:TKwif:parser_nodes#TKwif#init */
(nitmethod_t)VIRTUAL_lexer__TKwif__init_tk, /* pointer to parser_nodes:TKwif:lexer#TKwif#init_tk */
}
};
/* allocate TKwif */
val* NEW_parser_nodes__TKwif(const struct type* type) {
val* self /* : TKwif */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwif;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwif exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwif exact> */
return self;
}
/* allocate TKwif */
void CHECK_NEW_parser_nodes__TKwif(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwif> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwif> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwif> */
}
/* runtime class parser_nodes__TKwthen */
const struct class class_parser_nodes__TKwthen = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwthen:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwthen:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwthen:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwthen:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwthen:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwthen:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwthen:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwthen:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwthen:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwthen:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwthen:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwthen:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwthen:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwthen:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwthen:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwthen:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwthen:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwthen:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwthen:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwthen:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwthen:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwthen:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwthen:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwthen:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwthen:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwthen:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwthen:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwthen:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwthen:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwthen:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwthen:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwthen:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwthen:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwthen:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwthen:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwthen:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwthen:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwthen:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwthen:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwthen:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwthen:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwthen:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwthen:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwthen:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwthen:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwthen:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwthen:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwthen:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwthen:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwthen:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwthen:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwthen:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwthen:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwthen:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwthen:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwthen:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwthen:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwthen__parser_index, /* pointer to parser_nodes:TKwthen:lexer#TKwthen#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwthen:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwthen__init, /* pointer to parser_nodes:TKwthen:parser_nodes#TKwthen#init */
(nitmethod_t)VIRTUAL_lexer__TKwthen__init_tk, /* pointer to parser_nodes:TKwthen:lexer#TKwthen#init_tk */
}
};
/* allocate TKwthen */
val* NEW_parser_nodes__TKwthen(const struct type* type) {
val* self /* : TKwthen */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwthen;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwthen exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwthen exact> */
return self;
}
/* allocate TKwthen */
void CHECK_NEW_parser_nodes__TKwthen(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwthen> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwthen> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwthen> */
}
/* runtime class parser_nodes__TKwelse */
const struct class class_parser_nodes__TKwelse = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwelse:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwelse:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwelse:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwelse:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwelse:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwelse:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwelse:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwelse:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwelse:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwelse:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwelse:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwelse:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwelse:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwelse:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwelse:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwelse:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwelse:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwelse:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwelse:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwelse:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwelse:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwelse:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwelse:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwelse:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwelse:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwelse:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwelse:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwelse:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwelse:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwelse:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwelse:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwelse:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwelse:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwelse:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwelse:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwelse:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwelse:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwelse:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwelse:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwelse:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwelse:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwelse:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwelse:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwelse:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwelse:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwelse:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwelse:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwelse:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwelse:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwelse:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwelse:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwelse:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwelse:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwelse:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwelse:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwelse:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwelse:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwelse__parser_index, /* pointer to parser_nodes:TKwelse:lexer#TKwelse#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwelse:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwelse__init, /* pointer to parser_nodes:TKwelse:parser_nodes#TKwelse#init */
(nitmethod_t)VIRTUAL_lexer__TKwelse__init_tk, /* pointer to parser_nodes:TKwelse:lexer#TKwelse#init_tk */
}
};
/* allocate TKwelse */
val* NEW_parser_nodes__TKwelse(const struct type* type) {
val* self /* : TKwelse */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwelse;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwelse exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwelse exact> */
return self;
}
/* allocate TKwelse */
void CHECK_NEW_parser_nodes__TKwelse(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwelse> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwelse> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwelse> */
}
/* runtime class parser_nodes__TKwwhile */
const struct class class_parser_nodes__TKwwhile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwwhile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwwhile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwwhile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwwhile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwwhile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwwhile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwwhile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwwhile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwwhile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwwhile:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwwhile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwwhile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwwhile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwwhile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwwhile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwwhile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwwhile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwwhile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwwhile:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwwhile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwwhile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwwhile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwwhile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwwhile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwwhile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwwhile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwwhile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwwhile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwwhile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwwhile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwwhile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwwhile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwwhile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwwhile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwwhile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwwhile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwwhile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwwhile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwwhile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwwhile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwwhile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwwhile:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwwhile:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwwhile:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwwhile:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwwhile:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwwhile:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwwhile:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwwhile:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwwhile:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwwhile:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwwhile:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwwhile:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwwhile:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwwhile:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwwhile:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwwhile:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwwhile__parser_index, /* pointer to parser_nodes:TKwwhile:lexer#TKwwhile#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwwhile:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwwhile__init, /* pointer to parser_nodes:TKwwhile:parser_nodes#TKwwhile#init */
(nitmethod_t)VIRTUAL_lexer__TKwwhile__init_tk, /* pointer to parser_nodes:TKwwhile:lexer#TKwwhile#init_tk */
}
};
/* allocate TKwwhile */
val* NEW_parser_nodes__TKwwhile(const struct type* type) {
val* self /* : TKwwhile */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwwhile;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwwhile exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwwhile exact> */
return self;
}
/* allocate TKwwhile */
void CHECK_NEW_parser_nodes__TKwwhile(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwwhile> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwwhile> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwwhile> */
}
/* runtime class parser_nodes__TKwloop */
const struct class class_parser_nodes__TKwloop = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwloop:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwloop:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwloop:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwloop:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwloop:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwloop:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwloop:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwloop:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwloop:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwloop:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwloop:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwloop:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwloop:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwloop:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwloop:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwloop:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwloop:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwloop:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwloop:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwloop:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwloop:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwloop:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwloop:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwloop:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwloop:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwloop:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwloop:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwloop:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwloop:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwloop:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwloop:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwloop:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwloop:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwloop:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwloop:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwloop:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwloop:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwloop:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwloop:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwloop:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwloop:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwloop:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwloop:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwloop:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwloop:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwloop:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwloop:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwloop:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwloop:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwloop:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwloop:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwloop:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwloop:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwloop:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwloop:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwloop:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwloop:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwloop__parser_index, /* pointer to parser_nodes:TKwloop:lexer#TKwloop#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwloop:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwloop__init, /* pointer to parser_nodes:TKwloop:parser_nodes#TKwloop#init */
(nitmethod_t)VIRTUAL_lexer__TKwloop__init_tk, /* pointer to parser_nodes:TKwloop:lexer#TKwloop#init_tk */
}
};
/* allocate TKwloop */
val* NEW_parser_nodes__TKwloop(const struct type* type) {
val* self /* : TKwloop */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwloop;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwloop exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwloop exact> */
return self;
}
/* allocate TKwloop */
void CHECK_NEW_parser_nodes__TKwloop(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwloop> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwloop> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwloop> */
}
/* runtime class parser_nodes__TKwfor */
const struct class class_parser_nodes__TKwfor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwfor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwfor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwfor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwfor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwfor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwfor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwfor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwfor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwfor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwfor:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwfor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwfor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwfor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwfor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwfor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwfor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwfor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwfor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwfor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwfor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwfor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwfor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwfor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwfor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwfor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwfor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwfor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwfor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwfor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwfor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwfor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwfor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwfor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwfor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwfor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwfor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwfor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwfor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwfor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwfor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwfor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwfor:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwfor:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwfor:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwfor:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwfor:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwfor:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwfor:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwfor:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwfor:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwfor:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwfor:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwfor:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwfor:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwfor:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwfor:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwfor:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwfor__parser_index, /* pointer to parser_nodes:TKwfor:lexer#TKwfor#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwfor:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwfor__init, /* pointer to parser_nodes:TKwfor:parser_nodes#TKwfor#init */
(nitmethod_t)VIRTUAL_lexer__TKwfor__init_tk, /* pointer to parser_nodes:TKwfor:lexer#TKwfor#init_tk */
}
};
/* allocate TKwfor */
val* NEW_parser_nodes__TKwfor(const struct type* type) {
val* self /* : TKwfor */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwfor;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwfor exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwfor exact> */
return self;
}
/* allocate TKwfor */
void CHECK_NEW_parser_nodes__TKwfor(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwfor> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwfor> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwfor> */
}
/* runtime class parser_nodes__TKwin */
const struct class class_parser_nodes__TKwin = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwin:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwin:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwin:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwin:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwin:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwin:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwin:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwin:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwin:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwin:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwin:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwin:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwin:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwin:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwin:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwin:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwin:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwin:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwin:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwin:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwin:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwin:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwin:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwin:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwin:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwin:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwin:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwin:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwin:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwin:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwin:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwin:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwin:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwin:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwin:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwin:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwin:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwin:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwin:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwin:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwin:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwin:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwin:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwin:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwin:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwin:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwin:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwin:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwin:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwin:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwin:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwin:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwin:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwin:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwin:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwin:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwin:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwin:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwin:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwin:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwin:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwin:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwin:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwin__parser_index, /* pointer to parser_nodes:TKwin:lexer#TKwin#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwin:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwin__init, /* pointer to parser_nodes:TKwin:parser_nodes#TKwin#init */
(nitmethod_t)VIRTUAL_lexer__TKwin__init_tk, /* pointer to parser_nodes:TKwin:lexer#TKwin#init_tk */
}
};
/* allocate TKwin */
val* NEW_parser_nodes__TKwin(const struct type* type) {
val* self /* : TKwin */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwin;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwin exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwin exact> */
return self;
}
/* allocate TKwin */
void CHECK_NEW_parser_nodes__TKwin(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwin> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwin> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwin> */
}
/* runtime class parser_nodes__TKwand */
const struct class class_parser_nodes__TKwand = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwand:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwand:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwand:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwand:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwand:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwand:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwand:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwand:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwand:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwand:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwand:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwand:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwand:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwand:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwand:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwand:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwand:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwand:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwand:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwand:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwand:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwand:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwand:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwand:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwand:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwand:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwand:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwand:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwand:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwand:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwand:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwand:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwand:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwand:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwand:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwand:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwand:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwand:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwand:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwand:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwand:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwand:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwand:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwand:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwand:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwand:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwand:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwand:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwand:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwand:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwand:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwand:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwand:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwand:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwand:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwand:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwand:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwand:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwand:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwand:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwand:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwand:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwand:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwand__parser_index, /* pointer to parser_nodes:TKwand:lexer#TKwand#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwand:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwand__init, /* pointer to parser_nodes:TKwand:parser_nodes#TKwand#init */
(nitmethod_t)VIRTUAL_lexer__TKwand__init_tk, /* pointer to parser_nodes:TKwand:lexer#TKwand#init_tk */
}
};
/* allocate TKwand */
val* NEW_parser_nodes__TKwand(const struct type* type) {
val* self /* : TKwand */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwand;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwand exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwand exact> */
return self;
}
/* allocate TKwand */
void CHECK_NEW_parser_nodes__TKwand(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwand> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwand> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwand> */
}
/* runtime class parser_nodes__TKwor */
const struct class class_parser_nodes__TKwor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwor:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwor:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwor:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwor:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwor:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwor:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwor:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwor:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwor:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwor:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwor:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwor:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwor:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwor:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwor:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwor:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwor:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwor:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwor:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwor:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwor:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwor:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwor:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwor__parser_index, /* pointer to parser_nodes:TKwor:lexer#TKwor#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwor:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwor__init, /* pointer to parser_nodes:TKwor:parser_nodes#TKwor#init */
(nitmethod_t)VIRTUAL_lexer__TKwor__init_tk, /* pointer to parser_nodes:TKwor:lexer#TKwor#init_tk */
}
};
/* allocate TKwor */
val* NEW_parser_nodes__TKwor(const struct type* type) {
val* self /* : TKwor */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwor;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwor exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwor exact> */
return self;
}
/* allocate TKwor */
void CHECK_NEW_parser_nodes__TKwor(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwor> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwor> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwor> */
}
/* runtime class parser_nodes__TKwimplies */
const struct class class_parser_nodes__TKwimplies = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwimplies:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwimplies:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwimplies:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwimplies:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwimplies:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwimplies:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwimplies:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwimplies:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwimplies:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwimplies:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwimplies:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwimplies:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwimplies:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwimplies:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwimplies:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwimplies:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwimplies:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwimplies:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwimplies:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwimplies:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwimplies:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwimplies:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwimplies:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwimplies:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwimplies:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwimplies:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwimplies:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwimplies:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwimplies:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwimplies:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwimplies:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwimplies:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwimplies:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwimplies:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwimplies:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwimplies:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwimplies:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwimplies:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwimplies:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwimplies:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwimplies:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwimplies:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwimplies:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwimplies:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwimplies:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwimplies:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwimplies:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwimplies:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwimplies:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwimplies:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwimplies:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwimplies:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwimplies:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwimplies:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwimplies:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwimplies:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwimplies:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwimplies__parser_index, /* pointer to parser_nodes:TKwimplies:lexer#TKwimplies#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwimplies:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwimplies__init, /* pointer to parser_nodes:TKwimplies:parser_nodes#TKwimplies#init */
(nitmethod_t)VIRTUAL_lexer__TKwimplies__init_tk, /* pointer to parser_nodes:TKwimplies:lexer#TKwimplies#init_tk */
}
};
/* allocate TKwimplies */
val* NEW_parser_nodes__TKwimplies(const struct type* type) {
val* self /* : TKwimplies */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwimplies;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwimplies exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwimplies exact> */
return self;
}
/* allocate TKwimplies */
void CHECK_NEW_parser_nodes__TKwimplies(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwimplies> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwimplies> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwimplies> */
}
/* runtime class parser_nodes__TKwnot */
const struct class class_parser_nodes__TKwnot = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwnot:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwnot:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwnot:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwnot:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwnot:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwnot:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwnot:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwnot:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwnot:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwnot:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwnot:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwnot:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwnot:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwnot:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwnot:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwnot:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwnot:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwnot:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwnot:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwnot:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwnot:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwnot:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwnot:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwnot:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwnot:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwnot:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwnot:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwnot:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwnot:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwnot:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwnot:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwnot:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwnot:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwnot:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwnot:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwnot:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwnot:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwnot:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwnot:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwnot:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwnot:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwnot:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwnot:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwnot:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwnot:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwnot:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwnot:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwnot:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwnot:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwnot:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwnot:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwnot:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwnot:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwnot:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwnot:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwnot:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwnot:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwnot__parser_index, /* pointer to parser_nodes:TKwnot:lexer#TKwnot#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwnot:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwnot__init, /* pointer to parser_nodes:TKwnot:parser_nodes#TKwnot#init */
(nitmethod_t)VIRTUAL_lexer__TKwnot__init_tk, /* pointer to parser_nodes:TKwnot:lexer#TKwnot#init_tk */
}
};
/* allocate TKwnot */
val* NEW_parser_nodes__TKwnot(const struct type* type) {
val* self /* : TKwnot */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwnot;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwnot exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwnot exact> */
return self;
}
/* allocate TKwnot */
void CHECK_NEW_parser_nodes__TKwnot(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwnot> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwnot> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwnot> */
}
/* runtime class parser_nodes__TKwreturn */
const struct class class_parser_nodes__TKwreturn = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwreturn:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwreturn:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwreturn:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwreturn:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwreturn:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwreturn:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwreturn:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwreturn:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwreturn:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwreturn:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwreturn:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwreturn:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwreturn:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwreturn:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwreturn:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwreturn:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwreturn:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwreturn:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwreturn:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwreturn:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwreturn:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwreturn:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwreturn:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwreturn:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwreturn:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwreturn:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwreturn:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwreturn:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwreturn:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwreturn:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwreturn:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwreturn:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwreturn:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwreturn:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwreturn:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwreturn:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwreturn:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwreturn:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwreturn:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwreturn:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwreturn:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwreturn:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwreturn:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwreturn:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwreturn:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwreturn:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwreturn:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwreturn:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwreturn:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwreturn:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwreturn:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwreturn:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwreturn:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwreturn:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwreturn:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwreturn:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwreturn:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwreturn__parser_index, /* pointer to parser_nodes:TKwreturn:lexer#TKwreturn#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwreturn:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwreturn__init, /* pointer to parser_nodes:TKwreturn:parser_nodes#TKwreturn#init */
(nitmethod_t)VIRTUAL_lexer__TKwreturn__init_tk, /* pointer to parser_nodes:TKwreturn:lexer#TKwreturn#init_tk */
}
};
/* allocate TKwreturn */
val* NEW_parser_nodes__TKwreturn(const struct type* type) {
val* self /* : TKwreturn */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwreturn;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwreturn exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwreturn exact> */
return self;
}
/* allocate TKwreturn */
void CHECK_NEW_parser_nodes__TKwreturn(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwreturn> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwreturn> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwreturn> */
}
/* runtime class parser_nodes__TKwcontinue */
const struct class class_parser_nodes__TKwcontinue = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwcontinue:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwcontinue:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwcontinue:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwcontinue:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwcontinue:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwcontinue:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwcontinue:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwcontinue:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwcontinue:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwcontinue:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwcontinue:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwcontinue:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwcontinue:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwcontinue:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwcontinue:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwcontinue:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwcontinue:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwcontinue:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwcontinue:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwcontinue:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwcontinue:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwcontinue:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwcontinue:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwcontinue:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwcontinue:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwcontinue:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwcontinue:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwcontinue:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwcontinue:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwcontinue:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwcontinue:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwcontinue:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwcontinue:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwcontinue:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwcontinue:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwcontinue:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwcontinue:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwcontinue:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwcontinue:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwcontinue:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwcontinue:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwcontinue:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwcontinue:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwcontinue:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwcontinue:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwcontinue:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwcontinue:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwcontinue:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwcontinue:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwcontinue:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwcontinue:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwcontinue:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwcontinue:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwcontinue:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwcontinue:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwcontinue:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwcontinue:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwcontinue__parser_index, /* pointer to parser_nodes:TKwcontinue:lexer#TKwcontinue#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwcontinue:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwcontinue__init, /* pointer to parser_nodes:TKwcontinue:parser_nodes#TKwcontinue#init */
(nitmethod_t)VIRTUAL_lexer__TKwcontinue__init_tk, /* pointer to parser_nodes:TKwcontinue:lexer#TKwcontinue#init_tk */
}
};
/* allocate TKwcontinue */
val* NEW_parser_nodes__TKwcontinue(const struct type* type) {
val* self /* : TKwcontinue */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwcontinue;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwcontinue exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwcontinue exact> */
return self;
}
/* allocate TKwcontinue */
void CHECK_NEW_parser_nodes__TKwcontinue(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwcontinue> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwcontinue> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwcontinue> */
}
/* runtime class parser_nodes__TKwbreak */
const struct class class_parser_nodes__TKwbreak = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwbreak:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwbreak:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwbreak:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwbreak:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwbreak:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwbreak:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwbreak:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwbreak:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwbreak:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwbreak:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwbreak:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwbreak:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwbreak:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwbreak:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwbreak:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwbreak:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwbreak:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwbreak:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwbreak:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwbreak:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwbreak:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwbreak:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwbreak:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwbreak:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwbreak:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwbreak:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwbreak:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwbreak:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwbreak:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwbreak:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwbreak:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwbreak:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwbreak:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwbreak:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwbreak:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwbreak:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwbreak:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwbreak:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwbreak:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwbreak:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwbreak:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwbreak:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwbreak:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwbreak:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwbreak:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwbreak:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwbreak:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwbreak:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwbreak:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwbreak:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwbreak:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwbreak:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwbreak:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwbreak:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwbreak:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwbreak:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwbreak:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwbreak__parser_index, /* pointer to parser_nodes:TKwbreak:lexer#TKwbreak#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwbreak:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwbreak__init, /* pointer to parser_nodes:TKwbreak:parser_nodes#TKwbreak#init */
(nitmethod_t)VIRTUAL_lexer__TKwbreak__init_tk, /* pointer to parser_nodes:TKwbreak:lexer#TKwbreak#init_tk */
}
};
/* allocate TKwbreak */
val* NEW_parser_nodes__TKwbreak(const struct type* type) {
val* self /* : TKwbreak */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwbreak;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwbreak exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwbreak exact> */
return self;
}
/* allocate TKwbreak */
void CHECK_NEW_parser_nodes__TKwbreak(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwbreak> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwbreak> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwbreak> */
}
/* runtime class parser_nodes__TKwabort */
const struct class class_parser_nodes__TKwabort = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwabort:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwabort:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwabort:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwabort:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwabort:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwabort:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwabort:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwabort:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwabort:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwabort:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwabort:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwabort:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwabort:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwabort:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwabort:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwabort:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwabort:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwabort:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwabort:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwabort:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwabort:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwabort:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwabort:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwabort:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwabort:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwabort:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwabort:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwabort:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwabort:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwabort:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwabort:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwabort:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwabort:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwabort:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwabort:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwabort:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwabort:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwabort:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwabort:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwabort:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwabort:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwabort:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwabort:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwabort:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwabort:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwabort:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwabort:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwabort:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwabort:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwabort:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwabort:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwabort:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwabort:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwabort:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwabort:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwabort:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwabort:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwabort__parser_index, /* pointer to parser_nodes:TKwabort:lexer#TKwabort#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwabort:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwabort__init, /* pointer to parser_nodes:TKwabort:parser_nodes#TKwabort#init */
(nitmethod_t)VIRTUAL_lexer__TKwabort__init_tk, /* pointer to parser_nodes:TKwabort:lexer#TKwabort#init_tk */
}
};
/* allocate TKwabort */
val* NEW_parser_nodes__TKwabort(const struct type* type) {
val* self /* : TKwabort */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwabort;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwabort exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwabort exact> */
return self;
}
/* allocate TKwabort */
void CHECK_NEW_parser_nodes__TKwabort(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwabort> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwabort> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwabort> */
}
/* runtime class parser_nodes__TKwassert */
const struct class class_parser_nodes__TKwassert = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwassert:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwassert:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwassert:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwassert:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwassert:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwassert:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwassert:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwassert:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwassert:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwassert:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwassert:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwassert:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwassert:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwassert:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwassert:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwassert:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwassert:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwassert:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwassert:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwassert:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwassert:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwassert:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwassert:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwassert:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwassert:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwassert:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwassert:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwassert:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwassert:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwassert:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwassert:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwassert:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwassert:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwassert:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwassert:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwassert:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwassert:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwassert:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwassert:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwassert:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwassert:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwassert:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwassert:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwassert:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwassert:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwassert:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwassert:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwassert:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwassert:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwassert:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwassert:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwassert:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwassert:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwassert:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwassert:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwassert:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwassert:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwassert__parser_index, /* pointer to parser_nodes:TKwassert:lexer#TKwassert#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwassert:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwassert__init, /* pointer to parser_nodes:TKwassert:parser_nodes#TKwassert#init */
(nitmethod_t)VIRTUAL_lexer__TKwassert__init_tk, /* pointer to parser_nodes:TKwassert:lexer#TKwassert#init_tk */
}
};
/* allocate TKwassert */
val* NEW_parser_nodes__TKwassert(const struct type* type) {
val* self /* : TKwassert */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwassert;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwassert exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwassert exact> */
return self;
}
/* allocate TKwassert */
void CHECK_NEW_parser_nodes__TKwassert(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwassert> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwassert> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwassert> */
}
/* runtime class parser_nodes__TKwnew */
const struct class class_parser_nodes__TKwnew = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwnew:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwnew:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwnew:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwnew:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwnew:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwnew:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwnew:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwnew:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwnew:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwnew:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwnew:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwnew:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwnew:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwnew:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwnew:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwnew:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwnew:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwnew:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwnew:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwnew:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwnew:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwnew:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwnew:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwnew:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwnew:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwnew:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwnew:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwnew:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwnew:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwnew:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwnew:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwnew:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwnew:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwnew:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwnew:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwnew:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwnew:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwnew:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwnew:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwnew:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwnew:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwnew:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwnew:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwnew:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwnew:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwnew:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwnew:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwnew:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwnew:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwnew:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwnew:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwnew:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwnew:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwnew:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwnew:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwnew:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwnew:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwnew__parser_index, /* pointer to parser_nodes:TKwnew:lexer#TKwnew#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwnew:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwnew__init, /* pointer to parser_nodes:TKwnew:parser_nodes#TKwnew#init */
(nitmethod_t)VIRTUAL_lexer__TKwnew__init_tk, /* pointer to parser_nodes:TKwnew:lexer#TKwnew#init_tk */
}
};
/* allocate TKwnew */
val* NEW_parser_nodes__TKwnew(const struct type* type) {
val* self /* : TKwnew */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwnew;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwnew exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwnew exact> */
return self;
}
/* allocate TKwnew */
void CHECK_NEW_parser_nodes__TKwnew(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwnew> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwnew> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwnew> */
}
/* runtime class parser_nodes__TKwisa */
const struct class class_parser_nodes__TKwisa = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwisa:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwisa:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwisa:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwisa:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwisa:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwisa:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwisa:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwisa:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwisa:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwisa:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwisa:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwisa:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwisa:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwisa:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwisa:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwisa:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwisa:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwisa:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwisa:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwisa:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwisa:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwisa:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwisa:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwisa:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwisa:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwisa:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwisa:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwisa:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwisa:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwisa:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwisa:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwisa:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwisa:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwisa:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwisa:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwisa:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwisa:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwisa:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwisa:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwisa:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwisa:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwisa:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwisa:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwisa:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwisa:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwisa:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwisa:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwisa:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwisa:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwisa:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwisa:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwisa:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwisa:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwisa:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwisa:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwisa:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwisa:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwisa__parser_index, /* pointer to parser_nodes:TKwisa:lexer#TKwisa#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwisa:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwisa__init, /* pointer to parser_nodes:TKwisa:parser_nodes#TKwisa#init */
(nitmethod_t)VIRTUAL_lexer__TKwisa__init_tk, /* pointer to parser_nodes:TKwisa:lexer#TKwisa#init_tk */
}
};
/* allocate TKwisa */
val* NEW_parser_nodes__TKwisa(const struct type* type) {
val* self /* : TKwisa */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwisa;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwisa exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwisa exact> */
return self;
}
/* allocate TKwisa */
void CHECK_NEW_parser_nodes__TKwisa(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwisa> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwisa> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwisa> */
}
/* runtime class parser_nodes__TKwonce */
const struct class class_parser_nodes__TKwonce = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwonce:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwonce:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwonce:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwonce:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwonce:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwonce:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwonce:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwonce:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwonce:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwonce:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwonce:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwonce:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwonce:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwonce:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwonce:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwonce:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwonce:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwonce:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwonce:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwonce:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwonce:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwonce:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwonce:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwonce:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwonce:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwonce:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwonce:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwonce:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwonce:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwonce:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwonce:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwonce:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwonce:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwonce:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwonce:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwonce:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwonce:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwonce:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwonce:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwonce:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwonce:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwonce:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwonce:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwonce:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwonce:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwonce:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwonce:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwonce:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwonce:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwonce:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwonce:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwonce:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwonce:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwonce:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwonce:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwonce:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwonce:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwonce__parser_index, /* pointer to parser_nodes:TKwonce:lexer#TKwonce#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwonce:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwonce__init, /* pointer to parser_nodes:TKwonce:parser_nodes#TKwonce#init */
(nitmethod_t)VIRTUAL_lexer__TKwonce__init_tk, /* pointer to parser_nodes:TKwonce:lexer#TKwonce#init_tk */
}
};
/* allocate TKwonce */
val* NEW_parser_nodes__TKwonce(const struct type* type) {
val* self /* : TKwonce */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwonce;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwonce exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwonce exact> */
return self;
}
/* allocate TKwonce */
void CHECK_NEW_parser_nodes__TKwonce(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwonce> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwonce> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwonce> */
}
/* runtime class parser_nodes__TKwsuper */
const struct class class_parser_nodes__TKwsuper = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwsuper:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwsuper:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwsuper:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwsuper:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwsuper:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwsuper:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwsuper:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwsuper:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwsuper:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwsuper:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwsuper:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwsuper:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwsuper:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwsuper:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwsuper:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwsuper:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwsuper:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwsuper:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwsuper:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwsuper:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwsuper:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwsuper:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwsuper:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwsuper:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwsuper:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwsuper:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwsuper:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwsuper:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwsuper:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwsuper:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwsuper:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwsuper:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwsuper:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwsuper:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwsuper:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwsuper:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwsuper:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwsuper:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwsuper:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwsuper:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwsuper:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwsuper:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwsuper:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwsuper:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwsuper:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwsuper:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwsuper:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwsuper:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwsuper:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwsuper:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwsuper:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwsuper:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwsuper:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwsuper:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwsuper:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwsuper:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwsuper:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwsuper__parser_index, /* pointer to parser_nodes:TKwsuper:lexer#TKwsuper#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwsuper:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwsuper__init, /* pointer to parser_nodes:TKwsuper:parser_nodes#TKwsuper#init */
(nitmethod_t)VIRTUAL_lexer__TKwsuper__init_tk, /* pointer to parser_nodes:TKwsuper:lexer#TKwsuper#init_tk */
}
};
/* allocate TKwsuper */
val* NEW_parser_nodes__TKwsuper(const struct type* type) {
val* self /* : TKwsuper */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwsuper;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwsuper exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwsuper exact> */
return self;
}
/* allocate TKwsuper */
void CHECK_NEW_parser_nodes__TKwsuper(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwsuper> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwsuper> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwsuper> */
}
/* runtime class parser_nodes__TKwself */
const struct class class_parser_nodes__TKwself = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwself:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwself:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwself:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwself:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwself:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwself:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwself:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwself:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwself:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwself:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwself:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwself:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwself:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwself:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwself:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwself:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwself:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwself:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwself:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwself:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwself:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwself:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwself:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwself:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwself:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwself:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwself:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwself:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwself:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwself:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwself:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwself:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwself:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwself:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwself:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwself:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwself:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwself:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwself:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwself:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwself:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwself:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwself:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwself:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwself:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwself:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwself:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwself:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwself:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwself:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwself:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwself:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwself:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwself:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwself:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwself:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwself:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwself:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwself:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwself:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwself:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwself:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwself:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwself__parser_index, /* pointer to parser_nodes:TKwself:lexer#TKwself#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwself:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwself__init, /* pointer to parser_nodes:TKwself:parser_nodes#TKwself#init */
(nitmethod_t)VIRTUAL_lexer__TKwself__init_tk, /* pointer to parser_nodes:TKwself:lexer#TKwself#init_tk */
}
};
/* allocate TKwself */
val* NEW_parser_nodes__TKwself(const struct type* type) {
val* self /* : TKwself */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwself;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwself exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwself exact> */
return self;
}
/* allocate TKwself */
void CHECK_NEW_parser_nodes__TKwself(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwself> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwself> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwself> */
}
/* runtime class parser_nodes__TKwtrue */
const struct class class_parser_nodes__TKwtrue = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwtrue:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwtrue:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwtrue:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwtrue:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwtrue:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwtrue:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwtrue:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwtrue:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwtrue:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwtrue:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwtrue:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwtrue:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwtrue:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwtrue:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwtrue:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwtrue:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwtrue:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwtrue:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwtrue:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwtrue:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwtrue:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwtrue:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwtrue:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwtrue:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwtrue:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwtrue:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwtrue:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwtrue:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwtrue:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwtrue:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwtrue:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwtrue:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwtrue:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwtrue:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwtrue:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwtrue:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwtrue:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwtrue:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwtrue:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwtrue:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwtrue:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwtrue:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwtrue:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwtrue:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwtrue:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwtrue:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwtrue:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwtrue:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwtrue:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwtrue:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwtrue:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwtrue:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwtrue:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwtrue:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwtrue:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwtrue:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwtrue:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwtrue__parser_index, /* pointer to parser_nodes:TKwtrue:lexer#TKwtrue#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwtrue:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwtrue__init, /* pointer to parser_nodes:TKwtrue:parser_nodes#TKwtrue#init */
(nitmethod_t)VIRTUAL_lexer__TKwtrue__init_tk, /* pointer to parser_nodes:TKwtrue:lexer#TKwtrue#init_tk */
}
};
/* allocate TKwtrue */
val* NEW_parser_nodes__TKwtrue(const struct type* type) {
val* self /* : TKwtrue */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwtrue;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwtrue exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwtrue exact> */
return self;
}
/* allocate TKwtrue */
void CHECK_NEW_parser_nodes__TKwtrue(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwtrue> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwtrue> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwtrue> */
}
/* runtime class parser_nodes__TKwfalse */
const struct class class_parser_nodes__TKwfalse = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwfalse:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwfalse:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwfalse:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwfalse:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwfalse:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwfalse:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwfalse:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwfalse:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwfalse:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwfalse:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwfalse:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwfalse:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwfalse:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwfalse:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwfalse:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwfalse:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwfalse:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwfalse:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwfalse:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwfalse:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwfalse:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwfalse:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwfalse:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwfalse:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwfalse:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwfalse:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwfalse:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwfalse:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwfalse:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwfalse:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwfalse:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwfalse:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwfalse:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwfalse:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwfalse:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwfalse:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwfalse:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwfalse:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwfalse:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwfalse:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwfalse:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwfalse:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwfalse:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwfalse:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwfalse:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwfalse:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwfalse:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwfalse:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwfalse:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwfalse:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwfalse:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwfalse:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwfalse:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwfalse:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwfalse:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwfalse:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwfalse:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwfalse__parser_index, /* pointer to parser_nodes:TKwfalse:lexer#TKwfalse#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwfalse:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwfalse__init, /* pointer to parser_nodes:TKwfalse:parser_nodes#TKwfalse#init */
(nitmethod_t)VIRTUAL_lexer__TKwfalse__init_tk, /* pointer to parser_nodes:TKwfalse:lexer#TKwfalse#init_tk */
}
};
/* allocate TKwfalse */
val* NEW_parser_nodes__TKwfalse(const struct type* type) {
val* self /* : TKwfalse */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwfalse;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwfalse exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwfalse exact> */
return self;
}
/* allocate TKwfalse */
void CHECK_NEW_parser_nodes__TKwfalse(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwfalse> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwfalse> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwfalse> */
}
/* runtime class parser_nodes__TKwnull */
const struct class class_parser_nodes__TKwnull = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwnull:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwnull:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwnull:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwnull:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwnull:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwnull:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwnull:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwnull:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwnull:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwnull:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwnull:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwnull:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwnull:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwnull:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwnull:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwnull:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwnull:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwnull:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwnull:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwnull:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwnull:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwnull:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwnull:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwnull:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwnull:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwnull:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwnull:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwnull:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwnull:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwnull:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwnull:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwnull:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwnull:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwnull:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwnull:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwnull:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwnull:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwnull:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwnull:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwnull:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwnull:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwnull:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwnull:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwnull:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwnull:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwnull:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwnull:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwnull:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwnull:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwnull:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwnull:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwnull:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwnull:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwnull:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwnull:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwnull:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwnull:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwnull__parser_index, /* pointer to parser_nodes:TKwnull:lexer#TKwnull#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwnull:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwnull__init, /* pointer to parser_nodes:TKwnull:parser_nodes#TKwnull#init */
(nitmethod_t)VIRTUAL_lexer__TKwnull__init_tk, /* pointer to parser_nodes:TKwnull:lexer#TKwnull#init_tk */
}
};
/* allocate TKwnull */
val* NEW_parser_nodes__TKwnull(const struct type* type) {
val* self /* : TKwnull */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwnull;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwnull exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwnull exact> */
return self;
}
/* allocate TKwnull */
void CHECK_NEW_parser_nodes__TKwnull(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwnull> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwnull> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwnull> */
}
/* runtime class parser_nodes__TKwas */
const struct class class_parser_nodes__TKwas = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwas:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwas:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwas:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwas:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwas:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwas:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwas:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwas:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwas:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwas:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwas:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwas:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwas:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwas:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwas:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwas:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwas:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwas:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwas:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwas:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwas:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwas:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwas:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwas:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwas:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwas:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwas:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwas:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwas:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwas:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwas:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwas:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwas:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwas:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwas:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwas:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwas:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwas:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwas:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwas:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwas:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwas:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwas:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwas:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwas:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwas:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwas:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwas:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwas:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwas:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwas:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwas:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwas:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwas:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwas:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwas:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwas:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwas:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwas:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwas:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwas:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwas:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwas:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwas__parser_index, /* pointer to parser_nodes:TKwas:lexer#TKwas#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwas:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwas__init, /* pointer to parser_nodes:TKwas:parser_nodes#TKwas#init */
(nitmethod_t)VIRTUAL_lexer__TKwas__init_tk, /* pointer to parser_nodes:TKwas:lexer#TKwas#init_tk */
}
};
/* allocate TKwas */
val* NEW_parser_nodes__TKwas(const struct type* type) {
val* self /* : TKwas */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwas;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwas exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwas exact> */
return self;
}
/* allocate TKwas */
void CHECK_NEW_parser_nodes__TKwas(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwas> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwas> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwas> */
}
/* runtime class parser_nodes__TKwnullable */
const struct class class_parser_nodes__TKwnullable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwnullable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwnullable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwnullable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwnullable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwnullable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwnullable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwnullable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwnullable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwnullable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwnullable:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwnullable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwnullable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwnullable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwnullable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwnullable:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwnullable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwnullable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwnullable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwnullable:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwnullable:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwnullable:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwnullable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwnullable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwnullable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwnullable:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwnullable:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwnullable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwnullable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwnullable:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwnullable:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwnullable:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwnullable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwnullable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwnullable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwnullable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwnullable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwnullable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwnullable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwnullable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwnullable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwnullable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwnullable:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwnullable:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwnullable:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwnullable:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwnullable:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwnullable:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwnullable:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwnullable:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwnullable:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwnullable:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwnullable:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwnullable:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwnullable:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwnullable:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwnullable:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwnullable:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwnullable__parser_index, /* pointer to parser_nodes:TKwnullable:lexer#TKwnullable#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwnullable:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwnullable__init, /* pointer to parser_nodes:TKwnullable:parser_nodes#TKwnullable#init */
(nitmethod_t)VIRTUAL_lexer__TKwnullable__init_tk, /* pointer to parser_nodes:TKwnullable:lexer#TKwnullable#init_tk */
}
};
/* allocate TKwnullable */
val* NEW_parser_nodes__TKwnullable(const struct type* type) {
val* self /* : TKwnullable */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwnullable;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwnullable exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwnullable exact> */
return self;
}
/* allocate TKwnullable */
void CHECK_NEW_parser_nodes__TKwnullable(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwnullable> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwnullable> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwnullable> */
}
/* runtime class parser_nodes__TKwisset */
const struct class class_parser_nodes__TKwisset = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwisset:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwisset:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwisset:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwisset:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwisset:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwisset:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwisset:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwisset:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwisset:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwisset:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwisset:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwisset:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwisset:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwisset:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwisset:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwisset:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwisset:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwisset:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwisset:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwisset:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwisset:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwisset:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwisset:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwisset:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwisset:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwisset:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwisset:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwisset:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwisset:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwisset:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwisset:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwisset:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwisset:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwisset:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwisset:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwisset:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwisset:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwisset:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwisset:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwisset:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwisset:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwisset:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwisset:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwisset:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwisset:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwisset:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwisset:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwisset:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwisset:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwisset:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwisset:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwisset:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwisset:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwisset:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwisset:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwisset:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwisset:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwisset__parser_index, /* pointer to parser_nodes:TKwisset:lexer#TKwisset#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwisset:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwisset__init, /* pointer to parser_nodes:TKwisset:parser_nodes#TKwisset#init */
(nitmethod_t)VIRTUAL_lexer__TKwisset__init_tk, /* pointer to parser_nodes:TKwisset:lexer#TKwisset#init_tk */
}
};
/* allocate TKwisset */
val* NEW_parser_nodes__TKwisset(const struct type* type) {
val* self /* : TKwisset */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwisset;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwisset exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwisset exact> */
return self;
}
/* allocate TKwisset */
void CHECK_NEW_parser_nodes__TKwisset(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwisset> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwisset> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwisset> */
}
/* runtime class parser_nodes__TKwlabel */
const struct class class_parser_nodes__TKwlabel = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwlabel:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwlabel:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwlabel:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwlabel:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwlabel:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwlabel:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwlabel:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwlabel:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwlabel:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__to_s, /* pointer to parser_nodes:TKwlabel:parser_nodes#TokenKeyword#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwlabel:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwlabel:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwlabel:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwlabel:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwlabel:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwlabel:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwlabel:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwlabel:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwlabel:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwlabel:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwlabel:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwlabel:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwlabel:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwlabel:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwlabel:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwlabel:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwlabel:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwlabel:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwlabel:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwlabel:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwlabel:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwlabel:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwlabel:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwlabel:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwlabel:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwlabel:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwlabel:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwlabel:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwlabel:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwlabel:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwlabel:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwlabel:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwlabel:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwlabel:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwlabel:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwlabel:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwlabel:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwlabel:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwlabel:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwlabel:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwlabel:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwlabel:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwlabel:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwlabel:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwlabel:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwlabel:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwlabel:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwlabel__parser_index, /* pointer to parser_nodes:TKwlabel:lexer#TKwlabel#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenKeyword__init, /* pointer to parser_nodes:TKwlabel:parser_nodes#TokenKeyword#init */
(nitmethod_t)VIRTUAL_parser_nodes__TKwlabel__init, /* pointer to parser_nodes:TKwlabel:parser_nodes#TKwlabel#init */
(nitmethod_t)VIRTUAL_lexer__TKwlabel__init_tk, /* pointer to parser_nodes:TKwlabel:lexer#TKwlabel#init_tk */
}
};
/* allocate TKwlabel */
val* NEW_parser_nodes__TKwlabel(const struct type* type) {
val* self /* : TKwlabel */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwlabel;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwlabel exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwlabel exact> */
return self;
}
/* allocate TKwlabel */
void CHECK_NEW_parser_nodes__TKwlabel(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwlabel> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwlabel> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwlabel> */
}
/* runtime class parser_nodes__TKwdebug */
const struct class class_parser_nodes__TKwdebug = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TKwdebug:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TKwdebug:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TKwdebug:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TKwdebug:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TKwdebug:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TKwdebug:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TKwdebug:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TKwdebug:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TKwdebug:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TKwdebug:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TKwdebug:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TKwdebug:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TKwdebug:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TKwdebug:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TKwdebug:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TKwdebug:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TKwdebug:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TKwdebug:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TKwdebug:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TKwdebug:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TKwdebug:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TKwdebug:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TKwdebug:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TKwdebug:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TKwdebug:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TKwdebug:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TKwdebug:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TKwdebug:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TKwdebug:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TKwdebug:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TKwdebug:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TKwdebug:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TKwdebug:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TKwdebug:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TKwdebug:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TKwdebug:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TKwdebug:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TKwdebug:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TKwdebug:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TKwdebug:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TKwdebug:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TKwdebug:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TKwdebug:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TKwdebug:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TKwdebug:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TKwdebug:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TKwdebug:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TKwdebug:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TKwdebug:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TKwdebug:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TKwdebug:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TKwdebug:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TKwdebug:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TKwdebug:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TKwdebug:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TKwdebug:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TKwdebug__parser_index, /* pointer to parser_nodes:TKwdebug:lexer#TKwdebug#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TKwdebug__init, /* pointer to parser_nodes:TKwdebug:parser_nodes#TKwdebug#init */
(nitmethod_t)VIRTUAL_lexer__TKwdebug__init_tk, /* pointer to parser_nodes:TKwdebug:lexer#TKwdebug#init_tk */
}
};
/* allocate TKwdebug */
val* NEW_parser_nodes__TKwdebug(const struct type* type) {
val* self /* : TKwdebug */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TKwdebug;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TKwdebug exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TKwdebug exact> */
return self;
}
/* allocate TKwdebug */
void CHECK_NEW_parser_nodes__TKwdebug(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TKwdebug> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TKwdebug> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TKwdebug> */
}
/* runtime class parser_nodes__TOpar */
const struct class class_parser_nodes__TOpar = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TOpar:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TOpar:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TOpar:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TOpar:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TOpar:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TOpar:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TOpar:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TOpar:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TOpar:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TOpar:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TOpar:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TOpar:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TOpar:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TOpar:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TOpar:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TOpar:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TOpar:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TOpar:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TOpar:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TOpar:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TOpar:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TOpar:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TOpar:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TOpar:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TOpar:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TOpar:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TOpar:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TOpar:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TOpar:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TOpar:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TOpar:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TOpar:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TOpar:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TOpar:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TOpar:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TOpar:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TOpar:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TOpar:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TOpar:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TOpar:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TOpar:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TOpar:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TOpar:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TOpar:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TOpar:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TOpar:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TOpar:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TOpar:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TOpar:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TOpar:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TOpar:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TOpar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TOpar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TOpar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TOpar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TOpar:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TOpar:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TOpar:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TOpar:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TOpar:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TOpar:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TOpar:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TOpar:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TOpar__parser_index, /* pointer to parser_nodes:TOpar:lexer#TOpar#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TOpar__init, /* pointer to parser_nodes:TOpar:parser_nodes#TOpar#init */
(nitmethod_t)VIRTUAL_lexer__TOpar__init_tk, /* pointer to parser_nodes:TOpar:lexer#TOpar#init_tk */
}
};
/* allocate TOpar */
val* NEW_parser_nodes__TOpar(const struct type* type) {
val* self /* : TOpar */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TOpar;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TOpar exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TOpar exact> */
return self;
}
/* allocate TOpar */
void CHECK_NEW_parser_nodes__TOpar(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TOpar> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TOpar> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TOpar> */
}
/* runtime class parser_nodes__TCpar */
const struct class class_parser_nodes__TCpar = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TCpar:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TCpar:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TCpar:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TCpar:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TCpar:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TCpar:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TCpar:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TCpar:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TCpar:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TCpar:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TCpar:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TCpar:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TCpar:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TCpar:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TCpar:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TCpar:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TCpar:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TCpar:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TCpar:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TCpar:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TCpar:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TCpar:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TCpar:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TCpar:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TCpar:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TCpar:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TCpar:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TCpar:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TCpar:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TCpar:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TCpar:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TCpar:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TCpar:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TCpar:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TCpar:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TCpar:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TCpar:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TCpar:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TCpar:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TCpar:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TCpar:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TCpar:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TCpar:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TCpar:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TCpar:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TCpar:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TCpar:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TCpar:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TCpar:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TCpar:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TCpar:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TCpar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TCpar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TCpar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TCpar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TCpar:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TCpar:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TCpar:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TCpar:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TCpar:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TCpar:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TCpar:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TCpar:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TCpar__parser_index, /* pointer to parser_nodes:TCpar:lexer#TCpar#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TCpar__init, /* pointer to parser_nodes:TCpar:parser_nodes#TCpar#init */
(nitmethod_t)VIRTUAL_lexer__TCpar__init_tk, /* pointer to parser_nodes:TCpar:lexer#TCpar#init_tk */
}
};
/* allocate TCpar */
val* NEW_parser_nodes__TCpar(const struct type* type) {
val* self /* : TCpar */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TCpar;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TCpar exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TCpar exact> */
return self;
}
/* allocate TCpar */
void CHECK_NEW_parser_nodes__TCpar(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TCpar> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TCpar> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TCpar> */
}
/* runtime class parser_nodes__TObra */
const struct class class_parser_nodes__TObra = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TObra:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TObra:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TObra:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TObra:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TObra:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TObra:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TObra:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TObra:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TObra:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TObra:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TObra:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TObra:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TObra:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TObra:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TObra:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TObra:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TObra:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TObra:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TObra:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TObra:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TObra:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TObra:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TObra:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TObra:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TObra:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TObra:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TObra:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TObra:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TObra:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TObra:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TObra:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TObra:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TObra:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TObra:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TObra:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TObra:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TObra:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TObra:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TObra:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TObra:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TObra:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TObra:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TObra:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TObra:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TObra:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TObra:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TObra:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TObra:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TObra:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TObra:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TObra:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TObra:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TObra:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TObra:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TObra:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TObra:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TObra:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TObra:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TObra:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TObra:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TObra:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TObra:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TObra:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TObra:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TObra:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TObra:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TObra:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TObra:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TObra:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TObra:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TObra__parser_index, /* pointer to parser_nodes:TObra:lexer#TObra#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TObra__init, /* pointer to parser_nodes:TObra:parser_nodes#TObra#init */
(nitmethod_t)VIRTUAL_lexer__TObra__init_tk, /* pointer to parser_nodes:TObra:lexer#TObra#init_tk */
}
};
/* allocate TObra */
val* NEW_parser_nodes__TObra(const struct type* type) {
val* self /* : TObra */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TObra;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TObra exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TObra exact> */
return self;
}
/* allocate TObra */
void CHECK_NEW_parser_nodes__TObra(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TObra> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TObra> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TObra> */
}
/* runtime class parser_nodes__TCbra */
const struct class class_parser_nodes__TCbra = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TCbra:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TCbra:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TCbra:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TCbra:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TCbra:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TCbra:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TCbra:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TCbra:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TCbra:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TCbra:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TCbra:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TCbra:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TCbra:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TCbra:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TCbra:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TCbra:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TCbra:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TCbra:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TCbra:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TCbra:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TCbra:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TCbra:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TCbra:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TCbra:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TCbra:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TCbra:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TCbra:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TCbra:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TCbra:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TCbra:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TCbra:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TCbra:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TCbra:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TCbra:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TCbra:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TCbra:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TCbra:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TCbra:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TCbra:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TCbra:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TCbra:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TCbra:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TCbra:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TCbra:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TCbra:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TCbra:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TCbra:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TCbra:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TCbra:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TCbra:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TCbra:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TCbra:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TCbra:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TCbra:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TCbra:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TCbra:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TCbra:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TCbra:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TCbra:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TCbra:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TCbra:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TCbra:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TCbra:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TCbra__parser_index, /* pointer to parser_nodes:TCbra:lexer#TCbra#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TCbra__init, /* pointer to parser_nodes:TCbra:parser_nodes#TCbra#init */
(nitmethod_t)VIRTUAL_lexer__TCbra__init_tk, /* pointer to parser_nodes:TCbra:lexer#TCbra#init_tk */
}
};
/* allocate TCbra */
val* NEW_parser_nodes__TCbra(const struct type* type) {
val* self /* : TCbra */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TCbra;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TCbra exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TCbra exact> */
return self;
}
/* allocate TCbra */
void CHECK_NEW_parser_nodes__TCbra(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TCbra> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TCbra> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TCbra> */
}
/* runtime class parser_nodes__TComma */
const struct class class_parser_nodes__TComma = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TComma:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TComma:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TComma:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TComma:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TComma:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TComma:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TComma:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TComma:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TComma:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TComma:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TComma:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TComma:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TComma:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TComma:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TComma:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TComma:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TComma:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TComma:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TComma:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TComma:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TComma:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TComma:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TComma:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TComma:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TComma:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TComma:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TComma:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TComma:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TComma:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TComma:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TComma:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TComma:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TComma:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TComma:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TComma:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TComma:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TComma:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TComma:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TComma:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TComma:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TComma:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TComma:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TComma:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TComma:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TComma:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TComma:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TComma:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TComma:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TComma:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TComma:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TComma:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TComma:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TComma:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TComma:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TComma:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TComma:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TComma:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TComma:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TComma:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TComma:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TComma:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TComma:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TComma:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TComma:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TComma:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TComma:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TComma:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TComma:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TComma:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TComma:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TComma__parser_index, /* pointer to parser_nodes:TComma:lexer#TComma#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TComma__init, /* pointer to parser_nodes:TComma:parser_nodes#TComma#init */
(nitmethod_t)VIRTUAL_lexer__TComma__init_tk, /* pointer to parser_nodes:TComma:lexer#TComma#init_tk */
}
};
/* allocate TComma */
val* NEW_parser_nodes__TComma(const struct type* type) {
val* self /* : TComma */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TComma;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TComma exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TComma exact> */
return self;
}
/* allocate TComma */
void CHECK_NEW_parser_nodes__TComma(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TComma> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TComma> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TComma> */
}
/* runtime class parser_nodes__TColumn */
const struct class class_parser_nodes__TColumn = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TColumn:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TColumn:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TColumn:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TColumn:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TColumn:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TColumn:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TColumn:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TColumn:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TColumn:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TColumn:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TColumn:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TColumn:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TColumn:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TColumn:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TColumn:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TColumn:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TColumn:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TColumn:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TColumn:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TColumn:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TColumn:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TColumn:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TColumn:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TColumn:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TColumn:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TColumn:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TColumn:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TColumn:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TColumn:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TColumn:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TColumn:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TColumn:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TColumn:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TColumn:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TColumn:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TColumn:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TColumn:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TColumn:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TColumn:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TColumn:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TColumn:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TColumn:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TColumn:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TColumn:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TColumn:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TColumn:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TColumn:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TColumn:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TColumn:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TColumn:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TColumn:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TColumn:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TColumn:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TColumn:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TColumn:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TColumn:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TColumn:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TColumn:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TColumn:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TColumn:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TColumn:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TColumn:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TColumn:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TColumn__parser_index, /* pointer to parser_nodes:TColumn:lexer#TColumn#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TColumn__init, /* pointer to parser_nodes:TColumn:parser_nodes#TColumn#init */
(nitmethod_t)VIRTUAL_lexer__TColumn__init_tk, /* pointer to parser_nodes:TColumn:lexer#TColumn#init_tk */
}
};
/* allocate TColumn */
val* NEW_parser_nodes__TColumn(const struct type* type) {
val* self /* : TColumn */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TColumn;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TColumn exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TColumn exact> */
return self;
}
/* allocate TColumn */
void CHECK_NEW_parser_nodes__TColumn(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TColumn> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TColumn> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TColumn> */
}
/* runtime class parser_nodes__TQuad */
const struct class class_parser_nodes__TQuad = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TQuad:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TQuad:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TQuad:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TQuad:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TQuad:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TQuad:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TQuad:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TQuad:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TQuad:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TQuad:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TQuad:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TQuad:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TQuad:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TQuad:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TQuad:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TQuad:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TQuad:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TQuad:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TQuad:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TQuad:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TQuad:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TQuad:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TQuad:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TQuad:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TQuad:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TQuad:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TQuad:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TQuad:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TQuad:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TQuad:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TQuad:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TQuad:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TQuad:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TQuad:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TQuad:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TQuad:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TQuad:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TQuad:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TQuad:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TQuad:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TQuad:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TQuad:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TQuad:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TQuad:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TQuad:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TQuad:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TQuad:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TQuad:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TQuad:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TQuad:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TQuad:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TQuad:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TQuad:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TQuad:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TQuad:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TQuad:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TQuad:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TQuad:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TQuad:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TQuad:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TQuad:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TQuad:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TQuad:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TQuad__parser_index, /* pointer to parser_nodes:TQuad:lexer#TQuad#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TQuad__init, /* pointer to parser_nodes:TQuad:parser_nodes#TQuad#init */
(nitmethod_t)VIRTUAL_lexer__TQuad__init_tk, /* pointer to parser_nodes:TQuad:lexer#TQuad#init_tk */
}
};
/* allocate TQuad */
val* NEW_parser_nodes__TQuad(const struct type* type) {
val* self /* : TQuad */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TQuad;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TQuad exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TQuad exact> */
return self;
}
/* allocate TQuad */
void CHECK_NEW_parser_nodes__TQuad(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TQuad> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TQuad> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TQuad> */
}
/* runtime class parser_nodes__TAssign */
const struct class class_parser_nodes__TAssign = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TAssign:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TAssign:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TAssign:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TAssign:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TAssign:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TAssign:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TAssign:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TAssign:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TAssign:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TAssign:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TAssign:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TAssign:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TAssign:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TAssign:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TAssign:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TAssign:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TAssign:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TAssign:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TAssign:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TAssign:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TAssign:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TAssign:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TAssign:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TAssign:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TAssign:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TAssign:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TAssign:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TAssign:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TAssign:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TAssign:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TAssign:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TAssign:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TAssign:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TAssign:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TAssign:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TAssign:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TAssign:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TAssign:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TAssign:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TAssign:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TAssign:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TAssign:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TAssign:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TAssign:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TAssign:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TAssign:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TAssign:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TAssign:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TAssign:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TAssign:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TAssign:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TAssign:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TAssign:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TAssign:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TAssign:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TAssign:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TAssign:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TAssign:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TAssign:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TAssign:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TAssign:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TAssign:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TAssign:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TAssign__parser_index, /* pointer to parser_nodes:TAssign:lexer#TAssign#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TAssign__init, /* pointer to parser_nodes:TAssign:parser_nodes#TAssign#init */
(nitmethod_t)VIRTUAL_lexer__TAssign__init_tk, /* pointer to parser_nodes:TAssign:lexer#TAssign#init_tk */
}
};
/* allocate TAssign */
val* NEW_parser_nodes__TAssign(const struct type* type) {
val* self /* : TAssign */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TAssign;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TAssign exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TAssign exact> */
return self;
}
/* allocate TAssign */
void CHECK_NEW_parser_nodes__TAssign(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TAssign> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TAssign> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TAssign> */
}
/* runtime class parser_nodes__TPluseq */
const struct class class_parser_nodes__TPluseq = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TPluseq:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TPluseq:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TPluseq:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TPluseq:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TPluseq:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TPluseq:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TPluseq:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TPluseq:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TPluseq:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TPluseq:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TPluseq:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TPluseq:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TPluseq:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TPluseq:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TPluseq:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TPluseq:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TPluseq:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TPluseq:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TPluseq:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TPluseq:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TPluseq:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TPluseq:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TPluseq:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TPluseq:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TPluseq:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TPluseq:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TPluseq:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TPluseq:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TPluseq:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TPluseq:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TPluseq:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TPluseq:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TPluseq:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TPluseq:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TPluseq:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TPluseq:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TPluseq:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TPluseq:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TPluseq:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TPluseq:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TPluseq:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TPluseq:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TPluseq:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TPluseq:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TPluseq:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TPluseq:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TPluseq:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TPluseq:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TPluseq:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TPluseq:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TPluseq:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TPluseq:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TPluseq:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TPluseq:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TPluseq:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TPluseq:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TPluseq:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TPluseq__parser_index, /* pointer to parser_nodes:TPluseq:lexer#TPluseq#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TPluseq:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TPluseq__init, /* pointer to parser_nodes:TPluseq:parser_nodes#TPluseq#init */
(nitmethod_t)VIRTUAL_lexer__TPluseq__init_tk, /* pointer to parser_nodes:TPluseq:lexer#TPluseq#init_tk */
}
};
/* allocate TPluseq */
val* NEW_parser_nodes__TPluseq(const struct type* type) {
val* self /* : TPluseq */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TPluseq;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TPluseq exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TPluseq exact> */
return self;
}
/* allocate TPluseq */
void CHECK_NEW_parser_nodes__TPluseq(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TPluseq> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TPluseq> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TPluseq> */
}
/* runtime class parser_nodes__TMinuseq */
const struct class class_parser_nodes__TMinuseq = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TMinuseq:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TMinuseq:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TMinuseq:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TMinuseq:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TMinuseq:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TMinuseq:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TMinuseq:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TMinuseq:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TMinuseq:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TMinuseq:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TMinuseq:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TMinuseq:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TMinuseq:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TMinuseq:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TMinuseq:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TMinuseq:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TMinuseq:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TMinuseq:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TMinuseq:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TMinuseq:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TMinuseq:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TMinuseq:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TMinuseq:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TMinuseq:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TMinuseq:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TMinuseq:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TMinuseq:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TMinuseq:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TMinuseq:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TMinuseq:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TMinuseq:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TMinuseq:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TMinuseq:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TMinuseq:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TMinuseq:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TMinuseq:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TMinuseq:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TMinuseq:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TMinuseq:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TMinuseq:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TMinuseq:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TMinuseq:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TMinuseq:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TMinuseq:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TMinuseq:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TMinuseq:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TMinuseq:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TMinuseq:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TMinuseq:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TMinuseq:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TMinuseq:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TMinuseq:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TMinuseq:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TMinuseq:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TMinuseq:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TMinuseq:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TMinuseq:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TMinuseq__parser_index, /* pointer to parser_nodes:TMinuseq:lexer#TMinuseq#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TMinuseq:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TMinuseq__init, /* pointer to parser_nodes:TMinuseq:parser_nodes#TMinuseq#init */
(nitmethod_t)VIRTUAL_lexer__TMinuseq__init_tk, /* pointer to parser_nodes:TMinuseq:lexer#TMinuseq#init_tk */
}
};
/* allocate TMinuseq */
val* NEW_parser_nodes__TMinuseq(const struct type* type) {
val* self /* : TMinuseq */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TMinuseq;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TMinuseq exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TMinuseq exact> */
return self;
}
/* allocate TMinuseq */
void CHECK_NEW_parser_nodes__TMinuseq(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TMinuseq> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TMinuseq> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TMinuseq> */
}
/* runtime class parser_nodes__TDotdotdot */
const struct class class_parser_nodes__TDotdotdot = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TDotdotdot:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TDotdotdot:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TDotdotdot:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TDotdotdot:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TDotdotdot:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TDotdotdot:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TDotdotdot:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TDotdotdot:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TDotdotdot:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TDotdotdot:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TDotdotdot:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TDotdotdot:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TDotdotdot:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TDotdotdot:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TDotdotdot:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TDotdotdot:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TDotdotdot:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TDotdotdot:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TDotdotdot:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TDotdotdot:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TDotdotdot:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TDotdotdot:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TDotdotdot:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TDotdotdot:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TDotdotdot:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TDotdotdot:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TDotdotdot:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TDotdotdot:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TDotdotdot:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TDotdotdot:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TDotdotdot:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TDotdotdot:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TDotdotdot:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TDotdotdot:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TDotdotdot:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TDotdotdot:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TDotdotdot:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TDotdotdot:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TDotdotdot:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TDotdotdot:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TDotdotdot:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TDotdotdot:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TDotdotdot:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TDotdotdot:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TDotdotdot:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TDotdotdot:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TDotdotdot:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TDotdotdot:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TDotdotdot:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TDotdotdot:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TDotdotdot:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TDotdotdot:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TDotdotdot:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TDotdotdot:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TDotdotdot:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TDotdotdot:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TDotdotdot:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TDotdotdot__parser_index, /* pointer to parser_nodes:TDotdotdot:lexer#TDotdotdot#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TDotdotdot:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TDotdotdot__init, /* pointer to parser_nodes:TDotdotdot:parser_nodes#TDotdotdot#init */
(nitmethod_t)VIRTUAL_lexer__TDotdotdot__init_tk, /* pointer to parser_nodes:TDotdotdot:lexer#TDotdotdot#init_tk */
}
};
/* allocate TDotdotdot */
val* NEW_parser_nodes__TDotdotdot(const struct type* type) {
val* self /* : TDotdotdot */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TDotdotdot;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TDotdotdot exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TDotdotdot exact> */
return self;
}
/* allocate TDotdotdot */
void CHECK_NEW_parser_nodes__TDotdotdot(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TDotdotdot> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TDotdotdot> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TDotdotdot> */
}
/* runtime class parser_nodes__TDotdot */
const struct class class_parser_nodes__TDotdot = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TDotdot:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TDotdot:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TDotdot:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TDotdot:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TDotdot:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TDotdot:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TDotdot:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TDotdot:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TDotdot:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TDotdot:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TDotdot:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TDotdot:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TDotdot:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TDotdot:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TDotdot:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TDotdot:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TDotdot:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TDotdot:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TDotdot:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TDotdot:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TDotdot:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TDotdot:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TDotdot:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TDotdot:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TDotdot:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TDotdot:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TDotdot:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TDotdot:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TDotdot:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TDotdot:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TDotdot:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TDotdot:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TDotdot:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TDotdot:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TDotdot:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TDotdot:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TDotdot:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TDotdot:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TDotdot:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TDotdot:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TDotdot:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TDotdot:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TDotdot:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TDotdot:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TDotdot:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TDotdot:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TDotdot:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TDotdot:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TDotdot:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TDotdot:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TDotdot:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TDotdot:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TDotdot:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TDotdot:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TDotdot:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TDotdot:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TDotdot:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TDotdot__parser_index, /* pointer to parser_nodes:TDotdot:lexer#TDotdot#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TDotdot:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TDotdot__init, /* pointer to parser_nodes:TDotdot:parser_nodes#TDotdot#init */
(nitmethod_t)VIRTUAL_lexer__TDotdot__init_tk, /* pointer to parser_nodes:TDotdot:lexer#TDotdot#init_tk */
}
};
/* allocate TDotdot */
val* NEW_parser_nodes__TDotdot(const struct type* type) {
val* self /* : TDotdot */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TDotdot;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TDotdot exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TDotdot exact> */
return self;
}
/* allocate TDotdot */
void CHECK_NEW_parser_nodes__TDotdot(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TDotdot> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TDotdot> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TDotdot> */
}
/* runtime class parser_nodes__TDot */
const struct class class_parser_nodes__TDot = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TDot:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TDot:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TDot:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TDot:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TDot:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TDot:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TDot:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TDot:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TDot:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TDot:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TDot:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TDot:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TDot:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TDot:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TDot:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TDot:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TDot:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TDot:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TDot:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TDot:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TDot:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TDot:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TDot:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TDot:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TDot:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TDot:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TDot:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TDot:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TDot:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TDot:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TDot:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TDot:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TDot:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TDot:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TDot:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TDot:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TDot:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TDot:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TDot:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TDot:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TDot:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TDot:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TDot:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TDot:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TDot:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TDot:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TDot:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TDot:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TDot:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TDot:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TDot:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TDot:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TDot:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TDot:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TDot:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TDot:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TDot:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TDot:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TDot:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TDot:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TDot:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TDot:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TDot:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TDot:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TDot:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TDot:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TDot:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TDot:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TDot:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TDot:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TDot__parser_index, /* pointer to parser_nodes:TDot:lexer#TDot#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TDot:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TDot__init, /* pointer to parser_nodes:TDot:parser_nodes#TDot#init */
(nitmethod_t)VIRTUAL_lexer__TDot__init_tk, /* pointer to parser_nodes:TDot:lexer#TDot#init_tk */
}
};
/* allocate TDot */
val* NEW_parser_nodes__TDot(const struct type* type) {
val* self /* : TDot */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TDot;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TDot exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TDot exact> */
return self;
}
/* allocate TDot */
void CHECK_NEW_parser_nodes__TDot(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TDot> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TDot> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TDot> */
}
/* runtime class parser_nodes__TPlus */
const struct class class_parser_nodes__TPlus = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TPlus:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TPlus:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TPlus:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TPlus:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TPlus:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TPlus:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TPlus:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TPlus:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TPlus:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TPlus:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TPlus:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TPlus:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TPlus:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TPlus:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TPlus:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TPlus:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TPlus:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TPlus:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TPlus:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TPlus:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TPlus:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TPlus:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TPlus:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TPlus:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TPlus:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TPlus:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TPlus:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TPlus:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TPlus:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TPlus:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TPlus:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TPlus:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TPlus:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TPlus:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TPlus:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TPlus:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TPlus:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TPlus:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TPlus:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TPlus:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TPlus:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TPlus:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TPlus:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TPlus:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TPlus:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TPlus:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TPlus:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TPlus:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TPlus:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TPlus:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TPlus:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TPlus:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TPlus:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TPlus:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TPlus:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TPlus:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TPlus:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TPlus:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TPlus:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TPlus:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TPlus:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TPlus:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TPlus:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TPlus__parser_index, /* pointer to parser_nodes:TPlus:lexer#TPlus#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TPlus:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TPlus__init, /* pointer to parser_nodes:TPlus:parser_nodes#TPlus#init */
(nitmethod_t)VIRTUAL_lexer__TPlus__init_tk, /* pointer to parser_nodes:TPlus:lexer#TPlus#init_tk */
}
};
/* allocate TPlus */
val* NEW_parser_nodes__TPlus(const struct type* type) {
val* self /* : TPlus */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TPlus;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TPlus exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TPlus exact> */
return self;
}
/* allocate TPlus */
void CHECK_NEW_parser_nodes__TPlus(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TPlus> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TPlus> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TPlus> */
}
/* runtime class parser_nodes__TMinus */
const struct class class_parser_nodes__TMinus = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TMinus:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TMinus:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TMinus:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TMinus:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TMinus:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TMinus:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TMinus:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TMinus:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TMinus:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TMinus:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TMinus:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TMinus:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TMinus:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TMinus:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TMinus:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TMinus:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TMinus:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TMinus:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TMinus:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TMinus:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TMinus:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TMinus:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TMinus:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TMinus:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TMinus:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TMinus:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TMinus:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TMinus:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TMinus:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TMinus:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TMinus:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TMinus:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TMinus:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TMinus:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TMinus:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TMinus:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TMinus:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TMinus:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TMinus:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TMinus:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TMinus:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TMinus:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TMinus:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TMinus:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TMinus:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TMinus:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TMinus:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TMinus:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TMinus:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TMinus:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TMinus:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TMinus:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TMinus:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TMinus:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TMinus:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TMinus:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TMinus:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TMinus:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TMinus:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TMinus:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TMinus:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TMinus:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TMinus:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TMinus__parser_index, /* pointer to parser_nodes:TMinus:lexer#TMinus#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TMinus:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TMinus__init, /* pointer to parser_nodes:TMinus:parser_nodes#TMinus#init */
(nitmethod_t)VIRTUAL_lexer__TMinus__init_tk, /* pointer to parser_nodes:TMinus:lexer#TMinus#init_tk */
}
};
/* allocate TMinus */
val* NEW_parser_nodes__TMinus(const struct type* type) {
val* self /* : TMinus */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TMinus;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TMinus exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TMinus exact> */
return self;
}
/* allocate TMinus */
void CHECK_NEW_parser_nodes__TMinus(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TMinus> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TMinus> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TMinus> */
}
/* runtime class parser_nodes__TStar */
const struct class class_parser_nodes__TStar = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TStar:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TStar:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TStar:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TStar:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TStar:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TStar:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TStar:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TStar:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TStar:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TStar:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TStar:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TStar:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TStar:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TStar:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TStar:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TStar:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TStar:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TStar:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TStar:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TStar:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TStar:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TStar:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TStar:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TStar:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TStar:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TStar:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TStar:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TStar:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TStar:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TStar:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TStar:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TStar:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TStar:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TStar:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TStar:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TStar:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TStar:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TStar:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TStar:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TStar:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TStar:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TStar:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TStar:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TStar:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TStar:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TStar:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TStar:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TStar:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TStar:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TStar:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TStar:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TStar:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TStar:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TStar:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TStar:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TStar:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TStar:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TStar:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TStar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TStar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TStar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TStar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TStar:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TStar:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TStar:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TStar:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TStar:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TStar:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TStar:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TStar:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TStar__parser_index, /* pointer to parser_nodes:TStar:lexer#TStar#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TStar:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TStar__init, /* pointer to parser_nodes:TStar:parser_nodes#TStar#init */
(nitmethod_t)VIRTUAL_lexer__TStar__init_tk, /* pointer to parser_nodes:TStar:lexer#TStar#init_tk */
}
};
/* allocate TStar */
val* NEW_parser_nodes__TStar(const struct type* type) {
val* self /* : TStar */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TStar;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TStar exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TStar exact> */
return self;
}
/* allocate TStar */
void CHECK_NEW_parser_nodes__TStar(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TStar> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TStar> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TStar> */
}
/* runtime class parser_nodes__TSlash */
const struct class class_parser_nodes__TSlash = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TSlash:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TSlash:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TSlash:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TSlash:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TSlash:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TSlash:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TSlash:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TSlash:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TSlash:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TSlash:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TSlash:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TSlash:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TSlash:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TSlash:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TSlash:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TSlash:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TSlash:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TSlash:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TSlash:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TSlash:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TSlash:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TSlash:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TSlash:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TSlash:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TSlash:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TSlash:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TSlash:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TSlash:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TSlash:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TSlash:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TSlash:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TSlash:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TSlash:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TSlash:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TSlash:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TSlash:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TSlash:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TSlash:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TSlash:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TSlash:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TSlash:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TSlash:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TSlash:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TSlash:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TSlash:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TSlash:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TSlash:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TSlash:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TSlash:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TSlash:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TSlash:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TSlash:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TSlash:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TSlash:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TSlash:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TSlash:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TSlash:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TSlash:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TSlash:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TSlash:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TSlash:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TSlash:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TSlash:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TSlash__parser_index, /* pointer to parser_nodes:TSlash:lexer#TSlash#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TSlash:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TSlash__init, /* pointer to parser_nodes:TSlash:parser_nodes#TSlash#init */
(nitmethod_t)VIRTUAL_lexer__TSlash__init_tk, /* pointer to parser_nodes:TSlash:lexer#TSlash#init_tk */
}
};
/* allocate TSlash */
val* NEW_parser_nodes__TSlash(const struct type* type) {
val* self /* : TSlash */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TSlash;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TSlash exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TSlash exact> */
return self;
}
/* allocate TSlash */
void CHECK_NEW_parser_nodes__TSlash(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TSlash> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TSlash> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TSlash> */
}
/* runtime class parser_nodes__TPercent */
const struct class class_parser_nodes__TPercent = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TPercent:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TPercent:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TPercent:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TPercent:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TPercent:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TPercent:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TPercent:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TPercent:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TPercent:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TPercent:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TPercent:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TPercent:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TPercent:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TPercent:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TPercent:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TPercent:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TPercent:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TPercent:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TPercent:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TPercent:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TPercent:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TPercent:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TPercent:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TPercent:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TPercent:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TPercent:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TPercent:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TPercent:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TPercent:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TPercent:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TPercent:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TPercent:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TPercent:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TPercent:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TPercent:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TPercent:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TPercent:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TPercent:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TPercent:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TPercent:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TPercent:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TPercent:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TPercent:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TPercent:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TPercent:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TPercent:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TPercent:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TPercent:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TPercent:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TPercent:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TPercent:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TPercent:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TPercent:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TPercent:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TPercent:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TPercent:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TPercent:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TPercent:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TPercent:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TPercent__parser_index, /* pointer to parser_nodes:TPercent:lexer#TPercent#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TPercent:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TPercent__init, /* pointer to parser_nodes:TPercent:parser_nodes#TPercent#init */
(nitmethod_t)VIRTUAL_lexer__TPercent__init_tk, /* pointer to parser_nodes:TPercent:lexer#TPercent#init_tk */
}
};
/* allocate TPercent */
val* NEW_parser_nodes__TPercent(const struct type* type) {
val* self /* : TPercent */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TPercent;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TPercent exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TPercent exact> */
return self;
}
/* allocate TPercent */
void CHECK_NEW_parser_nodes__TPercent(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TPercent> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TPercent> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TPercent> */
}
/* runtime class parser_nodes__TEq */
const struct class class_parser_nodes__TEq = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TEq:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TEq:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TEq:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TEq:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TEq:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TEq:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TEq:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TEq:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TEq:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TEq:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TEq:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TEq:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TEq:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TEq:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TEq:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TEq:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TEq:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TEq:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TEq:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TEq:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TEq:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TEq:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TEq:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TEq:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TEq:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TEq:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TEq:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TEq:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TEq:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TEq:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TEq:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TEq:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TEq:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TEq:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TEq:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TEq:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TEq:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TEq:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TEq:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TEq:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TEq:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TEq:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TEq:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TEq:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TEq:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TEq:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TEq:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TEq:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TEq:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TEq:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TEq:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TEq:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TEq:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TEq:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TEq:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TEq:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TEq:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TEq:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TEq:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TEq:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TEq:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TEq:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TEq:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TEq:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TEq:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TEq:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TEq:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TEq:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TEq:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TEq:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TEq__parser_index, /* pointer to parser_nodes:TEq:lexer#TEq#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TEq:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TEq__init, /* pointer to parser_nodes:TEq:parser_nodes#TEq#init */
(nitmethod_t)VIRTUAL_lexer__TEq__init_tk, /* pointer to parser_nodes:TEq:lexer#TEq#init_tk */
}
};
/* allocate TEq */
val* NEW_parser_nodes__TEq(const struct type* type) {
val* self /* : TEq */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TEq;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TEq exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TEq exact> */
return self;
}
/* allocate TEq */
void CHECK_NEW_parser_nodes__TEq(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TEq> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TEq> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TEq> */
}
/* runtime class parser_nodes__TNe */
const struct class class_parser_nodes__TNe = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TNe:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TNe:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TNe:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TNe:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TNe:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TNe:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TNe:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TNe:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TNe:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TNe:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TNe:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TNe:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TNe:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TNe:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TNe:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TNe:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TNe:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TNe:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TNe:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TNe:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TNe:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TNe:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TNe:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TNe:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TNe:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TNe:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TNe:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TNe:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TNe:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TNe:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TNe:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TNe:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TNe:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TNe:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TNe:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TNe:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TNe:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TNe:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TNe:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TNe:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TNe:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TNe:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TNe:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TNe:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TNe:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TNe:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TNe:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TNe:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TNe:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TNe:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TNe:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TNe:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TNe:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TNe:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TNe:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TNe:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TNe:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TNe:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TNe:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TNe:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TNe:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TNe:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TNe:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TNe:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TNe:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TNe:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TNe:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TNe:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TNe:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TNe:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TNe__parser_index, /* pointer to parser_nodes:TNe:lexer#TNe#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TNe:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TNe__init, /* pointer to parser_nodes:TNe:parser_nodes#TNe#init */
(nitmethod_t)VIRTUAL_lexer__TNe__init_tk, /* pointer to parser_nodes:TNe:lexer#TNe#init_tk */
}
};
/* allocate TNe */
val* NEW_parser_nodes__TNe(const struct type* type) {
val* self /* : TNe */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TNe;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TNe exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TNe exact> */
return self;
}
/* allocate TNe */
void CHECK_NEW_parser_nodes__TNe(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TNe> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TNe> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TNe> */
}
/* runtime class parser_nodes__TLt */
const struct class class_parser_nodes__TLt = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TLt:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TLt:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TLt:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TLt:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TLt:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TLt:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TLt:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TLt:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TLt:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TLt:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TLt:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TLt:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TLt:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TLt:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TLt:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TLt:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TLt:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TLt:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TLt:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TLt:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TLt:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TLt:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TLt:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TLt:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TLt:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TLt:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TLt:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TLt:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TLt:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TLt:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TLt:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TLt:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TLt:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TLt:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TLt:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TLt:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TLt:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TLt:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TLt:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TLt:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TLt:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TLt:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TLt:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TLt:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TLt:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TLt:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TLt:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TLt:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TLt:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TLt:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TLt:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TLt:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TLt:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TLt:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TLt:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TLt:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TLt:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TLt:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TLt:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TLt:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TLt:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TLt:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TLt:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TLt:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TLt:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TLt:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TLt:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TLt:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TLt:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TLt:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TLt__parser_index, /* pointer to parser_nodes:TLt:lexer#TLt#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TLt:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TLt__init, /* pointer to parser_nodes:TLt:parser_nodes#TLt#init */
(nitmethod_t)VIRTUAL_lexer__TLt__init_tk, /* pointer to parser_nodes:TLt:lexer#TLt#init_tk */
}
};
/* allocate TLt */
val* NEW_parser_nodes__TLt(const struct type* type) {
val* self /* : TLt */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TLt;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TLt exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TLt exact> */
return self;
}
/* allocate TLt */
void CHECK_NEW_parser_nodes__TLt(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TLt> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TLt> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TLt> */
}
/* runtime class parser_nodes__TLe */
const struct class class_parser_nodes__TLe = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TLe:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TLe:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TLe:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TLe:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TLe:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TLe:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TLe:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TLe:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TLe:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TLe:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TLe:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TLe:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TLe:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TLe:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TLe:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TLe:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TLe:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TLe:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TLe:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TLe:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TLe:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TLe:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TLe:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TLe:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TLe:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TLe:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TLe:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TLe:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TLe:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TLe:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TLe:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TLe:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TLe:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TLe:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TLe:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TLe:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TLe:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TLe:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TLe:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TLe:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TLe:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TLe:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TLe:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TLe:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TLe:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TLe:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TLe:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TLe:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TLe:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TLe:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TLe:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TLe:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TLe:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TLe:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TLe:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TLe:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TLe:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TLe:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TLe:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TLe:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TLe:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TLe:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TLe:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TLe:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TLe:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TLe:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TLe:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TLe:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TLe:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TLe:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TLe__parser_index, /* pointer to parser_nodes:TLe:lexer#TLe#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TLe:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TLe__init, /* pointer to parser_nodes:TLe:parser_nodes#TLe#init */
(nitmethod_t)VIRTUAL_lexer__TLe__init_tk, /* pointer to parser_nodes:TLe:lexer#TLe#init_tk */
}
};
/* allocate TLe */
val* NEW_parser_nodes__TLe(const struct type* type) {
val* self /* : TLe */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TLe;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TLe exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TLe exact> */
return self;
}
/* allocate TLe */
void CHECK_NEW_parser_nodes__TLe(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TLe> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TLe> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TLe> */
}
/* runtime class parser_nodes__TLl */
const struct class class_parser_nodes__TLl = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TLl:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TLl:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TLl:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TLl:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TLl:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TLl:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TLl:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TLl:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TLl:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TLl:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TLl:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TLl:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TLl:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TLl:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TLl:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TLl:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TLl:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TLl:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TLl:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TLl:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TLl:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TLl:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TLl:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TLl:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TLl:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TLl:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TLl:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TLl:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TLl:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TLl:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TLl:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TLl:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TLl:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TLl:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TLl:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TLl:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TLl:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TLl:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TLl:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TLl:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TLl:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TLl:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TLl:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TLl:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TLl:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TLl:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TLl:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TLl:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TLl:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TLl:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TLl:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TLl:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TLl:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TLl:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TLl:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TLl:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TLl:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TLl:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TLl:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TLl:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TLl:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TLl:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TLl:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TLl:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TLl:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TLl:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TLl:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TLl:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TLl:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TLl:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TLl__parser_index, /* pointer to parser_nodes:TLl:lexer#TLl#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TLl:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TLl__init, /* pointer to parser_nodes:TLl:parser_nodes#TLl#init */
(nitmethod_t)VIRTUAL_lexer__TLl__init_tk, /* pointer to parser_nodes:TLl:lexer#TLl#init_tk */
}
};
/* allocate TLl */
val* NEW_parser_nodes__TLl(const struct type* type) {
val* self /* : TLl */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TLl;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TLl exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TLl exact> */
return self;
}
/* allocate TLl */
void CHECK_NEW_parser_nodes__TLl(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TLl> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TLl> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TLl> */
}
/* runtime class parser_nodes__TGt */
const struct class class_parser_nodes__TGt = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TGt:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TGt:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TGt:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TGt:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TGt:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TGt:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TGt:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TGt:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TGt:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TGt:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TGt:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TGt:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TGt:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TGt:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TGt:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TGt:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TGt:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TGt:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TGt:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TGt:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TGt:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TGt:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TGt:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TGt:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TGt:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TGt:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TGt:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TGt:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TGt:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TGt:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TGt:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TGt:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TGt:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TGt:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TGt:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TGt:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TGt:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TGt:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TGt:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TGt:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TGt:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TGt:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TGt:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TGt:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TGt:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TGt:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TGt:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TGt:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TGt:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TGt:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TGt:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TGt:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TGt:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TGt:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TGt:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TGt:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TGt:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TGt:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TGt:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TGt:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TGt:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TGt:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TGt:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TGt:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TGt:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TGt:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TGt:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TGt:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TGt:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TGt:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TGt__parser_index, /* pointer to parser_nodes:TGt:lexer#TGt#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TGt:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TGt__init, /* pointer to parser_nodes:TGt:parser_nodes#TGt#init */
(nitmethod_t)VIRTUAL_lexer__TGt__init_tk, /* pointer to parser_nodes:TGt:lexer#TGt#init_tk */
}
};
/* allocate TGt */
val* NEW_parser_nodes__TGt(const struct type* type) {
val* self /* : TGt */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TGt;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TGt exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TGt exact> */
return self;
}
/* allocate TGt */
void CHECK_NEW_parser_nodes__TGt(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TGt> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TGt> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TGt> */
}
/* runtime class parser_nodes__TGe */
const struct class class_parser_nodes__TGe = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TGe:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TGe:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TGe:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TGe:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TGe:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TGe:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TGe:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TGe:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TGe:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TGe:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TGe:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TGe:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TGe:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TGe:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TGe:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TGe:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TGe:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TGe:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TGe:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TGe:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TGe:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TGe:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TGe:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TGe:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TGe:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TGe:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TGe:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TGe:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TGe:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TGe:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TGe:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TGe:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TGe:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TGe:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TGe:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TGe:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TGe:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TGe:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TGe:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TGe:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TGe:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TGe:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TGe:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TGe:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TGe:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TGe:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TGe:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TGe:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TGe:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TGe:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TGe:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TGe:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TGe:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TGe:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TGe:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TGe:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TGe:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TGe:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TGe:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TGe:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TGe:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TGe:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TGe:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TGe:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TGe:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TGe:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TGe:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TGe:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TGe:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TGe:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TGe__parser_index, /* pointer to parser_nodes:TGe:lexer#TGe#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TGe:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TGe__init, /* pointer to parser_nodes:TGe:parser_nodes#TGe#init */
(nitmethod_t)VIRTUAL_lexer__TGe__init_tk, /* pointer to parser_nodes:TGe:lexer#TGe#init_tk */
}
};
/* allocate TGe */
val* NEW_parser_nodes__TGe(const struct type* type) {
val* self /* : TGe */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TGe;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TGe exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TGe exact> */
return self;
}
/* allocate TGe */
void CHECK_NEW_parser_nodes__TGe(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TGe> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TGe> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TGe> */
}
/* runtime class parser_nodes__TGg */
const struct class class_parser_nodes__TGg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TGg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TGg:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TGg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TGg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TGg:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TGg:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TGg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TGg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TGg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TGg:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TGg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TGg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TGg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TGg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TGg:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TGg:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TGg:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TGg:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TGg:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TGg:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TGg:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TGg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TGg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TGg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TGg:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TGg:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TGg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TGg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TGg:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TGg:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TGg:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TGg:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TGg:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TGg:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TGg:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TGg:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TGg:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TGg:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TGg:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TGg:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TGg:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TGg:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TGg:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TGg:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TGg:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TGg:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TGg:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TGg:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TGg:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TGg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TGg:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TGg:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TGg:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TGg:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TGg:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TGg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TGg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TGg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TGg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TGg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TGg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TGg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TGg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TGg:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TGg:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TGg:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TGg:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TGg:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TGg:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TGg:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TGg__parser_index, /* pointer to parser_nodes:TGg:lexer#TGg#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TGg:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TGg__init, /* pointer to parser_nodes:TGg:parser_nodes#TGg#init */
(nitmethod_t)VIRTUAL_lexer__TGg__init_tk, /* pointer to parser_nodes:TGg:lexer#TGg#init_tk */
}
};
/* allocate TGg */
val* NEW_parser_nodes__TGg(const struct type* type) {
val* self /* : TGg */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TGg;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TGg exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TGg exact> */
return self;
}
/* allocate TGg */
void CHECK_NEW_parser_nodes__TGg(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TGg> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TGg> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TGg> */
}
/* runtime class parser_nodes__TStarship */
const struct class class_parser_nodes__TStarship = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TStarship:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TStarship:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TStarship:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TStarship:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TStarship:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TStarship:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TStarship:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TStarship:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TStarship:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TStarship:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TStarship:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TStarship:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TStarship:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TStarship:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TStarship:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TStarship:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TStarship:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TStarship:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TStarship:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TStarship:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TStarship:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TStarship:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TStarship:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TStarship:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TStarship:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TStarship:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TStarship:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TStarship:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TStarship:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TStarship:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TStarship:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TStarship:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TStarship:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TStarship:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TStarship:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TStarship:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TStarship:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TStarship:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TStarship:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TStarship:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TStarship:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TStarship:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TStarship:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TStarship:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TStarship:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TStarship:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TStarship:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TStarship:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TStarship:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TStarship:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TStarship:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TStarship:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TStarship:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TStarship:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TStarship:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TStarship:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TStarship:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TStarship:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TStarship:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TStarship__parser_index, /* pointer to parser_nodes:TStarship:lexer#TStarship#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TStarship:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TStarship__init, /* pointer to parser_nodes:TStarship:parser_nodes#TStarship#init */
(nitmethod_t)VIRTUAL_lexer__TStarship__init_tk, /* pointer to parser_nodes:TStarship:lexer#TStarship#init_tk */
}
};
/* allocate TStarship */
val* NEW_parser_nodes__TStarship(const struct type* type) {
val* self /* : TStarship */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TStarship;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TStarship exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TStarship exact> */
return self;
}
/* allocate TStarship */
void CHECK_NEW_parser_nodes__TStarship(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TStarship> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TStarship> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TStarship> */
}
/* runtime class parser_nodes__TBang */
const struct class class_parser_nodes__TBang = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TBang:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TBang:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TBang:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TBang:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TBang:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TBang:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TBang:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TBang:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TBang:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__to_s, /* pointer to parser_nodes:TBang:parser_nodes#TokenOperator#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TBang:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TBang:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TBang:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TBang:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TBang:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TBang:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TBang:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TBang:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TBang:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TBang:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TBang:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TBang:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TBang:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TBang:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TBang:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TBang:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TBang:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TBang:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TBang:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TBang:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TBang:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TBang:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TBang:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TBang:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TBang:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TBang:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TBang:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TBang:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TBang:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TBang:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TBang:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TBang:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TBang:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TBang:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TBang:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TBang:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TBang:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TBang:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TBang:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TBang:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TBang:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TBang:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TBang:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TBang:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TBang:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TBang:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TBang:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TBang:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TBang:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TBang:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TBang:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TBang:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TBang:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TBang:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TBang:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TBang:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TBang:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TBang:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TBang:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TBang:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TBang__parser_index, /* pointer to parser_nodes:TBang:lexer#TBang#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenOperator__init, /* pointer to parser_nodes:TBang:parser_nodes#TokenOperator#init */
(nitmethod_t)VIRTUAL_parser_nodes__TBang__init, /* pointer to parser_nodes:TBang:parser_nodes#TBang#init */
(nitmethod_t)VIRTUAL_lexer__TBang__init_tk, /* pointer to parser_nodes:TBang:lexer#TBang#init_tk */
}
};
/* allocate TBang */
val* NEW_parser_nodes__TBang(const struct type* type) {
val* self /* : TBang */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TBang;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TBang exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TBang exact> */
return self;
}
/* allocate TBang */
void CHECK_NEW_parser_nodes__TBang(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TBang> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TBang> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TBang> */
}
/* runtime class parser_nodes__TAt */
const struct class class_parser_nodes__TAt = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TAt:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TAt:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TAt:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TAt:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TAt:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TAt:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TAt:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TAt:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TAt:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TAt:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TAt:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TAt:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TAt:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TAt:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TAt:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TAt:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TAt:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TAt:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TAt:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TAt:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TAt:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TAt:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TAt:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TAt:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TAt:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TAt:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TAt:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TAt:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TAt:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TAt:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TAt:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TAt:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TAt:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TAt:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TAt:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TAt:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TAt:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TAt:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TAt:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TAt:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TAt:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TAt:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TAt:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TAt:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TAt:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TAt:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TAt:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TAt:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TAt:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TAt:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TAt:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TAt:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TAt:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TAt:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TAt:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TAt:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TAt:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TAt:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TAt:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TAt:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TAt:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TAt:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TAt:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TAt:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TAt:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TAt:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TAt:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TAt:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TAt:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TAt:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TAt__parser_index, /* pointer to parser_nodes:TAt:lexer#TAt#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TAt__init, /* pointer to parser_nodes:TAt:parser_nodes#TAt#init */
(nitmethod_t)VIRTUAL_lexer__TAt__init_tk, /* pointer to parser_nodes:TAt:lexer#TAt#init_tk */
}
};
/* allocate TAt */
val* NEW_parser_nodes__TAt(const struct type* type) {
val* self /* : TAt */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TAt;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TAt exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TAt exact> */
return self;
}
/* allocate TAt */
void CHECK_NEW_parser_nodes__TAt(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TAt> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TAt> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TAt> */
}
/* runtime class parser_nodes__TClassid */
const struct class class_parser_nodes__TClassid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TClassid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TClassid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TClassid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TClassid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TClassid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TClassid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TClassid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TClassid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TClassid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TClassid__to_s, /* pointer to parser_nodes:TClassid:parser_nodes#TClassid#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TClassid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TClassid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TClassid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TClassid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TClassid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TClassid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TClassid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TClassid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TClassid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TClassid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TClassid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TClassid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TClassid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TClassid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TClassid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TClassid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TClassid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TClassid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TClassid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TClassid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TClassid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TClassid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TClassid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TClassid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TClassid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TClassid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TClassid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TClassid:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TClassid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TClassid:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TClassid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TClassid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TClassid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TClassid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TClassid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TClassid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TClassid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TClassid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TClassid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TClassid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TClassid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TClassid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TClassid:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TClassid:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TClassid:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TClassid:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TClassid:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TClassid:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TClassid:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TClassid__parser_index, /* pointer to parser_nodes:TClassid:lexer#TClassid#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TClassid__init, /* pointer to parser_nodes:TClassid:parser_nodes#TClassid#init */
(nitmethod_t)VIRTUAL_lexer__TClassid__init_tk, /* pointer to parser_nodes:TClassid:lexer#TClassid#init_tk */
}
};
/* allocate TClassid */
val* NEW_parser_nodes__TClassid(const struct type* type) {
val* self /* : TClassid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TClassid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TClassid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TClassid exact> */
return self;
}
/* allocate TClassid */
void CHECK_NEW_parser_nodes__TClassid(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TClassid> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TClassid> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TClassid> */
}
/* runtime class parser_nodes__TId */
const struct class class_parser_nodes__TId = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TId:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TId:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TId:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TId:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TId:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TId:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TId:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TId:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TId:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TId__to_s, /* pointer to parser_nodes:TId:parser_nodes#TId#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TId:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TId:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TId:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TId:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TId:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TId:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TId:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TId:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TId:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TId:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TId:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TId:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TId:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TId:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TId:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TId:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TId:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TId:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TId:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TId:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TId:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TId:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TId:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TId:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TId:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TId:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TId:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TId:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TId:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TId:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TId:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TId:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TId:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TId:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TId:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TId:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TId:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TId:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TId:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TId:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TId:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TId:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TId:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TId:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TId:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TId:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TId:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TId:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TId:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TId:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TId:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TId:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TId:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TId:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TId:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TId:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TId:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TId:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TId:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TId:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TId__parser_index, /* pointer to parser_nodes:TId:lexer#TId#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TId__init, /* pointer to parser_nodes:TId:parser_nodes#TId#init */
(nitmethod_t)VIRTUAL_lexer__TId__init_tk, /* pointer to parser_nodes:TId:lexer#TId#init_tk */
}
};
/* allocate TId */
val* NEW_parser_nodes__TId(const struct type* type) {
val* self /* : TId */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TId;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TId exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TId exact> */
return self;
}
/* allocate TId */
void CHECK_NEW_parser_nodes__TId(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TId> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TId> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TId> */
}
/* runtime class parser_nodes__TAttrid */
const struct class class_parser_nodes__TAttrid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TAttrid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TAttrid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TAttrid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TAttrid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TAttrid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TAttrid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TAttrid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TAttrid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TAttrid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TAttrid__to_s, /* pointer to parser_nodes:TAttrid:parser_nodes#TAttrid#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TAttrid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TAttrid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TAttrid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TAttrid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TAttrid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TAttrid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TAttrid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TAttrid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TAttrid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TAttrid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TAttrid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TAttrid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TAttrid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TAttrid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TAttrid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TAttrid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TAttrid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TAttrid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TAttrid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TAttrid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TAttrid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TAttrid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TAttrid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TAttrid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TAttrid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TAttrid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TAttrid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TAttrid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TAttrid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TAttrid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TAttrid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TAttrid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TAttrid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TAttrid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TAttrid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TAttrid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TAttrid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TAttrid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TAttrid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TAttrid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TAttrid:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TAttrid:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TAttrid:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TAttrid__parser_index, /* pointer to parser_nodes:TAttrid:lexer#TAttrid#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TAttrid__init, /* pointer to parser_nodes:TAttrid:parser_nodes#TAttrid#init */
(nitmethod_t)VIRTUAL_lexer__TAttrid__init_tk, /* pointer to parser_nodes:TAttrid:lexer#TAttrid#init_tk */
}
};
/* allocate TAttrid */
val* NEW_parser_nodes__TAttrid(const struct type* type) {
val* self /* : TAttrid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TAttrid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TAttrid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TAttrid exact> */
return self;
}
/* allocate TAttrid */
void CHECK_NEW_parser_nodes__TAttrid(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TAttrid> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TAttrid> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TAttrid> */
}
/* runtime class parser_nodes__TNumber */
const struct class class_parser_nodes__TNumber = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TNumber:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TNumber:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TNumber:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TNumber:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TNumber:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TNumber:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TNumber:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TNumber:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TNumber:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TNumber:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TNumber:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TNumber:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TNumber:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TNumber:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TNumber:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TNumber:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TNumber:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TNumber:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TNumber:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TNumber:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TNumber:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TNumber:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TNumber:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TNumber:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TNumber:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TNumber:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TNumber:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TNumber:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TNumber:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TNumber:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TNumber:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TNumber:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TNumber:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TNumber:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TNumber:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TNumber:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TNumber:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TNumber:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TNumber:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TNumber:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TNumber:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TNumber:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TNumber:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TNumber:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TNumber:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TNumber:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TNumber:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TNumber:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TNumber:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TNumber:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TNumber:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TNumber:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TNumber:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TNumber:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TNumber:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TNumber:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TNumber:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TNumber:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TNumber:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TNumber__parser_index, /* pointer to parser_nodes:TNumber:lexer#TNumber#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TNumber:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TNumber__init, /* pointer to parser_nodes:TNumber:parser_nodes#TNumber#init */
(nitmethod_t)VIRTUAL_lexer__TNumber__init_tk, /* pointer to parser_nodes:TNumber:lexer#TNumber#init_tk */
}
};
/* allocate TNumber */
val* NEW_parser_nodes__TNumber(const struct type* type) {
val* self /* : TNumber */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TNumber;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TNumber exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TNumber exact> */
return self;
}
/* allocate TNumber */
void CHECK_NEW_parser_nodes__TNumber(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TNumber> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TNumber> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TNumber> */
}
/* runtime class parser_nodes__TFloat */
const struct class class_parser_nodes__TFloat = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TFloat:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TFloat:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TFloat:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TFloat:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TFloat:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TFloat:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TFloat:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TFloat:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TFloat:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TFloat:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TFloat:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TFloat:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TFloat:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TFloat:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TFloat:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TFloat:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TFloat:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TFloat:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TFloat:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TFloat:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TFloat:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TFloat:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TFloat:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TFloat:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TFloat:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TFloat:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TFloat:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TFloat:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TFloat:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TFloat:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TFloat:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TFloat:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TFloat:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TFloat:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TFloat:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TFloat:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TFloat:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TFloat:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TFloat:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TFloat:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TFloat:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TFloat:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TFloat:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TFloat:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TFloat:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TFloat:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TFloat:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TFloat:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TFloat:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TFloat:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TFloat:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TFloat:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TFloat:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TFloat:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TFloat:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TFloat:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TFloat:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TFloat:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TFloat:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TFloat__parser_index, /* pointer to parser_nodes:TFloat:lexer#TFloat#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TFloat:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TFloat__init, /* pointer to parser_nodes:TFloat:parser_nodes#TFloat#init */
(nitmethod_t)VIRTUAL_lexer__TFloat__init_tk, /* pointer to parser_nodes:TFloat:lexer#TFloat#init_tk */
}
};
/* allocate TFloat */
val* NEW_parser_nodes__TFloat(const struct type* type) {
val* self /* : TFloat */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TFloat;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TFloat exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TFloat exact> */
return self;
}
/* allocate TFloat */
void CHECK_NEW_parser_nodes__TFloat(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TFloat> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TFloat> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TFloat> */
}
/* runtime class parser_nodes__TChar */
const struct class class_parser_nodes__TChar = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TChar:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TChar:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TChar:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TChar:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TChar:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TChar:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TChar:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TChar:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TChar:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TChar:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TChar:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TChar:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TChar:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TChar:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TChar:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TChar:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TChar:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TChar:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TChar:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TChar:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TChar:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TChar:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TChar:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TChar:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TChar:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TChar:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TChar:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TChar:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TChar:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TChar:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TChar:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TChar:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TChar:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TChar:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TChar:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TChar:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TChar:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TChar:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TChar:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TChar:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TChar:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TChar:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TChar:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TChar:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TChar:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TChar:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TChar:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TChar:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TChar:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TChar:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TChar:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TChar:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TChar:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TChar:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TChar:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TChar:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TChar:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TChar:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TChar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TChar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TChar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TChar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TChar:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TChar:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TChar:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TChar:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TChar:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TChar:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TChar:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TChar:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TChar__parser_index, /* pointer to parser_nodes:TChar:lexer#TChar#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TChar:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TChar__init, /* pointer to parser_nodes:TChar:parser_nodes#TChar#init */
(nitmethod_t)VIRTUAL_lexer__TChar__init_tk, /* pointer to parser_nodes:TChar:lexer#TChar#init_tk */
}
};
/* allocate TChar */
val* NEW_parser_nodes__TChar(const struct type* type) {
val* self /* : TChar */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TChar;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TChar exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TChar exact> */
return self;
}
/* allocate TChar */
void CHECK_NEW_parser_nodes__TChar(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TChar> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TChar> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TChar> */
}
/* runtime class parser_nodes__TString */
const struct class class_parser_nodes__TString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TString:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TString:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TString:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TString:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TString:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TString:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TString:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TString:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TString:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TString:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TString:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TString:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TString:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TString:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TString:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TString:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TString:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TString:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TString:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TString:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TString:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TString:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TString:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TString:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TString:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TString:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TString:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TString:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TString:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TString:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TString:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TString:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TString:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TString:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TString:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TString:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TString:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TString:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TString:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TString:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TString__parser_index, /* pointer to parser_nodes:TString:lexer#TString#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TString:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TString__init, /* pointer to parser_nodes:TString:parser_nodes#TString#init */
(nitmethod_t)VIRTUAL_lexer__TString__init_tk, /* pointer to parser_nodes:TString:lexer#TString#init_tk */
}
};
/* allocate TString */
val* NEW_parser_nodes__TString(const struct type* type) {
val* self /* : TString */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TString;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TString exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TString exact> */
return self;
}
/* allocate TString */
void CHECK_NEW_parser_nodes__TString(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TString> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TString> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TString> */
}
/* runtime class parser_nodes__TStartString */
const struct class class_parser_nodes__TStartString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TStartString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TStartString:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TStartString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TStartString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TStartString:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TStartString:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TStartString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TStartString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TStartString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TStartString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TStartString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TStartString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TStartString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TStartString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TStartString:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TStartString:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TStartString:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TStartString:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TStartString:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TStartString:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TStartString:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TStartString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TStartString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TStartString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TStartString:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TStartString:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TStartString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TStartString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TStartString:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TStartString:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TStartString:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TStartString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TStartString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TStartString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TStartString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TStartString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TStartString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TStartString:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TStartString:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TStartString:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TStartString:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TStartString:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TStartString:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TStartString:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TStartString:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TStartString:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TStartString:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TStartString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TStartString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TStartString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TStartString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TStartString:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TStartString:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TStartString:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TStartString:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TStartString:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TStartString:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TStartString:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TStartString:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TStartString__parser_index, /* pointer to parser_nodes:TStartString:lexer#TStartString#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TStartString:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TStartString__init, /* pointer to parser_nodes:TStartString:parser_nodes#TStartString#init */
(nitmethod_t)VIRTUAL_lexer__TStartString__init_tk, /* pointer to parser_nodes:TStartString:lexer#TStartString#init_tk */
}
};
/* allocate TStartString */
val* NEW_parser_nodes__TStartString(const struct type* type) {
val* self /* : TStartString */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TStartString;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TStartString exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TStartString exact> */
return self;
}
/* allocate TStartString */
void CHECK_NEW_parser_nodes__TStartString(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TStartString> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TStartString> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TStartString> */
}
/* runtime class parser_nodes__TMidString */
const struct class class_parser_nodes__TMidString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TMidString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TMidString:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TMidString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TMidString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TMidString:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TMidString:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TMidString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TMidString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TMidString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TMidString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TMidString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TMidString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TMidString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TMidString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TMidString:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TMidString:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TMidString:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TMidString:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TMidString:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TMidString:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TMidString:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TMidString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TMidString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TMidString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TMidString:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TMidString:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TMidString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TMidString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TMidString:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TMidString:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TMidString:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TMidString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TMidString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TMidString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TMidString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TMidString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TMidString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TMidString:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TMidString:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TMidString:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TMidString:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TMidString:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TMidString:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TMidString:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TMidString:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TMidString:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TMidString:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TMidString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TMidString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TMidString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TMidString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TMidString:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TMidString:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TMidString:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TMidString:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TMidString:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TMidString:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TMidString:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TMidString:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TMidString__parser_index, /* pointer to parser_nodes:TMidString:lexer#TMidString#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TMidString:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TMidString__init, /* pointer to parser_nodes:TMidString:parser_nodes#TMidString#init */
(nitmethod_t)VIRTUAL_lexer__TMidString__init_tk, /* pointer to parser_nodes:TMidString:lexer#TMidString#init_tk */
}
};
/* allocate TMidString */
val* NEW_parser_nodes__TMidString(const struct type* type) {
val* self /* : TMidString */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TMidString;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TMidString exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TMidString exact> */
return self;
}
/* allocate TMidString */
void CHECK_NEW_parser_nodes__TMidString(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TMidString> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TMidString> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TMidString> */
}
/* runtime class parser_nodes__TEndString */
const struct class class_parser_nodes__TEndString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TEndString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TEndString:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TEndString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TEndString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TEndString:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TEndString:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TEndString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TEndString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TEndString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__to_s, /* pointer to parser_nodes:TEndString:parser_nodes#TokenLiteral#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TEndString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TEndString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TEndString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TEndString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TEndString:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TEndString:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TEndString:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TEndString:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TEndString:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TEndString:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TEndString:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TEndString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TEndString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TEndString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TEndString:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TEndString:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TEndString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TEndString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TEndString:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TEndString:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TEndString:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TEndString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TEndString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TEndString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TEndString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TEndString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TEndString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TEndString:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TEndString:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TEndString:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TEndString:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TEndString:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TEndString:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TEndString:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TEndString:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TEndString:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TEndString:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TEndString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TEndString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TEndString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TEndString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TEndString:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TEndString:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TEndString:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TEndString:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TEndString:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TEndString:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TEndString:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TEndString:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TEndString__parser_index, /* pointer to parser_nodes:TEndString:lexer#TEndString#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TokenLiteral__init, /* pointer to parser_nodes:TEndString:parser_nodes#TokenLiteral#init */
(nitmethod_t)VIRTUAL_parser_nodes__TEndString__init, /* pointer to parser_nodes:TEndString:parser_nodes#TEndString#init */
(nitmethod_t)VIRTUAL_lexer__TEndString__init_tk, /* pointer to parser_nodes:TEndString:lexer#TEndString#init_tk */
}
};
/* allocate TEndString */
val* NEW_parser_nodes__TEndString(const struct type* type) {
val* self /* : TEndString */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TEndString;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TEndString exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TEndString exact> */
return self;
}
/* allocate TEndString */
void CHECK_NEW_parser_nodes__TEndString(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TEndString> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TEndString> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TEndString> */
}
/* runtime class parser_nodes__TBadString */
const struct class class_parser_nodes__TBadString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TBadString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TBadString:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TBadString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TBadString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TBadString:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TBadString:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TBadString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TBadString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TBadString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TBadString__to_s, /* pointer to parser_nodes:TBadString:parser_nodes#TBadString#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TBadString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TBadString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TBadString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TBadString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TBadString:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TBadString:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TBadString:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TBadString:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TBadString:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TBadString:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TBadString:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TBadString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TBadString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TBadString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TBadString:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TBadString:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TBadString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TBadString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TBadString:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TBadString:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TBadString:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TBadString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TBadString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TBadString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TBadString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TBadString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TBadString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TBadString:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TBadString:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TBadString:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TBadString:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TBadString:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TBadString:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TBadString:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TBadString:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TBadString:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TBadString:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TBadString:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TBadString:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TBadString:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TBadString:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TBadString:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TBadString:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TBadString:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TBadString:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TBadString:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TBadString:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TBadString:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TBadString:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TBadString__parser_index, /* pointer to parser_nodes:TBadString:lexer#TBadString#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TBadString__init, /* pointer to parser_nodes:TBadString:parser_nodes#TBadString#init */
(nitmethod_t)VIRTUAL_lexer__TBadString__init_tk, /* pointer to parser_nodes:TBadString:lexer#TBadString#init_tk */
}
};
/* allocate TBadString */
val* NEW_parser_nodes__TBadString(const struct type* type) {
val* self /* : TBadString */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TBadString;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TBadString exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TBadString exact> */
return self;
}
/* allocate TBadString */
void CHECK_NEW_parser_nodes__TBadString(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TBadString> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TBadString> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TBadString> */
}
/* runtime class parser_nodes__TBadChar */
const struct class class_parser_nodes__TBadChar = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TBadChar:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TBadChar:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TBadChar:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TBadChar:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TBadChar:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TBadChar:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TBadChar:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TBadChar:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TBadChar:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__TBadChar__to_s, /* pointer to parser_nodes:TBadChar:parser_nodes#TBadChar#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TBadChar:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TBadChar:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TBadChar:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TBadChar:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TBadChar:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TBadChar:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TBadChar:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TBadChar:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TBadChar:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TBadChar:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TBadChar:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TBadChar:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TBadChar:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TBadChar:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TBadChar:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TBadChar:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TBadChar:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TBadChar:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TBadChar:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TBadChar:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TBadChar:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TBadChar:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TBadChar:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TBadChar:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TBadChar:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TBadChar:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TBadChar:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TBadChar:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TBadChar:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TBadChar:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TBadChar:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TBadChar:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TBadChar:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TBadChar:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TBadChar:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TBadChar:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TBadChar:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TBadChar:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TBadChar:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TBadChar:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TBadChar:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TBadChar:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TBadChar:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TBadChar__parser_index, /* pointer to parser_nodes:TBadChar:lexer#TBadChar#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TBadChar__init, /* pointer to parser_nodes:TBadChar:parser_nodes#TBadChar#init */
(nitmethod_t)VIRTUAL_lexer__TBadChar__init_tk, /* pointer to parser_nodes:TBadChar:lexer#TBadChar#init_tk */
}
};
/* allocate TBadChar */
val* NEW_parser_nodes__TBadChar(const struct type* type) {
val* self /* : TBadChar */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TBadChar;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TBadChar exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TBadChar exact> */
return self;
}
/* allocate TBadChar */
void CHECK_NEW_parser_nodes__TBadChar(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TBadChar> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TBadChar> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TBadChar> */
}
/* runtime class parser_nodes__TExternCodeSegment */
const struct class class_parser_nodes__TExternCodeSegment = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:TExternCodeSegment:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__Token__to_s, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:TExternCodeSegment:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:TExternCodeSegment:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:TExternCodeSegment:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:TExternCodeSegment:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:TExternCodeSegment:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:TExternCodeSegment:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:TExternCodeSegment:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:TExternCodeSegment:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:TExternCodeSegment:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:TExternCodeSegment:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:TExternCodeSegment:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:TExternCodeSegment:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:TExternCodeSegment:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:TExternCodeSegment:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:TExternCodeSegment:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:TExternCodeSegment:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:TExternCodeSegment:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:TExternCodeSegment:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:TExternCodeSegment:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:TExternCodeSegment:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:TExternCodeSegment:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:TExternCodeSegment:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:TExternCodeSegment:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:TExternCodeSegment:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:TExternCodeSegment:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:TExternCodeSegment:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:TExternCodeSegment:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:TExternCodeSegment:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:TExternCodeSegment:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:TExternCodeSegment:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:TExternCodeSegment:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:TExternCodeSegment:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:TExternCodeSegment:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:TExternCodeSegment:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:TExternCodeSegment:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:TExternCodeSegment:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:TExternCodeSegment:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__TExternCodeSegment__parser_index, /* pointer to parser_nodes:TExternCodeSegment:lexer#TExternCodeSegment#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__TExternCodeSegment__init, /* pointer to parser_nodes:TExternCodeSegment:parser_nodes#TExternCodeSegment#init */
(nitmethod_t)VIRTUAL_lexer__TExternCodeSegment__init_tk, /* pointer to parser_nodes:TExternCodeSegment:lexer#TExternCodeSegment#init_tk */
}
};
/* allocate TExternCodeSegment */
val* NEW_parser_nodes__TExternCodeSegment(const struct type* type) {
val* self /* : TExternCodeSegment */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__TExternCodeSegment;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:TExternCodeSegment exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:TExternCodeSegment exact> */
return self;
}
/* allocate TExternCodeSegment */
void CHECK_NEW_parser_nodes__TExternCodeSegment(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:TExternCodeSegment> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:TExternCodeSegment> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:TExternCodeSegment> */
}
/* runtime class parser_nodes__EOF */
const struct class class_parser_nodes__EOF = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:EOF:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:EOF:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:EOF:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:EOF:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:EOF:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:EOF:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:EOF:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:EOF:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:EOF:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__EOF__to_s, /* pointer to parser_nodes:EOF:parser_nodes#EOF#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:EOF:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:EOF:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:EOF:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:EOF:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:EOF:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:EOF:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:EOF:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:EOF:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:EOF:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:EOF:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:EOF:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:EOF:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:EOF:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:EOF:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:EOF:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:EOF:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:EOF:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:EOF:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:EOF:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:EOF:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:EOF:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:EOF:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:EOF:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:EOF:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:EOF:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:EOF:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:EOF:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:EOF:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:EOF:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:EOF:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:EOF:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:EOF:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:EOF:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:EOF:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:EOF:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:EOF:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:EOF:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:EOF:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:EOF:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:EOF:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:EOF:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:EOF:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:EOF:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:EOF:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:EOF:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:EOF:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:EOF:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:EOF:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:EOF:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:EOF:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:EOF:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:EOF:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:EOF:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:EOF:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:EOF:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:EOF:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:EOF:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:EOF:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:EOF:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:EOF:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__EOF__parser_index, /* pointer to parser_nodes:EOF:lexer#EOF#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__EOF__init, /* pointer to parser_nodes:EOF:parser_nodes#EOF#init */
(nitmethod_t)VIRTUAL_lexer__EOF__init_tk, /* pointer to parser_nodes:EOF:lexer#EOF#init_tk */
}
};
/* allocate EOF */
val* NEW_parser_nodes__EOF(const struct type* type) {
val* self /* : EOF */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__EOF;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:EOF exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:EOF exact> */
return self;
}
/* allocate EOF */
void CHECK_NEW_parser_nodes__EOF(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:EOF> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:EOF> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:EOF> */
}
/* runtime class parser_nodes__AError */
/* allocate AError */
val* NEW_parser_nodes__AError(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "AError is DEAD");
exit(1);
}
/* allocate AError */
void CHECK_NEW_parser_nodes__AError(val* self) {
fprintf(stderr, "Runtime error: %s\n", "AError is DEAD");
exit(1);
}
/* runtime class parser_nodes__ALexerError */
const struct class class_parser_nodes__ALexerError = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALexerError:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALexerError:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALexerError:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALexerError:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALexerError:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALexerError:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALexerError:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALexerError:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALexerError:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__EOF__to_s, /* pointer to parser_nodes:ALexerError:parser_nodes#EOF#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALexerError:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALexerError:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALexerError:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALexerError:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALexerError:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALexerError:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALexerError:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALexerError:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALexerError:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALexerError:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALexerError:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALexerError:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALexerError:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALexerError:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALexerError:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALexerError:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALexerError:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALexerError:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALexerError:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALexerError:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALexerError:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALexerError:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALexerError:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALexerError:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALexerError:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALexerError:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALexerError:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALexerError:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALexerError:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALexerError:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALexerError:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALexerError:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALexerError:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALexerError:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALexerError:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALexerError:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ALexerError:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALexerError:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALexerError:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALexerError:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:ALexerError:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:ALexerError:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:ALexerError:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__EOF__parser_index, /* pointer to parser_nodes:ALexerError:lexer#EOF#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__EOF__init, /* pointer to parser_nodes:ALexerError:parser_nodes#EOF#init */
(nitmethod_t)VIRTUAL_lexer__EOF__init_tk, /* pointer to parser_nodes:ALexerError:lexer#EOF#init_tk */
(nitmethod_t)VIRTUAL_parser_nodes__AError__init, /* pointer to parser_nodes:ALexerError:parser_nodes#AError#init */
(nitmethod_t)VIRTUAL_lexer__AError__message, /* pointer to parser_nodes:ALexerError:lexer#AError#message */
(nitmethod_t)VIRTUAL_lexer__AError__init_error, /* pointer to parser_nodes:ALexerError:lexer#AError#init_error */
(nitmethod_t)VIRTUAL_parser_nodes__ALexerError__init, /* pointer to parser_nodes:ALexerError:parser_nodes#ALexerError#init */
(nitmethod_t)VIRTUAL_lexer__ALexerError__string, /* pointer to parser_nodes:ALexerError:lexer#ALexerError#string */
(nitmethod_t)VIRTUAL_lexer__ALexerError__init_lexer_error, /* pointer to parser_nodes:ALexerError:lexer#ALexerError#init_lexer_error */
}
};
/* allocate ALexerError */
val* NEW_parser_nodes__ALexerError(const struct type* type) {
val* self /* : ALexerError */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALexerError;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALexerError exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALexerError exact> */
return self;
}
/* allocate ALexerError */
void CHECK_NEW_parser_nodes__ALexerError(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
val* var3 /* : String */;
val* var4 /* : String */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:ALexerError> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:ALexerError> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:ALexerError> */
var3 = self->attrs[COLOR_lexer__AError___message].val; /* _message on <self:ALexerError> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _message", "src/parser/lexer.nit", 1183);
exit(1);
}
var4 = self->attrs[COLOR_lexer__ALexerError___string].val; /* _string on <self:ALexerError> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _string", "src/parser/lexer.nit", 1193);
exit(1);
}
}
/* runtime class parser_nodes__AParserError */
const struct class class_parser_nodes__AParserError = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AParserError:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AParserError:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AParserError:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AParserError:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AParserError:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AParserError:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParserError:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParserError:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParserError:kernel#Object#hash */
(nitmethod_t)VIRTUAL_parser_nodes__EOF__to_s, /* pointer to parser_nodes:AParserError:parser_nodes#EOF#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AParserError:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AParserError:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AParserError:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AParserError:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AParserError:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AParserError:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AParserError:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AParserError:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AParserError:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AParserError:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AParserError:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AParserError:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AParserError:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AParserError:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AParserError:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AParserError:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AParserError:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AParserError:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AParserError:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AParserError:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AParserError:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AParserError:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AParserError:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AParserError:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AParserError:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AParserError:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AParserError:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__Token__replace_child, /* pointer to parser_nodes:AParserError:parser_nodes#Token#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParserError:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Token__visit_all, /* pointer to parser_nodes:AParserError:parser_nodes#Token#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AParserError:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AParserError:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AParserError:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AParserError:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParserError:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParserError:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AParserError:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParserError:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParserError:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParserError:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AParserError:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AParserError:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_lexer__Token__text, /* pointer to parser_nodes:AParserError:lexer#Token#text */
(nitmethod_t)VIRTUAL_lexer__Token__text_61d, /* pointer to parser_nodes:AParserError:lexer#Token#text= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token, /* pointer to parser_nodes:AParserError:parser_nodes#Token#prev_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__prev_token_61d, /* pointer to parser_nodes:AParserError:parser_nodes#Token#prev_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token, /* pointer to parser_nodes:AParserError:parser_nodes#Token#next_token */
(nitmethod_t)VIRTUAL_parser_nodes__Token__next_token_61d, /* pointer to parser_nodes:AParserError:parser_nodes#Token#next_token= */
(nitmethod_t)VIRTUAL_parser_nodes__Token__init, /* pointer to parser_nodes:AParserError:parser_nodes#Token#init */
(nitmethod_t)VIRTUAL_lexer__EOF__parser_index, /* pointer to parser_nodes:AParserError:lexer#EOF#parser_index */
(nitmethod_t)VIRTUAL_parser_nodes__EOF__init, /* pointer to parser_nodes:AParserError:parser_nodes#EOF#init */
(nitmethod_t)VIRTUAL_lexer__EOF__init_tk, /* pointer to parser_nodes:AParserError:lexer#EOF#init_tk */
(nitmethod_t)VIRTUAL_parser_nodes__AError__init, /* pointer to parser_nodes:AParserError:parser_nodes#AError#init */
(nitmethod_t)VIRTUAL_lexer__AError__message, /* pointer to parser_nodes:AParserError:lexer#AError#message */
(nitmethod_t)VIRTUAL_lexer__AError__init_error, /* pointer to parser_nodes:AParserError:lexer#AError#init_error */
(nitmethod_t)VIRTUAL_parser_nodes__AParserError__init, /* pointer to parser_nodes:AParserError:parser_nodes#AParserError#init */
(nitmethod_t)VIRTUAL_lexer__AParserError__token, /* pointer to parser_nodes:AParserError:lexer#AParserError#token */
(nitmethod_t)VIRTUAL_lexer__AParserError__init_parser_error, /* pointer to parser_nodes:AParserError:lexer#AParserError#init_parser_error */
}
};
/* allocate AParserError */
val* NEW_parser_nodes__AParserError(const struct type* type) {
val* self /* : AParserError */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AParserError;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AParserError exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AParserError exact> */
return self;
}
/* allocate AParserError */
void CHECK_NEW_parser_nodes__AParserError(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var2 /* : nullable String */;
val* var3 /* : String */;
val* var4 /* : Token */;
var = self->attrs[COLOR_parser_nodes__Token___64dprev_token].val; /* @prev_token on <self:AParserError> */
var1 = self->attrs[COLOR_parser_nodes__Token___64dnext_token].val; /* @next_token on <self:AParserError> */
var2 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:AParserError> */
var3 = self->attrs[COLOR_lexer__AError___message].val; /* _message on <self:AParserError> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _message", "src/parser/lexer.nit", 1183);
exit(1);
}
var4 = self->attrs[COLOR_lexer__AParserError___token].val; /* _token on <self:AParserError> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _token", "src/parser/lexer.nit", 1203);
exit(1);
}
}
/* runtime class parser_nodes__AModule */
const struct class class_parser_nodes__AModule = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AModule:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AModule:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AModule:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AModule:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AModule:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AModule:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AModule:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AModule:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AModule:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AModule:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AModule:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AModule:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AModule:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AModule:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AModule:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AModule:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AModule:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AModule:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AModule:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AModule:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AModule:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AModule:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AModule:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AModule:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AModule:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AModule:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AModule:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AModule:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AModule:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AModule:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AModule:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AModule:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AModule:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AModule:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AModule:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AModule:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AModule:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AModule:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AModule:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AModule:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AModule:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AModule:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AModule:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AModule:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AModule:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AModule:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AModule:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AModule__replace_child, /* pointer to parser_nodes:AModule:parser_prod#AModule#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AModule:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AModule:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AModule__visit_all, /* pointer to parser_nodes:AModule:parser_prod#AModule#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AModule:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AModule:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AModule:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AModule:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AModule:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AModule:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AModule:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AModule:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AModule:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AModule:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AModule:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AModule:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AModule:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AModule:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AModule:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AModule:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AModule:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AModule:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AModule__n_moduledecl, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_moduledecl */
(nitmethod_t)VIRTUAL_parser_prod__AModule__n_moduledecl_61d, /* pointer to parser_nodes:AModule:parser_prod#AModule#n_moduledecl= */
(nitmethod_t)VIRTUAL_parser_nodes__AModule__n_imports, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_imports */
(nitmethod_t)VIRTUAL_parser_nodes__AModule__n_extern_code_blocks, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_extern_code_blocks */
(nitmethod_t)VIRTUAL_parser_nodes__AModule__n_classdefs, /* pointer to parser_nodes:AModule:parser_nodes#AModule#n_classdefs */
(nitmethod_t)VIRTUAL_parser_nodes__AModule__init, /* pointer to parser_nodes:AModule:parser_nodes#AModule#init */
(nitmethod_t)VIRTUAL_parser_prod__AModule__empty_init, /* pointer to parser_nodes:AModule:parser_prod#AModule#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AModule__init_amodule, /* pointer to parser_nodes:AModule:parser_prod#AModule#init_amodule */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AModule__do_simple_misc_analysis, /* pointer to parser_nodes:AModule:simple_misc_analysis#AModule#do_simple_misc_analysis */
(nitmethod_t)VIRTUAL_literal__AModule__do_literal, /* pointer to parser_nodes:AModule:literal#AModule#do_literal */
(nitmethod_t)VIRTUAL_modelbuilder__AModule__mmodule, /* pointer to parser_nodes:AModule:modelbuilder#AModule#mmodule */
(nitmethod_t)VIRTUAL_modelbuilder__AModule__mmodule_61d, /* pointer to parser_nodes:AModule:modelbuilder#AModule#mmodule= */
(nitmethod_t)VIRTUAL_modelbuilder__AModule__is_importation_done, /* pointer to parser_nodes:AModule:modelbuilder#AModule#is_importation_done */
(nitmethod_t)VIRTUAL_modelbuilder__AModule__is_importation_done_61d, /* pointer to parser_nodes:AModule:modelbuilder#AModule#is_importation_done= */
(nitmethod_t)VIRTUAL_modelize_class__AModule__build_classes_is_done, /* pointer to parser_nodes:AModule:modelize_class#AModule#build_classes_is_done */
(nitmethod_t)VIRTUAL_modelize_class__AModule__build_classes_is_done_61d, /* pointer to parser_nodes:AModule:modelize_class#AModule#build_classes_is_done= */
(nitmethod_t)VIRTUAL_modelize_class__AModule__mclass2nclassdef, /* pointer to parser_nodes:AModule:modelize_class#AModule#mclass2nclassdef */
(nitmethod_t)VIRTUAL_modelize_class__AModule__mclass2nclassdef_61d, /* pointer to parser_nodes:AModule:modelize_class#AModule#mclass2nclassdef= */
}
};
/* allocate AModule */
val* NEW_parser_nodes__AModule(const struct type* type) {
val* self /* : AModule */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[AImport] */;
val* var5 /* : ANodes[AExternCodeBlock] */;
val* var6 /* : ANodes[AClassdef] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[MClass, AClassdef] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AModule;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AModule exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AModule exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AModule exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var3; /* _n_moduledecl on <self:AModule exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AImport);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[AImport]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__AModule___n_imports].val = var4; /* _n_imports on <self:AModule exact> */
var5 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExternCodeBlock);
((void (*)(val*, val*))(var5->class->vft[COLOR_parser_nodes__ANodes__init]))(var5, self) /* init on <var5:ANodes[AExternCodeBlock]>*/;
CHECK_NEW_parser_nodes__ANodes(var5);
self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val = var5; /* _n_extern_code_blocks on <self:AModule exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClassdef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClassdef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val = var6; /* _n_classdefs on <self:AModule exact> */
var7 = 0;
self->attrs[COLOR_modelbuilder__AModule___64dis_importation_done].s = var7; /* @is_importation_done on <self:AModule exact> */
var8 = 0;
self->attrs[COLOR_modelize_class__AModule___64dbuild_classes_is_done].s = var8; /* @build_classes_is_done on <self:AModule exact> */
var9 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassparser_nodes__AClassdef);
((void (*)(val*))(var9->class->vft[COLOR_hash_collection__HashMap__init]))(var9) /* init on <var9:HashMap[MClass, AClassdef]>*/;
CHECK_NEW_hash_collection__HashMap(var9);
self->attrs[COLOR_modelize_class__AModule___64dmclass2nclassdef].val = var9; /* @mclass2nclassdef on <self:AModule exact> */
return self;
}
/* allocate AModule */
void CHECK_NEW_parser_nodes__AModule(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable MModule */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AModule> */
var1 = self->attrs[COLOR_modelbuilder__AModule___64dmmodule].val; /* @mmodule on <self:AModule> */
}
/* runtime class parser_nodes__AModuledecl */
const struct class class_parser_nodes__AModuledecl = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AModuledecl:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AModuledecl:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AModuledecl:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AModuledecl:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AModuledecl:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AModuledecl:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AModuledecl:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AModuledecl:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AModuledecl:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AModuledecl:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AModuledecl:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AModuledecl:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AModuledecl:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AModuledecl:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AModuledecl:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AModuledecl:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AModuledecl:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AModuledecl:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AModuledecl:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AModuledecl:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AModuledecl:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AModuledecl:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AModuledecl:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AModuledecl:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AModuledecl:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AModuledecl:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AModuledecl:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AModuledecl:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AModuledecl:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AModuledecl:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AModuledecl:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AModuledecl:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AModuledecl:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AModuledecl:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AModuledecl:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AModuledecl:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AModuledecl:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__replace_child, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__visit_all, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AModuledecl:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AModuledecl:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AModuledecl:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AModuledecl:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AModuledecl:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AModuledecl:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AModuledecl:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AModuledecl:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AModuledecl:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AModuledecl:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AModuledecl:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AModuledecl:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__n_annotations_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AModuledecl:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AModuledecl:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AModuledecl:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AModuledecl__n_doc, /* pointer to parser_nodes:AModuledecl:parser_nodes#AModuledecl#n_doc */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__n_doc_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_doc= */
(nitmethod_t)VIRTUAL_parser_nodes__AModuledecl__n_kwmodule, /* pointer to parser_nodes:AModuledecl:parser_nodes#AModuledecl#n_kwmodule */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__n_kwmodule_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_kwmodule= */
(nitmethod_t)VIRTUAL_parser_nodes__AModuledecl__n_name, /* pointer to parser_nodes:AModuledecl:parser_nodes#AModuledecl#n_name */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__n_name_61d, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#n_name= */
(nitmethod_t)VIRTUAL_parser_nodes__AModuledecl__init, /* pointer to parser_nodes:AModuledecl:parser_nodes#AModuledecl#init */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__empty_init, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AModuledecl__init_amoduledecl, /* pointer to parser_nodes:AModuledecl:parser_prod#AModuledecl#init_amoduledecl */
}
};
/* allocate AModuledecl */
val* NEW_parser_nodes__AModuledecl(const struct type* type) {
val* self /* : AModuledecl */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AModuledecl;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AModuledecl exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AModuledecl exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AModuledecl exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var3; /* _n_doc on <self:AModuledecl exact> */
return self;
}
/* allocate AModuledecl */
void CHECK_NEW_parser_nodes__AModuledecl(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwmodule */;
val* var2 /* : AModuleName */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AModuledecl> */
var1 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwmodule", "src/parser/parser_nodes.nit", 589);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_name", "src/parser/parser_nodes.nit", 590);
exit(1);
}
}
/* runtime class parser_nodes__AStdImport */
const struct class class_parser_nodes__AStdImport = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStdImport:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStdImport:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStdImport:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStdImport:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStdImport:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStdImport:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStdImport:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStdImport:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStdImport:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStdImport:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStdImport:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStdImport:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStdImport:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStdImport:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStdImport:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStdImport:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStdImport:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStdImport:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStdImport:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStdImport:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStdImport:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStdImport:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStdImport:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStdImport:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStdImport:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStdImport:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStdImport:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStdImport:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStdImport:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStdImport:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStdImport:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStdImport:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStdImport:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStdImport:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStdImport:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStdImport:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStdImport:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__replace_child, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__visit_all, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStdImport:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStdImport:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStdImport:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStdImport:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStdImport:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStdImport:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStdImport:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStdImport:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStdImport:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStdImport:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStdImport:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStdImport:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__n_annotations_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStdImport:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStdImport:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStdImport:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AImport__init, /* pointer to parser_nodes:AStdImport:parser_nodes#AImport#init */
(nitmethod_t)VIRTUAL_parser_nodes__AStdImport__n_visibility, /* pointer to parser_nodes:AStdImport:parser_nodes#AStdImport#n_visibility */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__n_visibility_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdImport__n_kwimport, /* pointer to parser_nodes:AStdImport:parser_nodes#AStdImport#n_kwimport */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__n_kwimport_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_kwimport= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdImport__n_name, /* pointer to parser_nodes:AStdImport:parser_nodes#AStdImport#n_name */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__n_name_61d, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#n_name= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdImport__init, /* pointer to parser_nodes:AStdImport:parser_nodes#AStdImport#init */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__empty_init, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStdImport__init_astdimport, /* pointer to parser_nodes:AStdImport:parser_prod#AStdImport#init_astdimport */
(nitmethod_t)VIRTUAL_modelbuilder__AStdImport__mmodule, /* pointer to parser_nodes:AStdImport:modelbuilder#AStdImport#mmodule */
(nitmethod_t)VIRTUAL_modelbuilder__AStdImport__mmodule_61d, /* pointer to parser_nodes:AStdImport:modelbuilder#AStdImport#mmodule= */
}
};
/* allocate AStdImport */
val* NEW_parser_nodes__AStdImport(const struct type* type) {
val* self /* : AStdImport */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStdImport;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStdImport exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStdImport exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStdImport exact> */
var3 = NULL;
self->attrs[COLOR_modelbuilder__AStdImport___64dmmodule].val = var3; /* @mmodule on <self:AStdImport exact> */
return self;
}
/* allocate AStdImport */
void CHECK_NEW_parser_nodes__AStdImport(val* self) {
val* var /* : nullable Location */;
val* var1 /* : AVisibility */;
val* var2 /* : TKwimport */;
val* var3 /* : AModuleName */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStdImport> */
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_visibility", "src/parser/parser_nodes.nit", 601);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwimport", "src/parser/parser_nodes.nit", 602);
exit(1);
}
var3 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_name", "src/parser/parser_nodes.nit", 603);
exit(1);
}
}
/* runtime class parser_nodes__ANoImport */
const struct class class_parser_nodes__ANoImport = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANoImport:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANoImport:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANoImport:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANoImport:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ANoImport:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ANoImport:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANoImport:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANoImport:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANoImport:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANoImport:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANoImport:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANoImport:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANoImport:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANoImport:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANoImport:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ANoImport:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ANoImport:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ANoImport:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ANoImport:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ANoImport:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ANoImport:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANoImport:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANoImport:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANoImport:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ANoImport:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ANoImport:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANoImport:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANoImport:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ANoImport:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ANoImport:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ANoImport:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANoImport:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANoImport:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANoImport:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANoImport:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANoImport:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANoImport:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__replace_child, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__visit_all, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ANoImport:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ANoImport:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ANoImport:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ANoImport:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANoImport:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANoImport:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANoImport:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANoImport:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANoImport:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANoImport:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ANoImport:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANoImport:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ANoImport:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANoImport:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANoImport:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AImport__init, /* pointer to parser_nodes:ANoImport:parser_nodes#AImport#init */
(nitmethod_t)VIRTUAL_parser_nodes__ANoImport__n_visibility, /* pointer to parser_nodes:ANoImport:parser_nodes#ANoImport#n_visibility */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__n_visibility_61d, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__ANoImport__n_kwimport, /* pointer to parser_nodes:ANoImport:parser_nodes#ANoImport#n_kwimport */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__n_kwimport_61d, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#n_kwimport= */
(nitmethod_t)VIRTUAL_parser_nodes__ANoImport__n_kwend, /* pointer to parser_nodes:ANoImport:parser_nodes#ANoImport#n_kwend */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__n_kwend_61d, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#n_kwend= */
(nitmethod_t)VIRTUAL_parser_nodes__ANoImport__init, /* pointer to parser_nodes:ANoImport:parser_nodes#ANoImport#init */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__empty_init, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ANoImport__init_anoimport, /* pointer to parser_nodes:ANoImport:parser_prod#ANoImport#init_anoimport */
}
};
/* allocate ANoImport */
val* NEW_parser_nodes__ANoImport(const struct type* type) {
val* self /* : ANoImport */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANoImport;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANoImport exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ANoImport exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANoImport exact> */
return self;
}
/* allocate ANoImport */
void CHECK_NEW_parser_nodes__ANoImport(val* self) {
val* var /* : nullable Location */;
val* var1 /* : AVisibility */;
val* var2 /* : TKwimport */;
val* var3 /* : TKwend */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ANoImport> */
var1 = self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_visibility", "src/parser/parser_nodes.nit", 609);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwimport", "src/parser/parser_nodes.nit", 610);
exit(1);
}
var3 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwend", "src/parser/parser_nodes.nit", 611);
exit(1);
}
}
/* runtime class parser_nodes__APublicVisibility */
const struct class class_parser_nodes__APublicVisibility = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APublicVisibility:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APublicVisibility:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APublicVisibility:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APublicVisibility:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APublicVisibility:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APublicVisibility:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APublicVisibility:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APublicVisibility:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APublicVisibility:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APublicVisibility:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APublicVisibility:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APublicVisibility:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APublicVisibility:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APublicVisibility:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APublicVisibility:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APublicVisibility:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APublicVisibility:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APublicVisibility:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APublicVisibility:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APublicVisibility:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APublicVisibility:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APublicVisibility:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APublicVisibility:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APublicVisibility:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APublicVisibility:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APublicVisibility:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APublicVisibility:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APublicVisibility:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APublicVisibility:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APublicVisibility:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APublicVisibility:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APublicVisibility:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APublicVisibility:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APublicVisibility__replace_child, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APublicVisibility__visit_all, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APublicVisibility:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APublicVisibility:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APublicVisibility:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APublicVisibility:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APublicVisibility:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APublicVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APublicVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APublicVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:APublicVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APublicVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APublicVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APublicVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APublicVisibility:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APublicVisibility:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APublicVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AVisibility__init, /* pointer to parser_nodes:APublicVisibility:parser_nodes#AVisibility#init */
(nitmethod_t)VIRTUAL_modelbuilder__APublicVisibility__mvisibility, /* pointer to parser_nodes:APublicVisibility:modelbuilder#APublicVisibility#mvisibility */
(nitmethod_t)VIRTUAL_parser_nodes__APublicVisibility__init, /* pointer to parser_nodes:APublicVisibility:parser_nodes#APublicVisibility#init */
(nitmethod_t)VIRTUAL_parser_prod__APublicVisibility__empty_init, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APublicVisibility__init_apublicvisibility, /* pointer to parser_nodes:APublicVisibility:parser_prod#APublicVisibility#init_apublicvisibility */
}
};
/* allocate APublicVisibility */
val* NEW_parser_nodes__APublicVisibility(const struct type* type) {
val* self /* : APublicVisibility */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APublicVisibility;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APublicVisibility exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APublicVisibility exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APublicVisibility exact> */
return self;
}
/* allocate APublicVisibility */
void CHECK_NEW_parser_nodes__APublicVisibility(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APublicVisibility> */
}
/* runtime class parser_nodes__APrivateVisibility */
const struct class class_parser_nodes__APrivateVisibility = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APrivateVisibility:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APrivateVisibility:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APrivateVisibility:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APrivateVisibility:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APrivateVisibility:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APrivateVisibility:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APrivateVisibility:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APrivateVisibility:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APrivateVisibility:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APrivateVisibility:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APrivateVisibility:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APrivateVisibility:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APrivateVisibility:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APrivateVisibility:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APrivateVisibility:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APrivateVisibility:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APrivateVisibility:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APrivateVisibility:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APrivateVisibility:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APrivateVisibility:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APrivateVisibility:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APrivateVisibility:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APrivateVisibility:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APrivateVisibility:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APrivateVisibility:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APrivateVisibility__replace_child, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APrivateVisibility__visit_all, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APrivateVisibility:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APrivateVisibility:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APrivateVisibility:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APrivateVisibility:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APrivateVisibility:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APrivateVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APrivateVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APrivateVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:APrivateVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APrivateVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APrivateVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APrivateVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APrivateVisibility:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AVisibility__init, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#AVisibility#init */
(nitmethod_t)VIRTUAL_modelbuilder__APrivateVisibility__mvisibility, /* pointer to parser_nodes:APrivateVisibility:modelbuilder#APrivateVisibility#mvisibility */
(nitmethod_t)VIRTUAL_parser_nodes__APrivateVisibility__n_kwprivate, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#APrivateVisibility#n_kwprivate */
(nitmethod_t)VIRTUAL_parser_prod__APrivateVisibility__n_kwprivate_61d, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#n_kwprivate= */
(nitmethod_t)VIRTUAL_parser_nodes__APrivateVisibility__init, /* pointer to parser_nodes:APrivateVisibility:parser_nodes#APrivateVisibility#init */
(nitmethod_t)VIRTUAL_parser_prod__APrivateVisibility__empty_init, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APrivateVisibility__init_aprivatevisibility, /* pointer to parser_nodes:APrivateVisibility:parser_prod#APrivateVisibility#init_aprivatevisibility */
}
};
/* allocate APrivateVisibility */
val* NEW_parser_nodes__APrivateVisibility(const struct type* type) {
val* self /* : APrivateVisibility */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APrivateVisibility;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APrivateVisibility exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APrivateVisibility exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APrivateVisibility exact> */
return self;
}
/* allocate APrivateVisibility */
void CHECK_NEW_parser_nodes__APrivateVisibility(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwprivate */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APrivateVisibility> */
var1 = self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwprivate", "src/parser/parser_nodes.nit", 628);
exit(1);
}
}
/* runtime class parser_nodes__AProtectedVisibility */
const struct class class_parser_nodes__AProtectedVisibility = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AProtectedVisibility:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AProtectedVisibility:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AProtectedVisibility:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AProtectedVisibility:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AProtectedVisibility:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AProtectedVisibility:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AProtectedVisibility:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AProtectedVisibility:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AProtectedVisibility:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AProtectedVisibility:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AProtectedVisibility:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AProtectedVisibility:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AProtectedVisibility:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AProtectedVisibility:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AProtectedVisibility:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AProtectedVisibility:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AProtectedVisibility:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AProtectedVisibility:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AProtectedVisibility:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AProtectedVisibility:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AProtectedVisibility:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AProtectedVisibility:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AProtectedVisibility:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AProtectedVisibility:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AProtectedVisibility:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AProtectedVisibility__replace_child, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AProtectedVisibility__visit_all, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AProtectedVisibility:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AProtectedVisibility:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AProtectedVisibility:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AProtectedVisibility:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AProtectedVisibility:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AProtectedVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AProtectedVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AProtectedVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AProtectedVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AProtectedVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AProtectedVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AProtectedVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AProtectedVisibility:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AVisibility__init, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#AVisibility#init */
(nitmethod_t)VIRTUAL_modelbuilder__AProtectedVisibility__mvisibility, /* pointer to parser_nodes:AProtectedVisibility:modelbuilder#AProtectedVisibility#mvisibility */
(nitmethod_t)VIRTUAL_parser_nodes__AProtectedVisibility__n_kwprotected, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#AProtectedVisibility#n_kwprotected */
(nitmethod_t)VIRTUAL_parser_prod__AProtectedVisibility__n_kwprotected_61d, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#n_kwprotected= */
(nitmethod_t)VIRTUAL_parser_nodes__AProtectedVisibility__init, /* pointer to parser_nodes:AProtectedVisibility:parser_nodes#AProtectedVisibility#init */
(nitmethod_t)VIRTUAL_parser_prod__AProtectedVisibility__empty_init, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AProtectedVisibility__init_aprotectedvisibility, /* pointer to parser_nodes:AProtectedVisibility:parser_prod#AProtectedVisibility#init_aprotectedvisibility */
}
};
/* allocate AProtectedVisibility */
val* NEW_parser_nodes__AProtectedVisibility(const struct type* type) {
val* self /* : AProtectedVisibility */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AProtectedVisibility;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AProtectedVisibility exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AProtectedVisibility exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AProtectedVisibility exact> */
return self;
}
/* allocate AProtectedVisibility */
void CHECK_NEW_parser_nodes__AProtectedVisibility(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwprotected */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AProtectedVisibility> */
var1 = self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwprotected", "src/parser/parser_nodes.nit", 632);
exit(1);
}
}
/* runtime class parser_nodes__AIntrudeVisibility */
const struct class class_parser_nodes__AIntrudeVisibility = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIntrudeVisibility:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIntrudeVisibility:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIntrudeVisibility:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIntrudeVisibility:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIntrudeVisibility:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIntrudeVisibility:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIntrudeVisibility:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIntrudeVisibility:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIntrudeVisibility:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIntrudeVisibility:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIntrudeVisibility:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIntrudeVisibility:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIntrudeVisibility__replace_child, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIntrudeVisibility__visit_all, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIntrudeVisibility:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIntrudeVisibility:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIntrudeVisibility:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AIntrudeVisibility:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIntrudeVisibility:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIntrudeVisibility:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIntrudeVisibility:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIntrudeVisibility:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIntrudeVisibility:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIntrudeVisibility:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIntrudeVisibility:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIntrudeVisibility:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIntrudeVisibility:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AVisibility__init, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#AVisibility#init */
(nitmethod_t)VIRTUAL_modelbuilder__AIntrudeVisibility__mvisibility, /* pointer to parser_nodes:AIntrudeVisibility:modelbuilder#AIntrudeVisibility#mvisibility */
(nitmethod_t)VIRTUAL_parser_nodes__AIntrudeVisibility__n_kwintrude, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#AIntrudeVisibility#n_kwintrude */
(nitmethod_t)VIRTUAL_parser_prod__AIntrudeVisibility__n_kwintrude_61d, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#n_kwintrude= */
(nitmethod_t)VIRTUAL_parser_nodes__AIntrudeVisibility__init, /* pointer to parser_nodes:AIntrudeVisibility:parser_nodes#AIntrudeVisibility#init */
(nitmethod_t)VIRTUAL_parser_prod__AIntrudeVisibility__empty_init, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIntrudeVisibility__init_aintrudevisibility, /* pointer to parser_nodes:AIntrudeVisibility:parser_prod#AIntrudeVisibility#init_aintrudevisibility */
}
};
/* allocate AIntrudeVisibility */
val* NEW_parser_nodes__AIntrudeVisibility(const struct type* type) {
val* self /* : AIntrudeVisibility */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIntrudeVisibility;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIntrudeVisibility exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIntrudeVisibility exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIntrudeVisibility exact> */
return self;
}
/* allocate AIntrudeVisibility */
void CHECK_NEW_parser_nodes__AIntrudeVisibility(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwintrude */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIntrudeVisibility> */
var1 = self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwintrude", "src/parser/parser_nodes.nit", 636);
exit(1);
}
}
/* runtime class parser_nodes__AStdClassdef */
const struct class class_parser_nodes__AStdClassdef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStdClassdef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStdClassdef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStdClassdef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStdClassdef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStdClassdef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStdClassdef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStdClassdef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStdClassdef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStdClassdef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStdClassdef:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStdClassdef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStdClassdef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStdClassdef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStdClassdef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStdClassdef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStdClassdef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStdClassdef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStdClassdef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStdClassdef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStdClassdef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStdClassdef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStdClassdef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStdClassdef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStdClassdef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStdClassdef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStdClassdef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStdClassdef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStdClassdef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStdClassdef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStdClassdef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStdClassdef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStdClassdef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStdClassdef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__hot_location, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__replace_child, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__visit_all, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStdClassdef:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStdClassdef:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStdClassdef:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStdClassdef:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStdClassdef:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStdClassdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStdClassdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStdClassdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStdClassdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStdClassdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStdClassdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStdClassdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_annotations_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStdClassdef:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStdClassdef:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStdClassdef:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClassdef__n_propdefs, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AClassdef#n_propdefs */
(nitmethod_t)VIRTUAL_parser_nodes__AClassdef__init, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AClassdef#init */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclass, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclass */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclass_61d, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclass= */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclassdef, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclassdef */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclassdef_61d, /* pointer to parser_nodes:AStdClassdef:modelize_class#AClassdef#mclassdef= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__build_properties_is_done, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#build_properties_is_done */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__build_properties_is_done_61d, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#build_properties_is_done= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__super_inits, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#super_inits */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__super_inits_61d, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#super_inits= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mfree_init, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#mfree_init */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mfree_init_61d, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#mfree_init= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mprop2npropdef, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#mprop2npropdef */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mprop2npropdef_61d, /* pointer to parser_nodes:AStdClassdef:modelize_property#AClassdef#mprop2npropdef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AClassdef__compile_to_c, /* pointer to parser_nodes:AStdClassdef:abstract_compiler#AClassdef#compile_to_c */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_doc, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_doc */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_doc_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_doc= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_kwredef, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_kwredef */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_kwredef_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_kwredef= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_visibility, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_visibility */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_visibility_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_classkind, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_classkind */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_classkind_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_classkind= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_id, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_id_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_formaldefs, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_formaldefs */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_extern_code_block, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_extern_code_block */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_extern_code_block_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_extern_code_block= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_superclasses, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_superclasses */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__n_kwend, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#n_kwend */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__n_kwend_61d, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#n_kwend= */
(nitmethod_t)VIRTUAL_parser_nodes__AStdClassdef__init, /* pointer to parser_nodes:AStdClassdef:parser_nodes#AStdClassdef#init */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__empty_init, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStdClassdef__init_astdclassdef, /* pointer to parser_nodes:AStdClassdef:parser_prod#AStdClassdef#init_astdclassdef */
}
};
/* allocate AStdClassdef */
val* NEW_parser_nodes__AStdClassdef(const struct type* type) {
val* self /* : AStdClassdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[APropdef] */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMap[MProperty, APropdef] */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var10 /* : null */;
val* var11 /* : ANodes[AFormaldef] */;
val* var12 /* : null */;
val* var13 /* : ANodes[ASuperclass] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStdClassdef;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStdClassdef exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStdClassdef exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStdClassdef exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__APropdef);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[APropdef]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val = var3; /* _n_propdefs on <self:AStdClassdef exact> */
var4 = 0;
self->attrs[COLOR_modelize_property__AClassdef___64dbuild_properties_is_done].s = var4; /* @build_properties_is_done on <self:AStdClassdef exact> */
var5 = NULL;
self->attrs[COLOR_modelize_property__AClassdef___64dsuper_inits].val = var5; /* @super_inits on <self:AStdClassdef exact> */
var6 = NULL;
self->attrs[COLOR_modelize_property__AClassdef___64dmfree_init].val = var6; /* @mfree_init on <self:AStdClassdef exact> */
var7 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashMap__init]))(var7) /* init on <var7:HashMap[MProperty, APropdef]>*/;
CHECK_NEW_hash_collection__HashMap(var7);
self->attrs[COLOR_modelize_property__AClassdef___64dmprop2npropdef].val = var7; /* @mprop2npropdef on <self:AStdClassdef exact> */
var8 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var8; /* _n_doc on <self:AStdClassdef exact> */
var9 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var9; /* _n_kwredef on <self:AStdClassdef exact> */
var10 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var10; /* _n_id on <self:AStdClassdef exact> */
var11 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AFormaldef);
((void (*)(val*, val*))(var11->class->vft[COLOR_parser_nodes__ANodes__init]))(var11, self) /* init on <var11:ANodes[AFormaldef]>*/;
CHECK_NEW_parser_nodes__ANodes(var11);
self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val = var11; /* _n_formaldefs on <self:AStdClassdef exact> */
var12 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var12; /* _n_extern_code_block on <self:AStdClassdef exact> */
var13 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__ASuperclass);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_nodes__ANodes__init]))(var13, self) /* init on <var13:ANodes[ASuperclass]>*/;
CHECK_NEW_parser_nodes__ANodes(var13);
self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val = var13; /* _n_superclasses on <self:AStdClassdef exact> */
return self;
}
/* allocate AStdClassdef */
void CHECK_NEW_parser_nodes__AStdClassdef(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable MClass */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : AVisibility */;
val* var4 /* : AClasskind */;
val* var5 /* : TKwend */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStdClassdef> */
var1 = self->attrs[COLOR_modelize_class__AClassdef___64dmclass].val; /* @mclass on <self:AStdClassdef> */
var2 = self->attrs[COLOR_modelize_class__AClassdef___64dmclassdef].val; /* @mclassdef on <self:AStdClassdef> */
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_visibility", "src/parser/parser_nodes.nit", 651);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_classkind", "src/parser/parser_nodes.nit", 652);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwend", "src/parser/parser_nodes.nit", 657);
exit(1);
}
}
/* runtime class parser_nodes__ATopClassdef */
const struct class class_parser_nodes__ATopClassdef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATopClassdef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ATopClassdef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATopClassdef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATopClassdef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ATopClassdef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ATopClassdef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATopClassdef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATopClassdef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATopClassdef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATopClassdef:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATopClassdef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATopClassdef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATopClassdef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATopClassdef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATopClassdef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ATopClassdef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ATopClassdef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ATopClassdef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ATopClassdef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ATopClassdef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ATopClassdef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATopClassdef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATopClassdef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATopClassdef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ATopClassdef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ATopClassdef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATopClassdef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATopClassdef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ATopClassdef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ATopClassdef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ATopClassdef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ATopClassdef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ATopClassdef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ATopClassdef__replace_child, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATopClassdef__visit_all, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ATopClassdef:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ATopClassdef:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ATopClassdef:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ATopClassdef:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATopClassdef:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATopClassdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATopClassdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATopClassdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATopClassdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ATopClassdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ATopClassdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATopClassdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ATopClassdef:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ATopClassdef:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClassdef__n_propdefs, /* pointer to parser_nodes:ATopClassdef:parser_nodes#AClassdef#n_propdefs */
(nitmethod_t)VIRTUAL_parser_nodes__AClassdef__init, /* pointer to parser_nodes:ATopClassdef:parser_nodes#AClassdef#init */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclass, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclass */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclass_61d, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclass= */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclassdef, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclassdef */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclassdef_61d, /* pointer to parser_nodes:ATopClassdef:modelize_class#AClassdef#mclassdef= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__build_properties_is_done, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#build_properties_is_done */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__build_properties_is_done_61d, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#build_properties_is_done= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__super_inits, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#super_inits */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__super_inits_61d, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#super_inits= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mfree_init, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#mfree_init */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mfree_init_61d, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#mfree_init= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mprop2npropdef, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#mprop2npropdef */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mprop2npropdef_61d, /* pointer to parser_nodes:ATopClassdef:modelize_property#AClassdef#mprop2npropdef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AClassdef__compile_to_c, /* pointer to parser_nodes:ATopClassdef:abstract_compiler#AClassdef#compile_to_c */
(nitmethod_t)VIRTUAL_parser_nodes__ATopClassdef__init, /* pointer to parser_nodes:ATopClassdef:parser_nodes#ATopClassdef#init */
(nitmethod_t)VIRTUAL_parser_prod__ATopClassdef__empty_init, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ATopClassdef__init_atopclassdef, /* pointer to parser_nodes:ATopClassdef:parser_prod#ATopClassdef#init_atopclassdef */
}
};
/* allocate ATopClassdef */
val* NEW_parser_nodes__ATopClassdef(const struct type* type) {
val* self /* : ATopClassdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[APropdef] */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMap[MProperty, APropdef] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ATopClassdef;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ATopClassdef exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ATopClassdef exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ATopClassdef exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__APropdef);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[APropdef]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val = var3; /* _n_propdefs on <self:ATopClassdef exact> */
var4 = 0;
self->attrs[COLOR_modelize_property__AClassdef___64dbuild_properties_is_done].s = var4; /* @build_properties_is_done on <self:ATopClassdef exact> */
var5 = NULL;
self->attrs[COLOR_modelize_property__AClassdef___64dsuper_inits].val = var5; /* @super_inits on <self:ATopClassdef exact> */
var6 = NULL;
self->attrs[COLOR_modelize_property__AClassdef___64dmfree_init].val = var6; /* @mfree_init on <self:ATopClassdef exact> */
var7 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashMap__init]))(var7) /* init on <var7:HashMap[MProperty, APropdef]>*/;
CHECK_NEW_hash_collection__HashMap(var7);
self->attrs[COLOR_modelize_property__AClassdef___64dmprop2npropdef].val = var7; /* @mprop2npropdef on <self:ATopClassdef exact> */
return self;
}
/* allocate ATopClassdef */
void CHECK_NEW_parser_nodes__ATopClassdef(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable MClass */;
val* var2 /* : nullable MClassDef */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ATopClassdef> */
var1 = self->attrs[COLOR_modelize_class__AClassdef___64dmclass].val; /* @mclass on <self:ATopClassdef> */
var2 = self->attrs[COLOR_modelize_class__AClassdef___64dmclassdef].val; /* @mclassdef on <self:ATopClassdef> */
}
/* runtime class parser_nodes__AMainClassdef */
const struct class class_parser_nodes__AMainClassdef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMainClassdef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AMainClassdef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMainClassdef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMainClassdef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AMainClassdef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AMainClassdef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMainClassdef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMainClassdef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMainClassdef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMainClassdef:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMainClassdef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMainClassdef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMainClassdef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMainClassdef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMainClassdef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AMainClassdef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AMainClassdef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AMainClassdef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AMainClassdef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AMainClassdef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AMainClassdef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMainClassdef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMainClassdef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMainClassdef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AMainClassdef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AMainClassdef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMainClassdef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMainClassdef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AMainClassdef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AMainClassdef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AMainClassdef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMainClassdef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMainClassdef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AMainClassdef__replace_child, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMainClassdef__visit_all, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AMainClassdef:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AMainClassdef:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AMainClassdef:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AMainClassdef:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMainClassdef:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMainClassdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMainClassdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMainClassdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMainClassdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMainClassdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMainClassdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMainClassdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AMainClassdef:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMainClassdef:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMainClassdef:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClassdef__n_propdefs, /* pointer to parser_nodes:AMainClassdef:parser_nodes#AClassdef#n_propdefs */
(nitmethod_t)VIRTUAL_parser_nodes__AClassdef__init, /* pointer to parser_nodes:AMainClassdef:parser_nodes#AClassdef#init */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclass, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclass */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclass_61d, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclass= */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclassdef, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclassdef */
(nitmethod_t)VIRTUAL_modelize_class__AClassdef__mclassdef_61d, /* pointer to parser_nodes:AMainClassdef:modelize_class#AClassdef#mclassdef= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__build_properties_is_done, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#build_properties_is_done */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__build_properties_is_done_61d, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#build_properties_is_done= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__super_inits, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#super_inits */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__super_inits_61d, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#super_inits= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mfree_init, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#mfree_init */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mfree_init_61d, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#mfree_init= */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mprop2npropdef, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#mprop2npropdef */
(nitmethod_t)VIRTUAL_modelize_property__AClassdef__mprop2npropdef_61d, /* pointer to parser_nodes:AMainClassdef:modelize_property#AClassdef#mprop2npropdef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AClassdef__compile_to_c, /* pointer to parser_nodes:AMainClassdef:abstract_compiler#AClassdef#compile_to_c */
(nitmethod_t)VIRTUAL_parser_nodes__AMainClassdef__init, /* pointer to parser_nodes:AMainClassdef:parser_nodes#AMainClassdef#init */
(nitmethod_t)VIRTUAL_parser_prod__AMainClassdef__empty_init, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AMainClassdef__init_amainclassdef, /* pointer to parser_nodes:AMainClassdef:parser_prod#AMainClassdef#init_amainclassdef */
}
};
/* allocate AMainClassdef */
val* NEW_parser_nodes__AMainClassdef(const struct type* type) {
val* self /* : AMainClassdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[APropdef] */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMap[MProperty, APropdef] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMainClassdef;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AMainClassdef exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AMainClassdef exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMainClassdef exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__APropdef);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[APropdef]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val = var3; /* _n_propdefs on <self:AMainClassdef exact> */
var4 = 0;
self->attrs[COLOR_modelize_property__AClassdef___64dbuild_properties_is_done].s = var4; /* @build_properties_is_done on <self:AMainClassdef exact> */
var5 = NULL;
self->attrs[COLOR_modelize_property__AClassdef___64dsuper_inits].val = var5; /* @super_inits on <self:AMainClassdef exact> */
var6 = NULL;
self->attrs[COLOR_modelize_property__AClassdef___64dmfree_init].val = var6; /* @mfree_init on <self:AMainClassdef exact> */
var7 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MPropertyparser_nodes__APropdef);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashMap__init]))(var7) /* init on <var7:HashMap[MProperty, APropdef]>*/;
CHECK_NEW_hash_collection__HashMap(var7);
self->attrs[COLOR_modelize_property__AClassdef___64dmprop2npropdef].val = var7; /* @mprop2npropdef on <self:AMainClassdef exact> */
return self;
}
/* allocate AMainClassdef */
void CHECK_NEW_parser_nodes__AMainClassdef(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable MClass */;
val* var2 /* : nullable MClassDef */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AMainClassdef> */
var1 = self->attrs[COLOR_modelize_class__AClassdef___64dmclass].val; /* @mclass on <self:AMainClassdef> */
var2 = self->attrs[COLOR_modelize_class__AClassdef___64dmclassdef].val; /* @mclassdef on <self:AMainClassdef> */
}
/* runtime class parser_nodes__AConcreteClasskind */
const struct class class_parser_nodes__AConcreteClasskind = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AConcreteClasskind:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AConcreteClasskind:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AConcreteClasskind:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AConcreteClasskind:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AConcreteClasskind:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AConcreteClasskind:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AConcreteClasskind:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AConcreteClasskind:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AConcreteClasskind:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AConcreteClasskind:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AConcreteClasskind:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AConcreteClasskind:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AConcreteClasskind:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AConcreteClasskind:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AConcreteClasskind:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AConcreteClasskind:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AConcreteClasskind:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AConcreteClasskind:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AConcreteClasskind:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AConcreteClasskind:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AConcreteClasskind:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AConcreteClasskind:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AConcreteClasskind:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AConcreteClasskind:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AConcreteClasskind:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AConcreteClasskind__replace_child, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AConcreteClasskind__visit_all, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AConcreteClasskind:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AConcreteClasskind:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AConcreteClasskind:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AConcreteClasskind:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AConcreteClasskind:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AConcreteClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AConcreteClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AConcreteClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AConcreteClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AConcreteClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AConcreteClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AConcreteClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AConcreteClasskind:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClasskind__init, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#AClasskind#init */
(nitmethod_t)VIRTUAL_modelize_class__AConcreteClasskind__mkind, /* pointer to parser_nodes:AConcreteClasskind:modelize_class#AConcreteClasskind#mkind */
(nitmethod_t)VIRTUAL_parser_nodes__AConcreteClasskind__n_kwclass, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#AConcreteClasskind#n_kwclass */
(nitmethod_t)VIRTUAL_parser_prod__AConcreteClasskind__n_kwclass_61d, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#n_kwclass= */
(nitmethod_t)VIRTUAL_parser_nodes__AConcreteClasskind__init, /* pointer to parser_nodes:AConcreteClasskind:parser_nodes#AConcreteClasskind#init */
(nitmethod_t)VIRTUAL_parser_prod__AConcreteClasskind__empty_init, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AConcreteClasskind__init_aconcreteclasskind, /* pointer to parser_nodes:AConcreteClasskind:parser_prod#AConcreteClasskind#init_aconcreteclasskind */
}
};
/* allocate AConcreteClasskind */
val* NEW_parser_nodes__AConcreteClasskind(const struct type* type) {
val* self /* : AConcreteClasskind */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AConcreteClasskind;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AConcreteClasskind exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AConcreteClasskind exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AConcreteClasskind exact> */
return self;
}
/* allocate AConcreteClasskind */
void CHECK_NEW_parser_nodes__AConcreteClasskind(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwclass */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AConcreteClasskind> */
var1 = self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwclass", "src/parser/parser_nodes.nit", 677);
exit(1);
}
}
/* runtime class parser_nodes__AAbstractClasskind */
const struct class class_parser_nodes__AAbstractClasskind = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAbstractClasskind:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAbstractClasskind:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAbstractClasskind:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAbstractClasskind:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAbstractClasskind:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAbstractClasskind:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAbstractClasskind:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAbstractClasskind:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAbstractClasskind:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAbstractClasskind:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAbstractClasskind:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAbstractClasskind:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAbstractClasskind:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAbstractClasskind:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAbstractClasskind:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAbstractClasskind:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAbstractClasskind:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAbstractClasskind:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAbstractClasskind:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAbstractClasskind:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAbstractClasskind:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAbstractClasskind:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAbstractClasskind:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAbstractClasskind:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAbstractClasskind:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAbstractClasskind__replace_child, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAbstractClasskind__visit_all, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAbstractClasskind:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAbstractClasskind:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAbstractClasskind:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAbstractClasskind:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAbstractClasskind:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAbstractClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAbstractClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAbstractClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAbstractClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAbstractClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAbstractClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAbstractClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAbstractClasskind:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClasskind__init, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#AClasskind#init */
(nitmethod_t)VIRTUAL_modelize_class__AAbstractClasskind__mkind, /* pointer to parser_nodes:AAbstractClasskind:modelize_class#AAbstractClasskind#mkind */
(nitmethod_t)VIRTUAL_parser_nodes__AAbstractClasskind__n_kwabstract, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#AAbstractClasskind#n_kwabstract */
(nitmethod_t)VIRTUAL_parser_prod__AAbstractClasskind__n_kwabstract_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#n_kwabstract= */
(nitmethod_t)VIRTUAL_parser_nodes__AAbstractClasskind__n_kwclass, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#AAbstractClasskind#n_kwclass */
(nitmethod_t)VIRTUAL_parser_prod__AAbstractClasskind__n_kwclass_61d, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#n_kwclass= */
(nitmethod_t)VIRTUAL_parser_nodes__AAbstractClasskind__init, /* pointer to parser_nodes:AAbstractClasskind:parser_nodes#AAbstractClasskind#init */
(nitmethod_t)VIRTUAL_parser_prod__AAbstractClasskind__empty_init, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAbstractClasskind__init_aabstractclasskind, /* pointer to parser_nodes:AAbstractClasskind:parser_prod#AAbstractClasskind#init_aabstractclasskind */
}
};
/* allocate AAbstractClasskind */
val* NEW_parser_nodes__AAbstractClasskind(const struct type* type) {
val* self /* : AAbstractClasskind */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAbstractClasskind;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAbstractClasskind exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAbstractClasskind exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAbstractClasskind exact> */
return self;
}
/* allocate AAbstractClasskind */
void CHECK_NEW_parser_nodes__AAbstractClasskind(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwabstract */;
val* var2 /* : TKwclass */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAbstractClasskind> */
var1 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwabstract", "src/parser/parser_nodes.nit", 681);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwclass", "src/parser/parser_nodes.nit", 682);
exit(1);
}
}
/* runtime class parser_nodes__AInterfaceClasskind */
const struct class class_parser_nodes__AInterfaceClasskind = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInterfaceClasskind:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AInterfaceClasskind:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AInterfaceClasskind:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AInterfaceClasskind:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AInterfaceClasskind:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AInterfaceClasskind:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AInterfaceClasskind:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AInterfaceClasskind:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AInterfaceClasskind:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AInterfaceClasskind:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AInterfaceClasskind:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AInterfaceClasskind:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AInterfaceClasskind__replace_child, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AInterfaceClasskind__visit_all, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AInterfaceClasskind:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AInterfaceClasskind:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AInterfaceClasskind:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AInterfaceClasskind:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AInterfaceClasskind:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AInterfaceClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AInterfaceClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AInterfaceClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AInterfaceClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AInterfaceClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AInterfaceClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AInterfaceClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AInterfaceClasskind:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClasskind__init, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#AClasskind#init */
(nitmethod_t)VIRTUAL_modelize_class__AInterfaceClasskind__mkind, /* pointer to parser_nodes:AInterfaceClasskind:modelize_class#AInterfaceClasskind#mkind */
(nitmethod_t)VIRTUAL_parser_nodes__AInterfaceClasskind__n_kwinterface, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#AInterfaceClasskind#n_kwinterface */
(nitmethod_t)VIRTUAL_parser_prod__AInterfaceClasskind__n_kwinterface_61d, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#n_kwinterface= */
(nitmethod_t)VIRTUAL_parser_nodes__AInterfaceClasskind__init, /* pointer to parser_nodes:AInterfaceClasskind:parser_nodes#AInterfaceClasskind#init */
(nitmethod_t)VIRTUAL_parser_prod__AInterfaceClasskind__empty_init, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AInterfaceClasskind__init_ainterfaceclasskind, /* pointer to parser_nodes:AInterfaceClasskind:parser_prod#AInterfaceClasskind#init_ainterfaceclasskind */
}
};
/* allocate AInterfaceClasskind */
val* NEW_parser_nodes__AInterfaceClasskind(const struct type* type) {
val* self /* : AInterfaceClasskind */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AInterfaceClasskind;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AInterfaceClasskind exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AInterfaceClasskind exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AInterfaceClasskind exact> */
return self;
}
/* allocate AInterfaceClasskind */
void CHECK_NEW_parser_nodes__AInterfaceClasskind(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwinterface */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AInterfaceClasskind> */
var1 = self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwinterface", "src/parser/parser_nodes.nit", 686);
exit(1);
}
}
/* runtime class parser_nodes__AEnumClasskind */
const struct class class_parser_nodes__AEnumClasskind = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEnumClasskind:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AEnumClasskind:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AEnumClasskind:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AEnumClasskind:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AEnumClasskind:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AEnumClasskind:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AEnumClasskind:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AEnumClasskind:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AEnumClasskind:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AEnumClasskind:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AEnumClasskind:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AEnumClasskind:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AEnumClasskind:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AEnumClasskind:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AEnumClasskind:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AEnumClasskind:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AEnumClasskind:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AEnumClasskind:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AEnumClasskind:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AEnumClasskind:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AEnumClasskind:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AEnumClasskind:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AEnumClasskind:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AEnumClasskind:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AEnumClasskind:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AEnumClasskind__replace_child, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AEnumClasskind__visit_all, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AEnumClasskind:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AEnumClasskind:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AEnumClasskind:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AEnumClasskind:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AEnumClasskind:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AEnumClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AEnumClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AEnumClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AEnumClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AEnumClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AEnumClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AEnumClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AEnumClasskind:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClasskind__init, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#AClasskind#init */
(nitmethod_t)VIRTUAL_modelize_class__AEnumClasskind__mkind, /* pointer to parser_nodes:AEnumClasskind:modelize_class#AEnumClasskind#mkind */
(nitmethod_t)VIRTUAL_parser_nodes__AEnumClasskind__n_kwenum, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#AEnumClasskind#n_kwenum */
(nitmethod_t)VIRTUAL_parser_prod__AEnumClasskind__n_kwenum_61d, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#n_kwenum= */
(nitmethod_t)VIRTUAL_parser_nodes__AEnumClasskind__init, /* pointer to parser_nodes:AEnumClasskind:parser_nodes#AEnumClasskind#init */
(nitmethod_t)VIRTUAL_parser_prod__AEnumClasskind__empty_init, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AEnumClasskind__init_aenumclasskind, /* pointer to parser_nodes:AEnumClasskind:parser_prod#AEnumClasskind#init_aenumclasskind */
}
};
/* allocate AEnumClasskind */
val* NEW_parser_nodes__AEnumClasskind(const struct type* type) {
val* self /* : AEnumClasskind */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AEnumClasskind;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AEnumClasskind exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AEnumClasskind exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AEnumClasskind exact> */
return self;
}
/* allocate AEnumClasskind */
void CHECK_NEW_parser_nodes__AEnumClasskind(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwenum */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AEnumClasskind> */
var1 = self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwenum", "src/parser/parser_nodes.nit", 690);
exit(1);
}
}
/* runtime class parser_nodes__AExternClasskind */
const struct class class_parser_nodes__AExternClasskind = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AExternClasskind:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AExternClasskind:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AExternClasskind:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AExternClasskind:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AExternClasskind:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AExternClasskind:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AExternClasskind:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AExternClasskind:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AExternClasskind:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AExternClasskind:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AExternClasskind:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AExternClasskind:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AExternClasskind:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AExternClasskind:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AExternClasskind:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AExternClasskind:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AExternClasskind:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AExternClasskind:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AExternClasskind:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AExternClasskind:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AExternClasskind:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AExternClasskind:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AExternClasskind:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AExternClasskind:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AExternClasskind:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AExternClasskind:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AExternClasskind:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AExternClasskind:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AExternClasskind:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AExternClasskind:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AExternClasskind:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AExternClasskind:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AExternClasskind:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AExternClasskind__replace_child, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AExternClasskind__visit_all, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AExternClasskind:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AExternClasskind:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AExternClasskind:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AExternClasskind:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AExternClasskind:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AExternClasskind:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AExternClasskind:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AExternClasskind:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AExternClasskind:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AExternClasskind:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AExternClasskind:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AExternClasskind:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AExternClasskind:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AExternClasskind:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AExternClasskind:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClasskind__init, /* pointer to parser_nodes:AExternClasskind:parser_nodes#AClasskind#init */
(nitmethod_t)VIRTUAL_modelize_class__AExternClasskind__mkind, /* pointer to parser_nodes:AExternClasskind:modelize_class#AExternClasskind#mkind */
(nitmethod_t)VIRTUAL_parser_nodes__AExternClasskind__n_kwextern, /* pointer to parser_nodes:AExternClasskind:parser_nodes#AExternClasskind#n_kwextern */
(nitmethod_t)VIRTUAL_parser_prod__AExternClasskind__n_kwextern_61d, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#n_kwextern= */
(nitmethod_t)VIRTUAL_parser_nodes__AExternClasskind__n_kwclass, /* pointer to parser_nodes:AExternClasskind:parser_nodes#AExternClasskind#n_kwclass */
(nitmethod_t)VIRTUAL_parser_prod__AExternClasskind__n_kwclass_61d, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#n_kwclass= */
(nitmethod_t)VIRTUAL_parser_nodes__AExternClasskind__init, /* pointer to parser_nodes:AExternClasskind:parser_nodes#AExternClasskind#init */
(nitmethod_t)VIRTUAL_parser_prod__AExternClasskind__empty_init, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AExternClasskind__init_aexternclasskind, /* pointer to parser_nodes:AExternClasskind:parser_prod#AExternClasskind#init_aexternclasskind */
}
};
/* allocate AExternClasskind */
val* NEW_parser_nodes__AExternClasskind(const struct type* type) {
val* self /* : AExternClasskind */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AExternClasskind;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AExternClasskind exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AExternClasskind exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AExternClasskind exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var3; /* _n_kwclass on <self:AExternClasskind exact> */
return self;
}
/* allocate AExternClasskind */
void CHECK_NEW_parser_nodes__AExternClasskind(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwextern */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AExternClasskind> */
var1 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwextern", "src/parser/parser_nodes.nit", 694);
exit(1);
}
}
/* runtime class parser_nodes__AFormaldef */
const struct class class_parser_nodes__AFormaldef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AFormaldef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AFormaldef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AFormaldef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AFormaldef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AFormaldef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AFormaldef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFormaldef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFormaldef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFormaldef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AFormaldef:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AFormaldef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AFormaldef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AFormaldef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AFormaldef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AFormaldef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AFormaldef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AFormaldef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AFormaldef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AFormaldef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AFormaldef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AFormaldef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AFormaldef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AFormaldef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AFormaldef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AFormaldef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AFormaldef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AFormaldef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AFormaldef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AFormaldef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AFormaldef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AFormaldef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AFormaldef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AFormaldef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AFormaldef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AFormaldef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AFormaldef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AFormaldef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__replace_child, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__visit_all, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AFormaldef:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AFormaldef:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AFormaldef:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AFormaldef:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AFormaldef:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AFormaldef:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AFormaldef:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AFormaldef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AFormaldef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AFormaldef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AFormaldef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AFormaldef:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__n_annotations_61d, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AFormaldef:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AFormaldef:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFormaldef:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AFormaldef__n_id, /* pointer to parser_nodes:AFormaldef:parser_nodes#AFormaldef#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__n_id_61d, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AFormaldef__n_type, /* pointer to parser_nodes:AFormaldef:parser_nodes#AFormaldef#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__n_type_61d, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__AFormaldef__init, /* pointer to parser_nodes:AFormaldef:parser_nodes#AFormaldef#init */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__empty_init, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AFormaldef__init_aformaldef, /* pointer to parser_nodes:AFormaldef:parser_prod#AFormaldef#init_aformaldef */
(nitmethod_t)VIRTUAL_modelize_class__AFormaldef__mtype, /* pointer to parser_nodes:AFormaldef:modelize_class#AFormaldef#mtype */
(nitmethod_t)VIRTUAL_modelize_class__AFormaldef__mtype_61d, /* pointer to parser_nodes:AFormaldef:modelize_class#AFormaldef#mtype= */
(nitmethod_t)VIRTUAL_modelize_class__AFormaldef__bound, /* pointer to parser_nodes:AFormaldef:modelize_class#AFormaldef#bound */
(nitmethod_t)VIRTUAL_modelize_class__AFormaldef__bound_61d, /* pointer to parser_nodes:AFormaldef:modelize_class#AFormaldef#bound= */
}
};
/* allocate AFormaldef */
val* NEW_parser_nodes__AFormaldef(const struct type* type) {
val* self /* : AFormaldef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AFormaldef;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AFormaldef exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AFormaldef exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AFormaldef exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var3; /* _n_type on <self:AFormaldef exact> */
var4 = NULL;
self->attrs[COLOR_modelize_class__AFormaldef___64dmtype].val = var4; /* @mtype on <self:AFormaldef exact> */
var5 = NULL;
self->attrs[COLOR_modelize_class__AFormaldef___64dbound].val = var5; /* @bound on <self:AFormaldef exact> */
return self;
}
/* allocate AFormaldef */
void CHECK_NEW_parser_nodes__AFormaldef(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TClassid */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AFormaldef> */
var1 = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 701);
exit(1);
}
}
/* runtime class parser_nodes__ASuperclass */
const struct class class_parser_nodes__ASuperclass = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASuperclass:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASuperclass:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASuperclass:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASuperclass:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASuperclass:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASuperclass:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperclass:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperclass:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperclass:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASuperclass:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASuperclass:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASuperclass:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASuperclass:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASuperclass:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASuperclass:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASuperclass:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASuperclass:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASuperclass:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASuperclass:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASuperclass:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASuperclass:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASuperclass:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASuperclass:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASuperclass:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASuperclass:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASuperclass:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASuperclass:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASuperclass:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASuperclass:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASuperclass:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASuperclass:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASuperclass:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASuperclass:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASuperclass:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASuperclass:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASuperclass:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASuperclass:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__replace_child, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__visit_all, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASuperclass:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASuperclass:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASuperclass:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASuperclass:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASuperclass:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASuperclass:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASuperclass:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASuperclass:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASuperclass:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperclass:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASuperclass:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASuperclass:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__n_annotations_61d, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASuperclass:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASuperclass:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperclass:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperclass__n_kwsuper, /* pointer to parser_nodes:ASuperclass:parser_nodes#ASuperclass#n_kwsuper */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__n_kwsuper_61d, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#n_kwsuper= */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperclass__n_type, /* pointer to parser_nodes:ASuperclass:parser_nodes#ASuperclass#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__n_type_61d, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperclass__init, /* pointer to parser_nodes:ASuperclass:parser_nodes#ASuperclass#init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__empty_init, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperclass__init_asuperclass, /* pointer to parser_nodes:ASuperclass:parser_prod#ASuperclass#init_asuperclass */
}
};
/* allocate ASuperclass */
val* NEW_parser_nodes__ASuperclass(const struct type* type) {
val* self /* : ASuperclass */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASuperclass;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASuperclass exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASuperclass exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASuperclass exact> */
return self;
}
/* allocate ASuperclass */
void CHECK_NEW_parser_nodes__ASuperclass(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwsuper */;
val* var2 /* : AType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASuperclass> */
var1 = self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwsuper", "src/parser/parser_nodes.nit", 709);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_nodes.nit", 710);
exit(1);
}
}
