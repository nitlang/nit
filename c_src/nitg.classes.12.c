#include "nitg.classes.0.h"
/* runtime class typing__TypingPhase */
const struct class class_typing__TypingPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypingPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:TypingPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:TypingPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypingPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypingPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:TypingPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:TypingPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypingPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypingPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypingPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypingPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypingPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypingPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypingPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:TypingPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:TypingPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:TypingPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:TypingPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to typing:TypingPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to typing:TypingPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:TypingPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:TypingPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:TypingPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to typing:TypingPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to typing:TypingPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:TypingPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:TypingPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to typing:TypingPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to typing:TypingPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to typing:TypingPhase:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to typing:TypingPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to typing:TypingPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to typing:TypingPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to typing:TypingPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to typing:TypingPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to typing:TypingPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to typing:TypingPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to typing:TypingPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to typing:TypingPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to typing:TypingPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to typing:TypingPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to typing:TypingPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to typing:TypingPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_typing__TypingPhase__process_npropdef, /* pointer to typing:TypingPhase:typing#TypingPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to typing:TypingPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to typing:TypingPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate TypingPhase */
val* NEW_typing__TypingPhase(const struct type* type) {
val* self /* : TypingPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__TypingPhase;
return self;
}
/* allocate TypingPhase */
void CHECK_NEW_typing__TypingPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:TypingPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:TypingPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class typing__TypeVisitor */
const struct class class_typing__TypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:TypeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:TypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:TypeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:TypeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:TypeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:TypeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:TypeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:TypeVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to typing:TypeVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to typing:TypeVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:TypeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:TypeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:TypeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to typing:TypeVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to typing:TypeVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:TypeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:TypeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to typing:TypeVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to typing:TypeVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to typing:TypeVisitor:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to typing:TypeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to typing:TypeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to typing:TypeVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to typing:TypeVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to typing:TypeVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to typing:TypeVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to typing:TypeVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to typing:TypeVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__modelbuilder, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__modelbuilder_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__nclassdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#nclassdef */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__nclassdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#nclassdef= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mpropdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mpropdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__selfvariable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__selfvariable_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__init, /* pointer to typing:TypeVisitor:typing#TypeVisitor#init */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mmodule, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor_to, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor_to */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__is_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_for */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_signature_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_signature_for */
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
val* var4 /* : String */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
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
((void (*)(val*, val*))(var->class->vft[COLOR_scope__Variable__init]))(var, var1) /* init on <var:Variable>*/;
CHECK_NEW_scope__Variable(var);
self->attrs[COLOR_typing__TypeVisitor___64dselfvariable].val = var; /* @selfvariable on <self:TypeVisitor exact> */
return self;
}
/* allocate TypeVisitor */
void CHECK_NEW_typing__TypeVisitor(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : AClassdef */;
val* var2 /* : MPropDef */;
var = self->attrs[COLOR_typing__TypeVisitor___64dmodelbuilder].val; /* @modelbuilder on <self:TypeVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 41);
exit(1);
}
var1 = self->attrs[COLOR_typing__TypeVisitor___64dnclassdef].val; /* @nclassdef on <self:TypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @nclassdef");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 42);
exit(1);
}
var2 = self->attrs[COLOR_typing__TypeVisitor___64dmpropdef].val; /* @mpropdef on <self:TypeVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 43);
exit(1);
}
}
/* runtime class typing__CallSite */
const struct class class_typing__CallSite = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:CallSite:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:CallSite:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:CallSite:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:CallSite:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:CallSite:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:CallSite:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:CallSite:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:CallSite:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:CallSite:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:CallSite:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:CallSite:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:CallSite:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:CallSite:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:CallSite:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:CallSite:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:CallSite:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:CallSite:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:CallSite:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to typing:CallSite:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to typing:CallSite:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:CallSite:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:CallSite:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:CallSite:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to typing:CallSite:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to typing:CallSite:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:CallSite:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:CallSite:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to typing:CallSite:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to typing:CallSite:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to typing:CallSite:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to typing:CallSite:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to typing:CallSite:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to typing:CallSite:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to typing:CallSite:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to typing:CallSite:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to typing:CallSite:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to typing:CallSite:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to typing:CallSite:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_typing__CallSite__node, /* pointer to typing:CallSite:typing#CallSite#node */
(nitmethod_t)VIRTUAL_typing__CallSite__node_61d, /* pointer to typing:CallSite:typing#CallSite#node= */
(nitmethod_t)VIRTUAL_typing__CallSite__recv, /* pointer to typing:CallSite:typing#CallSite#recv */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_61d, /* pointer to typing:CallSite:typing#CallSite#recv= */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_is_self, /* pointer to typing:CallSite:typing#CallSite#recv_is_self */
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
(nitmethod_t)VIRTUAL_typing__CallSite__init, /* pointer to typing:CallSite:typing#CallSite#init */
}
};
/* allocate CallSite */
val* NEW_typing__CallSite(const struct type* type) {
val* self /* : CallSite */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__CallSite;
return self;
}
/* allocate CallSite */
void CHECK_NEW_typing__CallSite(val* self) {
val* var /* : ANode */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
val* var3 /* : MMethod */;
val* var4 /* : MMethodDef */;
val* var5 /* : MSignature */;
short int var6 /* : Bool */;
var = self->attrs[COLOR_typing__CallSite___64dnode].val; /* @node on <self:CallSite> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @node");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 391);
exit(1);
}
var1 = self->attrs[COLOR_typing__CallSite___64drecv].val; /* @recv on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @recv");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 394);
exit(1);
}
var2 = self->attrs[COLOR_typing__CallSite___64drecv_is_self].s; /* @recv_is_self on <self:CallSite> */
var3 = self->attrs[COLOR_typing__CallSite___64dmproperty].val; /* @mproperty on <self:CallSite> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 402);
exit(1);
}
var4 = self->attrs[COLOR_typing__CallSite___64dmpropdef].val; /* @mpropdef on <self:CallSite> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 405);
exit(1);
}
var5 = self->attrs[COLOR_typing__CallSite___64dmsignature].val; /* @msignature on <self:CallSite> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @msignature");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 409);
exit(1);
}
var6 = self->attrs[COLOR_typing__CallSite___64derasure_cast].s; /* @erasure_cast on <self:CallSite> */
}
/* runtime class modelize_property__ModelizePropertyPhase */
const struct class class_modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to modelize_property:ModelizePropertyPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to modelize_property:ModelizePropertyPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_property:ModelizePropertyPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to modelize_property:ModelizePropertyPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to modelize_property:ModelizePropertyPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to modelize_property:ModelizePropertyPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to modelize_property:ModelizePropertyPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to modelize_property:ModelizePropertyPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_modelize_property__ModelizePropertyPhase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property#ModelizePropertyPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate ModelizePropertyPhase */
val* NEW_modelize_property__ModelizePropertyPhase(const struct type* type) {
val* self /* : ModelizePropertyPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_property__ModelizePropertyPhase;
return self;
}
/* allocate ModelizePropertyPhase */
void CHECK_NEW_modelize_property__ModelizePropertyPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ModelizePropertyPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ModelizePropertyPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class modelize_property__TextCollectorVisitor */
const struct class class_modelize_property__TextCollectorVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:TextCollectorVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:TextCollectorVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_property:TextCollectorVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_property:TextCollectorVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_property:TextCollectorVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_property:TextCollectorVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to modelize_property:TextCollectorVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to modelize_property:TextCollectorVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_property:TextCollectorVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_property:TextCollectorVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_property:TextCollectorVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to modelize_property:TextCollectorVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to modelize_property:TextCollectorVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_property:TextCollectorVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_property:TextCollectorVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to modelize_property:TextCollectorVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to modelize_property:TextCollectorVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to modelize_property:TextCollectorVisitor:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to modelize_property:TextCollectorVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to modelize_property:TextCollectorVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to modelize_property:TextCollectorVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to modelize_property:TextCollectorVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to modelize_property:TextCollectorVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to modelize_property:TextCollectorVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to modelize_property:TextCollectorVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to modelize_property:TextCollectorVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__visit, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__text, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#text */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__text_61d, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#text= */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__init, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#init */
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
val* var4 /* : String */;
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
self->attrs[COLOR_modelize_property__TextCollectorVisitor___64dtext].val = var1; /* @text on <self:TextCollectorVisitor exact> */
return self;
}
/* allocate TextCollectorVisitor */
void CHECK_NEW_modelize_property__TextCollectorVisitor(val* self) {
}
/* runtime class modelize_class__ModelizeClassPhase */
const struct class class_modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_class:ModelizeClassPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_class:ModelizeClassPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_class:ModelizeClassPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_class:ModelizeClassPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_class:ModelizeClassPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_class:ModelizeClassPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to modelize_class:ModelizeClassPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to modelize_class:ModelizeClassPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_class:ModelizeClassPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_class:ModelizeClassPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_class:ModelizeClassPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to modelize_class:ModelizeClassPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to modelize_class:ModelizeClassPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to modelize_class:ModelizeClassPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to modelize_class:ModelizeClassPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to modelize_class:ModelizeClassPhase:file#Object#stderr */
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
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to modelize_class:ModelizeClassPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to modelize_class:ModelizeClassPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to modelize_class:ModelizeClassPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to modelize_class:ModelizeClassPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to modelize_class:ModelizeClassPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class#ModelizeClassPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate ModelizeClassPhase */
val* NEW_modelize_class__ModelizeClassPhase(const struct type* type) {
val* self /* : ModelizeClassPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_class__ModelizeClassPhase;
return self;
}
/* allocate ModelizeClassPhase */
void CHECK_NEW_modelize_class__ModelizeClassPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ModelizeClassPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ModelizeClassPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class auto_super_init__AutoSuperInitPhase */
const struct class class_auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to auto_super_init:AutoSuperInitPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to auto_super_init:AutoSuperInitPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to auto_super_init:AutoSuperInitPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitPhase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init#AutoSuperInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate AutoSuperInitPhase */
val* NEW_auto_super_init__AutoSuperInitPhase(const struct type* type) {
val* self /* : AutoSuperInitPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_auto_super_init__AutoSuperInitPhase;
return self;
}
/* allocate AutoSuperInitPhase */
void CHECK_NEW_auto_super_init__AutoSuperInitPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:AutoSuperInitPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:AutoSuperInitPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class auto_super_init__AutoSuperInitVisitor */
const struct class class_auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to auto_super_init:AutoSuperInitVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to auto_super_init:AutoSuperInitVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to auto_super_init:AutoSuperInitVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__visit, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= */
}
};
/* allocate AutoSuperInitVisitor */
val* NEW_auto_super_init__AutoSuperInitVisitor(const struct type* type) {
val* self /* : AutoSuperInitVisitor */;
val* var /* : null */;
short int var1 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_auto_super_init__AutoSuperInitVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AutoSuperInitVisitor exact> */
var1 = 0;
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___64dhas_explicit_super_init].s = var1; /* @has_explicit_super_init on <self:AutoSuperInitVisitor exact> */
return self;
}
/* allocate AutoSuperInitVisitor */
void CHECK_NEW_auto_super_init__AutoSuperInitVisitor(val* self) {
}
/* runtime class div_by_zero__DivByZeroPhase */
const struct class class_div_by_zero__DivByZeroPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to div_by_zero:DivByZeroPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to div_by_zero:DivByZeroPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to div_by_zero:DivByZeroPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to div_by_zero:DivByZeroPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to div_by_zero:DivByZeroPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to div_by_zero:DivByZeroPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to div_by_zero:DivByZeroPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to div_by_zero:DivByZeroPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to div_by_zero:DivByZeroPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to div_by_zero:DivByZeroPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to div_by_zero:DivByZeroPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to div_by_zero:DivByZeroPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to div_by_zero:DivByZeroPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to div_by_zero:DivByZeroPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to div_by_zero:DivByZeroPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to div_by_zero:DivByZeroPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to div_by_zero:DivByZeroPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to div_by_zero:DivByZeroPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to div_by_zero:DivByZeroPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to div_by_zero:DivByZeroPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to div_by_zero:DivByZeroPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to div_by_zero:DivByZeroPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to div_by_zero:DivByZeroPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to div_by_zero:DivByZeroPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to div_by_zero:DivByZeroPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to div_by_zero:DivByZeroPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to div_by_zero:DivByZeroPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to div_by_zero:DivByZeroPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to div_by_zero:DivByZeroPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to div_by_zero:DivByZeroPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroPhase__process_nmodule, /* pointer to div_by_zero:DivByZeroPhase:div_by_zero#DivByZeroPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to div_by_zero:DivByZeroPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate DivByZeroPhase */
val* NEW_div_by_zero__DivByZeroPhase(const struct type* type) {
val* self /* : DivByZeroPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_div_by_zero__DivByZeroPhase;
return self;
}
/* allocate DivByZeroPhase */
void CHECK_NEW_div_by_zero__DivByZeroPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:DivByZeroPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:DivByZeroPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class div_by_zero__DivByZeroVisitor */
const struct class class_div_by_zero__DivByZeroVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to div_by_zero:DivByZeroVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to div_by_zero:DivByZeroVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to div_by_zero:DivByZeroVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to div_by_zero:DivByZeroVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to div_by_zero:DivByZeroVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to div_by_zero:DivByZeroVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to div_by_zero:DivByZeroVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to div_by_zero:DivByZeroVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to div_by_zero:DivByZeroVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to div_by_zero:DivByZeroVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to div_by_zero:DivByZeroVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__visit, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__toolcontext, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#toolcontext */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__toolcontext_61d, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__mmodule, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#mmodule */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__mmodule_61d, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#mmodule= */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__init, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#init */
}
};
/* allocate DivByZeroVisitor */
val* NEW_div_by_zero__DivByZeroVisitor(const struct type* type) {
val* self /* : DivByZeroVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_div_by_zero__DivByZeroVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:DivByZeroVisitor exact> */
return self;
}
/* allocate DivByZeroVisitor */
void CHECK_NEW_div_by_zero__DivByZeroVisitor(val* self) {
val* var /* : ToolContext */;
val* var1 /* : MModule */;
var = self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dtoolcontext].val; /* @toolcontext on <self:DivByZeroVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 53);
exit(1);
}
var1 = self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dmmodule].val; /* @mmodule on <self:DivByZeroVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/div_by_zero.nit", 56);
exit(1);
}
}
/* runtime class cached__CachedPhase */
const struct class class_cached__CachedPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cached:CachedPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cached:CachedPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cached:CachedPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cached:CachedPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cached:CachedPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cached:CachedPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cached:CachedPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cached:CachedPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cached:CachedPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cached:CachedPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cached:CachedPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cached:CachedPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cached:CachedPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cached:CachedPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cached:CachedPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cached:CachedPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cached:CachedPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cached:CachedPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cached:CachedPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cached:CachedPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cached:CachedPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cached:CachedPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cached:CachedPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cached:CachedPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cached:CachedPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cached:CachedPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cached:CachedPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cached:CachedPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cached:CachedPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cached:CachedPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cached:CachedPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cached:CachedPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cached:CachedPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cached:CachedPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cached:CachedPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cached:CachedPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cached:CachedPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cached:CachedPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cached:CachedPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cached:CachedPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cached:CachedPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cached:CachedPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cached:CachedPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cached:CachedPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cached:CachedPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cached:CachedPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cached:CachedPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cached:CachedPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cached:CachedPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cached:CachedPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to cached:CachedPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to cached:CachedPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to cached:CachedPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to cached:CachedPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to cached:CachedPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to cached:CachedPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to cached:CachedPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to cached:CachedPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_cached__CachedPhase__process_annotated_node, /* pointer to cached:CachedPhase:cached#CachedPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to cached:CachedPhase:frontend#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_cached__CachedPhase__init, /* pointer to cached:CachedPhase:cached#CachedPhase#init */
(nitmethod_t)VIRTUAL_cached__CachedPhase__associate_propdef, /* pointer to cached:CachedPhase:cached#CachedPhase#associate_propdef */
}
};
/* allocate CachedPhase */
val* NEW_cached__CachedPhase(const struct type* type) {
val* self /* : CachedPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cached__CachedPhase;
return self;
}
/* allocate CachedPhase */
void CHECK_NEW_cached__CachedPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:CachedPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:CachedPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class parser_util__InjectedLexer */
/* allocate InjectedLexer */
val* NEW_parser_util__InjectedLexer(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "InjectedLexer is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate InjectedLexer */
void CHECK_NEW_parser_util__InjectedLexer(val* self) {
fprintf(stderr, "Runtime error: %s", "InjectedLexer is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class parser_util__CollectTokensByTextVisitor */
const struct class class_parser_util__CollectTokensByTextVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_util:CollectTokensByTextVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_util:CollectTokensByTextVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_util:CollectTokensByTextVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to parser_util:CollectTokensByTextVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to parser_util:CollectTokensByTextVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__visit, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__text, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#text */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__text_61d, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#text= */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__init, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#init */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__result, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#result */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__result_61d, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#result= */
}
};
/* allocate CollectTokensByTextVisitor */
val* NEW_parser_util__CollectTokensByTextVisitor(const struct type* type) {
val* self /* : CollectTokensByTextVisitor */;
val* var /* : null */;
val* var1 /* : Array[Token] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_util__CollectTokensByTextVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:CollectTokensByTextVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__Token);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Token]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val = var1; /* @result on <self:CollectTokensByTextVisitor exact> */
return self;
}
/* allocate CollectTokensByTextVisitor */
void CHECK_NEW_parser_util__CollectTokensByTextVisitor(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dtext].val; /* @text on <self:CollectTokensByTextVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @text");
fprintf(stderr, " (%s:%d)\n", "src/parser_util.nit", 213);
exit(1);
}
}
/* runtime class parser_util__CollectAnnotationsByNameVisitor */
/* allocate CollectAnnotationsByNameVisitor */
val* NEW_parser_util__CollectAnnotationsByNameVisitor(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "CollectAnnotationsByNameVisitor is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate CollectAnnotationsByNameVisitor */
void CHECK_NEW_parser_util__CollectAnnotationsByNameVisitor(val* self) {
fprintf(stderr, "Runtime error: %s", "CollectAnnotationsByNameVisitor is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class transform__TransformPhase */
const struct class class_transform__TransformPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to transform:TransformPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to transform:TransformPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to transform:TransformPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to transform:TransformPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to transform:TransformPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to transform:TransformPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to transform:TransformPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to transform:TransformPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to transform:TransformPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to transform:TransformPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to transform:TransformPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to transform:TransformPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to transform:TransformPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to transform:TransformPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to transform:TransformPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to transform:TransformPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to transform:TransformPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to transform:TransformPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to transform:TransformPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to transform:TransformPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to transform:TransformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to transform:TransformPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to transform:TransformPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to transform:TransformPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to transform:TransformPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to transform:TransformPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to transform:TransformPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to transform:TransformPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to transform:TransformPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to transform:TransformPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to transform:TransformPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to transform:TransformPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to transform:TransformPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to transform:TransformPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to transform:TransformPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to transform:TransformPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to transform:TransformPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to transform:TransformPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to transform:TransformPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to transform:TransformPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to transform:TransformPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to transform:TransformPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to transform:TransformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_transform__TransformPhase__process_npropdef, /* pointer to transform:TransformPhase:transform#TransformPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to transform:TransformPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to transform:TransformPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate TransformPhase */
val* NEW_transform__TransformPhase(const struct type* type) {
val* self /* : TransformPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_transform__TransformPhase;
return self;
}
/* allocate TransformPhase */
void CHECK_NEW_transform__TransformPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:TransformPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:TransformPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class transform__TransformVisitor */
const struct class class_transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to transform:TransformVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to transform:TransformVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to transform:TransformVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to transform:TransformVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to transform:TransformVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to transform:TransformVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to transform:TransformVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to transform:TransformVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to transform:TransformVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to transform:TransformVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to transform:TransformVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to transform:TransformVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to transform:TransformVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to transform:TransformVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to transform:TransformVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to transform:TransformVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to transform:TransformVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to transform:TransformVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to transform:TransformVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to transform:TransformVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to transform:TransformVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to transform:TransformVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to transform:TransformVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to transform:TransformVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to transform:TransformVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to transform:TransformVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to transform:TransformVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to transform:TransformVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to transform:TransformVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to transform:TransformVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to transform:TransformVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to transform:TransformVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to transform:TransformVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to transform:TransformVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to transform:TransformVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to transform:TransformVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to transform:TransformVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to transform:TransformVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__visit, /* pointer to transform:TransformVisitor:transform#TransformVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#init */
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
(nitmethod_t)VIRTUAL_transform__TransformVisitor__get_class, /* pointer to transform:TransformVisitor:transform#TransformVisitor#get_class */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__get_method, /* pointer to transform:TransformVisitor:transform#TransformVisitor#get_method */
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
/* allocate TransformVisitor */
void CHECK_NEW_transform__TransformVisitor(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : MModule */;
val* var2 /* : MClassDef */;
val* var3 /* : MPropDef */;
val* var4 /* : ASTBuilder */;
var = self->attrs[COLOR_transform__TransformVisitor___64dphase].val; /* @phase on <self:TransformVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @phase");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 45);
exit(1);
}
var1 = self->attrs[COLOR_transform__TransformVisitor___64dmmodule].val; /* @mmodule on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 46);
exit(1);
}
var2 = self->attrs[COLOR_transform__TransformVisitor___64dmclassdef].val; /* @mclassdef on <self:TransformVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 47);
exit(1);
}
var3 = self->attrs[COLOR_transform__TransformVisitor___64dmpropdef].val; /* @mpropdef on <self:TransformVisitor> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 48);
exit(1);
}
var4 = self->attrs[COLOR_transform__TransformVisitor___64dbuilder].val; /* @builder on <self:TransformVisitor> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @builder");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 49);
exit(1);
}
}
/* runtime class astbuilder__ASTBuilder */
const struct class class_astbuilder__ASTBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:ASTBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astbuilder:ASTBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astbuilder:ASTBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:ASTBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:ASTBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:ASTBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:ASTBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:ASTBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:ASTBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:ASTBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:ASTBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:ASTBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astbuilder:ASTBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astbuilder:ASTBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astbuilder:ASTBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astbuilder:ASTBuilder:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to astbuilder:ASTBuilder:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to astbuilder:ASTBuilder:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astbuilder:ASTBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astbuilder:ASTBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astbuilder:ASTBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to astbuilder:ASTBuilder:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to astbuilder:ASTBuilder:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to astbuilder:ASTBuilder:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to astbuilder:ASTBuilder:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to astbuilder:ASTBuilder:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astbuilder:ASTBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astbuilder:ASTBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astbuilder:ASTBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astbuilder:ASTBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astbuilder:ASTBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to astbuilder:ASTBuilder:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to astbuilder:ASTBuilder:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to astbuilder:ASTBuilder:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to astbuilder:ASTBuilder:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to astbuilder:ASTBuilder:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__mmodule, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__mmodule_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule= */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__anchor, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__anchor_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor= */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_int, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_int */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_new, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_new */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_call, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_call */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_block, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_block */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_var_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_var_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_assign */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_attr_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_read */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_attr_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_assign */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_do, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_do */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_if, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_if */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__init, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#init */
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
/* allocate ASTBuilder */
void CHECK_NEW_astbuilder__ASTBuilder(val* self) {
val* var /* : MModule */;
val* var1 /* : nullable MClassType */;
var = self->attrs[COLOR_astbuilder__ASTBuilder___64dmmodule].val; /* @mmodule on <self:ASTBuilder> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 25);
exit(1);
}
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___64danchor].val; /* @anchor on <self:ASTBuilder> */
}
/* runtime class astbuilder__APlaceholderExpr */
const struct class class_astbuilder__APlaceholderExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:APlaceholderExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:APlaceholderExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astbuilder:APlaceholderExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astbuilder:APlaceholderExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astbuilder:APlaceholderExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astbuilder:APlaceholderExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to astbuilder:APlaceholderExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to astbuilder:APlaceholderExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astbuilder:APlaceholderExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astbuilder:APlaceholderExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astbuilder:APlaceholderExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to astbuilder:APlaceholderExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to astbuilder:APlaceholderExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to astbuilder:APlaceholderExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to astbuilder:APlaceholderExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to astbuilder:APlaceholderExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to astbuilder:APlaceholderExpr:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to astbuilder:APlaceholderExpr:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to astbuilder:APlaceholderExpr:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to astbuilder:APlaceholderExpr:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to astbuilder:APlaceholderExpr:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_child, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__visit_all, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to astbuilder:APlaceholderExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to astbuilder:APlaceholderExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to astbuilder:APlaceholderExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to astbuilder:APlaceholderExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to astbuilder:APlaceholderExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to astbuilder:APlaceholderExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to astbuilder:APlaceholderExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to astbuilder:APlaceholderExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to astbuilder:APlaceholderExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to astbuilder:APlaceholderExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__APlaceholderExpr__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#APlaceholderExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to astbuilder:APlaceholderExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to astbuilder:APlaceholderExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context= */
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
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astbuilder__APlaceholderExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APlaceholderExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APlaceholderExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlaceholderExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:APlaceholderExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:APlaceholderExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:APlaceholderExpr exact> */
return self;
}
/* allocate APlaceholderExpr */
void CHECK_NEW_astbuilder__APlaceholderExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APlaceholderExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:APlaceholderExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:APlaceholderExpr> */
}
/* runtime class astvalidation__ASTValidationVisitor */
const struct class class_astvalidation__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astvalidation:ASTValidationVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astvalidation:ASTValidationVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astvalidation:ASTValidationVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astvalidation:ASTValidationVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astvalidation:ASTValidationVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astvalidation:ASTValidationVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to astvalidation:ASTValidationVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to astvalidation:ASTValidationVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astvalidation:ASTValidationVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astvalidation:ASTValidationVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astvalidation:ASTValidationVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to astvalidation:ASTValidationVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to astvalidation:ASTValidationVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to astvalidation:ASTValidationVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to astvalidation:ASTValidationVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to astvalidation:ASTValidationVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to astvalidation:ASTValidationVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to astvalidation:ASTValidationVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to astvalidation:ASTValidationVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to astvalidation:ASTValidationVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to astvalidation:ASTValidationVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__visit, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__path, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__path_61d, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path= */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__seen, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__seen_61d, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen= */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__init, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#init */
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
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[ANode]>*/;
CHECK_NEW_list__List(var1);
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dpath].val = var1; /* @path on <self:ASTValidationVisitor exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetparser_nodes__ANode);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[ANode]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dseen].val = var2; /* @seen on <self:ASTValidationVisitor exact> */
return self;
}
/* allocate ASTValidationVisitor */
void CHECK_NEW_astvalidation__ASTValidationVisitor(val* self) {
}
/* runtime class rapid_type_analysis__RapidTypeAnalysis */
const struct class class_rapid_type_analysis__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to rapid_type_analysis:RapidTypeAnalysis:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to rapid_type_analysis:RapidTypeAnalysis:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to rapid_type_analysis:RapidTypeAnalysis:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__run_analysis, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#run_analysis */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__check_depth, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#check_depth */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_new, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_new */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_cast, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_cast */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_call, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_call */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_super_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_super_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#init */
}
};
/* allocate RapidTypeAnalysis */
val* NEW_rapid_type_analysis__RapidTypeAnalysis(const struct type* type) {
val* self /* : RapidTypeAnalysis */;
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashSet[MClassType] */;
val* var4 /* : HashSet[MType] */;
val* var5 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[MMethodDef] */;
val* var8 /* : HashSet[MMethod] */;
val* var9 /* : List[MMethodDef] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_rapid_type_analysis__RapidTypeAnalysis;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MClassType]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_types].val = var; /* @live_types on <self:RapidTypeAnalysis exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClassType]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_types].val = var1; /* @live_open_types on <self:RapidTypeAnalysis exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_classes].val = var2; /* @live_classes on <self:RapidTypeAnalysis exact> */
var3 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashSet__init]))(var3) /* init on <var3:HashSet[MClassType]>*/;
CHECK_NEW_hash_collection__HashSet(var3);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val = var3; /* @live_cast_types on <self:RapidTypeAnalysis exact> */
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashSet__init]))(var4) /* init on <var4:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var4);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_cast_types].val = var4; /* @live_open_cast_types on <self:RapidTypeAnalysis exact> */
var5 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var5->class->vft[COLOR_hash_collection__HashSet__init]))(var5) /* init on <var5:HashSet[MMethodDef]>*/;
CHECK_NEW_hash_collection__HashSet(var5);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methoddefs].val = var5; /* @live_methoddefs on <self:RapidTypeAnalysis exact> */
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
((void (*)(val*))(var6->class->vft[COLOR_hash_collection__HashSet__init]))(var6) /* init on <var6:HashSet[MMethod]>*/;
CHECK_NEW_hash_collection__HashSet(var6);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methods].val = var6; /* @live_methods on <self:RapidTypeAnalysis exact> */
var7 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashSet__init]))(var7) /* init on <var7:HashSet[MMethodDef]>*/;
CHECK_NEW_hash_collection__HashSet(var7);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_super_sends].val = var7; /* @live_super_sends on <self:RapidTypeAnalysis exact> */
var8 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
((void (*)(val*))(var8->class->vft[COLOR_hash_collection__HashSet__init]))(var8) /* init on <var8:HashSet[MMethod]>*/;
CHECK_NEW_hash_collection__HashSet(var8);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtotry_methods].val = var8; /* @totry_methods on <self:RapidTypeAnalysis exact> */
var9 = NEW_list__List(&type_list__Listmodel__MMethodDef);
((void (*)(val*))(var9->class->vft[COLOR_list__List__init]))(var9) /* init on <var9:List[MMethodDef]>*/;
CHECK_NEW_list__List(var9);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtodo].val = var9; /* @todo on <self:RapidTypeAnalysis exact> */
return self;
}
/* allocate RapidTypeAnalysis */
void CHECK_NEW_rapid_type_analysis__RapidTypeAnalysis(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : MModule */;
var = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmodelbuilder].val; /* @modelbuilder on <self:RapidTypeAnalysis> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 43);
exit(1);
}
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmainmodule].val; /* @mainmodule on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 46);
exit(1);
}
}
/* runtime class rapid_type_analysis__RapidTypeVisitor */
const struct class class_rapid_type_analysis__RapidTypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to rapid_type_analysis:RapidTypeVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to rapid_type_analysis:RapidTypeVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to rapid_type_analysis:RapidTypeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__cleanup_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#cleanup_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_class, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_class */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_method, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_method */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_cast_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_cast_type */
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
/* allocate RapidTypeVisitor */
void CHECK_NEW_rapid_type_analysis__RapidTypeVisitor(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : MClassType */;
val* var2 /* : MPropDef */;
var = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64danalysis].val; /* @analysis on <self:RapidTypeVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @analysis");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 331);
exit(1);
}
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dreceiver].val; /* @receiver on <self:RapidTypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @receiver");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 332);
exit(1);
}
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dmpropdef].val; /* @mpropdef on <self:RapidTypeVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/rapid_type_analysis.nit", 333);
exit(1);
}
}
/* runtime class global_compiler__GlobalCompiler */
const struct class class_global_compiler__GlobalCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:GlobalCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:GlobalCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to global_compiler:GlobalCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to global_compiler:GlobalCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:GlobalCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:GlobalCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:GlobalCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:GlobalCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:GlobalCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to global_compiler:GlobalCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to global_compiler:GlobalCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:GlobalCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:GlobalCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:GlobalCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:GlobalCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:GlobalCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:GlobalCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:GlobalCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:GlobalCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:GlobalCompiler:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to global_compiler:GlobalCompiler:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to global_compiler:GlobalCompiler:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to global_compiler:GlobalCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to global_compiler:GlobalCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to global_compiler:GlobalCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to global_compiler:GlobalCompiler:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to global_compiler:GlobalCompiler:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to global_compiler:GlobalCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to global_compiler:GlobalCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to global_compiler:GlobalCompiler:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to global_compiler:GlobalCompiler:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to global_compiler:GlobalCompiler:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to global_compiler:GlobalCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to global_compiler:GlobalCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to global_compiler:GlobalCompiler:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to global_compiler:GlobalCompiler:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to global_compiler:GlobalCompiler:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to global_compiler:GlobalCompiler:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to global_compiler:GlobalCompiler:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to global_compiler:GlobalCompiler:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__hardening, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#files= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__new_visitor, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#provided_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_header_structs, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_nitni_structs, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__generate_check_init_instance, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#generate_check_init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#generate_check_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__supports_ffi, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#supports_ffi */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__runtime_type_analysis, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__runtime_type_analysis_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__init, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#init */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_class_names, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_class_names */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__classid, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#classid */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__classids, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#classids */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__classids_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#classids= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__live_primitive_types, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#live_primitive_types */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__live_primitive_types_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#live_primitive_types= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__todo, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#todo */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__todos, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#todos */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__todos_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#todos= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__seen, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#seen */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__seen_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#seen= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__declare_runtimeclass, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#declare_runtimeclass */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__generate_init_instance, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#generate_init_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__generate_box_instance, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#generate_box_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__collect_types_cache, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#collect_types_cache */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__collect_types_cache_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#collect_types_cache= */
}
};
/* allocate GlobalCompiler */
val* NEW_global_compiler__GlobalCompiler(const struct type* type) {
val* self /* : GlobalCompiler */;
val* var /* : List[CodeFile] */;
val* var1 /* : HashMap[String, String] */;
val* var2 /* : Array[ExternFile] */;
val* var3 /* : ArraySet[String] */;
val* var4 /* : Array[String] */;
long var5 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var32 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[MClassType, String] */;
val* var34 /* : List[AbstractRuntimeFunction] */;
val* var35 /* : HashSet[AbstractRuntimeFunction] */;
val* var36 /* : HashMap[MType, Array[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__GlobalCompiler;
var = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[CodeFile]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var; /* @files on <self:GlobalCompiler exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, String]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var1; /* @provided_declarations on <self:GlobalCompiler exact> */
var2 = NEW_array__Array(&type_array__Arrayffi_base__ExternFile);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[ExternFile]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var2; /* @extern_bodies on <self:GlobalCompiler exact> */
var3 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__ArraySet__init]))(var3) /* init on <var3:ArraySet[String]>*/;
CHECK_NEW_array__ArraySet(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var3; /* @seen_extern on <self:GlobalCompiler exact> */
var4 = NEW_array__Array(&type_array__Arraystring__String);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[String]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "isa";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[String]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var11) /* push on <var_:Array[String]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "auto";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var16) /* push on <var_:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = 10;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var21) /* push on <var_:Array[String]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "erasure";
var28 = 7;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var26) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:GlobalCompiler exact> */
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var30; /* @count_type_test_resolved on <self:GlobalCompiler exact> */
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var31; /* @count_type_test_unresolved on <self:GlobalCompiler exact> */
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var32; /* @count_type_test_skipped on <self:GlobalCompiler exact> */
var33 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypestring__String);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashMap__init]))(var33) /* init on <var33:HashMap[MClassType, String]>*/;
CHECK_NEW_hash_collection__HashMap(var33);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dclassids].val = var33; /* @classids on <self:GlobalCompiler exact> */
var34 = NEW_list__List(&type_list__Listabstract_compiler__AbstractRuntimeFunction);
((void (*)(val*))(var34->class->vft[COLOR_list__List__init]))(var34) /* init on <var34:List[AbstractRuntimeFunction]>*/;
CHECK_NEW_list__List(var34);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dtodos].val = var34; /* @todos on <self:GlobalCompiler exact> */
var35 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetabstract_compiler__AbstractRuntimeFunction);
((void (*)(val*))(var35->class->vft[COLOR_hash_collection__HashSet__init]))(var35) /* init on <var35:HashSet[AbstractRuntimeFunction]>*/;
CHECK_NEW_hash_collection__HashSet(var35);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dseen].val = var35; /* @seen on <self:GlobalCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MClassType);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MType, Array[MClassType]]>*/;
CHECK_NEW_hash_collection__HashMap(var36);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dcollect_types_cache].val = var36; /* @collect_types_cache on <self:GlobalCompiler exact> */
return self;
}
/* allocate GlobalCompiler */
void CHECK_NEW_global_compiler__GlobalCompiler(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var2 /* : ModelBuilder */;
val* var3 /* : CodeWriter */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : Array[MClassType] */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:GlobalCompiler> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 290);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @realmainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 294);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:GlobalCompiler> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 297);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:GlobalCompiler> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 326);
exit(1);
}
var4 = self->attrs[COLOR_global_compiler__GlobalCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:GlobalCompiler> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @runtime_type_analysis");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 86);
exit(1);
}
var5 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dlive_primitive_types].val; /* @live_primitive_types on <self:GlobalCompiler> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_primitive_types");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 136);
exit(1);
}
}
/* runtime class global_compiler__GlobalCompilerVisitor */
const struct class class_global_compiler__GlobalCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to global_compiler:GlobalCompilerVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to global_compiler:GlobalCompilerVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to global_compiler:GlobalCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to global_compiler:GlobalCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to global_compiler:GlobalCompilerVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__calloc_array, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__native_array_def, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__supercall, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__adapt_signature, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__autobox, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#autobox */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__type_test, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#type_test */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__is_same_type_test, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#is_same_type_test */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__equal_test, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#equal_test */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__call, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#call */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__send, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__isset_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__read_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__write_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__check_init_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#check_init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__class_name_string, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__init_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__array_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#array_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__vararg_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#vararg_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c, /* pointer to global_compiler:GlobalCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#var_from_c */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c, /* pointer to global_compiler:GlobalCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#ret_to_c */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__collect_types, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#collect_types */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__check_valid_reciever, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#check_valid_reciever */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__get_recvtype, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#get_recvtype */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__get_recv, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#get_recv */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__finalize_call, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#finalize_call */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__call_without_varargize, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#call_without_varargize */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__bugtype, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#bugtype */
}
};
/* allocate GlobalCompilerVisitor */
val* NEW_global_compiler__GlobalCompilerVisitor(const struct type* type) {
val* self /* : GlobalCompilerVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[String] */;
long var2 /* : Int */;
val* var3 /* : HashMap[EscapeMark, String] */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__GlobalCompilerVisitor;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = var; /* @current_node on <self:GlobalCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:GlobalCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:GlobalCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:GlobalCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:GlobalCompilerVisitor exact> */
return self;
}
/* allocate GlobalCompilerVisitor */
void CHECK_NEW_global_compiler__GlobalCompilerVisitor(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : nullable Frame */;
val* var2 /* : CodeWriter */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:GlobalCompilerVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @compiler");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 583);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:GlobalCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:GlobalCompilerVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @writer");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 598);
exit(1);
}
}
/* runtime class global_compiler__CustomizedRuntimeFunction */
const struct class class_global_compiler__CustomizedRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction___61d_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__hash, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#hash */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__to_s, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to global_compiler:CustomizedRuntimeFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to global_compiler:CustomizedRuntimeFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to global_compiler:CustomizedRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to global_compiler:CustomizedRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to global_compiler:CustomizedRuntimeFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__build_c_name, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__call, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#call */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__compile_to_c, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__recv, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#recv */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__recv_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#recv= */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__init, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#init */
}
};
/* allocate CustomizedRuntimeFunction */
val* NEW_global_compiler__CustomizedRuntimeFunction(const struct type* type) {
val* self /* : CustomizedRuntimeFunction */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__CustomizedRuntimeFunction;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = var; /* @c_name_cache on <self:CustomizedRuntimeFunction exact> */
return self;
}
/* allocate CustomizedRuntimeFunction */
void CHECK_NEW_global_compiler__CustomizedRuntimeFunction(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MClassType */;
var = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:CustomizedRuntimeFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmethoddef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1041);
exit(1);
}
var1 = self->attrs[COLOR_global_compiler__CustomizedRuntimeFunction___64drecv].val; /* @recv on <self:CustomizedRuntimeFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @recv");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 878);
exit(1);
}
}
/* runtime class abstract_compiler__CodeFile */
const struct class class_abstract_compiler__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:CodeFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:CodeFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeFile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:CodeFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:CodeFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:CodeFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:CodeFile:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:CodeFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:CodeFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:CodeFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:CodeFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:CodeFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:CodeFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:CodeFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:CodeFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:CodeFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:CodeFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:CodeFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:CodeFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:CodeFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:CodeFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:CodeFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:CodeFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:CodeFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:CodeFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:CodeFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:CodeFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__name, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__name_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__writers, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__writers_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__required_declarations, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__required_declarations_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__init, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#init */
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
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[CodeWriter]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_abstract_compiler__CodeFile___64dwriters].val = var; /* @writers on <self:CodeFile exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__CodeFile___64drequired_declarations].val = var1; /* @required_declarations on <self:CodeFile exact> */
return self;
}
/* allocate CodeFile */
void CHECK_NEW_abstract_compiler__CodeFile(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_abstract_compiler__CodeFile___64dname].val; /* @name on <self:CodeFile> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 553);
exit(1);
}
}
/* runtime class abstract_compiler__CodeWriter */
const struct class class_abstract_compiler__CodeWriter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeWriter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:CodeWriter:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:CodeWriter:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeWriter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeWriter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeWriter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeWriter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeWriter:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:CodeWriter:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:CodeWriter:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:CodeWriter:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:CodeWriter:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:CodeWriter:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:CodeWriter:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:CodeWriter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:CodeWriter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:CodeWriter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:CodeWriter:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:CodeWriter:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:CodeWriter:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:CodeWriter:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:CodeWriter:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:CodeWriter:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:CodeWriter:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:CodeWriter:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:CodeWriter:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:CodeWriter:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__file, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__file_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__lines_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__decl_lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__decl_lines_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__add, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#add */
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
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[String]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__CodeWriter___64dlines].val = var; /* @lines on <self:CodeWriter exact> */
var1 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[String]>*/;
CHECK_NEW_list__List(var1);
self->attrs[COLOR_abstract_compiler__CodeWriter___64ddecl_lines].val = var1; /* @decl_lines on <self:CodeWriter exact> */
return self;
}
/* allocate CodeWriter */
void CHECK_NEW_abstract_compiler__CodeWriter(val* self) {
val* var /* : CodeFile */;
var = self->attrs[COLOR_abstract_compiler__CodeWriter___64dfile].val; /* @file on <self:CodeWriter> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @file");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 560);
exit(1);
}
}
/* runtime class abstract_compiler__RuntimeVariable */
const struct class class_abstract_compiler__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#class_name */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:RuntimeVariable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:RuntimeVariable:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:RuntimeVariable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:RuntimeVariable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:RuntimeVariable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:RuntimeVariable:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:RuntimeVariable:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:RuntimeVariable:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:RuntimeVariable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:RuntimeVariable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:RuntimeVariable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:RuntimeVariable:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:RuntimeVariable:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:RuntimeVariable:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:RuntimeVariable:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:RuntimeVariable:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:RuntimeVariable:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:RuntimeVariable:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:RuntimeVariable:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:RuntimeVariable:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:RuntimeVariable:cpp#Object#from_cpp_call_context */
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
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dis_exact].s = var; /* @is_exact on <self:RuntimeVariable exact> */
return self;
}
/* allocate RuntimeVariable */
void CHECK_NEW_abstract_compiler__RuntimeVariable(val* self) {
val* var /* : String */;
val* var1 /* : MType */;
val* var2 /* : MType */;
var = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dname].val; /* @name on <self:RuntimeVariable> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1074);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmtype].val; /* @mtype on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1077);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmcasttype].val; /* @mcasttype on <self:RuntimeVariable> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mcasttype");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1080);
exit(1);
}
}
/* runtime class abstract_compiler__Frame */
const struct class class_abstract_compiler__Frame = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:Frame:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:Frame:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:Frame:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:Frame:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:Frame:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:Frame:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:Frame:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:Frame:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:Frame:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:Frame:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:Frame:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:Frame:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:Frame:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:Frame:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:Frame:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:Frame:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:Frame:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:Frame:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:Frame:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:Frame:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:Frame:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:Frame:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:Frame:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:Frame:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:Frame:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:Frame:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:Frame:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:Frame:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:Frame:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:Frame:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:Frame:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:Frame:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:Frame:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:Frame:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:Frame:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:Frame:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:Frame:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:Frame:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:Frame:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:Frame:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:Frame:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:Frame:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:Frame:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__visitor, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#visitor */
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
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__init, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#init */
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
self->attrs[COLOR_abstract_compiler__Frame___64dreturnvar].val = var; /* @returnvar on <self:Frame exact> */
var1 = NULL;
self->attrs[COLOR_abstract_compiler__Frame___64dreturnlabel].val = var1; /* @returnlabel on <self:Frame exact> */
return self;
}
/* allocate Frame */
void CHECK_NEW_abstract_compiler__Frame(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : MPropDef */;
val* var2 /* : MClassType */;
val* var3 /* : Array[RuntimeVariable] */;
var = self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val; /* @visitor on <self:Frame> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visitor");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1121);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val; /* @mpropdef on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1124);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val; /* @receiver on <self:Frame> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @receiver");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1128);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__Frame___64darguments].val; /* @arguments on <self:Frame> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @arguments");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1131);
exit(1);
}
}
/* runtime class nitni_callbacks__VerifyNitniCallbacksPhase */
const struct class class_nitni_callbacks__VerifyNitniCallbacksPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_common_ffi__VerifyNitniCallbacksPhase__process_npropdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:common_ffi#VerifyNitniCallbacksPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:frontend#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_nitni_callbacks__VerifyNitniCallbacksPhase__process_npropdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_callbacks#VerifyNitniCallbacksPhase#process_npropdef */
}
};
/* allocate VerifyNitniCallbacksPhase */
val* NEW_nitni_callbacks__VerifyNitniCallbacksPhase(const struct type* type) {
val* self /* : VerifyNitniCallbacksPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__VerifyNitniCallbacksPhase;
return self;
}
/* allocate VerifyNitniCallbacksPhase */
void CHECK_NEW_nitni_callbacks__VerifyNitniCallbacksPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:VerifyNitniCallbacksPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:VerifyNitniCallbacksPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class nitni_callbacks__ForeignCallbackSet */
const struct class class_nitni_callbacks__ForeignCallbackSet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:ForeignCallbackSet:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:ForeignCallbackSet:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:ForeignCallbackSet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__callbacks, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#callbacks */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__callbacks_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#callbacks= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__supers, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#supers */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__supers_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#supers= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__types, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#types */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__types_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#types= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__casts, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#casts */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__casts_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#casts= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__all_cached, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all_cached */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__all_cached_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all_cached= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__all, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__join, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#join */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__init, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#init */
}
};
/* allocate ForeignCallbackSet */
val* NEW_nitni_callbacks__ForeignCallbackSet(const struct type* type) {
val* self /* : ForeignCallbackSet */;
val* var /* : HashSet[MExplicitCall] */;
val* var1 /* : HashSet[MExplicitSuper] */;
val* var2 /* : HashSet[MType] */;
val* var3 /* : HashSet[MExplicitCast] */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__ForeignCallbackSet;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__MExplicitCall);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MExplicitCall]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcallbacks].val = var; /* @callbacks on <self:ForeignCallbackSet exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__MExplicitSuper);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MExplicitSuper]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dsupers].val = var1; /* @supers on <self:ForeignCallbackSet exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dtypes].val = var2; /* @types on <self:ForeignCallbackSet exact> */
var3 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__MExplicitCast);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashSet__init]))(var3) /* init on <var3:HashSet[MExplicitCast]>*/;
CHECK_NEW_hash_collection__HashSet(var3);
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcasts].val = var3; /* @casts on <self:ForeignCallbackSet exact> */
var4 = NULL;
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dall_cached].val = var4; /* @all_cached on <self:ForeignCallbackSet exact> */
return self;
}
/* allocate ForeignCallbackSet */
void CHECK_NEW_nitni_callbacks__ForeignCallbackSet(val* self) {
}
/* runtime class nitni_callbacks__MExplicitCall */
const struct class class_nitni_callbacks__MExplicitCall = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall___61d_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#sys */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__hash, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:MExplicitCall:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:MExplicitCall:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:MExplicitCall:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:MExplicitCall:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:MExplicitCall:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:MExplicitCall:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:MExplicitCall:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:MExplicitCall:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:MExplicitCall:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:MExplicitCall:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:MExplicitCall:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:MExplicitCall:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:MExplicitCall:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:MExplicitCall:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:MExplicitCall:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:MExplicitCall:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:MExplicitCall:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:MExplicitCall:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:MExplicitCall:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:MExplicitCall:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:MExplicitCall:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:MExplicitCall:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:MExplicitCall:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:MExplicitCall:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:MExplicitCall:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:MExplicitCall:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:MExplicitCall:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:MExplicitCall:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCall:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCall:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__MExplicitCall__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitCall:c#MExplicitCall#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__MExplicitCall__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitCall:cpp#MExplicitCall#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__recv_mtype, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#recv_mtype */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__recv_mtype_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#recv_mtype= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__mproperty, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#mproperty */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__mproperty_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#mproperty= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__from_mmodule, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#from_mmodule */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__from_mmodule_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#from_mmodule= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__fill_type_for, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#fill_type_for */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__csignature, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#csignature */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__csignature_blind, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#csignature_blind */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__init, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#init */
(nitmethod_t)VIRTUAL_compiler_ffi__MExplicitCall__compile_extern_callback, /* pointer to nitni_callbacks:MExplicitCall:compiler_ffi#MExplicitCall#compile_extern_callback */
}
};
/* allocate MExplicitCall */
val* NEW_nitni_callbacks__MExplicitCall(const struct type* type) {
val* self /* : MExplicitCall */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__MExplicitCall;
return self;
}
/* allocate MExplicitCall */
void CHECK_NEW_nitni_callbacks__MExplicitCall(val* self) {
val* var /* : MClassType */;
val* var1 /* : MProperty */;
val* var2 /* : MModule */;
var = self->attrs[COLOR_nitni_callbacks__MExplicitCall___64drecv_mtype].val; /* @recv_mtype on <self:MExplicitCall> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @recv_mtype");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 160);
exit(1);
}
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dmproperty].val; /* @mproperty on <self:MExplicitCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 162);
exit(1);
}
var2 = self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dfrom_mmodule].val; /* @from_mmodule on <self:MExplicitCall> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @from_mmodule");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 163);
exit(1);
}
}
/* runtime class nitni_callbacks__MExplicitSuper */
const struct class class_nitni_callbacks__MExplicitSuper = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper___61d_61d, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#sys */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__hash, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:MExplicitSuper:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:MExplicitSuper:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:MExplicitSuper:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:MExplicitSuper:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:MExplicitSuper:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:MExplicitSuper:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:MExplicitSuper:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:MExplicitSuper:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:MExplicitSuper:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:MExplicitSuper:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:MExplicitSuper:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitSuper:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitSuper:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__from, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#from */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__from_61d, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#from= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__csignature, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#csignature */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__init, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#init */
(nitmethod_t)VIRTUAL_compiler_ffi__MExplicitSuper__compile_extern_callback, /* pointer to nitni_callbacks:MExplicitSuper:compiler_ffi#MExplicitSuper#compile_extern_callback */
}
};
/* allocate MExplicitSuper */
val* NEW_nitni_callbacks__MExplicitSuper(const struct type* type) {
val* self /* : MExplicitSuper */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__MExplicitSuper;
return self;
}
/* allocate MExplicitSuper */
void CHECK_NEW_nitni_callbacks__MExplicitSuper(val* self) {
val* var /* : MPropDef */;
var = self->attrs[COLOR_nitni_callbacks__MExplicitSuper___64dfrom].val; /* @from on <self:MExplicitSuper> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @from");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 292);
exit(1);
}
}
/* runtime class nitni_callbacks__MExplicitCast */
const struct class class_nitni_callbacks__MExplicitCast = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast___61d_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#sys */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__hash, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:MExplicitCast:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:MExplicitCast:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:MExplicitCast:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:MExplicitCast:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:MExplicitCast:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:MExplicitCast:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:MExplicitCast:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:MExplicitCast:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:MExplicitCast:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:MExplicitCast:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:MExplicitCast:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:MExplicitCast:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:MExplicitCast:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:MExplicitCast:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:MExplicitCast:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:MExplicitCast:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:MExplicitCast:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:MExplicitCast:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:MExplicitCast:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:MExplicitCast:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:MExplicitCast:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:MExplicitCast:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:MExplicitCast:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:MExplicitCast:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:MExplicitCast:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:MExplicitCast:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:MExplicitCast:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:MExplicitCast:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCast:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCast:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitCast:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitCast:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__from, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#from */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__from_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#from= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__to, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#to */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__to_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#to= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__check_cname, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#check_cname */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__check_csignature, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#check_csignature */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__check_csignature_blind, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#check_csignature_blind */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__cast_cname, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#cast_cname */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__cast_csignature, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#cast_csignature */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__cast_csignature_blind, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#cast_csignature_blind */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__init, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#init */
(nitmethod_t)VIRTUAL_compiler_ffi__MExplicitCast__compile_extern_callbacks, /* pointer to nitni_callbacks:MExplicitCast:compiler_ffi#MExplicitCast#compile_extern_callbacks */
}
};
/* allocate MExplicitCast */
val* NEW_nitni_callbacks__MExplicitCast(const struct type* type) {
val* self /* : MExplicitCast */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__MExplicitCast;
return self;
}
/* allocate MExplicitCast */
void CHECK_NEW_nitni_callbacks__MExplicitCast(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var = self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dfrom].val; /* @from on <self:MExplicitCast> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @from");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 329);
exit(1);
}
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dto].val; /* @to on <self:MExplicitCast> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 330);
exit(1);
}
}
/* runtime class nitni_utilities__CallContext */
const struct class class_nitni_utilities__CallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_utilities:CallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_utilities:CallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_utilities:CallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_utilities:CallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_utilities:CallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_utilities:CallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_utilities:CallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_utilities:CallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_utilities:CallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_utilities:CallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_utilities:CallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_utilities:CallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_utilities:CallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_utilities:CallContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_utilities:CallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_utilities:CallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_utilities:CallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_utilities:CallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_utilities:CallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_utilities:CallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_utilities:CallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_utilities:CallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_utilities:CallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_utilities:CallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_utilities:CallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_utilities:CallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_utilities:CallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_utilities:CallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_utilities:CallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_utilities:CallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_utilities:CallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_utilities:CallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_utilities:CallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_utilities:CallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_utilities:CallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_utilities:CallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_utilities:CallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_utilities:CallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_utilities:CallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_utilities:CallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__name_mtype, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#init */
}
};
/* allocate CallContext */
val* NEW_nitni_utilities__CallContext(const struct type* type) {
val* self /* : CallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_utilities__CallContext;
return self;
}
/* allocate CallContext */
void CHECK_NEW_nitni_utilities__CallContext(val* self) {
}
/* runtime class nitni_utilities__SignatureLength */
const struct class class_nitni_utilities__SignatureLength = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_utilities:SignatureLength:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_utilities:SignatureLength:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_utilities:SignatureLength:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_utilities:SignatureLength:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_utilities:SignatureLength:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_utilities:SignatureLength:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_utilities:SignatureLength:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_utilities:SignatureLength:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_utilities:SignatureLength:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_utilities:SignatureLength:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_utilities:SignatureLength:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_utilities:SignatureLength:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_utilities:SignatureLength:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_utilities:SignatureLength:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_utilities:SignatureLength:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_utilities:SignatureLength:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_utilities:SignatureLength:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_utilities:SignatureLength:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_utilities:SignatureLength:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_utilities:SignatureLength:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_utilities:SignatureLength:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_utilities:SignatureLength:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_utilities:SignatureLength:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_utilities:SignatureLength:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_utilities:SignatureLength:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_utilities:SignatureLength:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_utilities:SignatureLength:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_utilities:SignatureLength:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_utilities:SignatureLength:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_utilities:SignatureLength:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_utilities:SignatureLength:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_utilities:SignatureLength:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_utilities:SignatureLength:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_utilities:SignatureLength:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_utilities:SignatureLength:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__SignatureLength__long, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long */
(nitmethod_t)VIRTUAL_nitni_utilities__SignatureLength__long_61d, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long= */
(nitmethod_t)VIRTUAL_nitni_utilities__SignatureLength__init, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#init */
}
};
/* allocate SignatureLength */
val* NEW_nitni_utilities__SignatureLength(const struct type* type) {
val* self /* : SignatureLength */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_utilities__SignatureLength;
return self;
}
/* allocate SignatureLength */
void CHECK_NEW_nitni_utilities__SignatureLength(val* self) {
short int var /* : Bool */;
var = self->attrs[COLOR_nitni_utilities__SignatureLength___64dlong].s; /* @long on <self:SignatureLength> */
}
/* runtime class ffi_base__FFILanguageAssignationPhase */
const struct class class_ffi_base__FFILanguageAssignationPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to ffi_base:FFILanguageAssignationPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to ffi_base:FFILanguageAssignationPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to ffi_base:FFILanguageAssignationPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_nmodule, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#process_nmodule */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_nclassdef, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#process_nclassdef */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_npropdef, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to ffi_base:FFILanguageAssignationPhase:frontend#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__languages, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#languages */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__languages_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#languages= */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node */
(nitmethod_t)VIRTUAL_c__FFILanguageAssignationPhase__c_language, /* pointer to ffi_base:FFILanguageAssignationPhase:c#FFILanguageAssignationPhase#c_language */
(nitmethod_t)VIRTUAL_c__FFILanguageAssignationPhase__c_language_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:c#FFILanguageAssignationPhase#c_language= */
(nitmethod_t)VIRTUAL_cpp__FFILanguageAssignationPhase__cpp_language, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#FFILanguageAssignationPhase#cpp_language */
(nitmethod_t)VIRTUAL_cpp__FFILanguageAssignationPhase__cpp_language_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#FFILanguageAssignationPhase#cpp_language= */
}
};
/* allocate FFILanguageAssignationPhase */
val* NEW_ffi_base__FFILanguageAssignationPhase(const struct type* type) {
val* self /* : FFILanguageAssignationPhase */;
val* var /* : Array[FFILanguage] */;
val* var1 /* : CLanguage */;
val* var2 /* : CPPLanguage */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ffi_base__FFILanguageAssignationPhase;
var = NEW_array__Array(&type_array__Arrayffi_base__FFILanguage);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[FFILanguage]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_ffi_base__FFILanguageAssignationPhase___64dlanguages].val = var; /* @languages on <self:FFILanguageAssignationPhase exact> */
var1 = NEW_c__CLanguage(&type_c__CLanguage);
((void (*)(val*, val*))(var1->class->vft[COLOR_ffi_base__FFILanguage__init]))(var1, self) /* init on <var1:CLanguage>*/;
CHECK_NEW_c__CLanguage(var1);
self->attrs[COLOR_c__FFILanguageAssignationPhase___64dc_language].val = var1; /* @c_language on <self:FFILanguageAssignationPhase exact> */
var2 = NEW_cpp__CPPLanguage(&type_cpp__CPPLanguage);
((void (*)(val*, val*))(var2->class->vft[COLOR_ffi_base__FFILanguage__init]))(var2, self) /* init on <var2:CPPLanguage>*/;
CHECK_NEW_cpp__CPPLanguage(var2);
self->attrs[COLOR_cpp__FFILanguageAssignationPhase___64dcpp_language].val = var2; /* @cpp_language on <self:FFILanguageAssignationPhase exact> */
return self;
}
/* allocate FFILanguageAssignationPhase */
void CHECK_NEW_ffi_base__FFILanguageAssignationPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:FFILanguageAssignationPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:FFILanguageAssignationPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class ffi_base__FFILanguage */
/* allocate FFILanguage */
val* NEW_ffi_base__FFILanguage(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "FFILanguage is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate FFILanguage */
void CHECK_NEW_ffi_base__FFILanguage(val* self) {
fprintf(stderr, "Runtime error: %s", "FFILanguage is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ffi_base__ExternFile */
/* allocate ExternFile */
val* NEW_ffi_base__ExternFile(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "ExternFile is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate ExternFile */
void CHECK_NEW_ffi_base__ExternFile(val* self) {
fprintf(stderr, "Runtime error: %s", "ExternFile is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class ffi_base__ForeignType */
const struct class class_ffi_base__ForeignType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to ffi_base:ForeignType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to ffi_base:ForeignType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to ffi_base:ForeignType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to ffi_base:ForeignType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to ffi_base:ForeignType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to ffi_base:ForeignType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to ffi_base:ForeignType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to ffi_base:ForeignType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to ffi_base:ForeignType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to ffi_base:ForeignType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to ffi_base:ForeignType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to ffi_base:ForeignType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to ffi_base:ForeignType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to ffi_base:ForeignType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to ffi_base:ForeignType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to ffi_base:ForeignType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to ffi_base:ForeignType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to ffi_base:ForeignType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to ffi_base:ForeignType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to ffi_base:ForeignType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to ffi_base:ForeignType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to ffi_base:ForeignType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to ffi_base:ForeignType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to ffi_base:ForeignType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to ffi_base:ForeignType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to ffi_base:ForeignType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to ffi_base:ForeignType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to ffi_base:ForeignType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to ffi_base:ForeignType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to ffi_base:ForeignType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to ffi_base:ForeignType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to ffi_base:ForeignType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to ffi_base:ForeignType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to ffi_base:ForeignType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to ffi_base:ForeignType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to ffi_base:ForeignType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to ffi_base:ForeignType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to ffi_base:ForeignType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to ffi_base:ForeignType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to ffi_base:ForeignType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to ffi_base:ForeignType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to ffi_base:ForeignType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to ffi_base:ForeignType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to ffi_base:ForeignType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to ffi_base:ForeignType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__ctype, /* pointer to ffi_base:ForeignType:ffi_base#ForeignType#ctype */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__init, /* pointer to ffi_base:ForeignType:ffi_base#ForeignType#init */
}
};
/* allocate ForeignType */
val* NEW_ffi_base__ForeignType(const struct type* type) {
val* self /* : ForeignType */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ffi_base__ForeignType;
return self;
}
/* allocate ForeignType */
void CHECK_NEW_ffi_base__ForeignType(val* self) {
}
/* runtime class c_tools__CCompilationUnit */
const struct class class_c_tools__CCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_tools:CCompilationUnit:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_tools:CCompilationUnit:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_tools:CCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_tools:CCompilationUnit:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_tools:CCompilationUnit:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_tools:CCompilationUnit:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_tools:CCompilationUnit:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_tools:CCompilationUnit:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_tools:CCompilationUnit:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_tools:CCompilationUnit:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_tools:CCompilationUnit:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_tools:CCompilationUnit:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_tools:CCompilationUnit:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_tools:CCompilationUnit:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_tools:CCompilationUnit:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_tools:CCompilationUnit:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_tools:CCompilationUnit:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_tools:CCompilationUnit:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_tools:CCompilationUnit:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_tools:CCompilationUnit:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_tools:CCompilationUnit:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_tools:CCompilationUnit:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_tools:CCompilationUnit:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_tools:CCompilationUnit:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_tools:CCompilationUnit:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_tools:CCompilationUnit:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_tools:CCompilationUnit:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_tools:CCompilationUnit:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_tools:CCompilationUnit:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_tools:CCompilationUnit:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_tools:CCompilationUnit:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_tools:CCompilationUnit:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_tools:CCompilationUnit:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_tools:CCompilationUnit:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_tools:CCompilationUnit:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_tools:CCompilationUnit:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_tools:CCompilationUnit:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_tools:CCompilationUnit:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_tools:CCompilationUnit:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_tools:CCompilationUnit:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_tools:CCompilationUnit:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_tools:CCompilationUnit:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_base= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_types= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_impl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#files= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_local_function, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#add_local_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_exported_function, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_header_core, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_body_core, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__init, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#init */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_as_impl, /* pointer to c_tools:CCompilationUnit:ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_header_to_file, /* pointer to c_tools:CCompilationUnit:ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_body_to_file, /* pointer to c_tools:CCompilationUnit:ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)VIRTUAL_compiler_ffi__CCompilationUnit__write_as_nitni, /* pointer to c_tools:CCompilationUnit:compiler_ffi#CCompilationUnit#write_as_nitni */
}
};
/* allocate CCompilationUnit */
val* NEW_c_tools__CCompilationUnit(const struct type* type) {
val* self /* : CCompilationUnit */;
val* var /* : Writer */;
val* var1 /* : Writer */;
val* var2 /* : Writer */;
val* var3 /* : Writer */;
val* var4 /* : Writer */;
val* var5 /* : Writer */;
val* var6 /* : Writer */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_tools__CCompilationUnit;
var = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var->class->vft[COLOR_compiling_writer__Writer__init]))(var) /* init on <var:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_base].val = var; /* @header_c_base on <self:CCompilationUnit exact> */
var1 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var1->class->vft[COLOR_compiling_writer__Writer__init]))(var1) /* init on <var1:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var1);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_custom].val = var1; /* @header_custom on <self:CCompilationUnit exact> */
var2 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var2->class->vft[COLOR_compiling_writer__Writer__init]))(var2) /* init on <var2:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var2);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_types].val = var2; /* @header_c_types on <self:CCompilationUnit exact> */
var3 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var3->class->vft[COLOR_compiling_writer__Writer__init]))(var3) /* init on <var3:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var3);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_decl].val = var3; /* @header_decl on <self:CCompilationUnit exact> */
var4 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var4->class->vft[COLOR_compiling_writer__Writer__init]))(var4) /* init on <var4:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var4);
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_decl].val = var4; /* @body_decl on <self:CCompilationUnit exact> */
var5 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var5->class->vft[COLOR_compiling_writer__Writer__init]))(var5) /* init on <var5:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var5);
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_custom].val = var5; /* @body_custom on <self:CCompilationUnit exact> */
var6 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var6->class->vft[COLOR_compiling_writer__Writer__init]))(var6) /* init on <var6:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var6);
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_impl].val = var6; /* @body_impl on <self:CCompilationUnit exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[String]>*/;
CHECK_NEW_array__Array(var7);
self->attrs[COLOR_c_tools__CCompilationUnit___64dfiles].val = var7; /* @files on <self:CCompilationUnit exact> */
return self;
}
/* allocate CCompilationUnit */
void CHECK_NEW_c_tools__CCompilationUnit(val* self) {
}
/* runtime class c_tools__CFunction */
const struct class class_c_tools__CFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_tools:CFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_tools:CFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_tools:CFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_tools:CFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_tools:CFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_tools:CFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_tools:CFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_tools:CFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_tools:CFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_tools:CFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_tools:CFunction:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_tools:CFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_tools:CFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_tools:CFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_tools:CFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_tools:CFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_tools:CFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_tools:CFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_tools:CFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_tools:CFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_tools:CFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_tools:CFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_tools:CFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_tools:CFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_tools:CFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_tools:CFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_tools:CFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_tools:CFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_tools:CFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_tools:CFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_tools:CFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_tools:CFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_tools:CFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_tools:CFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_tools:CFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_tools:CFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_tools:CFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_tools:CFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_tools:CFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_tools:CFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_tools:CFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_tools:CFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_tools:CFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_tools:CFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_tools:CFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_tools:CFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_tools:CFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_tools:CFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_tools:CFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_tools:CFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature, /* pointer to c_tools:CFunction:c_tools#CFunction#signature */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature_61d, /* pointer to c_tools:CFunction:c_tools#CFunction#signature= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls, /* pointer to c_tools:CFunction:c_tools#CFunction#decls */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls_61d, /* pointer to c_tools:CFunction:c_tools#CFunction#decls= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs, /* pointer to c_tools:CFunction:c_tools#CFunction#exprs */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs_61d, /* pointer to c_tools:CFunction:c_tools#CFunction#exprs= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__to_writer, /* pointer to c_tools:CFunction:c_tools#CFunction#to_writer */
(nitmethod_t)VIRTUAL_c_tools__CFunction__init, /* pointer to c_tools:CFunction:c_tools#CFunction#init */
}
};
/* allocate CFunction */
val* NEW_c_tools__CFunction(const struct type* type) {
val* self /* : CFunction */;
val* var /* : Writer */;
val* var1 /* : Writer */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_tools__CFunction;
var = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var->class->vft[COLOR_compiling_writer__Writer__init]))(var) /* init on <var:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var);
self->attrs[COLOR_c_tools__CFunction___64ddecls].val = var; /* @decls on <self:CFunction exact> */
var1 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var1->class->vft[COLOR_compiling_writer__Writer__init]))(var1) /* init on <var1:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var1);
self->attrs[COLOR_c_tools__CFunction___64dexprs].val = var1; /* @exprs on <self:CFunction exact> */
return self;
}
/* allocate CFunction */
void CHECK_NEW_c_tools__CFunction(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_c_tools__CFunction___64dsignature].val; /* @signature on <self:CFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @signature");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 82);
exit(1);
}
}
/* runtime class compiling_writer__Writer */
const struct class class_compiling_writer__Writer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to compiling_writer:Writer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to compiling_writer:Writer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to compiling_writer:Writer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to compiling_writer:Writer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to compiling_writer:Writer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to compiling_writer:Writer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to compiling_writer:Writer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to compiling_writer:Writer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to compiling_writer:Writer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to compiling_writer:Writer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to compiling_writer:Writer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to compiling_writer:Writer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to compiling_writer:Writer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to compiling_writer:Writer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to compiling_writer:Writer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to compiling_writer:Writer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to compiling_writer:Writer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to compiling_writer:Writer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to compiling_writer:Writer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to compiling_writer:Writer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to compiling_writer:Writer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to compiling_writer:Writer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to compiling_writer:Writer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to compiling_writer:Writer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to compiling_writer:Writer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to compiling_writer:Writer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to compiling_writer:Writer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to compiling_writer:Writer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to compiling_writer:Writer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to compiling_writer:Writer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to compiling_writer:Writer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to compiling_writer:Writer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to compiling_writer:Writer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to compiling_writer:Writer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to compiling_writer:Writer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to compiling_writer:Writer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to compiling_writer:Writer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to compiling_writer:Writer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to compiling_writer:Writer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to compiling_writer:Writer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to compiling_writer:Writer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to compiling_writer:Writer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to compiling_writer:Writer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to compiling_writer:Writer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to compiling_writer:Writer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to compiling_writer:Writer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to compiling_writer:Writer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to compiling_writer:Writer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to compiling_writer:Writer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to compiling_writer:Writer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__add, /* pointer to compiling_writer:Writer:compiling_writer#Writer#add */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__add_all, /* pointer to compiling_writer:Writer:compiling_writer#Writer#add_all */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__append, /* pointer to compiling_writer:Writer:compiling_writer#Writer#append */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__internal_append, /* pointer to compiling_writer:Writer:compiling_writer#Writer#internal_append */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__sub, /* pointer to compiling_writer:Writer:compiling_writer#Writer#sub */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__write_to_stream, /* pointer to compiling_writer:Writer:compiling_writer#Writer#write_to_stream */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__is_frozen, /* pointer to compiling_writer:Writer:compiling_writer#Writer#is_frozen */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__freeze, /* pointer to compiling_writer:Writer:compiling_writer#Writer#freeze */
(nitmethod_t)VIRTUAL_compiling_writer__Writer__init, /* pointer to compiling_writer:Writer:compiling_writer#Writer#init */
}
};
/* allocate Writer */
val* NEW_compiling_writer__Writer(const struct type* type) {
val* self /* : Writer */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_compiling_writer__Writer;
var = NULL;
self->attrs[COLOR_compiling_writer__Writer___first_sub_writer].val = var; /* _first_sub_writer on <self:Writer exact> */
var1 = NULL;
self->attrs[COLOR_compiling_writer__Writer___last_sub_writer].val = var1; /* _last_sub_writer on <self:Writer exact> */
var2 = NULL;
self->attrs[COLOR_compiling_writer__Writer___last_string].val = var2; /* _last_string on <self:Writer exact> */
var3 = 0;
self->attrs[COLOR_compiling_writer__Writer___is_writing].s = var3; /* _is_writing on <self:Writer exact> */
var4 = 0;
self->attrs[COLOR_compiling_writer__Writer___is_frozen].s = var4; /* _is_frozen on <self:Writer exact> */
return self;
}
/* allocate Writer */
void CHECK_NEW_compiling_writer__Writer(val* self) {
}
/* runtime class compiling_writer__WriterCoreNode */
const struct class class_compiling_writer__WriterCoreNode = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to compiling_writer:WriterCoreNode:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to compiling_writer:WriterCoreNode:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to compiling_writer:WriterCoreNode:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to compiling_writer:WriterCoreNode:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to compiling_writer:WriterCoreNode:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to compiling_writer:WriterCoreNode:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to compiling_writer:WriterCoreNode:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to compiling_writer:WriterCoreNode:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to compiling_writer:WriterCoreNode:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to compiling_writer:WriterCoreNode:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to compiling_writer:WriterCoreNode:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to compiling_writer:WriterCoreNode:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to compiling_writer:WriterCoreNode:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to compiling_writer:WriterCoreNode:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to compiling_writer:WriterCoreNode:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to compiling_writer:WriterCoreNode:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to compiling_writer:WriterCoreNode:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to compiling_writer:WriterCoreNode:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to compiling_writer:WriterCoreNode:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to compiling_writer:WriterCoreNode:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to compiling_writer:WriterCoreNode:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to compiling_writer:WriterCoreNode:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to compiling_writer:WriterCoreNode:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to compiling_writer:WriterCoreNode:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to compiling_writer:WriterCoreNode:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to compiling_writer:WriterCoreNode:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to compiling_writer:WriterCoreNode:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to compiling_writer:WriterCoreNode:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to compiling_writer:WriterCoreNode:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to compiling_writer:WriterCoreNode:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to compiling_writer:WriterCoreNode:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to compiling_writer:WriterCoreNode:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to compiling_writer:WriterCoreNode:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to compiling_writer:WriterCoreNode:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to compiling_writer:WriterCoreNode:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to compiling_writer:WriterCoreNode:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to compiling_writer:WriterCoreNode:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to compiling_writer:WriterCoreNode:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to compiling_writer:WriterCoreNode:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to compiling_writer:WriterCoreNode:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to compiling_writer:WriterCoreNode:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_compiling_writer__WriterCoreNode__internal_write_to_stream, /* pointer to compiling_writer:WriterCoreNode:compiling_writer#WriterCoreNode#internal_write_to_stream */
(nitmethod_t)VIRTUAL_compiling_writer__WriterNode__init, /* pointer to compiling_writer:WriterCoreNode:compiling_writer#WriterNode#init */
(nitmethod_t)VIRTUAL_compiling_writer__WriterCoreNode__init, /* pointer to compiling_writer:WriterCoreNode:compiling_writer#WriterCoreNode#init */
}
};
/* allocate WriterCoreNode */
val* NEW_compiling_writer__WriterCoreNode(const struct type* type) {
val* self /* : WriterCoreNode */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_compiling_writer__WriterCoreNode;
var = NULL;
self->attrs[COLOR_compiling_writer__WriterNode___next_writer].val = var; /* _next_writer on <self:WriterCoreNode exact> */
return self;
}
/* allocate WriterCoreNode */
void CHECK_NEW_compiling_writer__WriterCoreNode(val* self) {
val* var /* : Writer */;
var = self->attrs[COLOR_compiling_writer__WriterCoreNode___writer].val; /* _writer on <self:WriterCoreNode> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _writer");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 122);
exit(1);
}
}
/* runtime class compiling_writer__WriterStrings */
const struct class class_compiling_writer__WriterStrings = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to compiling_writer:WriterStrings:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to compiling_writer:WriterStrings:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to compiling_writer:WriterStrings:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to compiling_writer:WriterStrings:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to compiling_writer:WriterStrings:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to compiling_writer:WriterStrings:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to compiling_writer:WriterStrings:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to compiling_writer:WriterStrings:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to compiling_writer:WriterStrings:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to compiling_writer:WriterStrings:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to compiling_writer:WriterStrings:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to compiling_writer:WriterStrings:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to compiling_writer:WriterStrings:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to compiling_writer:WriterStrings:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to compiling_writer:WriterStrings:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to compiling_writer:WriterStrings:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to compiling_writer:WriterStrings:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to compiling_writer:WriterStrings:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to compiling_writer:WriterStrings:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to compiling_writer:WriterStrings:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to compiling_writer:WriterStrings:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to compiling_writer:WriterStrings:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to compiling_writer:WriterStrings:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to compiling_writer:WriterStrings:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to compiling_writer:WriterStrings:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to compiling_writer:WriterStrings:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to compiling_writer:WriterStrings:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to compiling_writer:WriterStrings:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to compiling_writer:WriterStrings:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to compiling_writer:WriterStrings:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to compiling_writer:WriterStrings:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to compiling_writer:WriterStrings:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to compiling_writer:WriterStrings:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to compiling_writer:WriterStrings:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to compiling_writer:WriterStrings:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to compiling_writer:WriterStrings:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to compiling_writer:WriterStrings:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to compiling_writer:WriterStrings:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to compiling_writer:WriterStrings:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to compiling_writer:WriterStrings:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to compiling_writer:WriterStrings:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to compiling_writer:WriterStrings:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to compiling_writer:WriterStrings:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to compiling_writer:WriterStrings:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to compiling_writer:WriterStrings:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to compiling_writer:WriterStrings:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to compiling_writer:WriterStrings:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to compiling_writer:WriterStrings:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to compiling_writer:WriterStrings:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to compiling_writer:WriterStrings:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_compiling_writer__WriterStrings__internal_write_to_stream, /* pointer to compiling_writer:WriterStrings:compiling_writer#WriterStrings#internal_write_to_stream */
(nitmethod_t)VIRTUAL_compiling_writer__WriterNode__init, /* pointer to compiling_writer:WriterStrings:compiling_writer#WriterNode#init */
(nitmethod_t)VIRTUAL_compiling_writer__WriterStrings__init, /* pointer to compiling_writer:WriterStrings:compiling_writer#WriterStrings#init */
}
};
/* allocate WriterStrings */
val* NEW_compiling_writer__WriterStrings(const struct type* type) {
val* self /* : WriterStrings */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_compiling_writer__WriterStrings;
var = NULL;
self->attrs[COLOR_compiling_writer__WriterNode___next_writer].val = var; /* _next_writer on <self:WriterStrings exact> */
var1 = NULL;
self->attrs[COLOR_compiling_writer__WriterStrings___next].val = var1; /* _next on <self:WriterStrings exact> */
return self;
}
/* allocate WriterStrings */
void CHECK_NEW_compiling_writer__WriterStrings(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_compiling_writer__WriterStrings___string].val; /* _string on <self:WriterStrings> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "src/compiling_writer.nit", 132);
exit(1);
}
}
/* runtime class extern_classes__ExternClassesTypingPhaseAst */
const struct class class_extern_classes__ExternClassesTypingPhaseAst = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to extern_classes:ExternClassesTypingPhaseAst:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to extern_classes:ExternClassesTypingPhaseAst:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to extern_classes:ExternClassesTypingPhaseAst:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_extern_classes__ExternClassesTypingPhaseAst__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:extern_classes#ExternClassesTypingPhaseAst#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:frontend#Phase#process_mainmodule */
}
};
/* allocate ExternClassesTypingPhaseAst */
val* NEW_extern_classes__ExternClassesTypingPhaseAst(const struct type* type) {
val* self /* : ExternClassesTypingPhaseAst */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_extern_classes__ExternClassesTypingPhaseAst;
return self;
}
/* allocate ExternClassesTypingPhaseAst */
void CHECK_NEW_extern_classes__ExternClassesTypingPhaseAst(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ExternClassesTypingPhaseAst> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ExternClassesTypingPhaseAst> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class extern_classes__ExternClassesTypingPhaseModel */
const struct class class_extern_classes__ExternClassesTypingPhaseModel = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to extern_classes:ExternClassesTypingPhaseModel:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to extern_classes:ExternClassesTypingPhaseModel:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to extern_classes:ExternClassesTypingPhaseModel:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_extern_classes__ExternClassesTypingPhaseModel__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:extern_classes#ExternClassesTypingPhaseModel#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:frontend#Phase#process_mainmodule */
}
};
/* allocate ExternClassesTypingPhaseModel */
val* NEW_extern_classes__ExternClassesTypingPhaseModel(const struct type* type) {
val* self /* : ExternClassesTypingPhaseModel */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_extern_classes__ExternClassesTypingPhaseModel;
return self;
}
/* allocate ExternClassesTypingPhaseModel */
void CHECK_NEW_extern_classes__ExternClassesTypingPhaseModel(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ExternClassesTypingPhaseModel> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ExternClassesTypingPhaseModel> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class header_dependency__HeaderDependancyPhase */
const struct class class_header_dependency__HeaderDependancyPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to header_dependency:HeaderDependancyPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to header_dependency:HeaderDependancyPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to header_dependency:HeaderDependancyPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to header_dependency:HeaderDependancyPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to header_dependency:HeaderDependancyPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to header_dependency:HeaderDependancyPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to header_dependency:HeaderDependancyPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to header_dependency:HeaderDependancyPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to header_dependency:HeaderDependancyPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to header_dependency:HeaderDependancyPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to header_dependency:HeaderDependancyPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_header_dependency__HeaderDependancyPhase__process_nmodule, /* pointer to header_dependency:HeaderDependancyPhase:header_dependency#HeaderDependancyPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to header_dependency:HeaderDependancyPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate HeaderDependancyPhase */
val* NEW_header_dependency__HeaderDependancyPhase(const struct type* type) {
val* self /* : HeaderDependancyPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_header_dependency__HeaderDependancyPhase;
return self;
}
/* allocate HeaderDependancyPhase */
void CHECK_NEW_header_dependency__HeaderDependancyPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:HeaderDependancyPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:HeaderDependancyPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class c__CLanguage */
const struct class class_c__CLanguage = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:CLanguage:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:CLanguage:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:CLanguage:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:CLanguage:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:CLanguage:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:CLanguage:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:CLanguage:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:CLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:CLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:CLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:CLanguage:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:CLanguage:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:CLanguage:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:CLanguage:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:CLanguage:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:CLanguage:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:CLanguage:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:CLanguage:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:CLanguage:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:CLanguage:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:CLanguage:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:CLanguage:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:CLanguage:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:CLanguage:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:CLanguage:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:CLanguage:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:CLanguage:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:CLanguage:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:CLanguage:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:CLanguage:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:CLanguage:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:CLanguage:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:CLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:CLanguage:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:CLanguage:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:CLanguage:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:CLanguage:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:CLanguage:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:CLanguage:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:CLanguage:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:CLanguage:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:CLanguage:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:CLanguage:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:CLanguage:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:CLanguage:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:CLanguage:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:CLanguage:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:CLanguage:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:CLanguage:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:CLanguage:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguage__init, /* pointer to c:CLanguage:ffi_base#FFILanguage#init */
(nitmethod_t)VIRTUAL_c__CLanguage__identify_language, /* pointer to c:CLanguage:c#CLanguage#identify_language */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_module_block, /* pointer to c:CLanguage:c#CLanguage#compile_module_block */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_extern_method, /* pointer to c:CLanguage:c#CLanguage#compile_extern_method */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_extern_class, /* pointer to c:CLanguage:c#CLanguage#compile_extern_class */
(nitmethod_t)VIRTUAL_c__CLanguage__get_ftype, /* pointer to c:CLanguage:c#CLanguage#get_ftype */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_callback, /* pointer to c:CLanguage:c#CLanguage#compile_callback */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguage__compile_to_files, /* pointer to c:CLanguage:ffi_base#FFILanguage#compile_to_files */
}
};
/* allocate CLanguage */
val* NEW_c__CLanguage(const struct type* type) {
val* self /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__CLanguage;
return self;
}
/* allocate CLanguage */
void CHECK_NEW_c__CLanguage(val* self) {
}
/* runtime class c__ExternCFile */
const struct class class_c__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ExternCFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ExternCFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ExternCFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_c__ExternCFile___61d_61d, /* pointer to c:ExternCFile:c#ExternCFile#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ExternCFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ExternCFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ExternCFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ExternCFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ExternCFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_c__ExternCFile__hash, /* pointer to c:ExternCFile:c#ExternCFile#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ExternCFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ExternCFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ExternCFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ExternCFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ExternCFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ExternCFile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ExternCFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ExternCFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ExternCFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ExternCFile:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ExternCFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ExternCFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ExternCFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ExternCFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ExternCFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ExternCFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ExternCFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ExternCFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ExternCFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ExternCFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ExternCFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ExternCFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ExternCFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ExternCFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ExternCFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ExternCFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ExternCFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ExternCFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ExternCFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ExternCFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ExternCFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ExternCFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ExternCFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ExternCFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ExternCFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ExternCFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ExternCFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ExternCFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ExternCFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ExternCFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename, /* pointer to c:ExternCFile:ffi_base#ExternFile#filename */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename_61d, /* pointer to c:ExternCFile:ffi_base#ExternFile#filename= */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__makefile_rule_name, /* pointer to c:ExternCFile:ffi_base#ExternFile#makefile_rule_name */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__makefile_rule_content, /* pointer to c:ExternCFile:ffi_base#ExternFile#makefile_rule_content */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__init, /* pointer to c:ExternCFile:ffi_base#ExternFile#init */
(nitmethod_t)VIRTUAL_c__ExternCFile__init, /* pointer to c:ExternCFile:c#ExternCFile#init */
(nitmethod_t)VIRTUAL_c__ExternCFile__cflags, /* pointer to c:ExternCFile:c#ExternCFile#cflags */
(nitmethod_t)VIRTUAL_c__ExternCFile__cflags_61d, /* pointer to c:ExternCFile:c#ExternCFile#cflags= */
}
};
/* allocate ExternCFile */
val* NEW_c__ExternCFile(const struct type* type) {
val* self /* : ExternCFile */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ExternCFile;
return self;
}
/* allocate ExternCFile */
void CHECK_NEW_c__ExternCFile(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var = self->attrs[COLOR_ffi_base__ExternFile___64dfilename].val; /* @filename on <self:ExternCFile> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @filename");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 132);
exit(1);
}
var1 = self->attrs[COLOR_c__ExternCFile___64dcflags].val; /* @cflags on <self:ExternCFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cflags");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 94);
exit(1);
}
}
/* runtime class c__ForeignCType */
const struct class class_c__ForeignCType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ForeignCType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ForeignCType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ForeignCType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:ForeignCType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ForeignCType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ForeignCType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ForeignCType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ForeignCType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ForeignCType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:ForeignCType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ForeignCType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ForeignCType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ForeignCType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ForeignCType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ForeignCType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ForeignCType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ForeignCType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ForeignCType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ForeignCType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ForeignCType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ForeignCType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ForeignCType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ForeignCType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ForeignCType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ForeignCType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ForeignCType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ForeignCType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ForeignCType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ForeignCType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ForeignCType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ForeignCType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ForeignCType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ForeignCType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ForeignCType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ForeignCType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ForeignCType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ForeignCType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ForeignCType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ForeignCType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ForeignCType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ForeignCType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ForeignCType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ForeignCType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ForeignCType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ForeignCType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ForeignCType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ForeignCType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ForeignCType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ForeignCType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ForeignCType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__ForeignCType__ctype, /* pointer to c:ForeignCType:c#ForeignCType#ctype */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__init, /* pointer to c:ForeignCType:ffi_base#ForeignType#init */
(nitmethod_t)VIRTUAL_c__ForeignCType__ctype_61d, /* pointer to c:ForeignCType:c#ForeignCType#ctype= */
(nitmethod_t)VIRTUAL_c__ForeignCType__init, /* pointer to c:ForeignCType:c#ForeignCType#init */
}
};
/* allocate ForeignCType */
val* NEW_c__ForeignCType(const struct type* type) {
val* self /* : ForeignCType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ForeignCType;
return self;
}
/* allocate ForeignCType */
void CHECK_NEW_c__ForeignCType(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_c__ForeignCType___64dctype].val; /* @ctype on <self:ForeignCType> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @ctype");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 104);
exit(1);
}
}
/* runtime class c__CCallContext */
/* allocate CCallContext */
val* NEW_c__CCallContext(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "CCallContext is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate CCallContext */
void CHECK_NEW_c__CCallContext(val* self) {
fprintf(stderr, "Runtime error: %s", "CCallContext is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class c__ToCCallContext */
const struct class class_c__ToCCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ToCCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ToCCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ToCCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:ToCCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ToCCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ToCCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ToCCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ToCCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ToCCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:ToCCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ToCCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ToCCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ToCCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ToCCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ToCCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ToCCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ToCCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ToCCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ToCCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ToCCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ToCCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ToCCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ToCCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ToCCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ToCCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ToCCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ToCCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ToCCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ToCCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ToCCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ToCCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ToCCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ToCCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ToCCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ToCCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ToCCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ToCCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ToCCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ToCCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ToCCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ToCCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ToCCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ToCCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ToCCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ToCCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ToCCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ToCCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ToCCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ToCCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ToCCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__ToCCallContext__name_mtype, /* pointer to c:ToCCallContext:c#ToCCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to c:ToCCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to c:ToCCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to c:ToCCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_c__CCallContext__init, /* pointer to c:ToCCallContext:c#CCallContext#init */
(nitmethod_t)VIRTUAL_c__ToCCallContext__init, /* pointer to c:ToCCallContext:c#ToCCallContext#init */
}
};
/* allocate ToCCallContext */
val* NEW_c__ToCCallContext(const struct type* type) {
val* self /* : ToCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ToCCallContext;
return self;
}
/* allocate ToCCallContext */
void CHECK_NEW_c__ToCCallContext(val* self) {
}
/* runtime class c__FromCCallContext */
const struct class class_c__FromCCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:FromCCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:FromCCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:FromCCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:FromCCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:FromCCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:FromCCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:FromCCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:FromCCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:FromCCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:FromCCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:FromCCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:FromCCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:FromCCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:FromCCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:FromCCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:FromCCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:FromCCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:FromCCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:FromCCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:FromCCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:FromCCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:FromCCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:FromCCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:FromCCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:FromCCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:FromCCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:FromCCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:FromCCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:FromCCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:FromCCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:FromCCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:FromCCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:FromCCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:FromCCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:FromCCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:FromCCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:FromCCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:FromCCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:FromCCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:FromCCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:FromCCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:FromCCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:FromCCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:FromCCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:FromCCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:FromCCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:FromCCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:FromCCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:FromCCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:FromCCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__FromCCallContext__name_mtype, /* pointer to c:FromCCallContext:c#FromCCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to c:FromCCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to c:FromCCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to c:FromCCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_c__CCallContext__init, /* pointer to c:FromCCallContext:c#CCallContext#init */
(nitmethod_t)VIRTUAL_c__FromCCallContext__init, /* pointer to c:FromCCallContext:c#FromCCallContext#init */
}
};
/* allocate FromCCallContext */
val* NEW_c__FromCCallContext(const struct type* type) {
val* self /* : FromCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__FromCCallContext;
return self;
}
/* allocate FromCCallContext */
void CHECK_NEW_c__FromCCallContext(val* self) {
}
/* runtime class c__ExternCFunction */
const struct class class_c__ExternCFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ExternCFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ExternCFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ExternCFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:ExternCFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ExternCFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ExternCFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ExternCFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ExternCFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ExternCFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:ExternCFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ExternCFunction:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ExternCFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ExternCFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ExternCFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ExternCFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ExternCFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ExternCFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ExternCFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ExternCFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ExternCFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ExternCFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ExternCFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ExternCFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ExternCFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ExternCFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ExternCFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ExternCFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ExternCFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ExternCFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ExternCFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ExternCFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ExternCFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ExternCFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ExternCFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ExternCFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ExternCFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ExternCFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ExternCFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ExternCFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ExternCFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ExternCFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ExternCFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ExternCFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ExternCFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ExternCFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ExternCFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ExternCFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ExternCFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ExternCFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ExternCFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature, /* pointer to c:ExternCFunction:c_tools#CFunction#signature */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature_61d, /* pointer to c:ExternCFunction:c_tools#CFunction#signature= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls, /* pointer to c:ExternCFunction:c_tools#CFunction#decls */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls_61d, /* pointer to c:ExternCFunction:c_tools#CFunction#decls= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs, /* pointer to c:ExternCFunction:c_tools#CFunction#exprs */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs_61d, /* pointer to c:ExternCFunction:c_tools#CFunction#exprs= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__to_writer, /* pointer to c:ExternCFunction:c_tools#CFunction#to_writer */
(nitmethod_t)VIRTUAL_c_tools__CFunction__init, /* pointer to c:ExternCFunction:c_tools#CFunction#init */
(nitmethod_t)VIRTUAL_c__ExternCFunction__method, /* pointer to c:ExternCFunction:c#ExternCFunction#method */
(nitmethod_t)VIRTUAL_c__ExternCFunction__method_61d, /* pointer to c:ExternCFunction:c#ExternCFunction#method= */
(nitmethod_t)VIRTUAL_c__ExternCFunction__init, /* pointer to c:ExternCFunction:c#ExternCFunction#init */
}
};
/* allocate ExternCFunction */
val* NEW_c__ExternCFunction(const struct type* type) {
val* self /* : ExternCFunction */;
val* var /* : Writer */;
val* var1 /* : Writer */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ExternCFunction;
var = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var->class->vft[COLOR_compiling_writer__Writer__init]))(var) /* init on <var:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var);
self->attrs[COLOR_c_tools__CFunction___64ddecls].val = var; /* @decls on <self:ExternCFunction exact> */
var1 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var1->class->vft[COLOR_compiling_writer__Writer__init]))(var1) /* init on <var1:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var1);
self->attrs[COLOR_c_tools__CFunction___64dexprs].val = var1; /* @exprs on <self:ExternCFunction exact> */
return self;
}
/* allocate ExternCFunction */
void CHECK_NEW_c__ExternCFunction(val* self) {
val* var /* : String */;
val* var1 /* : AExternPropdef */;
var = self->attrs[COLOR_c_tools__CFunction___64dsignature].val; /* @signature on <self:ExternCFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @signature");
fprintf(stderr, " (%s:%d)\n", "src/c_tools.nit", 82);
exit(1);
}
var1 = self->attrs[COLOR_c__ExternCFunction___64dmethod].val; /* @method on <self:ExternCFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @method");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c.nit", 158);
exit(1);
}
}
/* runtime class pkgconfig__PkgconfigPhase */
const struct class class_pkgconfig__PkgconfigPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to pkgconfig:PkgconfigPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to pkgconfig:PkgconfigPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to pkgconfig:PkgconfigPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to pkgconfig:PkgconfigPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to pkgconfig:PkgconfigPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to pkgconfig:PkgconfigPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to pkgconfig:PkgconfigPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to pkgconfig:PkgconfigPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to pkgconfig:PkgconfigPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to pkgconfig:PkgconfigPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to pkgconfig:PkgconfigPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to pkgconfig:PkgconfigPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to pkgconfig:PkgconfigPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to pkgconfig:PkgconfigPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to pkgconfig:PkgconfigPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to pkgconfig:PkgconfigPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to pkgconfig:PkgconfigPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to pkgconfig:PkgconfigPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to pkgconfig:PkgconfigPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to pkgconfig:PkgconfigPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to pkgconfig:PkgconfigPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to pkgconfig:PkgconfigPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to pkgconfig:PkgconfigPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to pkgconfig:PkgconfigPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to pkgconfig:PkgconfigPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to pkgconfig:PkgconfigPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to pkgconfig:PkgconfigPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to pkgconfig:PkgconfigPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to pkgconfig:PkgconfigPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to pkgconfig:PkgconfigPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_pkgconfig__PkgconfigPhase__process_annotated_node, /* pointer to pkgconfig:PkgconfigPhase:pkgconfig#PkgconfigPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to pkgconfig:PkgconfigPhase:frontend#Phase#process_mainmodule */
}
};
/* allocate PkgconfigPhase */
val* NEW_pkgconfig__PkgconfigPhase(const struct type* type) {
val* self /* : PkgconfigPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_pkgconfig__PkgconfigPhase;
return self;
}
/* allocate PkgconfigPhase */
void CHECK_NEW_pkgconfig__PkgconfigPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:PkgconfigPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:PkgconfigPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class c_compiler_options__CCompilerOptionsPhase */
const struct class class_c_compiler_options__CCompilerOptionsPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_compiler_options:CCompilerOptionsPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_compiler_options:CCompilerOptionsPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_compiler_options:CCompilerOptionsPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_compiler_options:CCompilerOptionsPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_compiler_options:CCompilerOptionsPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_annotated_node, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to c_compiler_options:CCompilerOptionsPhase:frontend#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#compiler_annotation_name */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__linker_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#linker_annotation_name */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#cpp_compiler_annotation_name */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_c_compiler_annotation, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_c_compiler_annotation */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_c_linker_annotation, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_c_linker_annotation */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_cpp_compiler_annotation, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_cpp_compiler_annotation */
}
};
/* allocate CCompilerOptionsPhase */
val* NEW_c_compiler_options__CCompilerOptionsPhase(const struct type* type) {
val* self /* : CCompilerOptionsPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_compiler_options__CCompilerOptionsPhase;
return self;
}
/* allocate CCompilerOptionsPhase */
void CHECK_NEW_c_compiler_options__CCompilerOptionsPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:CCompilerOptionsPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:CCompilerOptionsPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class c_compiler_options__DirectCCompilerOption */
const struct class class_c_compiler_options__DirectCCompilerOption = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_compiler_options:DirectCCompilerOption:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_compiler_options:DirectCCompilerOption:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_compiler_options:DirectCCompilerOption:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_compiler_options:DirectCCompilerOption:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_compiler_options:DirectCCompilerOption:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOption__init, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#CCompilerOption#init */
(nitmethod_t)VIRTUAL_c_compiler_options__DirectCCompilerOption__option, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#option */
(nitmethod_t)VIRTUAL_c_compiler_options__DirectCCompilerOption__option_61d, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#option= */
(nitmethod_t)VIRTUAL_c_compiler_options__DirectCCompilerOption__init, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#init */
}
};
/* allocate DirectCCompilerOption */
val* NEW_c_compiler_options__DirectCCompilerOption(const struct type* type) {
val* self /* : DirectCCompilerOption */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_compiler_options__DirectCCompilerOption;
return self;
}
/* allocate DirectCCompilerOption */
void CHECK_NEW_c_compiler_options__DirectCCompilerOption(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_c_compiler_options__DirectCCompilerOption___64doption].val; /* @option on <self:DirectCCompilerOption> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @option");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 173);
exit(1);
}
}
/* runtime class c_compiler_options__ExecCCompilerOption */
const struct class class_c_compiler_options__ExecCCompilerOption = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_compiler_options:ExecCCompilerOption:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_compiler_options:ExecCCompilerOption:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_compiler_options:ExecCCompilerOption:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_compiler_options:ExecCCompilerOption:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_compiler_options:ExecCCompilerOption:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOption__init, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#CCompilerOption#init */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__command, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#command */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__command_61d, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#command= */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__exec_node, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#exec_node */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__exec_node_61d, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#exec_node= */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__init, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#init */
}
};
/* allocate ExecCCompilerOption */
val* NEW_c_compiler_options__ExecCCompilerOption(const struct type* type) {
val* self /* : ExecCCompilerOption */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_compiler_options__ExecCCompilerOption;
return self;
}
/* allocate ExecCCompilerOption */
void CHECK_NEW_c_compiler_options__ExecCCompilerOption(val* self) {
val* var /* : Array[String] */;
val* var1 /* : ACallExpr */;
var = self->attrs[COLOR_c_compiler_options__ExecCCompilerOption___64dcommand].val; /* @command on <self:ExecCCompilerOption> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @command");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 180);
exit(1);
}
var1 = self->attrs[COLOR_c_compiler_options__ExecCCompilerOption___64dexec_node].val; /* @exec_node on <self:ExecCCompilerOption> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @exec_node");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 181);
exit(1);
}
}
/* runtime class cpp__CPPLanguage */
const struct class class_cpp__CPPLanguage = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:CPPLanguage:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:CPPLanguage:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:CPPLanguage:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:CPPLanguage:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:CPPLanguage:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:CPPLanguage:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:CPPLanguage:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:CPPLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:CPPLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:CPPLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:CPPLanguage:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:CPPLanguage:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:CPPLanguage:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:CPPLanguage:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:CPPLanguage:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:CPPLanguage:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:CPPLanguage:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:CPPLanguage:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:CPPLanguage:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:CPPLanguage:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:CPPLanguage:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:CPPLanguage:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:CPPLanguage:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:CPPLanguage:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:CPPLanguage:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:CPPLanguage:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:CPPLanguage:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:CPPLanguage:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:CPPLanguage:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:CPPLanguage:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:CPPLanguage:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:CPPLanguage:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:CPPLanguage:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:CPPLanguage:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:CPPLanguage:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:CPPLanguage:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:CPPLanguage:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:CPPLanguage:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:CPPLanguage:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:CPPLanguage:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:CPPLanguage:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:CPPLanguage:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:CPPLanguage:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:CPPLanguage:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:CPPLanguage:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguage__init, /* pointer to cpp:CPPLanguage:ffi_base#FFILanguage#init */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__identify_language, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#identify_language */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_module_block, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_module_block */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_extern_method, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_extern_method */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_extern_class, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_extern_class */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__get_ftype, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#get_ftype */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_callback, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_callback */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_to_files, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_to_files */
}
};
/* allocate CPPLanguage */
val* NEW_cpp__CPPLanguage(const struct type* type) {
val* self /* : CPPLanguage */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__CPPLanguage;
return self;
}
/* allocate CPPLanguage */
void CHECK_NEW_cpp__CPPLanguage(val* self) {
}
/* runtime class cpp__CPPCompilationUnit */
const struct class class_cpp__CPPCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:CPPCompilationUnit:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:CPPCompilationUnit:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:CPPCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:CPPCompilationUnit:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:CPPCompilationUnit:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:CPPCompilationUnit:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:CPPCompilationUnit:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:CPPCompilationUnit:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:CPPCompilationUnit:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:CPPCompilationUnit:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:CPPCompilationUnit:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:CPPCompilationUnit:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:CPPCompilationUnit:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:CPPCompilationUnit:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:CPPCompilationUnit:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:CPPCompilationUnit:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:CPPCompilationUnit:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:CPPCompilationUnit:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:CPPCompilationUnit:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:CPPCompilationUnit:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:CPPCompilationUnit:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:CPPCompilationUnit:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:CPPCompilationUnit:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:CPPCompilationUnit:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:CPPCompilationUnit:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:CPPCompilationUnit:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:CPPCompilationUnit:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:CPPCompilationUnit:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:CPPCompilationUnit:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:CPPCompilationUnit:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:CPPCompilationUnit:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:CPPCompilationUnit:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:CPPCompilationUnit:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:CPPCompilationUnit:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:CPPCompilationUnit:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:CPPCompilationUnit:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:CPPCompilationUnit:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:CPPCompilationUnit:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:CPPCompilationUnit:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:CPPCompilationUnit:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_base= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_types= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_impl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#files= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_local_function, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#add_local_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_exported_function, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_header_core, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_body_core, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__init, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#init */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_as_impl, /* pointer to cpp:CPPCompilationUnit:ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_header_to_file, /* pointer to cpp:CPPCompilationUnit:ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_body_to_file, /* pointer to cpp:CPPCompilationUnit:ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)VIRTUAL_compiler_ffi__CCompilationUnit__write_as_nitni, /* pointer to cpp:CPPCompilationUnit:compiler_ffi#CCompilationUnit#write_as_nitni */
(nitmethod_t)VIRTUAL_cpp__CPPCompilationUnit__write_to_files, /* pointer to cpp:CPPCompilationUnit:cpp#CPPCompilationUnit#write_to_files */
(nitmethod_t)VIRTUAL_cpp__CPPCompilationUnit__init, /* pointer to cpp:CPPCompilationUnit:cpp#CPPCompilationUnit#init */
}
};
/* allocate CPPCompilationUnit */
val* NEW_cpp__CPPCompilationUnit(const struct type* type) {
val* self /* : CPPCompilationUnit */;
val* var /* : Writer */;
val* var1 /* : Writer */;
val* var2 /* : Writer */;
val* var3 /* : Writer */;
val* var4 /* : Writer */;
val* var5 /* : Writer */;
val* var6 /* : Writer */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__CPPCompilationUnit;
var = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var->class->vft[COLOR_compiling_writer__Writer__init]))(var) /* init on <var:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_base].val = var; /* @header_c_base on <self:CPPCompilationUnit exact> */
var1 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var1->class->vft[COLOR_compiling_writer__Writer__init]))(var1) /* init on <var1:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var1);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_custom].val = var1; /* @header_custom on <self:CPPCompilationUnit exact> */
var2 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var2->class->vft[COLOR_compiling_writer__Writer__init]))(var2) /* init on <var2:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var2);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_types].val = var2; /* @header_c_types on <self:CPPCompilationUnit exact> */
var3 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var3->class->vft[COLOR_compiling_writer__Writer__init]))(var3) /* init on <var3:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var3);
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_decl].val = var3; /* @header_decl on <self:CPPCompilationUnit exact> */
var4 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var4->class->vft[COLOR_compiling_writer__Writer__init]))(var4) /* init on <var4:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var4);
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_decl].val = var4; /* @body_decl on <self:CPPCompilationUnit exact> */
var5 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var5->class->vft[COLOR_compiling_writer__Writer__init]))(var5) /* init on <var5:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var5);
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_custom].val = var5; /* @body_custom on <self:CPPCompilationUnit exact> */
var6 = NEW_compiling_writer__Writer(&type_compiling_writer__Writer);
((void (*)(val*))(var6->class->vft[COLOR_compiling_writer__Writer__init]))(var6) /* init on <var6:Writer>*/;
CHECK_NEW_compiling_writer__Writer(var6);
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_impl].val = var6; /* @body_impl on <self:CPPCompilationUnit exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[String]>*/;
CHECK_NEW_array__Array(var7);
self->attrs[COLOR_c_tools__CCompilationUnit___64dfiles].val = var7; /* @files on <self:CPPCompilationUnit exact> */
return self;
}
/* allocate CPPCompilationUnit */
void CHECK_NEW_cpp__CPPCompilationUnit(val* self) {
}
/* runtime class cpp__ExternCppFile */
const struct class class_cpp__ExternCppFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:ExternCppFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:ExternCppFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:ExternCppFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:ExternCppFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:ExternCppFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:ExternCppFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:ExternCppFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:ExternCppFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:ExternCppFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:ExternCppFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:ExternCppFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:ExternCppFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:ExternCppFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:ExternCppFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:ExternCppFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:ExternCppFile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:ExternCppFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:ExternCppFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:ExternCppFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:ExternCppFile:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:ExternCppFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:ExternCppFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:ExternCppFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:ExternCppFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:ExternCppFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:ExternCppFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:ExternCppFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:ExternCppFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:ExternCppFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:ExternCppFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:ExternCppFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:ExternCppFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:ExternCppFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:ExternCppFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:ExternCppFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:ExternCppFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:ExternCppFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:ExternCppFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:ExternCppFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:ExternCppFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:ExternCppFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:ExternCppFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:ExternCppFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:ExternCppFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:ExternCppFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename, /* pointer to cpp:ExternCppFile:ffi_base#ExternFile#filename */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename_61d, /* pointer to cpp:ExternCppFile:ffi_base#ExternFile#filename= */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__makefile_rule_name, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#makefile_rule_name */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__makefile_rule_content, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#makefile_rule_content */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__init, /* pointer to cpp:ExternCppFile:ffi_base#ExternFile#init */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__amodule, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#amodule */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__amodule_61d, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#amodule= */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__init, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#init */
}
};
/* allocate ExternCppFile */
val* NEW_cpp__ExternCppFile(const struct type* type) {
val* self /* : ExternCppFile */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__ExternCppFile;
return self;
}
/* allocate ExternCppFile */
void CHECK_NEW_cpp__ExternCppFile(val* self) {
val* var /* : String */;
val* var1 /* : AModule */;
var = self->attrs[COLOR_ffi_base__ExternFile___64dfilename].val; /* @filename on <self:ExternCppFile> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @filename");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 132);
exit(1);
}
var1 = self->attrs[COLOR_cpp__ExternCppFile___64damodule].val; /* @amodule on <self:ExternCppFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @amodule");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 175);
exit(1);
}
}
/* runtime class cpp__ForeignCppType */
const struct class class_cpp__ForeignCppType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:ForeignCppType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:ForeignCppType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:ForeignCppType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:ForeignCppType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:ForeignCppType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:ForeignCppType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:ForeignCppType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:ForeignCppType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:ForeignCppType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:ForeignCppType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:ForeignCppType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:ForeignCppType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:ForeignCppType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:ForeignCppType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:ForeignCppType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:ForeignCppType:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:ForeignCppType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:ForeignCppType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:ForeignCppType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:ForeignCppType:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:ForeignCppType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:ForeignCppType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:ForeignCppType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:ForeignCppType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:ForeignCppType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:ForeignCppType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:ForeignCppType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:ForeignCppType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:ForeignCppType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:ForeignCppType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:ForeignCppType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:ForeignCppType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:ForeignCppType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:ForeignCppType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:ForeignCppType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:ForeignCppType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:ForeignCppType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:ForeignCppType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:ForeignCppType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:ForeignCppType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:ForeignCppType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:ForeignCppType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:ForeignCppType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:ForeignCppType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:ForeignCppType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__ctype, /* pointer to cpp:ForeignCppType:ffi_base#ForeignType#ctype */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__init, /* pointer to cpp:ForeignCppType:ffi_base#ForeignType#init */
(nitmethod_t)VIRTUAL_cpp__ForeignCppType__cpp_type, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#cpp_type */
(nitmethod_t)VIRTUAL_cpp__ForeignCppType__cpp_type_61d, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#cpp_type= */
(nitmethod_t)VIRTUAL_cpp__ForeignCppType__init, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#init */
}
};
/* allocate ForeignCppType */
val* NEW_cpp__ForeignCppType(const struct type* type) {
val* self /* : ForeignCppType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__ForeignCppType;
return self;
}
/* allocate ForeignCppType */
void CHECK_NEW_cpp__ForeignCppType(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_cpp__ForeignCppType___64dcpp_type].val; /* @cpp_type on <self:ForeignCppType> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cpp_type");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 189);
exit(1);
}
}
/* runtime class cpp__CppCallContext */
const struct class class_cpp__CppCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:CppCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:CppCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:CppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:CppCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:CppCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:CppCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:CppCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:CppCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:CppCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:CppCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:CppCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:CppCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:CppCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:CppCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:CppCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:CppCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:CppCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:CppCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:CppCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:CppCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:CppCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:CppCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:CppCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:CppCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:CppCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:CppCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:CppCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:CppCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:CppCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:CppCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:CppCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:CppCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:CppCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:CppCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:CppCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:CppCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:CppCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:CppCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:CppCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:CppCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:CppCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:CppCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:CppCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:CppCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:CppCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:CppCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:CppCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:CppCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:CppCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:CppCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__name_mtype, /* pointer to cpp:CppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__init, /* pointer to cpp:CppCallContext:cpp#CppCallContext#init */
}
};
/* allocate CppCallContext */
val* NEW_cpp__CppCallContext(const struct type* type) {
val* self /* : CppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__CppCallContext;
return self;
}
/* allocate CppCallContext */
void CHECK_NEW_cpp__CppCallContext(val* self) {
}
/* runtime class cpp__ToCppCallContext */
const struct class class_cpp__ToCppCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:ToCppCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:ToCppCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:ToCppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:ToCppCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:ToCppCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:ToCppCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:ToCppCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:ToCppCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:ToCppCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:ToCppCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:ToCppCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:ToCppCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:ToCppCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:ToCppCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:ToCppCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:ToCppCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:ToCppCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:ToCppCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:ToCppCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:ToCppCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:ToCppCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:ToCppCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:ToCppCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:ToCppCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:ToCppCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:ToCppCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:ToCppCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:ToCppCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:ToCppCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:ToCppCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:ToCppCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:ToCppCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:ToCppCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:ToCppCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:ToCppCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:ToCppCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:ToCppCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:ToCppCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:ToCppCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:ToCppCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:ToCppCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:ToCppCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:ToCppCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:ToCppCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:ToCppCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__name_mtype, /* pointer to cpp:ToCppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to cpp:ToCppCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_cpp__ToCppCallContext__cast_to, /* pointer to cpp:ToCppCallContext:cpp#ToCppCallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to cpp:ToCppCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__init, /* pointer to cpp:ToCppCallContext:cpp#CppCallContext#init */
(nitmethod_t)VIRTUAL_cpp__ToCppCallContext__init, /* pointer to cpp:ToCppCallContext:cpp#ToCppCallContext#init */
}
};
/* allocate ToCppCallContext */
val* NEW_cpp__ToCppCallContext(const struct type* type) {
val* self /* : ToCppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__ToCppCallContext;
return self;
}
/* allocate ToCppCallContext */
void CHECK_NEW_cpp__ToCppCallContext(val* self) {
}
/* runtime class cpp__FromCppCallContext */
const struct class class_cpp__FromCppCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:FromCppCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:FromCppCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:FromCppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:FromCppCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:FromCppCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:FromCppCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:FromCppCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:FromCppCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:FromCppCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:FromCppCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:FromCppCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:FromCppCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:FromCppCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:FromCppCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:FromCppCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:FromCppCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:FromCppCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:FromCppCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:FromCppCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:FromCppCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:FromCppCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:FromCppCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:FromCppCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:FromCppCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:FromCppCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:FromCppCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:FromCppCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:FromCppCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:FromCppCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:FromCppCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:FromCppCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:FromCppCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:FromCppCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:FromCppCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:FromCppCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:FromCppCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:FromCppCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:FromCppCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:FromCppCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:FromCppCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:FromCppCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:FromCppCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:FromCppCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:FromCppCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:FromCppCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__name_mtype, /* pointer to cpp:FromCppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)VIRTUAL_cpp__FromCppCallContext__cast_from, /* pointer to cpp:FromCppCallContext:cpp#FromCppCallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to cpp:FromCppCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to cpp:FromCppCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__init, /* pointer to cpp:FromCppCallContext:cpp#CppCallContext#init */
(nitmethod_t)VIRTUAL_cpp__FromCppCallContext__init, /* pointer to cpp:FromCppCallContext:cpp#FromCppCallContext#init */
}
};
/* allocate FromCppCallContext */
val* NEW_cpp__FromCppCallContext(const struct type* type) {
val* self /* : FromCppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__FromCppCallContext;
return self;
}
/* allocate FromCppCallContext */
void CHECK_NEW_cpp__FromCppCallContext(val* self) {
}
/* runtime class separate_erasure_compiler__SeparateErasureCompiler */
const struct class class_separate_erasure_compiler__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__hardening, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__new_visitor, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__generate_check_init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#generate_check_init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_check_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__supports_ffi, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#supports_ffi */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#partial_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#partial_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__retrieve_partial_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#retrieve_partial_types */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_layout */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_layout= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_layout */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_layout= */
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
val* var /* : List[CodeFile] */;
val* var1 /* : HashMap[String, String] */;
val* var2 /* : Array[ExternFile] */;
val* var3 /* : ArraySet[String] */;
val* var4 /* : Array[String] */;
long var5 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var32 /* : HashMap[String, Int] */;
val* var33 /* : HashSet[MType] */;
val* var34 /* : HashSet[MType] */;
val* var35 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var36 /* : HashMap[MClass, Int] */;
val* var37 /* : HashSet[Object] */;
val* var38 /* : HashMap[MType, Array[nullable MType]] */;
val* var39 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var40 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var41 /* : HashMap[MClass, Array[nullable MPropDef]] */;
self = nit_alloc(sizeof(struct instance) + 30*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__SeparateErasureCompiler;
var = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[CodeFile]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var; /* @files on <self:SeparateErasureCompiler exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, String]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var1; /* @provided_declarations on <self:SeparateErasureCompiler exact> */
var2 = NEW_array__Array(&type_array__Arrayffi_base__ExternFile);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[ExternFile]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var2; /* @extern_bodies on <self:SeparateErasureCompiler exact> */
var3 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__ArraySet__init]))(var3) /* init on <var3:ArraySet[String]>*/;
CHECK_NEW_array__ArraySet(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var3; /* @seen_extern on <self:SeparateErasureCompiler exact> */
var4 = NEW_array__Array(&type_array__Arraystring__String);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[String]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "isa";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[String]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var11) /* push on <var_:Array[String]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "auto";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var16) /* push on <var_:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = 10;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var21) /* push on <var_:Array[String]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "erasure";
var28 = 7;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var26) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:SeparateErasureCompiler exact> */
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var30; /* @count_type_test_resolved on <self:SeparateErasureCompiler exact> */
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var31; /* @count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var32; /* @count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var33 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashSet__init]))(var33) /* init on <var33:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var33);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = var33; /* @undead_types on <self:SeparateErasureCompiler exact> */
var34 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var34->class->vft[COLOR_hash_collection__HashSet__init]))(var34) /* init on <var34:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var34);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dpartial_types].val = var34; /* @partial_types on <self:SeparateErasureCompiler exact> */
var35 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
((void (*)(val*))(var35->class->vft[COLOR_hash_collection__HashMap__init]))(var35) /* init on <var35:HashMap[MClassDef, HashSet[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var35);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = var35; /* @live_unresolved_types on <self:SeparateErasureCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MClass, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var36);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = var36; /* @box_kinds on <self:SeparateErasureCompiler exact> */
var37 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
((void (*)(val*))(var37->class->vft[COLOR_hash_collection__HashSet__init]))(var37) /* init on <var37:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var37);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = var37; /* @color_consts_done on <self:SeparateErasureCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashMap__init]))(var38) /* init on <var38:HashMap[MType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var38);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = var38; /* @type_tables on <self:SeparateErasureCompiler exact> */
var39 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashMap__init]))(var39) /* init on <var39:HashMap[MClassType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var39);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = var39; /* @resolution_tables on <self:SeparateErasureCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashMap__init]))(var40) /* init on <var40:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var40);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = var40; /* @method_tables on <self:SeparateErasureCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var41->class->vft[COLOR_hash_collection__HashMap__init]))(var41) /* init on <var41:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var41);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = var41; /* @attr_tables on <self:SeparateErasureCompiler exact> */
return self;
}
/* allocate SeparateErasureCompiler */
void CHECK_NEW_separate_erasure_compiler__SeparateErasureCompiler(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var2 /* : ModelBuilder */;
val* var3 /* : CodeWriter */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : nullable Layout[MType] */;
val* var6 /* : nullable Layout[MType] */;
val* var7 /* : nullable Layout[PropertyLayoutElement] */;
val* var8 /* : nullable Layout[MAttribute] */;
val* var9 /* : nullable Layout[MClass] */;
val* var10 /* : nullable Layout[MVirtualTypeProp] */;
val* var11 /* : Map[MClass, Array[nullable MClass]] */;
val* var12 /* : Map[MClass, Array[nullable MPropDef]] */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:SeparateErasureCompiler> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 290);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:SeparateErasureCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @realmainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 294);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:SeparateErasureCompiler> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 297);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:SeparateErasureCompiler> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 326);
exit(1);
}
var4 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:SeparateErasureCompiler> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @runtime_type_analysis");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 112);
exit(1);
}
var5 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_layout].val; /* @type_layout on <self:SeparateErasureCompiler> */
var6 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_layout].val; /* @resolution_layout on <self:SeparateErasureCompiler> */
var7 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_layout].val; /* @method_layout on <self:SeparateErasureCompiler> */
var8 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_layout].val; /* @attr_layout on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_layout].val; /* @class_layout on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_layout].val; /* @vt_layout on <self:SeparateErasureCompiler> */
var11 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_tables].val; /* @class_tables on <self:SeparateErasureCompiler> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @class_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 393);
exit(1);
}
var12 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_tables].val; /* @vt_tables on <self:SeparateErasureCompiler> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @vt_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 394);
exit(1);
}
}
/* runtime class separate_erasure_compiler__SeparateErasureCompilerVisitor */
const struct class class_separate_erasure_compiler__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:cpp#Object#from_cpp_call_context */
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
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__check_init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#check_init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#array_instance */
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
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#var_from_c */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#ret_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
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
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = var; /* @current_node on <self:SeparateErasureCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:SeparateErasureCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:SeparateErasureCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:SeparateErasureCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* allocate SeparateErasureCompilerVisitor */
void CHECK_NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : nullable Frame */;
val* var2 /* : CodeWriter */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:SeparateErasureCompilerVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @compiler");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 583);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:SeparateErasureCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:SeparateErasureCompilerVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @writer");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 598);
exit(1);
}
}
/* runtime class separate_compiler__SeparateCompiler */
const struct class class_separate_compiler__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateCompiler:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:SeparateCompiler:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:SeparateCompiler:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:SeparateCompiler:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:SeparateCompiler:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:SeparateCompiler:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:SeparateCompiler:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:SeparateCompiler:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:SeparateCompiler:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:SeparateCompiler:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:SeparateCompiler:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:SeparateCompiler:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:SeparateCompiler:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__hardening, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__new_visitor, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__generate_check_init_instance, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#generate_check_init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_check_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__supports_ffi, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#supports_ffi */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#partial_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#partial_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__init, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__retrieve_partial_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#retrieve_partial_types */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
}
};
/* allocate SeparateCompiler */
val* NEW_separate_compiler__SeparateCompiler(const struct type* type) {
val* self /* : SeparateCompiler */;
val* var /* : List[CodeFile] */;
val* var1 /* : HashMap[String, String] */;
val* var2 /* : Array[ExternFile] */;
val* var3 /* : ArraySet[String] */;
val* var4 /* : Array[String] */;
long var5 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var32 /* : HashMap[String, Int] */;
val* var33 /* : HashSet[MType] */;
val* var34 /* : HashSet[MType] */;
val* var35 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var36 /* : HashMap[MClass, Int] */;
val* var37 /* : HashSet[Object] */;
val* var38 /* : HashMap[MType, Array[nullable MType]] */;
val* var39 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var40 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var41 /* : HashMap[MClass, Array[nullable MPropDef]] */;
self = nit_alloc(sizeof(struct instance) + 26*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompiler;
var = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[CodeFile]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var; /* @files on <self:SeparateCompiler exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, String]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var1; /* @provided_declarations on <self:SeparateCompiler exact> */
var2 = NEW_array__Array(&type_array__Arrayffi_base__ExternFile);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[ExternFile]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var2; /* @extern_bodies on <self:SeparateCompiler exact> */
var3 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__ArraySet__init]))(var3) /* init on <var3:ArraySet[String]>*/;
CHECK_NEW_array__ArraySet(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var3; /* @seen_extern on <self:SeparateCompiler exact> */
var4 = NEW_array__Array(&type_array__Arraystring__String);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[String]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "isa";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[String]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var11) /* push on <var_:Array[String]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "auto";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var16) /* push on <var_:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = 10;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var21) /* push on <var_:Array[String]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "erasure";
var28 = 7;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var26) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:SeparateCompiler exact> */
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var30; /* @count_type_test_resolved on <self:SeparateCompiler exact> */
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var31; /* @count_type_test_unresolved on <self:SeparateCompiler exact> */
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var32; /* @count_type_test_skipped on <self:SeparateCompiler exact> */
var33 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashSet__init]))(var33) /* init on <var33:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var33);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = var33; /* @undead_types on <self:SeparateCompiler exact> */
var34 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var34->class->vft[COLOR_hash_collection__HashSet__init]))(var34) /* init on <var34:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var34);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dpartial_types].val = var34; /* @partial_types on <self:SeparateCompiler exact> */
var35 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
((void (*)(val*))(var35->class->vft[COLOR_hash_collection__HashMap__init]))(var35) /* init on <var35:HashMap[MClassDef, HashSet[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var35);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = var35; /* @live_unresolved_types on <self:SeparateCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MClass, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var36);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = var36; /* @box_kinds on <self:SeparateCompiler exact> */
var37 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
((void (*)(val*))(var37->class->vft[COLOR_hash_collection__HashSet__init]))(var37) /* init on <var37:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var37);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = var37; /* @color_consts_done on <self:SeparateCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashMap__init]))(var38) /* init on <var38:HashMap[MType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var38);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = var38; /* @type_tables on <self:SeparateCompiler exact> */
var39 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashMap__init]))(var39) /* init on <var39:HashMap[MClassType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var39);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = var39; /* @resolution_tables on <self:SeparateCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashMap__init]))(var40) /* init on <var40:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var40);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = var40; /* @method_tables on <self:SeparateCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var41->class->vft[COLOR_hash_collection__HashMap__init]))(var41) /* init on <var41:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var41);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = var41; /* @attr_tables on <self:SeparateCompiler exact> */
return self;
}
/* allocate SeparateCompiler */
void CHECK_NEW_separate_compiler__SeparateCompiler(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var2 /* : ModelBuilder */;
val* var3 /* : CodeWriter */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : nullable Layout[MType] */;
val* var6 /* : nullable Layout[MType] */;
val* var7 /* : nullable Layout[PropertyLayoutElement] */;
val* var8 /* : nullable Layout[MAttribute] */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:SeparateCompiler> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 290);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @realmainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 294);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:SeparateCompiler> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 297);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:SeparateCompiler> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 326);
exit(1);
}
var4 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:SeparateCompiler> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @runtime_type_analysis");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 112);
exit(1);
}
var5 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_layout].val; /* @type_layout on <self:SeparateCompiler> */
var6 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_layout].val; /* @resolution_layout on <self:SeparateCompiler> */
var7 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_layout].val; /* @method_layout on <self:SeparateCompiler> */
var8 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_layout].val; /* @attr_layout on <self:SeparateCompiler> */
}
/* runtime class separate_compiler__SeparateCompilerVisitor */
const struct class class_separate_compiler__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:SeparateCompilerVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:SeparateCompilerVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:cpp#Object#from_cpp_call_context */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__calloc_array, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__check_init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#check_init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__class_name_string, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
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
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c, /* pointer to separate_compiler:SeparateCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#var_from_c */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c, /* pointer to separate_compiler:SeparateCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#ret_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
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
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = var; /* @current_node on <self:SeparateCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:SeparateCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:SeparateCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:SeparateCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* allocate SeparateCompilerVisitor */
void CHECK_NEW_separate_compiler__SeparateCompilerVisitor(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : nullable Frame */;
val* var2 /* : CodeWriter */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:SeparateCompilerVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @compiler");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 583);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:SeparateCompilerVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @writer");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 598);
exit(1);
}
}
/* runtime class separate_compiler__SeparateRuntimeFunction */
const struct class class_separate_compiler__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:SeparateRuntimeFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:SeparateRuntimeFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__build_c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__call, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#call */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__compile_to_c, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
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
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = var; /* @c_name_cache on <self:SeparateRuntimeFunction exact> */
return self;
}
/* allocate SeparateRuntimeFunction */
void CHECK_NEW_separate_compiler__SeparateRuntimeFunction(val* self) {
val* var /* : MMethodDef */;
var = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:SeparateRuntimeFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmethoddef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1041);
exit(1);
}
}
/* runtime class separate_compiler__VirtualRuntimeFunction */
const struct class class_separate_compiler__VirtualRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:VirtualRuntimeFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:VirtualRuntimeFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:VirtualRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:VirtualRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:VirtualRuntimeFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__build_c_name, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__call, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#call */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__compile_to_c, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
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
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = var; /* @c_name_cache on <self:VirtualRuntimeFunction exact> */
return self;
}
/* allocate VirtualRuntimeFunction */
void CHECK_NEW_separate_compiler__VirtualRuntimeFunction(val* self) {
val* var /* : MMethodDef */;
var = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:VirtualRuntimeFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmethoddef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1041);
exit(1);
}
}
/* runtime class layout_builders__Layout */
const struct class class_layout_builders__Layout = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:Layout:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:Layout:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:Layout:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:Layout:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:Layout:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:Layout:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:Layout:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:Layout:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:Layout:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:Layout:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:Layout:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:Layout:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:Layout:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:Layout:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:Layout:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:Layout:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:Layout:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:Layout:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:Layout:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:Layout:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:Layout:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:Layout:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:Layout:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:Layout:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:Layout:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:Layout:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:Layout:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:Layout:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:Layout:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:Layout:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:Layout:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:Layout:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:Layout:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:Layout:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:Layout:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:Layout:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:Layout:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:Layout:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:Layout:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:Layout:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:Layout:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:Layout:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:Layout:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:Layout:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:Layout:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:Layout:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:Layout:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:Layout:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:Layout:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:Layout:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids, /* pointer to layout_builders:Layout:layout_builders#Layout#ids */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids_61d, /* pointer to layout_builders:Layout:layout_builders#Layout#ids= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos, /* pointer to layout_builders:Layout:layout_builders#Layout#pos */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos_61d, /* pointer to layout_builders:Layout:layout_builders#Layout#pos= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__init, /* pointer to layout_builders:Layout:layout_builders#Layout#init */
}
};
/* allocate Layout[Object] */
val* NEW_layout_builders__Layout(const struct type* type) {
val* self /* : Layout[Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__Layout;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__Layout___64dids].val = var; /* @ids on <self:Layout[Object] exact> */
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_layout_builders__Layout___64dpos].val = var1; /* @pos on <self:Layout[Object] exact> */
return self;
}
/* allocate Layout[Object] */
void CHECK_NEW_layout_builders__Layout(val* self) {
}
/* runtime class layout_builders__PHLayout */
const struct class class_layout_builders__PHLayout = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:PHLayout:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:PHLayout:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:PHLayout:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:PHLayout:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:PHLayout:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:PHLayout:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:PHLayout:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:PHLayout:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:PHLayout:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:PHLayout:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:PHLayout:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:PHLayout:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:PHLayout:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:PHLayout:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:PHLayout:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:PHLayout:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:PHLayout:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:PHLayout:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:PHLayout:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:PHLayout:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:PHLayout:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:PHLayout:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:PHLayout:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:PHLayout:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:PHLayout:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:PHLayout:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:PHLayout:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:PHLayout:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:PHLayout:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:PHLayout:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:PHLayout:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:PHLayout:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:PHLayout:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:PHLayout:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:PHLayout:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:PHLayout:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:PHLayout:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:PHLayout:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:PHLayout:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:PHLayout:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:PHLayout:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:PHLayout:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:PHLayout:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:PHLayout:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:PHLayout:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids, /* pointer to layout_builders:PHLayout:layout_builders#Layout#ids */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids_61d, /* pointer to layout_builders:PHLayout:layout_builders#Layout#ids= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos, /* pointer to layout_builders:PHLayout:layout_builders#Layout#pos */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos_61d, /* pointer to layout_builders:PHLayout:layout_builders#Layout#pos= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__init, /* pointer to layout_builders:PHLayout:layout_builders#Layout#init */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__masks, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#masks */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__masks_61d, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#masks= */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__hashes, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#hashes */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__hashes_61d, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#hashes= */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__init, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#init */
}
};
/* allocate PHLayout[Object, Object] */
val* NEW_layout_builders__PHLayout(const struct type* type) {
val* self /* : PHLayout[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Map[Object, Int]] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__PHLayout;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__Layout___64dids].val = var; /* @ids on <self:PHLayout[Object, Object] exact> */
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_layout_builders__Layout___64dpos].val = var1; /* @pos on <self:PHLayout[Object, Object] exact> */
var2 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PHLayout_FT0kernel__Int]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var2);
self->attrs[COLOR_layout_builders__PHLayout___64dmasks].val = var2; /* @masks on <self:PHLayout[Object, Object] exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PHLayout_FT0abstract_collection__Maplayout_builders__PHLayout_FT1kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[Object, Map[Object, Int]]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_layout_builders__PHLayout___64dhashes].val = var3; /* @hashes on <self:PHLayout[Object, Object] exact> */
return self;
}
/* allocate PHLayout[Object, Object] */
void CHECK_NEW_layout_builders__PHLayout(val* self) {
}
/* runtime class layout_builders__MTypePOSetBuilder */
const struct class class_layout_builders__MTypePOSetBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypePOSetBuilder:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypePOSetBuilder:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypePOSetBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MTypePOSetBuilder:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MTypePOSetBuilder:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MTypePOSetBuilder:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MTypePOSetBuilder:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MTypePOSetBuilder:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MTypePOSetBuilder:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MTypePOSetBuilder:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MTypePOSetBuilder:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#POSetBuilder#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule_61d, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#POSetBuilder#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__init, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#POSetBuilder#init */
(nitmethod_t)VIRTUAL_layout_builders__MTypePOSetBuilder__build_poset, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#MTypePOSetBuilder#build_poset */
}
};
/* allocate MTypePOSetBuilder */
val* NEW_layout_builders__MTypePOSetBuilder(const struct type* type) {
val* self /* : MTypePOSetBuilder */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypePOSetBuilder;
return self;
}
/* allocate MTypePOSetBuilder */
void CHECK_NEW_layout_builders__MTypePOSetBuilder(val* self) {
val* var /* : MModule */;
var = self->attrs[COLOR_layout_builders__POSetBuilder___64dmmodule].val; /* @mmodule on <self:MTypePOSetBuilder> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 94);
exit(1);
}
}
/* runtime class layout_builders__MClassPOSetBuilder */
const struct class class_layout_builders__MClassPOSetBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassPOSetBuilder:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassPOSetBuilder:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassPOSetBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MClassPOSetBuilder:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MClassPOSetBuilder:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MClassPOSetBuilder:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MClassPOSetBuilder:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MClassPOSetBuilder:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MClassPOSetBuilder:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MClassPOSetBuilder:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MClassPOSetBuilder:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#POSetBuilder#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule_61d, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#POSetBuilder#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__init, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#POSetBuilder#init */
(nitmethod_t)VIRTUAL_layout_builders__MClassPOSetBuilder__build_poset, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#MClassPOSetBuilder#build_poset */
}
};
/* allocate MClassPOSetBuilder */
val* NEW_layout_builders__MClassPOSetBuilder(const struct type* type) {
val* self /* : MClassPOSetBuilder */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassPOSetBuilder;
return self;
}
/* allocate MClassPOSetBuilder */
void CHECK_NEW_layout_builders__MClassPOSetBuilder(val* self) {
val* var /* : MModule */;
var = self->attrs[COLOR_layout_builders__POSetBuilder___64dmmodule].val; /* @mmodule on <self:MClassPOSetBuilder> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 94);
exit(1);
}
}
/* runtime class layout_builders__MTypeBMizer */
const struct class class_layout_builders__MTypeBMizer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypeBMizer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypeBMizer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MTypeBMizer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypeBMizer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypeBMizer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypeBMizer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypeBMizer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypeBMizer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypeBMizer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypeBMizer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypeBMizer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypeBMizer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypeBMizer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypeBMizer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypeBMizer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypeBMizer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypeBMizer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypeBMizer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypeBMizer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypeBMizer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypeBMizer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypeBMizer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypeBMizer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypeBMizer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypeBMizer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypeBMizer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypeBMizer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypeBMizer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypeBMizer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypeBMizer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypeBMizer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypeBMizer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MTypeBMizer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MTypeBMizer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MTypeBMizer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MTypeBMizer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MTypeBMizer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MTypeBMizer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MTypeBMizer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MTypeBMizer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__build_layout, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule_61d, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder_61d, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache_61d, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__init, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#init */
(nitmethod_t)VIRTUAL_layout_builders__MTypeBMizer__init, /* pointer to layout_builders:MTypeBMizer:layout_builders#MTypeBMizer#init */
}
};
/* allocate MTypeBMizer */
val* NEW_layout_builders__MTypeBMizer(const struct type* type) {
val* self /* : MTypeBMizer */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypeBMizer;
return self;
}
/* allocate MTypeBMizer */
void CHECK_NEW_layout_builders__MTypeBMizer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__TypingBMizer___64dmmodule].val; /* @mmodule on <self:MTypeBMizer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 132);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_builder].val; /* @poset_builder on <self:MTypeBMizer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 133);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_cache].val; /* @poset_cache on <self:MTypeBMizer> */
}
/* runtime class layout_builders__MClassBMizer */
const struct class class_layout_builders__MClassBMizer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassBMizer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassBMizer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MClassBMizer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassBMizer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassBMizer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassBMizer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassBMizer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassBMizer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassBMizer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassBMizer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassBMizer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassBMizer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassBMizer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassBMizer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassBMizer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassBMizer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassBMizer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassBMizer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassBMizer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassBMizer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassBMizer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassBMizer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassBMizer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassBMizer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassBMizer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassBMizer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassBMizer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassBMizer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassBMizer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassBMizer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassBMizer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassBMizer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassBMizer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassBMizer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassBMizer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassBMizer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassBMizer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MClassBMizer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MClassBMizer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MClassBMizer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MClassBMizer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MClassBMizer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MClassBMizer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MClassBMizer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MClassBMizer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__build_layout, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule_61d, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder_61d, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache_61d, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__init, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#init */
(nitmethod_t)VIRTUAL_layout_builders__MClassBMizer__init, /* pointer to layout_builders:MClassBMizer:layout_builders#MClassBMizer#init */
}
};
/* allocate MClassBMizer */
val* NEW_layout_builders__MClassBMizer(const struct type* type) {
val* self /* : MClassBMizer */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassBMizer;
return self;
}
/* allocate MClassBMizer */
void CHECK_NEW_layout_builders__MClassBMizer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__TypingBMizer___64dmmodule].val; /* @mmodule on <self:MClassBMizer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 132);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_builder].val; /* @poset_builder on <self:MClassBMizer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 133);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_cache].val; /* @poset_cache on <self:MClassBMizer> */
}
/* runtime class layout_builders__ResolutionBMizer */
const struct class class_layout_builders__ResolutionBMizer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:ResolutionBMizer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:ResolutionBMizer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:ResolutionBMizer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:ResolutionBMizer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:ResolutionBMizer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:ResolutionBMizer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:ResolutionBMizer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:ResolutionBMizer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:ResolutionBMizer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:ResolutionBMizer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:ResolutionBMizer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:ResolutionBMizer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:ResolutionBMizer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:ResolutionBMizer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:ResolutionBMizer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:ResolutionBMizer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:ResolutionBMizer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:ResolutionBMizer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:ResolutionBMizer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:ResolutionBMizer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:ResolutionBMizer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:ResolutionBMizer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:ResolutionBMizer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:ResolutionBMizer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:ResolutionBMizer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:ResolutionBMizer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:ResolutionBMizer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:ResolutionBMizer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:ResolutionBMizer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:ResolutionBMizer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionBMizer__build_layout, /* pointer to layout_builders:ResolutionBMizer:layout_builders#ResolutionBMizer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionBMizer__init, /* pointer to layout_builders:ResolutionBMizer:layout_builders#ResolutionBMizer#init */
}
};
/* allocate ResolutionBMizer */
val* NEW_layout_builders__ResolutionBMizer(const struct type* type) {
val* self /* : ResolutionBMizer */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__ResolutionBMizer;
return self;
}
/* allocate ResolutionBMizer */
void CHECK_NEW_layout_builders__ResolutionBMizer(val* self) {
}
/* runtime class layout_builders__MPropertyBMizer */
/* allocate MPropertyBMizer[PropertyLayoutElement] */
val* NEW_layout_builders__MPropertyBMizer(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "MPropertyBMizer is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate MPropertyBMizer[PropertyLayoutElement] */
void CHECK_NEW_layout_builders__MPropertyBMizer(val* self) {
fprintf(stderr, "Runtime error: %s", "MPropertyBMizer is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class layout_builders__MTypeColorer */
const struct class class_layout_builders__MTypeColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypeColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypeColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MTypeColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypeColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypeColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypeColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypeColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypeColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypeColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypeColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypeColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypeColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypeColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypeColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypeColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypeColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypeColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypeColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypeColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypeColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypeColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypeColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypeColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypeColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypeColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypeColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypeColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypeColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypeColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypeColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypeColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypeColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypeColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypeColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypeColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypeColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypeColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MTypeColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MTypeColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MTypeColorer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MTypeColorer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MTypeColorer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MTypeColorer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MTypeColorer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MTypeColorer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_layout, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#core */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#core= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#crown */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#crown= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#border */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#border= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__init, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__compute_ids, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#colorize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize_elements, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__is_color_free, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#is_color_free */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__tag_elements, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#tag_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_conflicts_graph, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#build_conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#conflicts_graph= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linear_extensions_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linear_extensions_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extension, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linear_extension */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__reverse_linearize, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#reverse_linearize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linearize, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linearize */
(nitmethod_t)VIRTUAL_layout_builders__MTypeColorer__init, /* pointer to layout_builders:MTypeColorer:layout_builders#MTypeColorer#init */
}
};
/* allocate MTypeColorer */
val* NEW_layout_builders__MTypeColorer(const struct type* type) {
val* self /* : MTypeColorer */;
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
val* var2 /* : HashSet[MType] */;
val* var3 /* : HashMap[MType, Int] */;
val* var4 /* : HashMap[MType, Array[MType]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypeColorer;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_layout_builders__TypingColorer___64dcore].val = var; /* @core on <self:MTypeColorer exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_layout_builders__TypingColorer___64dcrown].val = var1; /* @crown on <self:MTypeColorer exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_layout_builders__TypingColorer___64dborder].val = var2; /* @border on <self:MTypeColorer exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[MType, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_layout_builders__TypingColorer___64dcoloration_result].val = var3; /* @coloration_result on <self:MTypeColorer exact> */
var4 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0array__Arraylayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[MType, Array[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_layout_builders__TypingColorer___64dlinear_extensions_cache].val = var4; /* @linear_extensions_cache on <self:MTypeColorer exact> */
return self;
}
/* allocate MTypeColorer */
void CHECK_NEW_layout_builders__MTypeColorer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
val* var3 /* : nullable HashMap[Object, Set[Object]] */;
var = self->attrs[COLOR_layout_builders__TypingColorer___64dmmodule].val; /* @mmodule on <self:MTypeColorer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 230);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_builder].val; /* @poset_builder on <self:MTypeColorer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 231);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_cache].val; /* @poset_cache on <self:MTypeColorer> */
var3 = self->attrs[COLOR_layout_builders__TypingColorer___64dconflicts_graph].val; /* @conflicts_graph on <self:MTypeColorer> */
}
/* runtime class layout_builders__MClassColorer */
const struct class class_layout_builders__MClassColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MClassColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MClassColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MClassColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MClassColorer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MClassColorer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MClassColorer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MClassColorer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MClassColorer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MClassColorer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_layout, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#core */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#core= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#crown */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#crown= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#border */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#border= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__init, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__compute_ids, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#colorize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize_elements, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__is_color_free, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#is_color_free */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__tag_elements, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#tag_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_conflicts_graph, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#build_conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#conflicts_graph= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linear_extensions_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linear_extensions_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extension, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linear_extension */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__reverse_linearize, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#reverse_linearize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linearize, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linearize */
(nitmethod_t)VIRTUAL_layout_builders__MClassColorer__init, /* pointer to layout_builders:MClassColorer:layout_builders#MClassColorer#init */
}
};
/* allocate MClassColorer */
val* NEW_layout_builders__MClassColorer(const struct type* type) {
val* self /* : MClassColorer */;
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashMap[MClass, Int] */;
val* var4 /* : HashMap[MClass, Array[MClass]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassColorer;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_layout_builders__TypingColorer___64dcore].val = var; /* @core on <self:MClassColorer exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_layout_builders__TypingColorer___64dcrown].val = var1; /* @crown on <self:MClassColorer exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_layout_builders__TypingColorer___64dborder].val = var2; /* @border on <self:MClassColorer exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[MClass, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_layout_builders__TypingColorer___64dcoloration_result].val = var3; /* @coloration_result on <self:MClassColorer exact> */
var4 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0array__Arraylayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[MClass, Array[MClass]]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_layout_builders__TypingColorer___64dlinear_extensions_cache].val = var4; /* @linear_extensions_cache on <self:MClassColorer exact> */
return self;
}
/* allocate MClassColorer */
void CHECK_NEW_layout_builders__MClassColorer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
val* var3 /* : nullable HashMap[Object, Set[Object]] */;
var = self->attrs[COLOR_layout_builders__TypingColorer___64dmmodule].val; /* @mmodule on <self:MClassColorer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 230);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_builder].val; /* @poset_builder on <self:MClassColorer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 231);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_cache].val; /* @poset_cache on <self:MClassColorer> */
var3 = self->attrs[COLOR_layout_builders__TypingColorer___64dconflicts_graph].val; /* @conflicts_graph on <self:MClassColorer> */
}
/* runtime class layout_builders__MPropertyColorer */
const struct class class_layout_builders__MPropertyColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MPropertyColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MPropertyColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MPropertyColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MPropertyColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MPropertyColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MPropertyColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MPropertyColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MPropertyColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MPropertyColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MPropertyColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MPropertyColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MPropertyColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MPropertyColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MPropertyColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MPropertyColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MPropertyColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MPropertyColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MPropertyColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MPropertyColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MPropertyColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MPropertyColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MPropertyColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MPropertyColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MPropertyColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MPropertyColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MPropertyColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MPropertyColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MPropertyColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MPropertyColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MPropertyColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MPropertyColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MPropertyColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MPropertyColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MPropertyColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MPropertyColorer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MPropertyColorer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MPropertyColorer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MPropertyColorer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MPropertyColorer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MPropertyColorer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__build_layout, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__mmodule, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__mmodule_61d, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__class_colorer, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#class_colorer */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__class_colorer_61d, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#class_colorer= */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__coloration_result, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__coloration_result_61d, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__init, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize_core, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize_core */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize_crown, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize_crown */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize_elements, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__max_color, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#max_color */
}
};
/* allocate MPropertyColorer[PropertyLayoutElement] */
val* NEW_layout_builders__MPropertyColorer(const struct type* type) {
val* self /* : MPropertyColorer[PropertyLayoutElement] */;
val* var /* : HashMap[PropertyLayoutElement, Int] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MPropertyColorer;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__MPropertyColorer_FT0kernel__Int]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[PropertyLayoutElement, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__MPropertyColorer___64dcoloration_result].val = var; /* @coloration_result on <self:MPropertyColorer[PropertyLayoutElement] exact> */
return self;
}
/* allocate MPropertyColorer[PropertyLayoutElement] */
void CHECK_NEW_layout_builders__MPropertyColorer(val* self) {
val* var /* : MModule */;
val* var1 /* : MClassColorer */;
var = self->attrs[COLOR_layout_builders__MPropertyColorer___64dmmodule].val; /* @mmodule on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 394);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__MPropertyColorer___64dclass_colorer].val; /* @class_colorer on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @class_colorer");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 395);
exit(1);
}
}
/* runtime class layout_builders__ResolutionColorer */
const struct class class_layout_builders__ResolutionColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:ResolutionColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:ResolutionColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:ResolutionColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:ResolutionColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:ResolutionColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:ResolutionColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:ResolutionColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:ResolutionColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:ResolutionColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:ResolutionColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:ResolutionColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:ResolutionColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:ResolutionColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:ResolutionColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:ResolutionColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:ResolutionColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:ResolutionColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:ResolutionColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:ResolutionColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:ResolutionColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:ResolutionColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:ResolutionColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:ResolutionColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:ResolutionColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:ResolutionColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:ResolutionColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:ResolutionColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:ResolutionColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:ResolutionColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:ResolutionColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:ResolutionColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:ResolutionColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:ResolutionColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:ResolutionColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:ResolutionColorer:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:ResolutionColorer:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:ResolutionColorer:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:ResolutionColorer:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:ResolutionColorer:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:ResolutionColorer:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__build_layout, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__coloration_result, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__coloration_result_61d, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__init, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__compute_ids, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__colorize_elements, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__is_color_free, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#is_color_free */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__build_conflicts_graph, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#build_conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__conflicts_graph, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__conflicts_graph_61d, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#conflicts_graph= */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__add_conflict, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#add_conflict */
}
};
/* allocate ResolutionColorer */
val* NEW_layout_builders__ResolutionColorer(const struct type* type) {
val* self /* : ResolutionColorer */;
val* var /* : HashMap[MType, Int] */;
val* var1 /* : HashMap[MType, Set[MType]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__ResolutionColorer;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[MType, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__ResolutionColorer___64dcoloration_result].val = var; /* @coloration_result on <self:ResolutionColorer exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MType, Set[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_layout_builders__ResolutionColorer___64dconflicts_graph].val = var1; /* @conflicts_graph on <self:ResolutionColorer exact> */
return self;
}
/* allocate ResolutionColorer */
void CHECK_NEW_layout_builders__ResolutionColorer(val* self) {
}
/* runtime class layout_builders__PerfectHasher */
/* allocate PerfectHasher[Object, Object] */
val* NEW_layout_builders__PerfectHasher(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "PerfectHasher is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate PerfectHasher[Object, Object] */
void CHECK_NEW_layout_builders__PerfectHasher(val* self) {
fprintf(stderr, "Runtime error: %s", "PerfectHasher is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class layout_builders__PHModOperator */
const struct class class_layout_builders__PHModOperator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:PHModOperator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:PHModOperator:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:PHModOperator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:PHModOperator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:PHModOperator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:PHModOperator:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:PHModOperator:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:PHModOperator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:PHModOperator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:PHModOperator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:PHModOperator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:PHModOperator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:PHModOperator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:PHModOperator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:PHModOperator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:PHModOperator:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:PHModOperator:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:PHModOperator:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:PHModOperator:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:PHModOperator:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:PHModOperator:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:PHModOperator:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:PHModOperator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:PHModOperator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:PHModOperator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:PHModOperator:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:PHModOperator:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:PHModOperator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:PHModOperator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:PHModOperator:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:PHModOperator:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:PHModOperator:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:PHModOperator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:PHModOperator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:PHModOperator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:PHModOperator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:PHModOperator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:PHModOperator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:PHModOperator:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:PHModOperator:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:PHModOperator:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:PHModOperator:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:PHModOperator:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:PHModOperator:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:PHModOperator:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__PHModOperator__op, /* pointer to layout_builders:PHModOperator:layout_builders#PHModOperator#op */
(nitmethod_t)VIRTUAL_layout_builders__PHOperator__init, /* pointer to layout_builders:PHModOperator:layout_builders#PHOperator#init */
(nitmethod_t)VIRTUAL_layout_builders__PHModOperator__init, /* pointer to layout_builders:PHModOperator:layout_builders#PHModOperator#init */
}
};
/* allocate PHModOperator */
val* NEW_layout_builders__PHModOperator(const struct type* type) {
val* self /* : PHModOperator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__PHModOperator;
return self;
}
/* allocate PHModOperator */
void CHECK_NEW_layout_builders__PHModOperator(val* self) {
}
/* runtime class layout_builders__PHAndOperator */
const struct class class_layout_builders__PHAndOperator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:PHAndOperator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:PHAndOperator:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:PHAndOperator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:PHAndOperator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:PHAndOperator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:PHAndOperator:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:PHAndOperator:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:PHAndOperator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:PHAndOperator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:PHAndOperator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:PHAndOperator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:PHAndOperator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:PHAndOperator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:PHAndOperator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:PHAndOperator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:PHAndOperator:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:PHAndOperator:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:PHAndOperator:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:PHAndOperator:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:PHAndOperator:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:PHAndOperator:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:PHAndOperator:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:PHAndOperator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:PHAndOperator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:PHAndOperator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:PHAndOperator:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:PHAndOperator:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:PHAndOperator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:PHAndOperator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:PHAndOperator:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:PHAndOperator:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:PHAndOperator:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:PHAndOperator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:PHAndOperator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:PHAndOperator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:PHAndOperator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:PHAndOperator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:PHAndOperator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:PHAndOperator:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:PHAndOperator:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:PHAndOperator:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:PHAndOperator:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:PHAndOperator:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:PHAndOperator:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:PHAndOperator:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__PHAndOperator__op, /* pointer to layout_builders:PHAndOperator:layout_builders#PHAndOperator#op */
(nitmethod_t)VIRTUAL_layout_builders__PHOperator__init, /* pointer to layout_builders:PHAndOperator:layout_builders#PHOperator#init */
(nitmethod_t)VIRTUAL_layout_builders__PHAndOperator__init, /* pointer to layout_builders:PHAndOperator:layout_builders#PHAndOperator#init */
}
};
/* allocate PHAndOperator */
val* NEW_layout_builders__PHAndOperator(const struct type* type) {
val* self /* : PHAndOperator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__PHAndOperator;
return self;
}
/* allocate PHAndOperator */
void CHECK_NEW_layout_builders__PHAndOperator(val* self) {
}
/* runtime class layout_builders__TypingHasher */
/* allocate TypingHasher[Object] */
val* NEW_layout_builders__TypingHasher(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "TypingHasher is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate TypingHasher[Object] */
void CHECK_NEW_layout_builders__TypingHasher(val* self) {
fprintf(stderr, "Runtime error: %s", "TypingHasher is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class layout_builders__MTypeHasher */
const struct class class_layout_builders__MTypeHasher = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypeHasher:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypeHasher:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MTypeHasher:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypeHasher:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypeHasher:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypeHasher:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypeHasher:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypeHasher:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypeHasher:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypeHasher:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypeHasher:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypeHasher:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypeHasher:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypeHasher:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypeHasher:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypeHasher:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypeHasher:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypeHasher:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypeHasher:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypeHasher:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypeHasher:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypeHasher:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypeHasher:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypeHasher:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypeHasher:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypeHasher:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypeHasher:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypeHasher:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypeHasher:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypeHasher:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypeHasher:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypeHasher:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypeHasher:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypeHasher:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypeHasher:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypeHasher:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypeHasher:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MTypeHasher:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MTypeHasher:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MTypeHasher:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MTypeHasher:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MTypeHasher:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MTypeHasher:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MTypeHasher:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MTypeHasher:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_layout, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingLayoutBuilder__poset, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingLayoutBuilder#poset */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#operator */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#operator= */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__init, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_masks, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#compute_masks */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_mask, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#compute_mask */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_hashes, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#compute_hashes */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__init, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__compute_ids, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_conflicts, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#build_conflicts */
(nitmethod_t)VIRTUAL_layout_builders__MTypeHasher__init, /* pointer to layout_builders:MTypeHasher:layout_builders#MTypeHasher#init */
}
};
/* allocate MTypeHasher */
val* NEW_layout_builders__MTypeHasher(const struct type* type) {
val* self /* : MTypeHasher */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypeHasher;
return self;
}
/* allocate MTypeHasher */
void CHECK_NEW_layout_builders__MTypeHasher(val* self) {
val* var /* : PHOperator */;
val* var1 /* : MModule */;
val* var2 /* : POSetBuilder[Object] */;
val* var3 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:MTypeHasher> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @operator");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 552);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dmmodule].val; /* @mmodule on <self:MTypeHasher> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 625);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_builder].val; /* @poset_builder on <self:MTypeHasher> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 626);
exit(1);
}
var3 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_cache].val; /* @poset_cache on <self:MTypeHasher> */
}
/* runtime class layout_builders__MClassHasher */
const struct class class_layout_builders__MClassHasher = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassHasher:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassHasher:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:MClassHasher:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassHasher:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassHasher:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassHasher:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassHasher:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassHasher:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassHasher:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassHasher:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassHasher:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassHasher:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassHasher:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassHasher:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassHasher:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassHasher:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassHasher:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassHasher:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassHasher:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassHasher:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassHasher:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassHasher:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassHasher:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassHasher:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassHasher:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassHasher:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassHasher:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassHasher:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassHasher:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassHasher:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassHasher:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassHasher:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassHasher:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassHasher:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassHasher:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassHasher:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassHasher:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:MClassHasher:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:MClassHasher:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:MClassHasher:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:MClassHasher:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:MClassHasher:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:MClassHasher:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:MClassHasher:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:MClassHasher:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_layout, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingLayoutBuilder__poset, /* pointer to layout_builders:MClassHasher:layout_builders#TypingLayoutBuilder#poset */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#operator */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator_61d, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#operator= */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__init, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_masks, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#compute_masks */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_mask, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#compute_mask */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_hashes, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#compute_hashes */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule_61d, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder_61d, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache_61d, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__init, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__compute_ids, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_conflicts, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#build_conflicts */
(nitmethod_t)VIRTUAL_layout_builders__MClassHasher__init, /* pointer to layout_builders:MClassHasher:layout_builders#MClassHasher#init */
}
};
/* allocate MClassHasher */
val* NEW_layout_builders__MClassHasher(const struct type* type) {
val* self /* : MClassHasher */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassHasher;
return self;
}
/* allocate MClassHasher */
void CHECK_NEW_layout_builders__MClassHasher(val* self) {
val* var /* : PHOperator */;
val* var1 /* : MModule */;
val* var2 /* : POSetBuilder[Object] */;
val* var3 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:MClassHasher> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @operator");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 552);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dmmodule].val; /* @mmodule on <self:MClassHasher> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 625);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_builder].val; /* @poset_builder on <self:MClassHasher> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 626);
exit(1);
}
var3 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_cache].val; /* @poset_cache on <self:MClassHasher> */
}
/* runtime class layout_builders__MPropertyHasher */
/* allocate MPropertyHasher[PropertyLayoutElement] */
val* NEW_layout_builders__MPropertyHasher(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "MPropertyHasher is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* allocate MPropertyHasher[PropertyLayoutElement] */
void CHECK_NEW_layout_builders__MPropertyHasher(val* self) {
fprintf(stderr, "Runtime error: %s", "MPropertyHasher is DEAD");
fprintf(stderr, "\n");
exit(1);
}
/* runtime class layout_builders__ResolutionHasher */
const struct class class_layout_builders__ResolutionHasher = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:ResolutionHasher:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:ResolutionHasher:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to layout_builders:ResolutionHasher:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:ResolutionHasher:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:ResolutionHasher:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:ResolutionHasher:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:ResolutionHasher:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:ResolutionHasher:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:ResolutionHasher:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:ResolutionHasher:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:ResolutionHasher:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:ResolutionHasher:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:ResolutionHasher:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:ResolutionHasher:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:ResolutionHasher:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:ResolutionHasher:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:ResolutionHasher:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:ResolutionHasher:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:ResolutionHasher:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:ResolutionHasher:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:ResolutionHasher:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:ResolutionHasher:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:ResolutionHasher:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:ResolutionHasher:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:ResolutionHasher:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:ResolutionHasher:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:ResolutionHasher:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:ResolutionHasher:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:ResolutionHasher:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:ResolutionHasher:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:ResolutionHasher:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:ResolutionHasher:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to layout_builders:ResolutionHasher:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to layout_builders:ResolutionHasher:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to layout_builders:ResolutionHasher:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to layout_builders:ResolutionHasher:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to layout_builders:ResolutionHasher:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to layout_builders:ResolutionHasher:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to layout_builders:ResolutionHasher:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to layout_builders:ResolutionHasher:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionHasher__build_layout, /* pointer to layout_builders:ResolutionHasher:layout_builders#ResolutionHasher#build_layout */
NULL, /* empty */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#operator */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator_61d, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#operator= */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__init, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_masks, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#compute_masks */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_mask, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#compute_mask */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_hashes, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#compute_hashes */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionHasher__init, /* pointer to layout_builders:ResolutionHasher:layout_builders#ResolutionHasher#init */
}
};
/* allocate ResolutionHasher */
val* NEW_layout_builders__ResolutionHasher(const struct type* type) {
val* self /* : ResolutionHasher */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__ResolutionHasher;
return self;
}
/* allocate ResolutionHasher */
void CHECK_NEW_layout_builders__ResolutionHasher(val* self) {
val* var /* : PHOperator */;
var = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:ResolutionHasher> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @operator");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 552);
exit(1);
}
}
