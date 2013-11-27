#include "nitg.classes.0.h"
/* allocate AAsNotNullableExternCall */
void CHECK_NEW_parser_nodes__AAsNotNullableExternCall(val* self) {
val* var /* : nullable Location */;
val* var1 /* : AType */;
val* var2 /* : TKwas */;
val* var3 /* : TKwnot */;
val* var4 /* : TKwnullable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAsNotNullableExternCall> */
var1 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 868);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwas].val; /* _n_kwas on <self:AAsNotNullableExternCall> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 869);
exit(1);
}
var3 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnot].val; /* _n_kwnot on <self:AAsNotNullableExternCall> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 870);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAsNotNullableExternCall___n_kwnullable].val; /* _n_kwnullable on <self:AAsNotNullableExternCall> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnullable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 871);
exit(1);
}
}
/* runtime class parser_nodes__ATypePropdef */
const struct class class_parser_nodes__ATypePropdef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATypePropdef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ATypePropdef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ATypePropdef:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATypePropdef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATypePropdef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ATypePropdef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ATypePropdef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATypePropdef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATypePropdef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATypePropdef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATypePropdef:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATypePropdef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATypePropdef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATypePropdef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATypePropdef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATypePropdef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ATypePropdef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ATypePropdef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ATypePropdef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ATypePropdef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ATypePropdef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ATypePropdef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATypePropdef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATypePropdef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATypePropdef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ATypePropdef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ATypePropdef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATypePropdef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATypePropdef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ATypePropdef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ATypePropdef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ATypePropdef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ATypePropdef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ATypePropdef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__replace_child, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__visit_all, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ATypePropdef:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ATypePropdef:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ATypePropdef:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ATypePropdef:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATypePropdef:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATypePropdef:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__APropdef__accept_flow_visitor, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATypePropdef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATypePropdef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ATypePropdef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ATypePropdef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATypePropdef:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_annotations_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ATypePropdef:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ATypePropdef:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__APropdef__n_doc, /* pointer to parser_nodes:ATypePropdef:parser_nodes#APropdef#n_doc */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_doc_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_doc= */
(nitmethod_t)VIRTUAL_parser_nodes__APropdef__init, /* pointer to parser_nodes:ATypePropdef:parser_nodes#APropdef#init */
(nitmethod_t)VIRTUAL_scope__APropdef__do_scope, /* pointer to parser_nodes:ATypePropdef:scope#APropdef#do_scope */
(nitmethod_t)VIRTUAL_flow__APropdef__do_flow, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#do_flow */
(nitmethod_t)VIRTUAL_flow__APropdef__before_flow_context, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#before_flow_context */
(nitmethod_t)VIRTUAL_flow__APropdef__before_flow_context_61d, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#before_flow_context= */
(nitmethod_t)VIRTUAL_flow__APropdef__after_flow_context, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#after_flow_context */
(nitmethod_t)VIRTUAL_flow__APropdef__after_flow_context_61d, /* pointer to parser_nodes:ATypePropdef:flow#APropdef#after_flow_context= */
(nitmethod_t)VIRTUAL_local_var_init__APropdef__do_local_var_init, /* pointer to parser_nodes:ATypePropdef:local_var_init#APropdef#do_local_var_init */
(nitmethod_t)VIRTUAL_modelize_property__APropdef__mpropdef, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#mpropdef */
(nitmethod_t)VIRTUAL_modelize_property__APropdef__mpropdef_61d, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#mpropdef= */
(nitmethod_t)VIRTUAL_modelize_property__ATypePropdef__build_property, /* pointer to parser_nodes:ATypePropdef:modelize_property#ATypePropdef#build_property */
(nitmethod_t)VIRTUAL_modelize_property__ATypePropdef__build_signature, /* pointer to parser_nodes:ATypePropdef:modelize_property#ATypePropdef#build_signature */
(nitmethod_t)VIRTUAL_modelize_property__ATypePropdef__check_signature, /* pointer to parser_nodes:ATypePropdef:modelize_property#ATypePropdef#check_signature */
(nitmethod_t)VIRTUAL_modelize_property__APropdef__new_property_visibility, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#new_property_visibility */
(nitmethod_t)VIRTUAL_modelize_property__APropdef__check_redef_property_visibility, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#check_redef_property_visibility */
(nitmethod_t)VIRTUAL_modelize_property__APropdef__check_redef_keyword, /* pointer to parser_nodes:ATypePropdef:modelize_property#APropdef#check_redef_keyword */
(nitmethod_t)VIRTUAL_typing__APropdef__do_typing, /* pointer to parser_nodes:ATypePropdef:typing#APropdef#do_typing */
(nitmethod_t)VIRTUAL_typing__APropdef__selfvariable, /* pointer to parser_nodes:ATypePropdef:typing#APropdef#selfvariable */
(nitmethod_t)VIRTUAL_typing__APropdef__selfvariable_61d, /* pointer to parser_nodes:ATypePropdef:typing#APropdef#selfvariable= */
(nitmethod_t)VIRTUAL_abstract_compiler__APropdef__compile_to_c, /* pointer to parser_nodes:ATypePropdef:abstract_compiler#APropdef#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__APropdef__can_inline, /* pointer to parser_nodes:ATypePropdef:abstract_compiler#APropdef#can_inline */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATypePropdef:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ATypePropdef__n_kwredef, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_kwredef */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_kwredef_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_kwredef= */
(nitmethod_t)VIRTUAL_parser_nodes__ATypePropdef__n_visibility, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_visibility */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_visibility_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__ATypePropdef__n_kwtype, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_kwtype */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_kwtype_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_kwtype= */
(nitmethod_t)VIRTUAL_parser_nodes__ATypePropdef__n_id, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_id_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ATypePropdef__n_type, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__n_type_61d, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ATypePropdef__init, /* pointer to parser_nodes:ATypePropdef:parser_nodes#ATypePropdef#init */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__empty_init, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ATypePropdef__init_atypepropdef, /* pointer to parser_nodes:ATypePropdef:parser_prod#ATypePropdef#init_atypepropdef */
}
};
/* allocate ATypePropdef */
val* NEW_parser_nodes__ATypePropdef(const struct type* type) {
val* self /* : ATypePropdef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ATypePropdef;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ATypePropdef exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ATypePropdef exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ATypePropdef exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var3; /* _n_doc on <self:ATypePropdef exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwredef].val = var4; /* _n_kwredef on <self:ATypePropdef exact> */
return self;
}
/* allocate ATypePropdef */
void CHECK_NEW_parser_nodes__ATypePropdef(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable FlowContext */;
val* var3 /* : nullable MPropDef */;
val* var4 /* : nullable Variable */;
val* var5 /* : AVisibility */;
val* var6 /* : TKwtype */;
val* var7 /* : TClassid */;
val* var8 /* : AType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ATypePropdef> */
var1 = self->attrs[COLOR_flow__APropdef___64dbefore_flow_context].val; /* @before_flow_context on <self:ATypePropdef> */
var2 = self->attrs[COLOR_flow__APropdef___64dafter_flow_context].val; /* @after_flow_context on <self:ATypePropdef> */
var3 = self->attrs[COLOR_modelize_property__APropdef___64dmpropdef].val; /* @mpropdef on <self:ATypePropdef> */
var4 = self->attrs[COLOR_typing__APropdef___64dselfvariable].val; /* @selfvariable on <self:ATypePropdef> */
var5 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 878);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 879);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 880);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 881);
exit(1);
}
}
/* runtime class parser_nodes__AReadAble */
const struct class class_parser_nodes__AReadAble = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AReadAble:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AReadAble:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AReadAble:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AReadAble:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AReadAble:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AReadAble:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AReadAble:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AReadAble:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AReadAble:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AReadAble:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AReadAble:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AReadAble:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AReadAble:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AReadAble:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AReadAble:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AReadAble:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AReadAble:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AReadAble:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AReadAble:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AReadAble:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AReadAble:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AReadAble:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AReadAble:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AReadAble:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AReadAble:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AReadAble:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AReadAble:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AReadAble:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AReadAble:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AReadAble:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AReadAble:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AReadAble:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AReadAble:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AReadAble:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AReadAble:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AReadAble:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AReadAble:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AReadAble:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AReadAble:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AReadAble:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AReadAble:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AReadAble:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AReadAble__replace_child, /* pointer to parser_nodes:AReadAble:parser_prod#AReadAble#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AReadAble:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AReadAble__visit_all, /* pointer to parser_nodes:AReadAble:parser_prod#AReadAble#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AReadAble:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AReadAble:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AReadAble:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AReadAble:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AReadAble:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AReadAble:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AReadAble:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AReadAble:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AReadAble:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AReadAble:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AReadAble:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AReadAble:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AReadAble:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AReadAble:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AReadAble:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AReadAble:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AReadAble:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AReadAble:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__n_visibility, /* pointer to parser_nodes:AReadAble:parser_nodes#AAble#n_visibility */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__n_visibility_61d, /* pointer to parser_nodes:AReadAble:parser_nodes#AAble#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__n_kwredef, /* pointer to parser_nodes:AReadAble:parser_nodes#AAble#n_kwredef */
(nitmethod_t)VIRTUAL_parser_prod__AReadAble__n_kwredef_61d, /* pointer to parser_nodes:AReadAble:parser_prod#AReadAble#n_kwredef= */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__init, /* pointer to parser_nodes:AReadAble:parser_nodes#AAble#init */
(nitmethod_t)VIRTUAL_parser_nodes__AReadAble__n_kwreadable, /* pointer to parser_nodes:AReadAble:parser_nodes#AReadAble#n_kwreadable */
(nitmethod_t)VIRTUAL_parser_prod__AReadAble__n_kwreadable_61d, /* pointer to parser_nodes:AReadAble:parser_prod#AReadAble#n_kwreadable= */
(nitmethod_t)VIRTUAL_parser_nodes__AReadAble__init, /* pointer to parser_nodes:AReadAble:parser_nodes#AReadAble#init */
(nitmethod_t)VIRTUAL_parser_prod__AReadAble__empty_init, /* pointer to parser_nodes:AReadAble:parser_prod#AReadAble#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AReadAble__init_areadable, /* pointer to parser_nodes:AReadAble:parser_prod#AReadAble#init_areadable */
}
};
/* allocate AReadAble */
val* NEW_parser_nodes__AReadAble(const struct type* type) {
val* self /* : AReadAble */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AReadAble;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AReadAble exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AReadAble exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AReadAble exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var3; /* _n_visibility on <self:AReadAble exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var4; /* _n_kwredef on <self:AReadAble exact> */
return self;
}
/* allocate AReadAble */
void CHECK_NEW_parser_nodes__AReadAble(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwreadable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AReadAble> */
var1 = self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val; /* _n_kwreadable on <self:AReadAble> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwreadable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 894);
exit(1);
}
}
/* runtime class parser_nodes__AWriteAble */
const struct class class_parser_nodes__AWriteAble = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AWriteAble:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AWriteAble:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AWriteAble:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AWriteAble:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AWriteAble:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AWriteAble:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AWriteAble:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AWriteAble:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AWriteAble:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AWriteAble:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AWriteAble:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AWriteAble:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AWriteAble:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AWriteAble:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AWriteAble:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AWriteAble:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AWriteAble:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AWriteAble:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AWriteAble:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AWriteAble:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AWriteAble:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AWriteAble:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AWriteAble:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AWriteAble:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AWriteAble:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AWriteAble:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AWriteAble:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AWriteAble:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AWriteAble:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AWriteAble:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AWriteAble:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AWriteAble:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AWriteAble:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AWriteAble:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AWriteAble:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AWriteAble:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AWriteAble:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AWriteAble:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AWriteAble:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AWriteAble:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AWriteAble:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AWriteAble:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__replace_child, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AWriteAble:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__visit_all, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AWriteAble:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AWriteAble:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AWriteAble:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AWriteAble:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AWriteAble:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AWriteAble:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AWriteAble:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AWriteAble:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AWriteAble:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AWriteAble:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AWriteAble:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AWriteAble:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AWriteAble:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AWriteAble:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AWriteAble:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AWriteAble:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AWriteAble:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AWriteAble:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__n_visibility, /* pointer to parser_nodes:AWriteAble:parser_nodes#AAble#n_visibility */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__n_visibility_61d, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__n_kwredef, /* pointer to parser_nodes:AWriteAble:parser_nodes#AAble#n_kwredef */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__n_kwredef_61d, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#n_kwredef= */
(nitmethod_t)VIRTUAL_parser_nodes__AAble__init, /* pointer to parser_nodes:AWriteAble:parser_nodes#AAble#init */
(nitmethod_t)VIRTUAL_parser_nodes__AWriteAble__n_kwwritable, /* pointer to parser_nodes:AWriteAble:parser_nodes#AWriteAble#n_kwwritable */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__n_kwwritable_61d, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#n_kwwritable= */
(nitmethod_t)VIRTUAL_parser_nodes__AWriteAble__init, /* pointer to parser_nodes:AWriteAble:parser_nodes#AWriteAble#init */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__empty_init, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AWriteAble__init_awriteable, /* pointer to parser_nodes:AWriteAble:parser_prod#AWriteAble#init_awriteable */
}
};
/* allocate AWriteAble */
val* NEW_parser_nodes__AWriteAble(const struct type* type) {
val* self /* : AWriteAble */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AWriteAble;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AWriteAble exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AWriteAble exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AWriteAble exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var3; /* _n_visibility on <self:AWriteAble exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var4; /* _n_kwredef on <self:AWriteAble exact> */
return self;
}
/* allocate AWriteAble */
void CHECK_NEW_parser_nodes__AWriteAble(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwwritable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AWriteAble> */
var1 = self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val; /* _n_kwwritable on <self:AWriteAble> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwwritable");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 900);
exit(1);
}
}
/* runtime class parser_nodes__AIdMethid */
const struct class class_parser_nodes__AIdMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIdMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIdMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIdMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIdMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIdMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIdMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIdMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIdMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIdMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIdMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIdMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIdMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIdMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIdMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIdMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIdMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIdMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIdMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIdMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIdMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIdMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIdMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIdMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIdMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIdMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIdMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIdMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIdMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIdMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIdMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIdMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIdMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIdMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIdMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIdMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIdMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIdMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIdMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIdMethid__replace_child, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIdMethid__visit_all, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIdMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIdMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIdMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AIdMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIdMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIdMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIdMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIdMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIdMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIdMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIdMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIdMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIdMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIdMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIdMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AIdMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AIdMethid__n_id, /* pointer to parser_nodes:AIdMethid:parser_nodes#AIdMethid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AIdMethid__n_id_61d, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AIdMethid__init, /* pointer to parser_nodes:AIdMethid:parser_nodes#AIdMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AIdMethid__empty_init, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIdMethid__init_aidmethid, /* pointer to parser_nodes:AIdMethid:parser_prod#AIdMethid#init_aidmethid */
}
};
/* allocate AIdMethid */
val* NEW_parser_nodes__AIdMethid(const struct type* type) {
val* self /* : AIdMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIdMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIdMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIdMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIdMethid exact> */
return self;
}
/* allocate AIdMethid */
void CHECK_NEW_parser_nodes__AIdMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TId */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIdMethid> */
var1 = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 910);
exit(1);
}
}
/* runtime class parser_nodes__APlusMethid */
const struct class class_parser_nodes__APlusMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APlusMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APlusMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APlusMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APlusMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APlusMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APlusMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APlusMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APlusMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APlusMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APlusMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APlusMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APlusMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APlusMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APlusMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APlusMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APlusMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APlusMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APlusMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APlusMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APlusMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APlusMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APlusMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APlusMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APlusMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APlusMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APlusMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APlusMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APlusMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APlusMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APlusMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APlusMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APlusMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APlusMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APlusMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APlusMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APlusMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APlusMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APlusMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APlusMethid__replace_child, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APlusMethid__visit_all, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APlusMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APlusMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APlusMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APlusMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APlusMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APlusMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APlusMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APlusMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:APlusMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APlusMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APlusMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APlusMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APlusMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APlusMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APlusMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:APlusMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__APlusMethid__n_plus, /* pointer to parser_nodes:APlusMethid:parser_nodes#APlusMethid#n_plus */
(nitmethod_t)VIRTUAL_parser_prod__APlusMethid__n_plus_61d, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#n_plus= */
(nitmethod_t)VIRTUAL_parser_nodes__APlusMethid__init, /* pointer to parser_nodes:APlusMethid:parser_nodes#APlusMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__APlusMethid__empty_init, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APlusMethid__init_aplusmethid, /* pointer to parser_nodes:APlusMethid:parser_prod#APlusMethid#init_aplusmethid */
}
};
/* allocate APlusMethid */
val* NEW_parser_nodes__APlusMethid(const struct type* type) {
val* self /* : APlusMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APlusMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APlusMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APlusMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlusMethid exact> */
return self;
}
/* allocate APlusMethid */
void CHECK_NEW_parser_nodes__APlusMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TPlus */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APlusMethid> */
var1 = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_plus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 914);
exit(1);
}
}
/* runtime class parser_nodes__AMinusMethid */
const struct class class_parser_nodes__AMinusMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMinusMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AMinusMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AMinusMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMinusMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMinusMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AMinusMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AMinusMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMinusMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMinusMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMinusMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMinusMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMinusMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMinusMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMinusMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMinusMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMinusMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AMinusMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AMinusMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AMinusMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AMinusMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AMinusMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AMinusMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMinusMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMinusMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMinusMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AMinusMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AMinusMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMinusMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMinusMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AMinusMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AMinusMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AMinusMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMinusMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMinusMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusMethid__replace_child, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMinusMethid__visit_all, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AMinusMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AMinusMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AMinusMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AMinusMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMinusMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMinusMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMinusMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMinusMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMinusMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMinusMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMinusMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AMinusMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMinusMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMinusMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AMinusMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AMinusMethid__n_minus, /* pointer to parser_nodes:AMinusMethid:parser_nodes#AMinusMethid#n_minus */
(nitmethod_t)VIRTUAL_parser_prod__AMinusMethid__n_minus_61d, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#n_minus= */
(nitmethod_t)VIRTUAL_parser_nodes__AMinusMethid__init, /* pointer to parser_nodes:AMinusMethid:parser_nodes#AMinusMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusMethid__empty_init, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusMethid__init_aminusmethid, /* pointer to parser_nodes:AMinusMethid:parser_prod#AMinusMethid#init_aminusmethid */
}
};
/* allocate AMinusMethid */
val* NEW_parser_nodes__AMinusMethid(const struct type* type) {
val* self /* : AMinusMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMinusMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AMinusMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AMinusMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMinusMethid exact> */
return self;
}
/* allocate AMinusMethid */
void CHECK_NEW_parser_nodes__AMinusMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TMinus */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AMinusMethid> */
var1 = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 918);
exit(1);
}
}
/* runtime class parser_nodes__AStarMethid */
const struct class class_parser_nodes__AStarMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStarMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStarMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStarMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStarMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStarMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStarMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStarMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStarMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStarMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStarMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStarMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStarMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStarMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStarMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStarMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStarMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStarMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStarMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStarMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStarMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStarMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStarMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStarMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStarMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStarMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStarMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStarMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStarMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStarMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStarMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStarMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStarMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStarMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStarMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStarMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStarMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStarMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarMethid__replace_child, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStarMethid__visit_all, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStarMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStarMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStarMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStarMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStarMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStarMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStarMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStarMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStarMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStarMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStarMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStarMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStarMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AStarMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AStarMethid__n_star, /* pointer to parser_nodes:AStarMethid:parser_nodes#AStarMethid#n_star */
(nitmethod_t)VIRTUAL_parser_prod__AStarMethid__n_star_61d, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#n_star= */
(nitmethod_t)VIRTUAL_parser_nodes__AStarMethid__init, /* pointer to parser_nodes:AStarMethid:parser_nodes#AStarMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarMethid__empty_init, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStarMethid__init_astarmethid, /* pointer to parser_nodes:AStarMethid:parser_prod#AStarMethid#init_astarmethid */
}
};
/* allocate AStarMethid */
val* NEW_parser_nodes__AStarMethid(const struct type* type) {
val* self /* : AStarMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStarMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStarMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStarMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStarMethid exact> */
return self;
}
/* allocate AStarMethid */
void CHECK_NEW_parser_nodes__AStarMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TStar */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStarMethid> */
var1 = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_star");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 922);
exit(1);
}
}
/* runtime class parser_nodes__ASlashMethid */
const struct class class_parser_nodes__ASlashMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASlashMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASlashMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASlashMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASlashMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASlashMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASlashMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASlashMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASlashMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASlashMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASlashMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASlashMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASlashMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASlashMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASlashMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASlashMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASlashMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASlashMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASlashMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASlashMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASlashMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASlashMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASlashMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASlashMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASlashMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASlashMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASlashMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASlashMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASlashMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASlashMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASlashMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASlashMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASlashMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASlashMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASlashMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASlashMethid__replace_child, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASlashMethid__visit_all, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASlashMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASlashMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASlashMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASlashMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASlashMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASlashMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASlashMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASlashMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASlashMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASlashMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASlashMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASlashMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASlashMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASlashMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ASlashMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ASlashMethid__n_slash, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ASlashMethid#n_slash */
(nitmethod_t)VIRTUAL_parser_prod__ASlashMethid__n_slash_61d, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#n_slash= */
(nitmethod_t)VIRTUAL_parser_nodes__ASlashMethid__init, /* pointer to parser_nodes:ASlashMethid:parser_nodes#ASlashMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ASlashMethid__empty_init, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASlashMethid__init_aslashmethid, /* pointer to parser_nodes:ASlashMethid:parser_prod#ASlashMethid#init_aslashmethid */
}
};
/* allocate ASlashMethid */
val* NEW_parser_nodes__ASlashMethid(const struct type* type) {
val* self /* : ASlashMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASlashMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASlashMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASlashMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASlashMethid exact> */
return self;
}
/* allocate ASlashMethid */
void CHECK_NEW_parser_nodes__ASlashMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TSlash */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASlashMethid> */
var1 = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_slash");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 926);
exit(1);
}
}
/* runtime class parser_nodes__APercentMethid */
const struct class class_parser_nodes__APercentMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APercentMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APercentMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APercentMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APercentMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APercentMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APercentMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APercentMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APercentMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APercentMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APercentMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APercentMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APercentMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APercentMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APercentMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APercentMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APercentMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APercentMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APercentMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APercentMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APercentMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APercentMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APercentMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APercentMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APercentMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APercentMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APercentMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APercentMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APercentMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APercentMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APercentMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APercentMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APercentMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APercentMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APercentMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APercentMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APercentMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APercentMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APercentMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APercentMethid__replace_child, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APercentMethid__visit_all, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APercentMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APercentMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APercentMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APercentMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APercentMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APercentMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APercentMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APercentMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:APercentMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APercentMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APercentMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APercentMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APercentMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APercentMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APercentMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:APercentMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__APercentMethid__n_percent, /* pointer to parser_nodes:APercentMethid:parser_nodes#APercentMethid#n_percent */
(nitmethod_t)VIRTUAL_parser_prod__APercentMethid__n_percent_61d, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#n_percent= */
(nitmethod_t)VIRTUAL_parser_nodes__APercentMethid__init, /* pointer to parser_nodes:APercentMethid:parser_nodes#APercentMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__APercentMethid__empty_init, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APercentMethid__init_apercentmethid, /* pointer to parser_nodes:APercentMethid:parser_prod#APercentMethid#init_apercentmethid */
}
};
/* allocate APercentMethid */
val* NEW_parser_nodes__APercentMethid(const struct type* type) {
val* self /* : APercentMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APercentMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APercentMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APercentMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APercentMethid exact> */
return self;
}
/* allocate APercentMethid */
void CHECK_NEW_parser_nodes__APercentMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TPercent */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APercentMethid> */
var1 = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_percent");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 930);
exit(1);
}
}
/* runtime class parser_nodes__AEqMethid */
const struct class class_parser_nodes__AEqMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AEqMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AEqMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AEqMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AEqMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AEqMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AEqMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AEqMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEqMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEqMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEqMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AEqMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AEqMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AEqMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AEqMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AEqMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AEqMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AEqMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AEqMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AEqMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AEqMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AEqMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AEqMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AEqMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AEqMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AEqMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AEqMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AEqMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AEqMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AEqMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AEqMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AEqMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AEqMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AEqMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AEqMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AEqMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AEqMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AEqMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AEqMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AEqMethid__replace_child, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AEqMethid__visit_all, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AEqMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AEqMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AEqMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AEqMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AEqMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AEqMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AEqMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AEqMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AEqMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AEqMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AEqMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AEqMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AEqMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AEqMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEqMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AEqMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AEqMethid__n_eq, /* pointer to parser_nodes:AEqMethid:parser_nodes#AEqMethid#n_eq */
(nitmethod_t)VIRTUAL_parser_prod__AEqMethid__n_eq_61d, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#n_eq= */
(nitmethod_t)VIRTUAL_parser_nodes__AEqMethid__init, /* pointer to parser_nodes:AEqMethid:parser_nodes#AEqMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AEqMethid__empty_init, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AEqMethid__init_aeqmethid, /* pointer to parser_nodes:AEqMethid:parser_prod#AEqMethid#init_aeqmethid */
}
};
/* allocate AEqMethid */
val* NEW_parser_nodes__AEqMethid(const struct type* type) {
val* self /* : AEqMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AEqMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AEqMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AEqMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AEqMethid exact> */
return self;
}
/* allocate AEqMethid */
void CHECK_NEW_parser_nodes__AEqMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TEq */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AEqMethid> */
var1 = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_eq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 934);
exit(1);
}
}
/* runtime class parser_nodes__ANeMethid */
const struct class class_parser_nodes__ANeMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANeMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANeMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANeMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANeMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANeMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ANeMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ANeMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANeMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANeMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANeMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANeMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANeMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANeMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANeMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANeMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANeMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ANeMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ANeMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ANeMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ANeMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ANeMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ANeMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANeMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANeMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANeMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ANeMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ANeMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANeMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANeMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ANeMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ANeMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ANeMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANeMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANeMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANeMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANeMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANeMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANeMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ANeMethid__replace_child, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANeMethid__visit_all, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ANeMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ANeMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ANeMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ANeMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANeMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANeMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANeMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANeMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANeMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANeMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ANeMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANeMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ANeMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANeMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ANeMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ANeMethid__n_ne, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANeMethid#n_ne */
(nitmethod_t)VIRTUAL_parser_prod__ANeMethid__n_ne_61d, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#n_ne= */
(nitmethod_t)VIRTUAL_parser_nodes__ANeMethid__init, /* pointer to parser_nodes:ANeMethid:parser_nodes#ANeMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ANeMethid__empty_init, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ANeMethid__init_anemethid, /* pointer to parser_nodes:ANeMethid:parser_prod#ANeMethid#init_anemethid */
}
};
/* allocate ANeMethid */
val* NEW_parser_nodes__ANeMethid(const struct type* type) {
val* self /* : ANeMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANeMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANeMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ANeMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANeMethid exact> */
return self;
}
/* allocate ANeMethid */
void CHECK_NEW_parser_nodes__ANeMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TNe */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ANeMethid> */
var1 = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ne");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 938);
exit(1);
}
}
/* runtime class parser_nodes__ALeMethid */
const struct class class_parser_nodes__ALeMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALeMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALeMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALeMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALeMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALeMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALeMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALeMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALeMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALeMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALeMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALeMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALeMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALeMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALeMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALeMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALeMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALeMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALeMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALeMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALeMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALeMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALeMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALeMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALeMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALeMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALeMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALeMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALeMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALeMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALeMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALeMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALeMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALeMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALeMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALeMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALeMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALeMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALeMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALeMethid__replace_child, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALeMethid__visit_all, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALeMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALeMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALeMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALeMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALeMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALeMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALeMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALeMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ALeMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALeMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALeMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALeMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALeMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALeMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALeMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ALeMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ALeMethid__n_le, /* pointer to parser_nodes:ALeMethid:parser_nodes#ALeMethid#n_le */
(nitmethod_t)VIRTUAL_parser_prod__ALeMethid__n_le_61d, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#n_le= */
(nitmethod_t)VIRTUAL_parser_nodes__ALeMethid__init, /* pointer to parser_nodes:ALeMethid:parser_nodes#ALeMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ALeMethid__empty_init, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ALeMethid__init_alemethid, /* pointer to parser_nodes:ALeMethid:parser_prod#ALeMethid#init_alemethid */
}
};
/* allocate ALeMethid */
val* NEW_parser_nodes__ALeMethid(const struct type* type) {
val* self /* : ALeMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALeMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALeMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALeMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALeMethid exact> */
return self;
}
/* allocate ALeMethid */
void CHECK_NEW_parser_nodes__ALeMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TLe */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALeMethid> */
var1 = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_le");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 942);
exit(1);
}
}
/* runtime class parser_nodes__AGeMethid */
const struct class class_parser_nodes__AGeMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGeMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGeMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGeMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGeMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGeMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AGeMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AGeMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGeMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGeMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGeMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGeMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGeMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGeMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGeMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGeMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGeMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AGeMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AGeMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AGeMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AGeMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AGeMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AGeMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGeMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGeMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGeMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AGeMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AGeMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGeMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGeMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AGeMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AGeMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AGeMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AGeMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AGeMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AGeMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AGeMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AGeMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AGeMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AGeMethid__replace_child, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGeMethid__visit_all, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AGeMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AGeMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AGeMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AGeMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGeMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGeMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGeMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGeMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AGeMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AGeMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AGeMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGeMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AGeMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGeMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGeMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AGeMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AGeMethid__n_ge, /* pointer to parser_nodes:AGeMethid:parser_nodes#AGeMethid#n_ge */
(nitmethod_t)VIRTUAL_parser_prod__AGeMethid__n_ge_61d, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#n_ge= */
(nitmethod_t)VIRTUAL_parser_nodes__AGeMethid__init, /* pointer to parser_nodes:AGeMethid:parser_nodes#AGeMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AGeMethid__empty_init, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AGeMethid__init_agemethid, /* pointer to parser_nodes:AGeMethid:parser_prod#AGeMethid#init_agemethid */
}
};
/* allocate AGeMethid */
val* NEW_parser_nodes__AGeMethid(const struct type* type) {
val* self /* : AGeMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGeMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGeMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AGeMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGeMethid exact> */
return self;
}
/* allocate AGeMethid */
void CHECK_NEW_parser_nodes__AGeMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TGe */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGeMethid> */
var1 = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ge");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 946);
exit(1);
}
}
/* runtime class parser_nodes__ALtMethid */
const struct class class_parser_nodes__ALtMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALtMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALtMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALtMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALtMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALtMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALtMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALtMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALtMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALtMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALtMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALtMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALtMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALtMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALtMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALtMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALtMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALtMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALtMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALtMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALtMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALtMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALtMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALtMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALtMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALtMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALtMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALtMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALtMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALtMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALtMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALtMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALtMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALtMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALtMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALtMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALtMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALtMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALtMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALtMethid__replace_child, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALtMethid__visit_all, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALtMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALtMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALtMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALtMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALtMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALtMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALtMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALtMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ALtMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALtMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALtMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALtMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALtMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALtMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALtMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ALtMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ALtMethid__n_lt, /* pointer to parser_nodes:ALtMethid:parser_nodes#ALtMethid#n_lt */
(nitmethod_t)VIRTUAL_parser_prod__ALtMethid__n_lt_61d, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#n_lt= */
(nitmethod_t)VIRTUAL_parser_nodes__ALtMethid__init, /* pointer to parser_nodes:ALtMethid:parser_nodes#ALtMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ALtMethid__empty_init, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ALtMethid__init_altmethid, /* pointer to parser_nodes:ALtMethid:parser_prod#ALtMethid#init_altmethid */
}
};
/* allocate ALtMethid */
val* NEW_parser_nodes__ALtMethid(const struct type* type) {
val* self /* : ALtMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALtMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALtMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALtMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALtMethid exact> */
return self;
}
/* allocate ALtMethid */
void CHECK_NEW_parser_nodes__ALtMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TLt */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALtMethid> */
var1 = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_lt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 950);
exit(1);
}
}
/* runtime class parser_nodes__AGtMethid */
const struct class class_parser_nodes__AGtMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGtMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGtMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGtMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGtMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGtMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AGtMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AGtMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGtMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGtMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGtMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGtMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGtMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGtMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGtMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGtMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGtMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AGtMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AGtMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AGtMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AGtMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AGtMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AGtMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGtMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGtMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGtMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AGtMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AGtMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGtMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGtMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AGtMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AGtMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AGtMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AGtMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AGtMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AGtMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AGtMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AGtMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AGtMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AGtMethid__replace_child, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGtMethid__visit_all, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AGtMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AGtMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AGtMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AGtMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGtMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGtMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGtMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGtMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AGtMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AGtMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AGtMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGtMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AGtMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGtMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGtMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AGtMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AGtMethid__n_gt, /* pointer to parser_nodes:AGtMethid:parser_nodes#AGtMethid#n_gt */
(nitmethod_t)VIRTUAL_parser_prod__AGtMethid__n_gt_61d, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#n_gt= */
(nitmethod_t)VIRTUAL_parser_nodes__AGtMethid__init, /* pointer to parser_nodes:AGtMethid:parser_nodes#AGtMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AGtMethid__empty_init, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AGtMethid__init_agtmethid, /* pointer to parser_nodes:AGtMethid:parser_prod#AGtMethid#init_agtmethid */
}
};
/* allocate AGtMethid */
val* NEW_parser_nodes__AGtMethid(const struct type* type) {
val* self /* : AGtMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGtMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGtMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AGtMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGtMethid exact> */
return self;
}
/* allocate AGtMethid */
void CHECK_NEW_parser_nodes__AGtMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TGt */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGtMethid> */
var1 = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gt");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 954);
exit(1);
}
}
/* runtime class parser_nodes__ALlMethid */
const struct class class_parser_nodes__ALlMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALlMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALlMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALlMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALlMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALlMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALlMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALlMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALlMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALlMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALlMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALlMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALlMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALlMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALlMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALlMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALlMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALlMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALlMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALlMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALlMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALlMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALlMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALlMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALlMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALlMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALlMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALlMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALlMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALlMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALlMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALlMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALlMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALlMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALlMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALlMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALlMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALlMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALlMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALlMethid__replace_child, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALlMethid__visit_all, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALlMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALlMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALlMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALlMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALlMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALlMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALlMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALlMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ALlMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALlMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALlMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALlMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALlMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALlMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALlMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ALlMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ALlMethid__n_ll, /* pointer to parser_nodes:ALlMethid:parser_nodes#ALlMethid#n_ll */
(nitmethod_t)VIRTUAL_parser_prod__ALlMethid__n_ll_61d, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#n_ll= */
(nitmethod_t)VIRTUAL_parser_nodes__ALlMethid__init, /* pointer to parser_nodes:ALlMethid:parser_nodes#ALlMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ALlMethid__empty_init, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ALlMethid__init_allmethid, /* pointer to parser_nodes:ALlMethid:parser_prod#ALlMethid#init_allmethid */
}
};
/* allocate ALlMethid */
val* NEW_parser_nodes__ALlMethid(const struct type* type) {
val* self /* : ALlMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALlMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALlMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALlMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALlMethid exact> */
return self;
}
/* allocate ALlMethid */
void CHECK_NEW_parser_nodes__ALlMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TLl */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALlMethid> */
var1 = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_ll");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 958);
exit(1);
}
}
/* runtime class parser_nodes__AGgMethid */
const struct class class_parser_nodes__AGgMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGgMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGgMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGgMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGgMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGgMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AGgMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AGgMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGgMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGgMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGgMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGgMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGgMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGgMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGgMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGgMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGgMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AGgMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AGgMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AGgMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AGgMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AGgMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AGgMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGgMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGgMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGgMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AGgMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AGgMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGgMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGgMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AGgMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AGgMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AGgMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AGgMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AGgMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AGgMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AGgMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AGgMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AGgMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AGgMethid__replace_child, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGgMethid__visit_all, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AGgMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AGgMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AGgMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AGgMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGgMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGgMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGgMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGgMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AGgMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AGgMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AGgMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGgMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AGgMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGgMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGgMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AGgMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AGgMethid__n_gg, /* pointer to parser_nodes:AGgMethid:parser_nodes#AGgMethid#n_gg */
(nitmethod_t)VIRTUAL_parser_prod__AGgMethid__n_gg_61d, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#n_gg= */
(nitmethod_t)VIRTUAL_parser_nodes__AGgMethid__init, /* pointer to parser_nodes:AGgMethid:parser_nodes#AGgMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AGgMethid__empty_init, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AGgMethid__init_aggmethid, /* pointer to parser_nodes:AGgMethid:parser_prod#AGgMethid#init_aggmethid */
}
};
/* allocate AGgMethid */
val* NEW_parser_nodes__AGgMethid(const struct type* type) {
val* self /* : AGgMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGgMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGgMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AGgMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGgMethid exact> */
return self;
}
/* allocate AGgMethid */
void CHECK_NEW_parser_nodes__AGgMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TGg */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGgMethid> */
var1 = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_gg");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 962);
exit(1);
}
}
/* runtime class parser_nodes__ABraMethid */
const struct class class_parser_nodes__ABraMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABraMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABraMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABraMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABraMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABraMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABraMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABraMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABraMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABraMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABraMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABraMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABraMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABraMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABraMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraMethid__replace_child, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraMethid__visit_all, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABraMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABraMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABraMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABraMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABraMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ABraMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABraMethid__n_obra, /* pointer to parser_nodes:ABraMethid:parser_nodes#ABraMethid#n_obra */
(nitmethod_t)VIRTUAL_parser_prod__ABraMethid__n_obra_61d, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#n_obra= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraMethid__n_cbra, /* pointer to parser_nodes:ABraMethid:parser_nodes#ABraMethid#n_cbra */
(nitmethod_t)VIRTUAL_parser_prod__ABraMethid__n_cbra_61d, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#n_cbra= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraMethid__init, /* pointer to parser_nodes:ABraMethid:parser_nodes#ABraMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraMethid__empty_init, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABraMethid__init_abramethid, /* pointer to parser_nodes:ABraMethid:parser_prod#ABraMethid#init_abramethid */
}
};
/* allocate ABraMethid */
val* NEW_parser_nodes__ABraMethid(const struct type* type) {
val* self /* : ABraMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABraMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraMethid exact> */
return self;
}
/* allocate ABraMethid */
void CHECK_NEW_parser_nodes__ABraMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TObra */;
val* var2 /* : TCbra */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABraMethid> */
var1 = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 966);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 967);
exit(1);
}
}
/* runtime class parser_nodes__AStarshipMethid */
const struct class class_parser_nodes__AStarshipMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStarshipMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStarshipMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStarshipMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStarshipMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStarshipMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStarshipMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStarshipMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStarshipMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStarshipMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStarshipMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStarshipMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStarshipMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStarshipMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStarshipMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStarshipMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStarshipMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStarshipMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStarshipMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStarshipMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStarshipMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStarshipMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStarshipMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStarshipMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStarshipMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStarshipMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipMethid__replace_child, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipMethid__visit_all, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStarshipMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStarshipMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStarshipMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStarshipMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStarshipMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarshipMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStarshipMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStarshipMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStarshipMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarshipMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStarshipMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStarshipMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStarshipMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AStarshipMethid__n_starship, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#AStarshipMethid#n_starship */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipMethid__n_starship_61d, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#n_starship= */
(nitmethod_t)VIRTUAL_parser_nodes__AStarshipMethid__init, /* pointer to parser_nodes:AStarshipMethid:parser_nodes#AStarshipMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipMethid__empty_init, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipMethid__init_astarshipmethid, /* pointer to parser_nodes:AStarshipMethid:parser_prod#AStarshipMethid#init_astarshipmethid */
}
};
/* allocate AStarshipMethid */
val* NEW_parser_nodes__AStarshipMethid(const struct type* type) {
val* self /* : AStarshipMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStarshipMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStarshipMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStarshipMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStarshipMethid exact> */
return self;
}
/* allocate AStarshipMethid */
void CHECK_NEW_parser_nodes__AStarshipMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TStarship */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStarshipMethid> */
var1 = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_starship");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 971);
exit(1);
}
}
/* runtime class parser_nodes__AAssignMethid */
const struct class class_parser_nodes__AAssignMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAssignMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAssignMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAssignMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAssignMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAssignMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAssignMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAssignMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAssignMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAssignMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAssignMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAssignMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAssignMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAssignMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAssignMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAssignMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAssignMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAssignMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAssignMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAssignMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAssignMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAssignMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAssignMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAssignMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAssignMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAssignMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAssignMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAssignMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAssignMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAssignMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAssignMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAssignMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAssignMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAssignMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAssignMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAssignMethid__replace_child, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAssignMethid__visit_all, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAssignMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAssignMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAssignMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAssignMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAssignMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAssignMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAssignMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAssignMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAssignMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAssignMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAssignMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAssignMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAssignMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAssignMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAssignMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:AAssignMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignMethid__n_id, /* pointer to parser_nodes:AAssignMethid:parser_nodes#AAssignMethid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAssignMethid__n_id_61d, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignMethid__n_assign, /* pointer to parser_nodes:AAssignMethid:parser_nodes#AAssignMethid#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__AAssignMethid__n_assign_61d, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignMethid__init, /* pointer to parser_nodes:AAssignMethid:parser_nodes#AAssignMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__AAssignMethid__empty_init, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAssignMethid__init_aassignmethid, /* pointer to parser_nodes:AAssignMethid:parser_prod#AAssignMethid#init_aassignmethid */
}
};
/* allocate AAssignMethid */
val* NEW_parser_nodes__AAssignMethid(const struct type* type) {
val* self /* : AAssignMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAssignMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAssignMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAssignMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAssignMethid exact> */
return self;
}
/* allocate AAssignMethid */
void CHECK_NEW_parser_nodes__AAssignMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TId */;
val* var2 /* : TAssign */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAssignMethid> */
var1 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 975);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 976);
exit(1);
}
}
/* runtime class parser_nodes__ABraassignMethid */
const struct class class_parser_nodes__ABraassignMethid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraassignMethid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraassignMethid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraassignMethid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraassignMethid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraassignMethid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraassignMethid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraassignMethid:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABraassignMethid:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABraassignMethid:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABraassignMethid:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABraassignMethid:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABraassignMethid:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABraassignMethid:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraassignMethid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraassignMethid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraassignMethid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABraassignMethid:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABraassignMethid:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraassignMethid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraassignMethid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABraassignMethid:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABraassignMethid:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABraassignMethid:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraassignMethid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraassignMethid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__replace_child, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__visit_all, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABraassignMethid:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABraassignMethid:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABraassignMethid:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABraassignMethid:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraassignMethid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraassignMethid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraassignMethid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraassignMethid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraassignMethid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraassignMethid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraassignMethid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraassignMethid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraassignMethid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AMethid__init, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#AMethid#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABraassignMethid__n_obra, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ABraassignMethid#n_obra */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__n_obra_61d, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#n_obra= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraassignMethid__n_cbra, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ABraassignMethid#n_cbra */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__n_cbra_61d, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#n_cbra= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraassignMethid__n_assign, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ABraassignMethid#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__n_assign_61d, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraassignMethid__init, /* pointer to parser_nodes:ABraassignMethid:parser_nodes#ABraassignMethid#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__empty_init, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABraassignMethid__init_abraassignmethid, /* pointer to parser_nodes:ABraassignMethid:parser_prod#ABraassignMethid#init_abraassignmethid */
}
};
/* allocate ABraassignMethid */
val* NEW_parser_nodes__ABraassignMethid(const struct type* type) {
val* self /* : ABraassignMethid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraassignMethid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraassignMethid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABraassignMethid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraassignMethid exact> */
return self;
}
/* allocate ABraassignMethid */
void CHECK_NEW_parser_nodes__ABraassignMethid(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TObra */;
val* var2 /* : TCbra */;
val* var3 /* : TAssign */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABraassignMethid> */
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 980);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 981);
exit(1);
}
var3 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 982);
exit(1);
}
}
/* runtime class parser_nodes__ASignature */
const struct class class_parser_nodes__ASignature = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASignature:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASignature:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASignature:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASignature:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASignature:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASignature:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASignature:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASignature:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASignature:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASignature:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASignature:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASignature:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASignature:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASignature:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASignature:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASignature:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASignature:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASignature:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASignature:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASignature:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASignature:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASignature:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASignature:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASignature:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASignature:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASignature:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASignature:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASignature:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASignature:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASignature:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASignature:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASignature:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASignature:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASignature:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASignature:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASignature:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASignature:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASignature:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__replace_child, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__visit_all, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASignature:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASignature:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASignature:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ASignature__after_simple_misc, /* pointer to parser_nodes:ASignature:simple_misc_analysis#ASignature#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASignature:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASignature:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASignature:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASignature:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASignature:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASignature:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASignature:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASignature:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASignature:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASignature:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASignature:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ASignature__n_opar, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__n_opar_61d, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__ASignature__n_params, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#n_params */
(nitmethod_t)VIRTUAL_parser_nodes__ASignature__n_cpar, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__n_cpar_61d, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__ASignature__n_type, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__n_type_61d, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ASignature__init, /* pointer to parser_nodes:ASignature:parser_nodes#ASignature#init */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__empty_init, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASignature__init_asignature, /* pointer to parser_nodes:ASignature:parser_prod#ASignature#init_asignature */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__is_visited, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#is_visited */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__is_visited_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#is_visited= */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__param_names, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#param_names */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__param_names_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#param_names= */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__param_types, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#param_types */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__param_types_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#param_types= */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__vararg_rank, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#vararg_rank */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__vararg_rank_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#vararg_rank= */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__ret_type, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#ret_type */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__ret_type_61d, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#ret_type= */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__visit_signature, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#visit_signature */
(nitmethod_t)VIRTUAL_modelize_property__ASignature__build_signature, /* pointer to parser_nodes:ASignature:modelize_property#ASignature#build_signature */
}
};
/* allocate ASignature */
val* NEW_parser_nodes__ASignature(const struct type* type) {
val* self /* : ASignature */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[AParam] */;
val* var5 /* : null */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : Array[String] */;
val* var9 /* : Array[MType] */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
val* var13 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASignature;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASignature exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASignature exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASignature exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var3; /* _n_opar on <self:ASignature exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AParam);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[AParam]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__ASignature___n_params].val = var4; /* _n_params on <self:ASignature exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var5; /* _n_cpar on <self:ASignature exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var6; /* _n_type on <self:ASignature exact> */
var7 = 0;
self->attrs[COLOR_modelize_property__ASignature___64dis_visited].s = var7; /* @is_visited on <self:ASignature exact> */
var8 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[String]>*/;
CHECK_NEW_array__Array(var8);
self->attrs[COLOR_modelize_property__ASignature___64dparam_names].val = var8; /* @param_names on <self:ASignature exact> */
var9 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[MType]>*/;
CHECK_NEW_array__Array(var9);
self->attrs[COLOR_modelize_property__ASignature___64dparam_types].val = var9; /* @param_types on <self:ASignature exact> */
var10 = 1;
{ /* Inline kernel#Int#unary - (var10) */
var12 = -var10;
var11 = var12;
goto RET_LABEL;
RET_LABEL:(void)0;
}
self->attrs[COLOR_modelize_property__ASignature___64dvararg_rank].l = var11; /* @vararg_rank on <self:ASignature exact> */
var13 = NULL;
self->attrs[COLOR_modelize_property__ASignature___64dret_type].val = var13; /* @ret_type on <self:ASignature exact> */
return self;
}
/* allocate ASignature */
void CHECK_NEW_parser_nodes__ASignature(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASignature> */
}
/* runtime class parser_nodes__AParam */
const struct class class_parser_nodes__AParam = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AParam:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AParam:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AParam:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AParam:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AParam:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AParam:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AParam:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParam:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParam:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParam:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AParam:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AParam:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AParam:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AParam:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AParam:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AParam:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AParam:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AParam:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AParam:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AParam:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AParam:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AParam:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AParam:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AParam:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AParam:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AParam:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AParam:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AParam:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AParam:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AParam:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AParam:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AParam:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AParam:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AParam:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AParam:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AParam:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AParam:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AParam:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AParam:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AParam:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AParam:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AParam:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AParam:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AParam:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AParam:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AParam:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AParam:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AParam:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AParam__replace_child, /* pointer to parser_nodes:AParam:parser_prod#AParam#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AParam:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AParam:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AParam__visit_all, /* pointer to parser_nodes:AParam:parser_prod#AParam#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AParam:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AParam:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AParam:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AParam:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParam:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AParam__accept_scope_visitor, /* pointer to parser_nodes:AParam:scope#AParam#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AParam:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParam:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParam:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParam:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AParam:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AParam:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AParam:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParam:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AParam__n_annotations_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AParam:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AParam:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParam:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AParam__n_id, /* pointer to parser_nodes:AParam:parser_nodes#AParam#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AParam__n_id_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AParam__n_type, /* pointer to parser_nodes:AParam:parser_nodes#AParam#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AParam__n_type_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__AParam__n_dotdotdot, /* pointer to parser_nodes:AParam:parser_nodes#AParam#n_dotdotdot */
(nitmethod_t)VIRTUAL_parser_prod__AParam__n_dotdotdot_61d, /* pointer to parser_nodes:AParam:parser_prod#AParam#n_dotdotdot= */
(nitmethod_t)VIRTUAL_parser_nodes__AParam__init, /* pointer to parser_nodes:AParam:parser_nodes#AParam#init */
(nitmethod_t)VIRTUAL_parser_prod__AParam__empty_init, /* pointer to parser_nodes:AParam:parser_prod#AParam#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AParam__init_aparam, /* pointer to parser_nodes:AParam:parser_prod#AParam#init_aparam */
(nitmethod_t)VIRTUAL_scope__AParam__variable, /* pointer to parser_nodes:AParam:scope#AParam#variable */
(nitmethod_t)VIRTUAL_scope__AParam__variable_61d, /* pointer to parser_nodes:AParam:scope#AParam#variable= */
(nitmethod_t)VIRTUAL_modelize_property__AParam__mparameter, /* pointer to parser_nodes:AParam:modelize_property#AParam#mparameter */
(nitmethod_t)VIRTUAL_modelize_property__AParam__mparameter_61d, /* pointer to parser_nodes:AParam:modelize_property#AParam#mparameter= */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParam:scope#ANode#accept_scope_visitor */
}
};
/* allocate AParam */
val* NEW_parser_nodes__AParam(const struct type* type) {
val* self /* : AParam */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AParam;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AParam exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AParam exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AParam exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AParam___n_type].val = var3; /* _n_type on <self:AParam exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val = var4; /* _n_dotdotdot on <self:AParam exact> */
var5 = NULL;
self->attrs[COLOR_modelize_property__AParam___64dmparameter].val = var5; /* @mparameter on <self:AParam exact> */
return self;
}
/* allocate AParam */
void CHECK_NEW_parser_nodes__AParam(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TId */;
val* var2 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AParam> */
var1 = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 997);
exit(1);
}
var2 = self->attrs[COLOR_scope__AParam___64dvariable].val; /* @variable on <self:AParam> */
}
/* runtime class parser_nodes__AType */
const struct class class_parser_nodes__AType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AType:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AType:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AType:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AType:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AType:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AType:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AType__replace_child, /* pointer to parser_nodes:AType:parser_prod#AType#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AType:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AType:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AType__visit_all, /* pointer to parser_nodes:AType:parser_prod#AType#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AType:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AType:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AType:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AType:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AType:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AType:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AType:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AType:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AType:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AType:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AType:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AType:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AType:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AType:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AType__n_annotations_61d, /* pointer to parser_nodes:AType:parser_prod#AType#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AType:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AType:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AType:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AType__n_kwnullable, /* pointer to parser_nodes:AType:parser_nodes#AType#n_kwnullable */
(nitmethod_t)VIRTUAL_parser_prod__AType__n_kwnullable_61d, /* pointer to parser_nodes:AType:parser_prod#AType#n_kwnullable= */
(nitmethod_t)VIRTUAL_parser_nodes__AType__n_id, /* pointer to parser_nodes:AType:parser_nodes#AType#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AType__n_id_61d, /* pointer to parser_nodes:AType:parser_prod#AType#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AType__n_types, /* pointer to parser_nodes:AType:parser_nodes#AType#n_types */
(nitmethod_t)VIRTUAL_parser_nodes__AType__init, /* pointer to parser_nodes:AType:parser_nodes#AType#init */
(nitmethod_t)VIRTUAL_parser_prod__AType__empty_init, /* pointer to parser_nodes:AType:parser_prod#AType#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AType__init_atype, /* pointer to parser_nodes:AType:parser_prod#AType#init_atype */
(nitmethod_t)VIRTUAL_modelize_class__AType__mtype, /* pointer to parser_nodes:AType:modelize_class#AType#mtype */
(nitmethod_t)VIRTUAL_modelize_class__AType__mtype_61d, /* pointer to parser_nodes:AType:modelize_class#AType#mtype= */
(nitmethod_t)VIRTUAL_modelize_class__AType__checked_mtype, /* pointer to parser_nodes:AType:modelize_class#AType#checked_mtype */
(nitmethod_t)VIRTUAL_modelize_class__AType__checked_mtype_61d, /* pointer to parser_nodes:AType:modelize_class#AType#checked_mtype= */
(nitmethod_t)VIRTUAL_astbuilder__AType__make, /* pointer to parser_nodes:AType:astbuilder#AType#make */
}
};
/* allocate AType */
val* NEW_parser_nodes__AType(const struct type* type) {
val* self /* : AType */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[AType] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AType;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AType exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AType exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AType exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AType___n_kwnullable].val = var3; /* _n_kwnullable on <self:AType exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AType);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[AType]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__AType___n_types].val = var4; /* _n_types on <self:AType exact> */
var5 = NULL;
self->attrs[COLOR_modelize_class__AType___64dmtype].val = var5; /* @mtype on <self:AType exact> */
var6 = 0;
self->attrs[COLOR_modelize_class__AType___64dchecked_mtype].s = var6; /* @checked_mtype on <self:AType exact> */
return self;
}
/* allocate AType */
void CHECK_NEW_parser_nodes__AType(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TClassid */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AType> */
var1 = self->attrs[COLOR_parser_nodes__AType___n_id].val; /* _n_id on <self:AType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1007);
exit(1);
}
}
/* runtime class parser_nodes__ALabel */
const struct class class_parser_nodes__ALabel = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALabel:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALabel:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALabel:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALabel:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALabel:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALabel:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALabel:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALabel:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALabel:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALabel:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALabel:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALabel:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALabel:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALabel:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALabel:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALabel:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALabel:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALabel:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALabel:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALabel:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALabel:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALabel:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALabel:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALabel:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALabel:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALabel:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALabel:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALabel:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALabel:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALabel:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALabel:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALabel:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALabel:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALabel:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALabel:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALabel:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALabel:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALabel:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALabel__replace_child, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALabel__visit_all, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALabel:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALabel:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALabel:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALabel:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALabel:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALabel:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALabel:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALabel:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ALabel:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALabel:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALabel:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALabel:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALabel:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALabel:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALabel:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ALabel__n_kwlabel, /* pointer to parser_nodes:ALabel:parser_nodes#ALabel#n_kwlabel */
(nitmethod_t)VIRTUAL_parser_prod__ALabel__n_kwlabel_61d, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#n_kwlabel= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabel__n_id, /* pointer to parser_nodes:ALabel:parser_nodes#ALabel#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ALabel__n_id_61d, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabel__init, /* pointer to parser_nodes:ALabel:parser_nodes#ALabel#init */
(nitmethod_t)VIRTUAL_parser_prod__ALabel__empty_init, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ALabel__init_alabel, /* pointer to parser_nodes:ALabel:parser_prod#ALabel#init_alabel */
}
};
/* allocate ALabel */
val* NEW_parser_nodes__ALabel(const struct type* type) {
val* self /* : ALabel */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALabel;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALabel exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALabel exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALabel exact> */
return self;
}
/* allocate ALabel */
void CHECK_NEW_parser_nodes__ALabel(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwlabel */;
val* var2 /* : TId */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALabel> */
var1 = self->attrs[COLOR_parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwlabel");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1017);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1018);
exit(1);
}
}
/* runtime class parser_nodes__ABlockExpr */
const struct class class_parser_nodes__ABlockExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABlockExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABlockExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABlockExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABlockExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABlockExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABlockExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABlockExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABlockExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABlockExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABlockExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABlockExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABlockExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABlockExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABlockExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABlockExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABlockExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABlockExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABlockExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABlockExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABlockExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABlockExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABlockExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABlockExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABlockExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABlockExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABlockExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABlockExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABlockExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABlockExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABlockExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABlockExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABlockExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABlockExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABlockExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABlockExpr__replace_child, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABlockExpr__visit_all, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABlockExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABlockExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABlockExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABlockExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABlockExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABlockExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ABlockExpr__accept_flow_visitor, /* pointer to parser_nodes:ABlockExpr:flow#ABlockExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABlockExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABlockExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABlockExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABlockExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABlockExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABlockExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABlockExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ABlockExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ABlockExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABlockExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABlockExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__ABlockExpr__mtype, /* pointer to parser_nodes:ABlockExpr:typing#ABlockExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ABlockExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ABlockExpr__accept_typing, /* pointer to parser_nodes:ABlockExpr:typing#ABlockExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ABlockExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__ABlockExpr__add, /* pointer to parser_nodes:ABlockExpr:astbuilder#ABlockExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ABlockExpr__expr, /* pointer to parser_nodes:ABlockExpr:abstract_compiler#ABlockExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ABlockExpr__stmt, /* pointer to parser_nodes:ABlockExpr:abstract_compiler#ABlockExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABlockExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABlockExpr__n_expr, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ABlockExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_nodes__ABlockExpr__n_kwend, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ABlockExpr#n_kwend */
(nitmethod_t)VIRTUAL_parser_prod__ABlockExpr__n_kwend_61d, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#n_kwend= */
(nitmethod_t)VIRTUAL_parser_nodes__ABlockExpr__init, /* pointer to parser_nodes:ABlockExpr:parser_nodes#ABlockExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABlockExpr__empty_init, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABlockExpr__init_ablockexpr, /* pointer to parser_nodes:ABlockExpr:parser_prod#ABlockExpr#init_ablockexpr */
(nitmethod_t)VIRTUAL_astbuilder__ABlockExpr__make, /* pointer to parser_nodes:ABlockExpr:astbuilder#ABlockExpr#make */
}
};
/* allocate ABlockExpr */
val* NEW_parser_nodes__ABlockExpr(const struct type* type) {
val* self /* : ABlockExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABlockExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABlockExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABlockExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABlockExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ABlockExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ABlockExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ABlockExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AExpr]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val = var6; /* _n_expr on <self:ABlockExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__ABlockExpr___n_kwend].val = var7; /* _n_kwend on <self:ABlockExpr exact> */
return self;
}
/* allocate ABlockExpr */
void CHECK_NEW_parser_nodes__ABlockExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABlockExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ABlockExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ABlockExpr> */
}
/* runtime class parser_nodes__AVardeclExpr */
const struct class class_parser_nodes__AVardeclExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVardeclExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVardeclExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVardeclExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVardeclExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVardeclExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVardeclExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVardeclExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AVardeclExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AVardeclExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AVardeclExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AVardeclExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AVardeclExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AVardeclExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVardeclExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVardeclExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVardeclExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AVardeclExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AVardeclExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVardeclExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVardeclExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AVardeclExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AVardeclExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AVardeclExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVardeclExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVardeclExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__replace_child, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__visit_all, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AVardeclExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AVardeclExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AVardeclExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AVardeclExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVardeclExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AVardeclExpr__accept_scope_visitor, /* pointer to parser_nodes:AVardeclExpr:scope#AVardeclExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVardeclExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVardeclExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVardeclExpr:local_var_init#AVardeclExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVardeclExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVardeclExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVardeclExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AVardeclExpr__accept_transform_visitor, /* pointer to parser_nodes:AVardeclExpr:transform#AVardeclExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__n_annotations_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVardeclExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AVardeclExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVardeclExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVardeclExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AVardeclExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AVardeclExpr__accept_typing, /* pointer to parser_nodes:AVardeclExpr:typing#AVardeclExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AVardeclExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AVardeclExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AVardeclExpr__stmt, /* pointer to parser_nodes:AVardeclExpr:abstract_compiler#AVardeclExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AVardeclExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AVardeclExpr__n_kwvar, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_kwvar */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__n_kwvar_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_kwvar= */
(nitmethod_t)VIRTUAL_parser_nodes__AVardeclExpr__n_id, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__n_id_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AVardeclExpr__n_type, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__n_type_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__AVardeclExpr__n_assign, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__n_assign_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AVardeclExpr__n_expr, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__n_expr_61d, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AVardeclExpr__init, /* pointer to parser_nodes:AVardeclExpr:parser_nodes#AVardeclExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__empty_init, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AVardeclExpr__init_avardeclexpr, /* pointer to parser_nodes:AVardeclExpr:parser_prod#AVardeclExpr#init_avardeclexpr */
(nitmethod_t)VIRTUAL_scope__AVardeclExpr__variable, /* pointer to parser_nodes:AVardeclExpr:scope#AVardeclExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVardeclExpr__variable_61d, /* pointer to parser_nodes:AVardeclExpr:scope#AVardeclExpr#variable= */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVardeclExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVardeclExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVardeclExpr */
val* NEW_parser_nodes__AVardeclExpr(const struct type* type) {
val* self /* : AVardeclExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVardeclExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVardeclExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AVardeclExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVardeclExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AVardeclExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AVardeclExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AVardeclExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val = var6; /* _n_type on <self:AVardeclExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_assign].val = var7; /* _n_assign on <self:AVardeclExpr exact> */
var8 = NULL;
self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val = var8; /* _n_expr on <self:AVardeclExpr exact> */
return self;
}
/* allocate AVardeclExpr */
void CHECK_NEW_parser_nodes__AVardeclExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwvar */;
val* var4 /* : TId */;
val* var5 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AVardeclExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AVardeclExpr> */
var3 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1038);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1039);
exit(1);
}
var5 = self->attrs[COLOR_scope__AVardeclExpr___64dvariable].val; /* @variable on <self:AVardeclExpr> */
}
/* runtime class parser_nodes__AReturnExpr */
const struct class class_parser_nodes__AReturnExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AReturnExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AReturnExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AReturnExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AReturnExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AReturnExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AReturnExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AReturnExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AReturnExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AReturnExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AReturnExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AReturnExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AReturnExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AReturnExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AReturnExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AReturnExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AReturnExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AReturnExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AReturnExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AReturnExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AReturnExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AReturnExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AReturnExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AReturnExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AReturnExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AReturnExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AReturnExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AReturnExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AReturnExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AReturnExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AReturnExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AReturnExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AReturnExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AReturnExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AReturnExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AReturnExpr__replace_child, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AReturnExpr__visit_all, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AReturnExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AReturnExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AReturnExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AReturnExpr__after_simple_misc, /* pointer to parser_nodes:AReturnExpr:simple_misc_analysis#AReturnExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AReturnExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AReturnExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReturnExpr__accept_flow_visitor, /* pointer to parser_nodes:AReturnExpr:flow#AReturnExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AReturnExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AReturnExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AReturnExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AReturnExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AReturnExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AReturnExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AReturnExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AReturnExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AReturnExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AReturnExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AReturnExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AReturnExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AReturnExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AReturnExpr__accept_typing, /* pointer to parser_nodes:AReturnExpr:typing#AReturnExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AReturnExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AReturnExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AReturnExpr__stmt, /* pointer to parser_nodes:AReturnExpr:abstract_compiler#AReturnExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AReturnExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AReturnExpr__n_kwreturn, /* pointer to parser_nodes:AReturnExpr:parser_nodes#AReturnExpr#n_kwreturn */
(nitmethod_t)VIRTUAL_parser_prod__AReturnExpr__n_kwreturn_61d, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#n_kwreturn= */
(nitmethod_t)VIRTUAL_parser_nodes__AReturnExpr__n_expr, /* pointer to parser_nodes:AReturnExpr:parser_nodes#AReturnExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AReturnExpr__n_expr_61d, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AReturnExpr__init, /* pointer to parser_nodes:AReturnExpr:parser_nodes#AReturnExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AReturnExpr__empty_init, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AReturnExpr__init_areturnexpr, /* pointer to parser_nodes:AReturnExpr:parser_prod#AReturnExpr#init_areturnexpr */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AReturnExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AReturnExpr */
val* NEW_parser_nodes__AReturnExpr(const struct type* type) {
val* self /* : AReturnExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AReturnExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AReturnExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AReturnExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AReturnExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AReturnExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AReturnExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AReturnExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_kwreturn].val = var6; /* _n_kwreturn on <self:AReturnExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val = var7; /* _n_expr on <self:AReturnExpr exact> */
return self;
}
/* allocate AReturnExpr */
void CHECK_NEW_parser_nodes__AReturnExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AReturnExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AReturnExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AReturnExpr> */
}
/* runtime class parser_nodes__ABreakExpr */
const struct class class_parser_nodes__ABreakExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABreakExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABreakExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABreakExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABreakExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABreakExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABreakExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABreakExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABreakExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABreakExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABreakExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABreakExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABreakExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABreakExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABreakExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABreakExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABreakExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABreakExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABreakExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABreakExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABreakExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABreakExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABreakExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABreakExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABreakExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABreakExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABreakExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABreakExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABreakExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABreakExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABreakExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABreakExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABreakExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABreakExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABreakExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__replace_child, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__visit_all, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABreakExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABreakExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABreakExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ABreakExpr__after_simple_misc, /* pointer to parser_nodes:ABreakExpr:simple_misc_analysis#ABreakExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABreakExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ABreakExpr__accept_scope_visitor, /* pointer to parser_nodes:ABreakExpr:scope#ABreakExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ABreakExpr__accept_flow_visitor, /* pointer to parser_nodes:ABreakExpr:flow#ABreakExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABreakExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABreakExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABreakExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABreakExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABreakExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABreakExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABreakExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ABreakExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ABreakExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABreakExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABreakExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ABreakExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ABreakExpr__accept_typing, /* pointer to parser_nodes:ABreakExpr:typing#ABreakExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ABreakExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:ABreakExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ABreakExpr__stmt, /* pointer to parser_nodes:ABreakExpr:abstract_compiler#ABreakExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABreakExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__n_label_61d, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABreakExpr__n_kwbreak, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ABreakExpr#n_kwbreak */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__n_kwbreak_61d, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#n_kwbreak= */
(nitmethod_t)VIRTUAL_parser_nodes__ABreakExpr__n_expr, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ABreakExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__n_expr_61d, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ABreakExpr__init, /* pointer to parser_nodes:ABreakExpr:parser_nodes#ABreakExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__empty_init, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABreakExpr__init_abreakexpr, /* pointer to parser_nodes:ABreakExpr:parser_prod#ABreakExpr#init_abreakexpr */
(nitmethod_t)VIRTUAL_scope__ABreakExpr__escapemark, /* pointer to parser_nodes:ABreakExpr:scope#ABreakExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ABreakExpr__escapemark_61d, /* pointer to parser_nodes:ABreakExpr:scope#ABreakExpr#escapemark= */
(nitmethod_t)VIRTUAL_flow__ABreakExpr__before_flow_context, /* pointer to parser_nodes:ABreakExpr:flow#ABreakExpr#before_flow_context */
(nitmethod_t)VIRTUAL_astbuilder__ABreakExpr__make, /* pointer to parser_nodes:ABreakExpr:astbuilder#ABreakExpr#make */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABreakExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABreakExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate ABreakExpr */
val* NEW_parser_nodes__ABreakExpr(const struct type* type) {
val* self /* : ABreakExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABreakExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABreakExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABreakExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABreakExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ABreakExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ABreakExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ABreakExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:ABreakExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__ABreakExpr___n_expr].val = var7; /* _n_expr on <self:ABreakExpr exact> */
return self;
}
/* allocate ABreakExpr */
void CHECK_NEW_parser_nodes__ABreakExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwbreak */;
val* var4 /* : nullable EscapeMark */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABreakExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ABreakExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ABreakExpr> */
var3 = self->attrs[COLOR_parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwbreak");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1064);
exit(1);
}
var4 = self->attrs[COLOR_scope__ABreakExpr___64descapemark].val; /* @escapemark on <self:ABreakExpr> */
}
/* runtime class parser_nodes__AAbortExpr */
const struct class class_parser_nodes__AAbortExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAbortExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAbortExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAbortExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAbortExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAbortExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAbortExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAbortExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAbortExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAbortExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAbortExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAbortExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAbortExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAbortExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAbortExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAbortExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAbortExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAbortExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAbortExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAbortExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAbortExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAbortExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAbortExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAbortExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAbortExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAbortExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAbortExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAbortExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAbortExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAbortExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAbortExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAbortExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAbortExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAbortExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAbortExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAbortExpr__replace_child, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAbortExpr__visit_all, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAbortExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAbortExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAbortExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAbortExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAbortExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAbortExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AAbortExpr__accept_flow_visitor, /* pointer to parser_nodes:AAbortExpr:flow#AAbortExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAbortExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAbortExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAbortExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAbortExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAbortExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAbortExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAbortExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAbortExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAbortExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAbortExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAbortExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAbortExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAbortExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAbortExpr__accept_typing, /* pointer to parser_nodes:AAbortExpr:typing#AAbortExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAbortExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AAbortExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AAbortExpr__stmt, /* pointer to parser_nodes:AAbortExpr:abstract_compiler#AAbortExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAbortExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAbortExpr__n_kwabort, /* pointer to parser_nodes:AAbortExpr:parser_nodes#AAbortExpr#n_kwabort */
(nitmethod_t)VIRTUAL_parser_prod__AAbortExpr__n_kwabort_61d, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#n_kwabort= */
(nitmethod_t)VIRTUAL_parser_nodes__AAbortExpr__init, /* pointer to parser_nodes:AAbortExpr:parser_nodes#AAbortExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAbortExpr__empty_init, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAbortExpr__init_aabortexpr, /* pointer to parser_nodes:AAbortExpr:parser_prod#AAbortExpr#init_aabortexpr */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAbortExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AAbortExpr */
val* NEW_parser_nodes__AAbortExpr(const struct type* type) {
val* self /* : AAbortExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAbortExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAbortExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAbortExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAbortExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAbortExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAbortExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAbortExpr exact> */
return self;
}
/* allocate AAbortExpr */
void CHECK_NEW_parser_nodes__AAbortExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwabort */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAbortExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAbortExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAbortExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabort");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1071);
exit(1);
}
}
/* runtime class parser_nodes__AContinueExpr */
const struct class class_parser_nodes__AContinueExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AContinueExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AContinueExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AContinueExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AContinueExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AContinueExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AContinueExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AContinueExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AContinueExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AContinueExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AContinueExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AContinueExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AContinueExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AContinueExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AContinueExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AContinueExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AContinueExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AContinueExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AContinueExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AContinueExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AContinueExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AContinueExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AContinueExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AContinueExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AContinueExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AContinueExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AContinueExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AContinueExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AContinueExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AContinueExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AContinueExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AContinueExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AContinueExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AContinueExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AContinueExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__replace_child, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__visit_all, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AContinueExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AContinueExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AContinueExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AContinueExpr__after_simple_misc, /* pointer to parser_nodes:AContinueExpr:simple_misc_analysis#AContinueExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AContinueExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AContinueExpr__accept_scope_visitor, /* pointer to parser_nodes:AContinueExpr:scope#AContinueExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AContinueExpr__accept_flow_visitor, /* pointer to parser_nodes:AContinueExpr:flow#AContinueExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AContinueExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AContinueExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AContinueExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AContinueExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AContinueExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AContinueExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AContinueExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AContinueExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AContinueExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AContinueExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AContinueExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AContinueExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AContinueExpr__accept_typing, /* pointer to parser_nodes:AContinueExpr:typing#AContinueExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AContinueExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AContinueExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AContinueExpr__stmt, /* pointer to parser_nodes:AContinueExpr:abstract_compiler#AContinueExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AContinueExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__n_label_61d, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:AContinueExpr:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__AContinueExpr__n_kwcontinue, /* pointer to parser_nodes:AContinueExpr:parser_nodes#AContinueExpr#n_kwcontinue */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__n_kwcontinue_61d, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#n_kwcontinue= */
(nitmethod_t)VIRTUAL_parser_nodes__AContinueExpr__n_expr, /* pointer to parser_nodes:AContinueExpr:parser_nodes#AContinueExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__n_expr_61d, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AContinueExpr__init, /* pointer to parser_nodes:AContinueExpr:parser_nodes#AContinueExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__empty_init, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AContinueExpr__init_acontinueexpr, /* pointer to parser_nodes:AContinueExpr:parser_prod#AContinueExpr#init_acontinueexpr */
(nitmethod_t)VIRTUAL_scope__AContinueExpr__escapemark, /* pointer to parser_nodes:AContinueExpr:scope#AContinueExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__AContinueExpr__escapemark_61d, /* pointer to parser_nodes:AContinueExpr:scope#AContinueExpr#escapemark= */
(nitmethod_t)VIRTUAL_flow__AContinueExpr__before_flow_context, /* pointer to parser_nodes:AContinueExpr:flow#AContinueExpr#before_flow_context */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AContinueExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AContinueExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AContinueExpr */
val* NEW_parser_nodes__AContinueExpr(const struct type* type) {
val* self /* : AContinueExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AContinueExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AContinueExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AContinueExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AContinueExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AContinueExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AContinueExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AContinueExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:AContinueExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_kwcontinue].val = var7; /* _n_kwcontinue on <self:AContinueExpr exact> */
var8 = NULL;
self->attrs[COLOR_parser_nodes__AContinueExpr___n_expr].val = var8; /* _n_expr on <self:AContinueExpr exact> */
return self;
}
/* allocate AContinueExpr */
void CHECK_NEW_parser_nodes__AContinueExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : nullable EscapeMark */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AContinueExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AContinueExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AContinueExpr> */
var3 = self->attrs[COLOR_scope__AContinueExpr___64descapemark].val; /* @escapemark on <self:AContinueExpr> */
}
/* runtime class parser_nodes__ADoExpr */
const struct class class_parser_nodes__ADoExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ADoExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ADoExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ADoExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ADoExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ADoExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ADoExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ADoExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADoExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADoExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADoExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ADoExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ADoExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ADoExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ADoExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ADoExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ADoExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ADoExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ADoExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ADoExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ADoExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ADoExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ADoExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ADoExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ADoExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ADoExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ADoExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ADoExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ADoExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ADoExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ADoExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ADoExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ADoExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADoExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADoExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADoExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADoExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADoExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADoExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__replace_child, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__visit_all, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ADoExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ADoExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ADoExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ADoExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ADoExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ADoExpr__accept_scope_visitor, /* pointer to parser_nodes:ADoExpr:scope#ADoExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ADoExpr__accept_flow_visitor, /* pointer to parser_nodes:ADoExpr:flow#ADoExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ADoExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ADoExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ADoExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ADoExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ADoExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ADoExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ADoExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADoExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ADoExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ADoExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ADoExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ADoExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ADoExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ADoExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ADoExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ADoExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ADoExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ADoExpr__accept_typing, /* pointer to parser_nodes:ADoExpr:typing#ADoExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ADoExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:ADoExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ADoExpr__stmt, /* pointer to parser_nodes:ADoExpr:abstract_compiler#ADoExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ADoExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:ADoExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__n_label_61d, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:ADoExpr:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__ADoExpr__n_kwdo, /* pointer to parser_nodes:ADoExpr:parser_nodes#ADoExpr#n_kwdo */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__n_kwdo_61d, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#n_kwdo= */
(nitmethod_t)VIRTUAL_parser_nodes__ADoExpr__n_block, /* pointer to parser_nodes:ADoExpr:parser_nodes#ADoExpr#n_block */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__n_block_61d, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#n_block= */
(nitmethod_t)VIRTUAL_parser_nodes__ADoExpr__init, /* pointer to parser_nodes:ADoExpr:parser_nodes#ADoExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__empty_init, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ADoExpr__init_adoexpr, /* pointer to parser_nodes:ADoExpr:parser_prod#ADoExpr#init_adoexpr */
(nitmethod_t)VIRTUAL_scope__ADoExpr__escapemark, /* pointer to parser_nodes:ADoExpr:scope#ADoExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ADoExpr__escapemark_61d, /* pointer to parser_nodes:ADoExpr:scope#ADoExpr#escapemark= */
(nitmethod_t)VIRTUAL_astbuilder__ADoExpr__make, /* pointer to parser_nodes:ADoExpr:astbuilder#ADoExpr#make */
(nitmethod_t)VIRTUAL_astbuilder__ADoExpr__make_break, /* pointer to parser_nodes:ADoExpr:astbuilder#ADoExpr#make_break */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ADoExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate ADoExpr */
val* NEW_parser_nodes__ADoExpr(const struct type* type) {
val* self /* : ADoExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADoExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ADoExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ADoExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ADoExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ADoExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ADoExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ADoExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:ADoExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val = var7; /* _n_block on <self:ADoExpr exact> */
return self;
}
/* allocate ADoExpr */
void CHECK_NEW_parser_nodes__ADoExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwdo */;
val* var4 /* : nullable EscapeMark */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ADoExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ADoExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ADoExpr> */
var3 = self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1086);
exit(1);
}
var4 = self->attrs[COLOR_scope__ADoExpr___64descapemark].val; /* @escapemark on <self:ADoExpr> */
}
/* runtime class parser_nodes__AIfExpr */
const struct class class_parser_nodes__AIfExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIfExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIfExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIfExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIfExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIfExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIfExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIfExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIfExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIfExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIfExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIfExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIfExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIfExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIfExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIfExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIfExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIfExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIfExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIfExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIfExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIfExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIfExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIfExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIfExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIfExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIfExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIfExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIfExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIfExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIfExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIfExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIfExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIfExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIfExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIfExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__replace_child, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__visit_all, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIfExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIfExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIfExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AIfExpr__after_simple_misc, /* pointer to parser_nodes:AIfExpr:simple_misc_analysis#AIfExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIfExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AIfExpr__accept_scope_visitor, /* pointer to parser_nodes:AIfExpr:scope#AIfExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AIfExpr__accept_flow_visitor, /* pointer to parser_nodes:AIfExpr:flow#AIfExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIfExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIfExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AIfExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AIfExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AIfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AIfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AIfExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AIfExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AIfExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AIfExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AIfExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIfExpr__accept_typing, /* pointer to parser_nodes:AIfExpr:typing#AIfExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AIfExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIfExpr__expr, /* pointer to parser_nodes:AIfExpr:abstract_compiler#AIfExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AIfExpr__stmt, /* pointer to parser_nodes:AIfExpr:abstract_compiler#AIfExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIfExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AIfExpr__n_kwif, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_kwif */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__n_kwif_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_kwif= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfExpr__n_expr, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__n_expr_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfExpr__n_then, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_then */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__n_then_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_then= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfExpr__n_else, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#n_else */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__n_else_61d, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#n_else= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfExpr__init, /* pointer to parser_nodes:AIfExpr:parser_nodes#AIfExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__empty_init, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIfExpr__init_aifexpr, /* pointer to parser_nodes:AIfExpr:parser_prod#AIfExpr#init_aifexpr */
(nitmethod_t)VIRTUAL_astbuilder__AIfExpr__make, /* pointer to parser_nodes:AIfExpr:astbuilder#AIfExpr#make */
}
};
/* allocate AIfExpr */
val* NEW_parser_nodes__AIfExpr(const struct type* type) {
val* self /* : AIfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIfExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIfExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIfExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIfExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AIfExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AIfExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AIfExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var6; /* _n_then on <self:AIfExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var7; /* _n_else on <self:AIfExpr exact> */
return self;
}
/* allocate AIfExpr */
void CHECK_NEW_parser_nodes__AIfExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwif */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIfExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AIfExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AIfExpr> */
var3 = self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwif");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1093);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1094);
exit(1);
}
}
/* runtime class parser_nodes__AIfexprExpr */
const struct class class_parser_nodes__AIfexprExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIfexprExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIfexprExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIfexprExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIfexprExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIfexprExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIfexprExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIfexprExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIfexprExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIfexprExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIfexprExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIfexprExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIfexprExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIfexprExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIfexprExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIfexprExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIfexprExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIfexprExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIfexprExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIfexprExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIfexprExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIfexprExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIfexprExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIfexprExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIfexprExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIfexprExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__replace_child, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__visit_all, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIfexprExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIfexprExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIfexprExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AIfexprExpr__after_simple_misc, /* pointer to parser_nodes:AIfexprExpr:simple_misc_analysis#AIfexprExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIfexprExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIfexprExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AIfexprExpr__accept_flow_visitor, /* pointer to parser_nodes:AIfexprExpr:flow#AIfexprExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIfexprExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIfexprExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIfexprExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIfexprExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AIfexprExpr__accept_transform_visitor, /* pointer to parser_nodes:AIfexprExpr:transform#AIfexprExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIfexprExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AIfexprExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AIfexprExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AIfexprExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AIfexprExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIfexprExpr__accept_typing, /* pointer to parser_nodes:AIfexprExpr:typing#AIfexprExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AIfexprExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIfexprExpr__expr, /* pointer to parser_nodes:AIfexprExpr:abstract_compiler#AIfexprExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AIfexprExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIfexprExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__n_kwif, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_kwif */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__n_kwif_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_kwif= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__n_expr, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__n_expr_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__n_kwthen, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_kwthen */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__n_kwthen_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_kwthen= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__n_then, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_then */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__n_then_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_then= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__n_kwelse, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_kwelse */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__n_kwelse_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_kwelse= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__n_else, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#n_else */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__n_else_61d, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#n_else= */
(nitmethod_t)VIRTUAL_parser_nodes__AIfexprExpr__init, /* pointer to parser_nodes:AIfexprExpr:parser_nodes#AIfexprExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__empty_init, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIfexprExpr__init_aifexprexpr, /* pointer to parser_nodes:AIfexprExpr:parser_prod#AIfexprExpr#init_aifexprexpr */
}
};
/* allocate AIfexprExpr */
val* NEW_parser_nodes__AIfexprExpr(const struct type* type) {
val* self /* : AIfexprExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIfexprExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIfexprExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIfexprExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIfexprExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AIfexprExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AIfexprExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AIfexprExpr exact> */
return self;
}
/* allocate AIfexprExpr */
void CHECK_NEW_parser_nodes__AIfexprExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwif */;
val* var4 /* : AExpr */;
val* var5 /* : TKwthen */;
val* var6 /* : AExpr */;
val* var7 /* : TKwelse */;
val* var8 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIfexprExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AIfexprExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AIfexprExpr> */
var3 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwif].val; /* _n_kwif on <self:AIfexprExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwif");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1102);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1103);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwthen");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1104);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_then");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1105);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwelse");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1106);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_else");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1107);
exit(1);
}
}
/* runtime class parser_nodes__AWhileExpr */
const struct class class_parser_nodes__AWhileExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AWhileExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AWhileExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AWhileExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AWhileExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AWhileExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AWhileExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AWhileExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AWhileExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AWhileExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AWhileExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AWhileExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AWhileExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AWhileExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AWhileExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AWhileExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AWhileExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AWhileExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AWhileExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AWhileExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AWhileExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AWhileExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AWhileExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AWhileExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AWhileExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AWhileExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AWhileExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AWhileExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AWhileExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AWhileExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AWhileExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AWhileExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AWhileExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AWhileExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AWhileExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__replace_child, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__visit_all, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AWhileExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AWhileExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AWhileExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AWhileExpr__after_simple_misc, /* pointer to parser_nodes:AWhileExpr:simple_misc_analysis#AWhileExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AWhileExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AWhileExpr__accept_scope_visitor, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AWhileExpr__accept_flow_visitor, /* pointer to parser_nodes:AWhileExpr:flow#AWhileExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AWhileExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AWhileExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AWhileExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AWhileExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AWhileExpr__accept_transform_visitor, /* pointer to parser_nodes:AWhileExpr:transform#AWhileExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AWhileExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AWhileExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AWhileExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AWhileExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AWhileExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AWhileExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AWhileExpr__accept_typing, /* pointer to parser_nodes:AWhileExpr:typing#AWhileExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AWhileExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AWhileExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AWhileExpr__stmt, /* pointer to parser_nodes:AWhileExpr:abstract_compiler#AWhileExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AWhileExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__n_label_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:AWhileExpr:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__AWhileExpr__n_kwwhile, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#n_kwwhile */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__n_kwwhile_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_kwwhile= */
(nitmethod_t)VIRTUAL_parser_nodes__AWhileExpr__n_expr, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__n_expr_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AWhileExpr__n_kwdo, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#n_kwdo */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__n_kwdo_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_kwdo= */
(nitmethod_t)VIRTUAL_parser_nodes__AWhileExpr__n_block, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#n_block */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__n_block_61d, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#n_block= */
(nitmethod_t)VIRTUAL_parser_nodes__AWhileExpr__init, /* pointer to parser_nodes:AWhileExpr:parser_nodes#AWhileExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__empty_init, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AWhileExpr__init_awhileexpr, /* pointer to parser_nodes:AWhileExpr:parser_prod#AWhileExpr#init_awhileexpr */
(nitmethod_t)VIRTUAL_scope__AWhileExpr__escapemark, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__AWhileExpr__escapemark_61d, /* pointer to parser_nodes:AWhileExpr:scope#AWhileExpr#escapemark= */
}
};
/* allocate AWhileExpr */
val* NEW_parser_nodes__AWhileExpr(const struct type* type) {
val* self /* : AWhileExpr */;
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
self->class = &class_parser_nodes__AWhileExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AWhileExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AWhileExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AWhileExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AWhileExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AWhileExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AWhileExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:AWhileExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val = var7; /* _n_block on <self:AWhileExpr exact> */
return self;
}
/* allocate AWhileExpr */
void CHECK_NEW_parser_nodes__AWhileExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwwhile */;
val* var4 /* : AExpr */;
val* var5 /* : TKwdo */;
val* var6 /* : nullable EscapeMark */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AWhileExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AWhileExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AWhileExpr> */
var3 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwwhile].val; /* _n_kwwhile on <self:AWhileExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwwhile");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1114);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1115);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1116);
exit(1);
}
var6 = self->attrs[COLOR_scope__AWhileExpr___64descapemark].val; /* @escapemark on <self:AWhileExpr> */
}
/* runtime class parser_nodes__ALoopExpr */
const struct class class_parser_nodes__ALoopExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALoopExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALoopExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALoopExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALoopExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALoopExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALoopExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALoopExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALoopExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALoopExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALoopExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALoopExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALoopExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALoopExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALoopExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALoopExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALoopExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALoopExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALoopExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALoopExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALoopExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALoopExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALoopExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALoopExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALoopExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALoopExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALoopExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALoopExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALoopExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALoopExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALoopExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALoopExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALoopExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALoopExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALoopExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__replace_child, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__visit_all, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALoopExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALoopExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALoopExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALoopExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALoopExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ALoopExpr__accept_scope_visitor, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ALoopExpr__accept_flow_visitor, /* pointer to parser_nodes:ALoopExpr:flow#ALoopExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALoopExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ALoopExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALoopExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALoopExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALoopExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALoopExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALoopExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ALoopExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ALoopExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ALoopExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ALoopExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ALoopExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ALoopExpr__accept_typing, /* pointer to parser_nodes:ALoopExpr:typing#ALoopExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ALoopExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:ALoopExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ALoopExpr__stmt, /* pointer to parser_nodes:ALoopExpr:abstract_compiler#ALoopExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALoopExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__n_label_61d, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__ALoopExpr__n_kwloop, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALoopExpr#n_kwloop */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__n_kwloop_61d, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#n_kwloop= */
(nitmethod_t)VIRTUAL_parser_nodes__ALoopExpr__n_block, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALoopExpr#n_block */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__n_block_61d, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#n_block= */
(nitmethod_t)VIRTUAL_parser_nodes__ALoopExpr__init, /* pointer to parser_nodes:ALoopExpr:parser_nodes#ALoopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__empty_init, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ALoopExpr__init_aloopexpr, /* pointer to parser_nodes:ALoopExpr:parser_prod#ALoopExpr#init_aloopexpr */
(nitmethod_t)VIRTUAL_scope__ALoopExpr__escapemark, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ALoopExpr__escapemark_61d, /* pointer to parser_nodes:ALoopExpr:scope#ALoopExpr#escapemark= */
}
};
/* allocate ALoopExpr */
val* NEW_parser_nodes__ALoopExpr(const struct type* type) {
val* self /* : ALoopExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALoopExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALoopExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALoopExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALoopExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ALoopExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ALoopExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ALoopExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:ALoopExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val = var7; /* _n_block on <self:ALoopExpr exact> */
return self;
}
/* allocate ALoopExpr */
void CHECK_NEW_parser_nodes__ALoopExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwloop */;
val* var4 /* : nullable EscapeMark */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALoopExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ALoopExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ALoopExpr> */
var3 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwloop");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1124);
exit(1);
}
var4 = self->attrs[COLOR_scope__ALoopExpr___64descapemark].val; /* @escapemark on <self:ALoopExpr> */
}
/* runtime class parser_nodes__AForExpr */
const struct class class_parser_nodes__AForExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AForExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AForExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AForExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AForExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AForExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AForExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AForExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AForExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AForExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AForExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AForExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AForExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AForExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AForExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AForExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AForExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AForExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AForExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AForExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AForExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AForExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AForExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AForExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AForExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AForExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AForExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AForExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AForExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AForExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AForExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AForExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AForExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AForExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AForExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AForExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AForExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AForExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AForExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__replace_child, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__visit_all, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AForExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AForExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AForExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AForExpr__after_simple_misc, /* pointer to parser_nodes:AForExpr:simple_misc_analysis#AForExpr#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AForExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AForExpr__accept_scope_visitor, /* pointer to parser_nodes:AForExpr:scope#AForExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AForExpr__accept_flow_visitor, /* pointer to parser_nodes:AForExpr:flow#AForExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AForExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AForExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AForExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AForExpr:rapid_type_analysis#AForExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AForExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AForExpr__accept_transform_visitor, /* pointer to parser_nodes:AForExpr:transform#AForExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AForExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AForExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AForExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AForExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AForExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AForExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AForExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AForExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AForExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AForExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AForExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AForExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AForExpr__accept_typing, /* pointer to parser_nodes:AForExpr:typing#AForExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AForExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AForExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AForExpr__stmt, /* pointer to parser_nodes:AForExpr:abstract_compiler#AForExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AForExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:AForExpr:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__n_label_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:AForExpr:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__AForExpr__n_kwfor, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_kwfor */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__n_kwfor_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_kwfor= */
(nitmethod_t)VIRTUAL_parser_nodes__AForExpr__n_ids, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_ids */
(nitmethod_t)VIRTUAL_parser_nodes__AForExpr__n_expr, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__n_expr_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AForExpr__n_kwdo, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_kwdo */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__n_kwdo_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_kwdo= */
(nitmethod_t)VIRTUAL_parser_nodes__AForExpr__n_block, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#n_block */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__n_block_61d, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#n_block= */
(nitmethod_t)VIRTUAL_parser_nodes__AForExpr__init, /* pointer to parser_nodes:AForExpr:parser_nodes#AForExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__empty_init, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AForExpr__init_aforexpr, /* pointer to parser_nodes:AForExpr:parser_prod#AForExpr#init_aforexpr */
(nitmethod_t)VIRTUAL_scope__AForExpr__variables, /* pointer to parser_nodes:AForExpr:scope#AForExpr#variables */
(nitmethod_t)VIRTUAL_scope__AForExpr__variables_61d, /* pointer to parser_nodes:AForExpr:scope#AForExpr#variables= */
(nitmethod_t)VIRTUAL_scope__AForExpr__escapemark, /* pointer to parser_nodes:AForExpr:scope#AForExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__AForExpr__escapemark_61d, /* pointer to parser_nodes:AForExpr:scope#AForExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__AForExpr__coltype, /* pointer to parser_nodes:AForExpr:typing#AForExpr#coltype */
(nitmethod_t)VIRTUAL_typing__AForExpr__coltype_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#coltype= */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_iterator, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_iterator */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_iterator_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_iterator= */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_is_ok, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_is_ok */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_is_ok_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_is_ok= */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_item, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_item */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_item_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_item= */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_next, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_next */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_next_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_next= */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_key, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_key */
(nitmethod_t)VIRTUAL_typing__AForExpr__method_key_61d, /* pointer to parser_nodes:AForExpr:typing#AForExpr#method_key= */
(nitmethod_t)VIRTUAL_typing__AForExpr__do_type_iterator, /* pointer to parser_nodes:AForExpr:typing#AForExpr#do_type_iterator */
}
};
/* allocate AForExpr */
val* NEW_parser_nodes__AForExpr(const struct type* type) {
val* self /* : AForExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : ANodes[TId] */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 23*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AForExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AForExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AForExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AForExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AForExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AForExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AForExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var6; /* _n_label on <self:AForExpr exact> */
var7 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
((void (*)(val*, val*))(var7->class->vft[COLOR_parser_nodes__ANodes__init]))(var7, self) /* init on <var7:ANodes[TId]>*/;
CHECK_NEW_parser_nodes__ANodes(var7);
self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val = var7; /* _n_ids on <self:AForExpr exact> */
var8 = NULL;
self->attrs[COLOR_parser_nodes__AForExpr___n_block].val = var8; /* _n_block on <self:AForExpr exact> */
return self;
}
/* allocate AForExpr */
void CHECK_NEW_parser_nodes__AForExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwfor */;
val* var4 /* : AExpr */;
val* var5 /* : TKwdo */;
val* var6 /* : nullable Array[Variable] */;
val* var7 /* : nullable EscapeMark */;
val* var8 /* : nullable MClassType */;
val* var9 /* : nullable MMethod */;
val* var10 /* : nullable MMethod */;
val* var11 /* : nullable MMethod */;
val* var12 /* : nullable MMethod */;
val* var13 /* : nullable MMethod */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AForExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AForExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AForExpr> */
var3 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwfor].val; /* _n_kwfor on <self:AForExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwfor");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1132);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1134);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdo");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1135);
exit(1);
}
var6 = self->attrs[COLOR_scope__AForExpr___64dvariables].val; /* @variables on <self:AForExpr> */
var7 = self->attrs[COLOR_scope__AForExpr___64descapemark].val; /* @escapemark on <self:AForExpr> */
var8 = self->attrs[COLOR_typing__AForExpr___64dcoltype].val; /* @coltype on <self:AForExpr> */
var9 = self->attrs[COLOR_typing__AForExpr___64dmethod_iterator].val; /* @method_iterator on <self:AForExpr> */
var10 = self->attrs[COLOR_typing__AForExpr___64dmethod_is_ok].val; /* @method_is_ok on <self:AForExpr> */
var11 = self->attrs[COLOR_typing__AForExpr___64dmethod_item].val; /* @method_item on <self:AForExpr> */
var12 = self->attrs[COLOR_typing__AForExpr___64dmethod_next].val; /* @method_next on <self:AForExpr> */
var13 = self->attrs[COLOR_typing__AForExpr___64dmethod_key].val; /* @method_key on <self:AForExpr> */
}
/* runtime class parser_nodes__AAssertExpr */
const struct class class_parser_nodes__AAssertExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAssertExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAssertExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAssertExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAssertExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAssertExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAssertExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAssertExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAssertExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAssertExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAssertExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAssertExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAssertExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAssertExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAssertExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAssertExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAssertExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAssertExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAssertExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAssertExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAssertExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAssertExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAssertExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAssertExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAssertExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAssertExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAssertExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAssertExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAssertExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAssertExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAssertExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAssertExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAssertExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAssertExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAssertExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__replace_child, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__visit_all, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAssertExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAssertExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAssertExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAssertExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAssertExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAssertExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AAssertExpr__accept_flow_visitor, /* pointer to parser_nodes:AAssertExpr:flow#AAssertExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAssertExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAssertExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAssertExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAssertExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAssertExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAssertExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAssertExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAssertExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAssertExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAssertExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAssertExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAssertExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAssertExpr__accept_typing, /* pointer to parser_nodes:AAssertExpr:typing#AAssertExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAssertExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AAssertExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AAssertExpr__stmt, /* pointer to parser_nodes:AAssertExpr:abstract_compiler#AAssertExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAssertExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAssertExpr__n_kwassert, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_kwassert */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__n_kwassert_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_kwassert= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssertExpr__n_id, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__n_id_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssertExpr__n_expr, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__n_expr_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssertExpr__n_else, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#n_else */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__n_else_61d, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#n_else= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssertExpr__init, /* pointer to parser_nodes:AAssertExpr:parser_nodes#AAssertExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__empty_init, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAssertExpr__init_aassertexpr, /* pointer to parser_nodes:AAssertExpr:parser_prod#AAssertExpr#init_aassertexpr */
}
};
/* allocate AAssertExpr */
val* NEW_parser_nodes__AAssertExpr(const struct type* type) {
val* self /* : AAssertExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAssertExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAssertExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAssertExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAssertExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAssertExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAssertExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAssertExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val = var6; /* _n_id on <self:AAssertExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val = var7; /* _n_else on <self:AAssertExpr exact> */
return self;
}
/* allocate AAssertExpr */
void CHECK_NEW_parser_nodes__AAssertExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwassert */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAssertExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAssertExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAssertExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_kwassert].val; /* _n_kwassert on <self:AAssertExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwassert");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1142);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1144);
exit(1);
}
}
/* runtime class parser_nodes__AOnceExpr */
const struct class class_parser_nodes__AOnceExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AOnceExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AOnceExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AOnceExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AOnceExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AOnceExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AOnceExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AOnceExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AOnceExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AOnceExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AOnceExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AOnceExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AOnceExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AOnceExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AOnceExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AOnceExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AOnceExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AOnceExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AOnceExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AOnceExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AOnceExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AOnceExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AOnceExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AOnceExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AOnceExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AOnceExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AOnceExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AOnceExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AOnceExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AOnceExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AOnceExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AOnceExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AOnceExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AOnceExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AOnceExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AOnceExpr__replace_child, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AOnceExpr__visit_all, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AOnceExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AOnceExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AOnceExpr__accept_simple_misc, /* pointer to parser_nodes:AOnceExpr:simple_misc_analysis#AOnceExpr#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AOnceExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AOnceExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AOnceExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AProxyExpr__accept_flow_visitor, /* pointer to parser_nodes:AOnceExpr:flow#AProxyExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AOnceExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AOnceExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AOnceExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AOnceExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AOnceExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AOnceExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AOnceExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AOnceExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AOnceExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AOnceExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AOnceExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AOnceExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AOnceExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AProxyExpr__accept_typing, /* pointer to parser_nodes:AOnceExpr:typing#AProxyExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AOnceExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AOnceExpr__expr, /* pointer to parser_nodes:AOnceExpr:abstract_compiler#AOnceExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AOnceExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AOnceExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AProxyExpr__n_expr, /* pointer to parser_nodes:AOnceExpr:parser_nodes#AProxyExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AOnceExpr__n_expr_61d, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AProxyExpr__init, /* pointer to parser_nodes:AOnceExpr:parser_nodes#AProxyExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AOnceExpr__n_kwonce, /* pointer to parser_nodes:AOnceExpr:parser_nodes#AOnceExpr#n_kwonce */
(nitmethod_t)VIRTUAL_parser_prod__AOnceExpr__n_kwonce_61d, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#n_kwonce= */
(nitmethod_t)VIRTUAL_parser_nodes__AOnceExpr__init, /* pointer to parser_nodes:AOnceExpr:parser_nodes#AOnceExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AOnceExpr__empty_init, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AOnceExpr__init_aonceexpr, /* pointer to parser_nodes:AOnceExpr:parser_prod#AOnceExpr#init_aonceexpr */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AOnceExpr:simple_misc_analysis#ANode#accept_simple_misc */
}
};
/* allocate AOnceExpr */
val* NEW_parser_nodes__AOnceExpr(const struct type* type) {
val* self /* : AOnceExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AOnceExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AOnceExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AOnceExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AOnceExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AOnceExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AOnceExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AOnceExpr exact> */
return self;
}
/* allocate AOnceExpr */
void CHECK_NEW_parser_nodes__AOnceExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : TKwonce */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AOnceExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AOnceExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AOnceExpr> */
var3 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1562);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwonce");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1165);
exit(1);
}
}
/* runtime class parser_nodes__AOrExpr */
const struct class class_parser_nodes__AOrExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AOrExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AOrExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AOrExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AOrExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AOrExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AOrExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AOrExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AOrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AOrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AOrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AOrExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AOrExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AOrExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AOrExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AOrExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AOrExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AOrExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AOrExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AOrExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AOrExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AOrExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AOrExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AOrExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AOrExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AOrExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AOrExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AOrExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AOrExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AOrExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AOrExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AOrExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AOrExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AOrExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AOrExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AOrExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AOrExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AOrExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AOrExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AOrExpr__replace_child, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AOrExpr__visit_all, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AOrExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AOrExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AOrExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AOrExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AOrExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AOrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AOrExpr__accept_flow_visitor, /* pointer to parser_nodes:AOrExpr:flow#AOrExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AOrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AOrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AOrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AOrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AOrExpr__accept_transform_visitor, /* pointer to parser_nodes:AOrExpr:transform#AOrExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AOrExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AOrExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AOrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AOrExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AOrExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AOrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AOrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AOrExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AOrExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AOrExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AOrExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AOrExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AOrExpr__accept_typing, /* pointer to parser_nodes:AOrExpr:typing#AOrExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AOrExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AOrExpr__expr, /* pointer to parser_nodes:AOrExpr:abstract_compiler#AOrExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AOrExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AOrExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:AOrExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AOrExpr__n_expr, /* pointer to parser_nodes:AOrExpr:parser_nodes#AOrExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AOrExpr__n_expr_61d, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AOrExpr__n_expr2, /* pointer to parser_nodes:AOrExpr:parser_nodes#AOrExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AOrExpr__n_expr2_61d, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__AOrExpr__init, /* pointer to parser_nodes:AOrExpr:parser_nodes#AOrExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AOrExpr__empty_init, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AOrExpr__init_aorexpr, /* pointer to parser_nodes:AOrExpr:parser_prod#AOrExpr#init_aorexpr */
}
};
/* allocate AOrExpr */
val* NEW_parser_nodes__AOrExpr(const struct type* type) {
val* self /* : AOrExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AOrExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AOrExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AOrExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AOrExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AOrExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AOrExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AOrExpr exact> */
return self;
}
/* allocate AOrExpr */
void CHECK_NEW_parser_nodes__AOrExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AOrExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AOrExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AOrExpr> */
var3 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1192);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1193);
exit(1);
}
}
/* runtime class parser_nodes__AAndExpr */
const struct class class_parser_nodes__AAndExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAndExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAndExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAndExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAndExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAndExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAndExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAndExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAndExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAndExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAndExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAndExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAndExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAndExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAndExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAndExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAndExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAndExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAndExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAndExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAndExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAndExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAndExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAndExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAndExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAndExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAndExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAndExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAndExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAndExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAndExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAndExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAndExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAndExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAndExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAndExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAndExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAndExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAndExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAndExpr__replace_child, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAndExpr__visit_all, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAndExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAndExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAndExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAndExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAndExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAndExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AAndExpr__accept_flow_visitor, /* pointer to parser_nodes:AAndExpr:flow#AAndExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAndExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAndExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAndExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAndExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AAndExpr__accept_transform_visitor, /* pointer to parser_nodes:AAndExpr:transform#AAndExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAndExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAndExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAndExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAndExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAndExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAndExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAndExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAndExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAndExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAndExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAndExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAndExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAndExpr__accept_typing, /* pointer to parser_nodes:AAndExpr:typing#AAndExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAndExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AAndExpr__expr, /* pointer to parser_nodes:AAndExpr:abstract_compiler#AAndExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AAndExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAndExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:AAndExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AAndExpr__n_expr, /* pointer to parser_nodes:AAndExpr:parser_nodes#AAndExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAndExpr__n_expr_61d, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAndExpr__n_expr2, /* pointer to parser_nodes:AAndExpr:parser_nodes#AAndExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AAndExpr__n_expr2_61d, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__AAndExpr__init, /* pointer to parser_nodes:AAndExpr:parser_nodes#AAndExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAndExpr__empty_init, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAndExpr__init_aandexpr, /* pointer to parser_nodes:AAndExpr:parser_prod#AAndExpr#init_aandexpr */
}
};
/* allocate AAndExpr */
val* NEW_parser_nodes__AAndExpr(const struct type* type) {
val* self /* : AAndExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAndExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAndExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAndExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAndExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAndExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAndExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAndExpr exact> */
return self;
}
/* allocate AAndExpr */
void CHECK_NEW_parser_nodes__AAndExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAndExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAndExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAndExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1199);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1200);
exit(1);
}
}
/* runtime class parser_nodes__AOrElseExpr */
const struct class class_parser_nodes__AOrElseExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AOrElseExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AOrElseExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AOrElseExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AOrElseExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AOrElseExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AOrElseExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AOrElseExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AOrElseExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AOrElseExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AOrElseExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AOrElseExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AOrElseExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AOrElseExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AOrElseExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AOrElseExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AOrElseExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AOrElseExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AOrElseExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AOrElseExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AOrElseExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AOrElseExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AOrElseExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AOrElseExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AOrElseExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AOrElseExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AOrElseExpr__replace_child, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AOrElseExpr__visit_all, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AOrElseExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AOrElseExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AOrElseExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AOrElseExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AOrElseExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AOrElseExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AOrElseExpr__accept_flow_visitor, /* pointer to parser_nodes:AOrElseExpr:flow#AOrElseExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AOrElseExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AOrElseExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AOrElseExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AOrElseExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AOrElseExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AOrElseExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AOrElseExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AOrElseExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AOrElseExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AOrElseExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AOrElseExpr__accept_typing, /* pointer to parser_nodes:AOrElseExpr:typing#AOrElseExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AOrElseExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AOrElseExpr__expr, /* pointer to parser_nodes:AOrElseExpr:abstract_compiler#AOrElseExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AOrElseExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AOrElseExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AOrElseExpr__n_expr, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#AOrElseExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AOrElseExpr__n_expr_61d, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AOrElseExpr__n_expr2, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#AOrElseExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AOrElseExpr__n_expr2_61d, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__AOrElseExpr__init, /* pointer to parser_nodes:AOrElseExpr:parser_nodes#AOrElseExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AOrElseExpr__empty_init, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AOrElseExpr__init_aorelseexpr, /* pointer to parser_nodes:AOrElseExpr:parser_prod#AOrElseExpr#init_aorelseexpr */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AOrElseExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AOrElseExpr */
val* NEW_parser_nodes__AOrElseExpr(const struct type* type) {
val* self /* : AOrElseExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AOrElseExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AOrElseExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AOrElseExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AOrElseExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AOrElseExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AOrElseExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AOrElseExpr exact> */
return self;
}
/* allocate AOrElseExpr */
void CHECK_NEW_parser_nodes__AOrElseExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AOrElseExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AOrElseExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1206);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1207);
exit(1);
}
}
/* runtime class parser_nodes__AImpliesExpr */
const struct class class_parser_nodes__AImpliesExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AImpliesExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AImpliesExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AImpliesExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AImpliesExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AImpliesExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AImpliesExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AImpliesExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AImpliesExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AImpliesExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AImpliesExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AImpliesExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AImpliesExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AImpliesExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AImpliesExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AImpliesExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AImpliesExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AImpliesExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AImpliesExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AImpliesExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AImpliesExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AImpliesExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AImpliesExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AImpliesExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AImpliesExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AImpliesExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AImpliesExpr__replace_child, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AImpliesExpr__visit_all, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AImpliesExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AImpliesExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AImpliesExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AImpliesExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AImpliesExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AImpliesExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AImpliesExpr__accept_flow_visitor, /* pointer to parser_nodes:AImpliesExpr:flow#AImpliesExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AImpliesExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AImpliesExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AImpliesExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AImpliesExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AImpliesExpr__accept_transform_visitor, /* pointer to parser_nodes:AImpliesExpr:transform#AImpliesExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AImpliesExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AImpliesExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AImpliesExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AImpliesExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AImpliesExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AImpliesExpr__accept_typing, /* pointer to parser_nodes:AImpliesExpr:typing#AImpliesExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AImpliesExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AImpliesExpr__expr, /* pointer to parser_nodes:AImpliesExpr:abstract_compiler#AImpliesExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AImpliesExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AImpliesExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AImpliesExpr__n_expr, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#AImpliesExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AImpliesExpr__n_expr_61d, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AImpliesExpr__n_expr2, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#AImpliesExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AImpliesExpr__n_expr2_61d, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__AImpliesExpr__init, /* pointer to parser_nodes:AImpliesExpr:parser_nodes#AImpliesExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AImpliesExpr__empty_init, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AImpliesExpr__init_aimpliesexpr, /* pointer to parser_nodes:AImpliesExpr:parser_prod#AImpliesExpr#init_aimpliesexpr */
}
};
/* allocate AImpliesExpr */
val* NEW_parser_nodes__AImpliesExpr(const struct type* type) {
val* self /* : AImpliesExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AImpliesExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AImpliesExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AImpliesExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AImpliesExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AImpliesExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AImpliesExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AImpliesExpr exact> */
return self;
}
/* allocate AImpliesExpr */
void CHECK_NEW_parser_nodes__AImpliesExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AImpliesExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AImpliesExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1213);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1214);
exit(1);
}
}
/* runtime class parser_nodes__ANotExpr */
const struct class class_parser_nodes__ANotExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANotExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANotExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANotExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANotExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANotExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ANotExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ANotExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANotExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANotExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANotExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANotExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANotExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANotExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANotExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANotExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANotExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ANotExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ANotExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ANotExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ANotExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ANotExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ANotExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANotExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANotExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANotExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ANotExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ANotExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANotExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANotExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ANotExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ANotExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ANotExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__visit_all, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ANotExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ANotExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ANotExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ANotExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANotExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANotExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANotExpr__accept_flow_visitor, /* pointer to parser_nodes:ANotExpr:flow#ANotExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANotExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANotExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANotExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANotExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANotExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANotExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ANotExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ANotExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:ANotExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__ANotExpr__n_kwnot, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANotExpr#n_kwnot */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__n_kwnot_61d, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#n_kwnot= */
(nitmethod_t)VIRTUAL_parser_nodes__ANotExpr__n_expr, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANotExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__n_expr_61d, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ANotExpr__init, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANotExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__empty_init, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#empty_init */
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
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ANotExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANotExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ANotExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ANotExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ANotExpr exact> */
return self;
}
/* allocate ANotExpr */
void CHECK_NEW_parser_nodes__ANotExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwnot */;
val* var4 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ANotExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ANotExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ANotExpr> */
var3 = self->attrs[COLOR_parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1220);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1221);
exit(1);
}
}
/* runtime class parser_nodes__AEqExpr */
const struct class class_parser_nodes__AEqExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AEqExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AEqExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AEqExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AEqExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AEqExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AEqExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AEqExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEqExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEqExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEqExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AEqExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AEqExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AEqExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AEqExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AEqExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AEqExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AEqExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AEqExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AEqExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AEqExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AEqExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AEqExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AEqExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AEqExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AEqExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AEqExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AEqExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AEqExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AEqExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AEqExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AEqExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AEqExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__visit_all, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AEqExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AEqExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AEqExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AEqExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AEqExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AEqExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AEqExpr__accept_flow_visitor, /* pointer to parser_nodes:AEqExpr:flow#AEqExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AEqExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AEqExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AEqExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AEqExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AEqExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AEqExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AEqExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AEqExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AEqExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__n_expr_61d, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AEqExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AEqExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AEqExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AEqExpr__property_name, /* pointer to parser_nodes:AEqExpr:typing#AEqExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AEqExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AEqExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__n_expr2_61d, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AEqExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AEqExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AEqExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AEqExpr__init, /* pointer to parser_nodes:AEqExpr:parser_nodes#AEqExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__empty_init, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AEqExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AEqExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AEqExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AEqExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AEqExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AEqExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AEqExpr exact> */
return self;
}
/* allocate AEqExpr */
void CHECK_NEW_parser_nodes__AEqExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AEqExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AEqExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AEqExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AEqExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AEqExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__ANeExpr */
const struct class class_parser_nodes__ANeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANeExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ANeExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ANeExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ANeExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ANeExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ANeExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ANeExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ANeExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ANeExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ANeExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ANeExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ANeExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ANeExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ANeExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__visit_all, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ANeExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ANeExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ANeExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ANeExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANeExpr__accept_flow_visitor, /* pointer to parser_nodes:ANeExpr:flow#ANeExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ANeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ANeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ANeExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ANeExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ANeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__n_expr_61d, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ANeExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ANeExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ANeExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ANeExpr__property_name, /* pointer to parser_nodes:ANeExpr:typing#ANeExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ANeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ANeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__n_expr2_61d, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:ANeExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:ANeExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:ANeExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__ANeExpr__init, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__empty_init, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ANeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ANeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ANeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ANeExpr exact> */
return self;
}
/* allocate ANeExpr */
void CHECK_NEW_parser_nodes__ANeExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ANeExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ANeExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ANeExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ANeExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ANeExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__ALtExpr */
const struct class class_parser_nodes__ALtExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALtExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALtExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALtExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALtExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALtExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALtExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALtExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALtExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALtExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALtExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALtExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALtExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALtExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALtExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALtExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALtExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALtExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALtExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALtExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALtExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALtExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALtExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALtExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALtExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALtExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALtExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALtExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALtExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALtExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALtExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALtExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALtExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__visit_all, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALtExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALtExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALtExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALtExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALtExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ALtExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ALtExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALtExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ALtExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ALtExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ALtExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__n_expr_61d, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ALtExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ALtExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ALtExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ALtExpr__property_name, /* pointer to parser_nodes:ALtExpr:typing#ALtExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ALtExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ALtExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__n_expr2_61d, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:ALtExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:ALtExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:ALtExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__ALtExpr__init, /* pointer to parser_nodes:ALtExpr:parser_nodes#ALtExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__empty_init, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALtExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALtExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALtExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALtExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ALtExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ALtExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ALtExpr exact> */
return self;
}
/* allocate ALtExpr */
void CHECK_NEW_parser_nodes__ALtExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALtExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ALtExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ALtExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ALtExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ALtExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__ALeExpr */
const struct class class_parser_nodes__ALeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALeExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALeExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALeExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALeExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALeExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALeExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALeExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALeExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALeExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALeExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALeExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALeExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALeExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALeExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__visit_all, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALeExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALeExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALeExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALeExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ALeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ALeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ALeExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ALeExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ALeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__n_expr_61d, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ALeExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ALeExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ALeExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ALeExpr__property_name, /* pointer to parser_nodes:ALeExpr:typing#ALeExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ALeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ALeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__n_expr2_61d, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:ALeExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:ALeExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:ALeExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__ALeExpr__init, /* pointer to parser_nodes:ALeExpr:parser_nodes#ALeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__empty_init, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ALeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ALeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ALeExpr exact> */
return self;
}
/* allocate ALeExpr */
void CHECK_NEW_parser_nodes__ALeExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALeExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ALeExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ALeExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ALeExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ALeExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__ALlExpr */
const struct class class_parser_nodes__ALlExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALlExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ALlExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALlExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALlExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALlExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ALlExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ALlExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALlExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALlExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALlExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALlExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALlExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALlExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALlExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALlExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALlExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ALlExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ALlExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ALlExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ALlExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ALlExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ALlExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALlExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALlExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALlExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ALlExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ALlExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALlExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALlExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ALlExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ALlExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ALlExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__visit_all, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ALlExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ALlExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ALlExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ALlExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALlExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALlExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALlExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALlExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ALlExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ALlExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALlExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALlExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALlExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ALlExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ALlExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ALlExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__n_expr_61d, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ALlExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ALlExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ALlExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ALlExpr__property_name, /* pointer to parser_nodes:ALlExpr:typing#ALlExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ALlExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ALlExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__n_expr2_61d, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:ALlExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:ALlExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:ALlExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__ALlExpr__init, /* pointer to parser_nodes:ALlExpr:parser_nodes#ALlExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__empty_init, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALlExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALlExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ALlExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALlExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ALlExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ALlExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ALlExpr exact> */
return self;
}
/* allocate ALlExpr */
void CHECK_NEW_parser_nodes__ALlExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ALlExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ALlExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ALlExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ALlExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ALlExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AGtExpr */
const struct class class_parser_nodes__AGtExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGtExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGtExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGtExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGtExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGtExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AGtExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AGtExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGtExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGtExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGtExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGtExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGtExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGtExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGtExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGtExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGtExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AGtExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AGtExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AGtExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AGtExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AGtExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AGtExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGtExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGtExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGtExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AGtExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AGtExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGtExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGtExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AGtExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AGtExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AGtExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__visit_all, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AGtExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AGtExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AGtExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AGtExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGtExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AGtExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AGtExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AGtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGtExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AGtExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AGtExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AGtExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__n_expr_61d, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AGtExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AGtExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AGtExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGtExpr__property_name, /* pointer to parser_nodes:AGtExpr:typing#AGtExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGtExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AGtExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__n_expr2_61d, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AGtExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AGtExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AGtExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AGtExpr__init, /* pointer to parser_nodes:AGtExpr:parser_nodes#AGtExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__empty_init, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGtExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGtExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AGtExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGtExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AGtExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AGtExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AGtExpr exact> */
return self;
}
/* allocate AGtExpr */
void CHECK_NEW_parser_nodes__AGtExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGtExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AGtExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AGtExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AGtExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AGtExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AGeExpr */
const struct class class_parser_nodes__AGeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGeExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AGeExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AGeExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AGeExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AGeExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AGeExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AGeExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AGeExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AGeExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AGeExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AGeExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AGeExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AGeExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AGeExpr:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__visit_all, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AGeExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AGeExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AGeExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AGeExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AGeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AGeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AGeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AGeExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AGeExpr:simple_misc_analysis#AExpr#warn_parentheses */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AGeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__n_expr_61d, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AGeExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AGeExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AGeExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGeExpr__property_name, /* pointer to parser_nodes:AGeExpr:typing#AGeExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AGeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__n_expr2_61d, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AGeExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AGeExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AGeExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AGeExpr__init, /* pointer to parser_nodes:AGeExpr:parser_nodes#AGeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__empty_init, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#empty_init */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AGeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AGeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AGeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AGeExpr exact> */
return self;
}
/* allocate AGeExpr */
void CHECK_NEW_parser_nodes__AGeExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGeExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AGeExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AGeExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AGeExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AGeExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGeExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AGgExpr */
const struct class class_parser_nodes__AGgExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGgExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGgExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGgExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGgExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AGgExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AGgExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGgExpr__property_name, /* pointer to parser_nodes:AGgExpr:typing#AGgExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate AGgExpr */
void CHECK_NEW_parser_nodes__AGgExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGgExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AGgExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AGgExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AGgExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AGgExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AIsaExpr */
const struct class class_parser_nodes__AIsaExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIsaExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIsaExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIsaExpr:kernel#Object#is_same_instance */
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1267);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1268);
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
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APlusExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APlusExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:APlusExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:APlusExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__APlusExpr__property_name, /* pointer to parser_nodes:APlusExpr:typing#APlusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate APlusExpr */
void CHECK_NEW_parser_nodes__APlusExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APlusExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:APlusExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:APlusExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:APlusExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:APlusExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AMinusExpr */
const struct class class_parser_nodes__AMinusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMinusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AMinusExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AMinusExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMinusExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AMinusExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AMinusExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AMinusExpr__property_name, /* pointer to parser_nodes:AMinusExpr:typing#AMinusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate AMinusExpr */
void CHECK_NEW_parser_nodes__AMinusExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AMinusExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AMinusExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AMinusExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AMinusExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AMinusExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AStarshipExpr */
const struct class class_parser_nodes__AStarshipExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarshipExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AStarshipExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AStarshipExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AStarshipExpr__property_name, /* pointer to parser_nodes:AStarshipExpr:typing#AStarshipExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate AStarshipExpr */
void CHECK_NEW_parser_nodes__AStarshipExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStarshipExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AStarshipExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AStarshipExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AStarshipExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AStarshipExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AStarExpr */
const struct class class_parser_nodes__AStarExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStarExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStarExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AStarExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AStarExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AStarExpr__property_name, /* pointer to parser_nodes:AStarExpr:typing#AStarExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate AStarExpr */
void CHECK_NEW_parser_nodes__AStarExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStarExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AStarExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AStarExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AStarExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AStarExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__ASlashExpr */
const struct class class_parser_nodes__ASlashExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASlashExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASlashExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASlashExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASlashExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ASlashExpr__property_name, /* pointer to parser_nodes:ASlashExpr:typing#ASlashExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate ASlashExpr */
void CHECK_NEW_parser_nodes__ASlashExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASlashExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ASlashExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ASlashExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ASlashExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ASlashExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__APercentExpr */
const struct class class_parser_nodes__APercentExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APercentExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APercentExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APercentExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APercentExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:APercentExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:APercentExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__APercentExpr__property_name, /* pointer to parser_nodes:APercentExpr:typing#APercentExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ABinopExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate APercentExpr */
void CHECK_NEW_parser_nodes__APercentExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APercentExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:APercentExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:APercentExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:APercentExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:APercentExpr> */
var6 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1179);
exit(1);
}
}
/* runtime class parser_nodes__AUminusExpr */
const struct class class_parser_nodes__AUminusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AUminusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AUminusExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AUminusExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AUminusExpr:scope#ANode#accept_scope_visitor */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AUminusExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AUminusExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AUminusExpr__property_name, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__AUminusExpr__compute_raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
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
return self;
}
/* allocate AUminusExpr */
void CHECK_NEW_parser_nodes__AUminusExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : TMinus */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AUminusExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AUminusExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AUminusExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AUminusExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AUminusExpr> */
var6 = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minus");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1304);
exit(1);
}
}
/* runtime class parser_nodes__ANewExpr */
const struct class class_parser_nodes__ANewExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANewExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANewExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANewExpr:kernel#Object#is_same_instance */
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnew");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1310);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1311);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1315);
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
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrExpr:kernel#Object#is_same_instance */
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1322);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1325);
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
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#is_same_instance */
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1151);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1152);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1322);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1325);
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
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#is_same_instance */
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_assign_op");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1158);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_value");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1159);
exit(1);
}
var5 = self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val; /* @reassign_callsite on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1322);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1325);
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
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACallExpr:kernel#Object#is_same_instance */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ACallExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ACallExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallExpr__property_name, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ACallExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_id_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_args_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#init */
(nitmethod_t)VIRTUAL_scope__ACallExpr__variable_create, /* pointer to parser_nodes:ACallExpr:scope#ACallExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ANode#accept_scope_visitor */
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
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
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
return self;
}
/* allocate ACallExpr */
void CHECK_NEW_parser_nodes__ACallExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable CallSite */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : TId */;
val* var7 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ACallExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ACallExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ACallExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1172);
exit(1);
}
var4 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ACallExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ACallExpr> */
var6 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1344);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1347);
exit(1);
}
}
