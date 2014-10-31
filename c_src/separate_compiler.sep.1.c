#include "separate_compiler.sep.0.h"
/* method separate_compiler#ToolContext#opt_separate for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_separate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_separate for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_separate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 24);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_inline_intern for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_no_inline_intern(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_inline_intern for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_no_inline_intern (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 26);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_union_attribute for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_no_union_attribute(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_union_attribute for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_shortcut_equate for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_no_shortcut_equate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 30);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_no_shortcut_equate for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_no_shortcut_equate (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 30);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_inline_coloring_numbers for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_inline_coloring_numbers(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_inline_coloring_numbers for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_inline_coloring_numbers (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_inline_some_methods for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_inline_some_methods(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_inline_some_methods for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_inline_some_methods(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_direct_call_monomorph for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_direct_call_monomorph(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 36);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_direct_call_monomorph for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_direct_call_monomorph(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_skip_dead_methods for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_skip_dead_methods(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val; /* _opt_skip_dead_methods on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_skip_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 38);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_skip_dead_methods for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_skip_dead_methods(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_skip_dead_methods (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val; /* _opt_skip_dead_methods on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_skip_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 38);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_semi_global for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_semi_global(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_semi_global].val; /* _opt_semi_global on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_semi_global");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_semi_global for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_semi_global(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_semi_global (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_semi_global].val; /* _opt_semi_global on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_semi_global");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_colo_dead_methods for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_colo_dead_methods(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val; /* _opt_colo_dead_methods on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_colo_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 42);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_colo_dead_methods for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_colo_dead_methods(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_colo_dead_methods (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val; /* _opt_colo_dead_methods on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_colo_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 42);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_tables_metrics for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_tables_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 44);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#opt_tables_metrics for (self: Object): OptionBool */
val* VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 44);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ToolContext#init for (self: ToolContext) */
void separate_compiler__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Option] */;
val* var9 /* : OptionContext */;
val* var11 /* : OptionContext */;
val* var12 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : Array[Option] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Option] */;
val* var18 /* : OptionContext */;
val* var20 /* : OptionContext */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : Array[Option] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Option] */;
val* var27 /* : OptionContext */;
val* var29 /* : OptionContext */;
val* var30 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var33 /* : Array[Option] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Option] */;
val* var36 /* : OptionContext */;
val* var38 /* : OptionContext */;
val* var39 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var45 /* : OptionBool */;
val* var47 /* : OptionBool */;
val* var48 /* : OptionBool */;
val* var50 /* : OptionBool */;
val* var51 /* : OptionBool */;
val* var53 /* : OptionBool */;
val* var54 /* : Array[Option] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Option] */;
val* var57 /* : OptionContext */;
val* var59 /* : OptionContext */;
val* var60 /* : OptionBool */;
val* var62 /* : OptionBool */;
val* var63 /* : Array[Option] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Option] */;
val* var66 /* : OptionContext */;
val* var68 /* : OptionContext */;
val* var69 /* : OptionBool */;
val* var71 /* : OptionBool */;
val* var72 /* : Array[Option] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Option] */;
{
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 24);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = 1;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var3;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_inline_intern (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 26);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var15 = array_instance Array[Option] */
var16 = 1;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var12;
{
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var9, var15); /* Direct call opts#OptionContext#add_option on <var9:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var24 = array_instance Array[Option] */
var25 = 1;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var21;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var18, var24); /* Direct call opts#OptionContext#add_option on <var18:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_shortcut_equate (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 30);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var33 = array_instance Array[Option] */
var34 = 1;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var30;
{
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var27, var33); /* Direct call opts#OptionContext#add_option on <var27:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_coloring_numbers (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 34);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 36);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_skip_dead_methods (self) on <self:ToolContext> */
var50 = self->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val; /* _opt_skip_dead_methods on <self:ToolContext> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_skip_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 38);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_semi_global (self) on <self:ToolContext> */
var53 = self->attrs[COLOR_separate_compiler__ToolContext___opt_semi_global].val; /* _opt_semi_global on <self:ToolContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_semi_global");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 40);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var54 = array_instance Array[Option] */
var55 = 5;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var42;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var56)->values[3] = (val*) var48;
((struct instance_array__NativeArray*)var56)->values[4] = (val*) var51;
{
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var36, var54); /* Direct call opts#OptionContext#add_option on <var36:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var59 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_colo_dead_methods (self) on <self:ToolContext> */
var62 = self->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val; /* _opt_colo_dead_methods on <self:ToolContext> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_colo_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 42);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var63 = array_instance Array[Option] */
var64 = 1;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var60;
{
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var57, var63); /* Direct call opts#OptionContext#add_option on <var57:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (self) on <self:ToolContext> */
var71 = self->attrs[COLOR_separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <self:ToolContext> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 44);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var72 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var72 = array_instance Array[Option] */
var73 = 1;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var69;
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var66, var72); /* Direct call opts#OptionContext#add_option on <var66:OptionContext>*/
}
RET_LABEL:;
}
/* method separate_compiler#ToolContext#init for (self: Object) */
void VIRTUAL_separate_compiler__ToolContext__init(val* self) {
separate_compiler__ToolContext__init(self); /* Direct call separate_compiler#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method separate_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void separate_compiler__ToolContext__process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var_tc /* var tc: ToolContext */;
val* var /* : OptionBool */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var13 /* : nullable Object */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const struct type* type_struct22;
const char* var_class_name23;
val* var24 /* : nullable Object */;
val* var25 /* : OptionBool */;
val* var27 /* : OptionBool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const struct type* type_struct33;
const char* var_class_name34;
val* var35 /* : nullable Object */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const struct type* type_struct44;
const char* var_class_name45;
val* var46 /* : nullable Object */;
var_args = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
var_tc = self;
{
{ /* Inline separate_compiler#ToolContext#opt_semi_global (var_tc) on <var_tc:ToolContext> */
var2 = var_tc->attrs[COLOR_separate_compiler__ToolContext___opt_semi_global].val; /* _opt_semi_global on <var_tc:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_semi_global");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 40);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionBool> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionBool> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = ((struct instance_kernel__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
if (var6){
{
{ /* Inline separate_compiler#ToolContext#opt_inline_coloring_numbers (var_tc) on <var_tc:ToolContext> */
var9 = var_tc->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <var_tc:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = 1;
{
{ /* Inline opts#Option#value= (var7,var10) on <var7:OptionBool> */
/* Covariant cast for argument 0 (value) <var10:Bool> isa VALUE */
/* <var10:Bool> isa VALUE */
type_struct = var7->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_kernel__Bool)->table_size) {
var12 = 0;
} else {
var12 = (&type_kernel__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var13 = BOX_kernel__Bool(var10); /* autobox from Bool to nullable Object */
var7->attrs[COLOR_opts__Option___value].val = var13; /* _value on <var7:OptionBool> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (var_tc) on <var_tc:ToolContext> */
var16 = var_tc->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var_tc:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 34);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = 1;
{
{ /* Inline opts#Option#value= (var14,var17) on <var14:OptionBool> */
/* Covariant cast for argument 0 (value) <var17:Bool> isa VALUE */
/* <var17:Bool> isa VALUE */
type_struct22 = var14->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype20 = type_struct22->color;
idtype21 = type_struct22->id;
if(cltype20 >= (&type_kernel__Bool)->table_size) {
var19 = 0;
} else {
var19 = (&type_kernel__Bool)->type_table[cltype20] == idtype21;
}
if (unlikely(!var19)) {
var_class_name23 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var24 = BOX_kernel__Bool(var17); /* autobox from Bool to nullable Object */
var14->attrs[COLOR_opts__Option___value].val = var24; /* _value on <var14:OptionBool> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (var_tc) on <var_tc:ToolContext> */
var27 = var_tc->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var_tc:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 36);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = 1;
{
{ /* Inline opts#Option#value= (var25,var28) on <var25:OptionBool> */
/* Covariant cast for argument 0 (value) <var28:Bool> isa VALUE */
/* <var28:Bool> isa VALUE */
type_struct33 = var25->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype31 = type_struct33->color;
idtype32 = type_struct33->id;
if(cltype31 >= (&type_kernel__Bool)->table_size) {
var30 = 0;
} else {
var30 = (&type_kernel__Bool)->type_table[cltype31] == idtype32;
}
if (unlikely(!var30)) {
var_class_name34 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var35 = BOX_kernel__Bool(var28); /* autobox from Bool to nullable Object */
var25->attrs[COLOR_opts__Option___value].val = var35; /* _value on <var25:OptionBool> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_skip_dead_methods (var_tc) on <var_tc:ToolContext> */
var38 = var_tc->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val; /* _opt_skip_dead_methods on <var_tc:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_skip_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 38);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = 1;
{
{ /* Inline opts#Option#value= (var36,var39) on <var36:OptionBool> */
/* Covariant cast for argument 0 (value) <var39:Bool> isa VALUE */
/* <var39:Bool> isa VALUE */
type_struct44 = var36->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype42 = type_struct44->color;
idtype43 = type_struct44->id;
if(cltype42 >= (&type_kernel__Bool)->table_size) {
var41 = 0;
} else {
var41 = (&type_kernel__Bool)->type_table[cltype42] == idtype43;
}
if (unlikely(!var41)) {
var_class_name45 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var46 = BOX_kernel__Bool(var39); /* autobox from Bool to nullable Object */
var36->attrs[COLOR_opts__Option___value].val = var46; /* _value on <var36:OptionBool> */
RET_LABEL40:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler#ToolContext#process_options for (self: Object, Sequence[String]) */
void VIRTUAL_separate_compiler__ToolContext__process_options(val* self, val* p0) {
separate_compiler__ToolContext__process_options(self, p0); /* Direct call separate_compiler#ToolContext#process_options on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerPhase#process_mainmodule for (self: SeparateCompilerPhase, MModule, SequenceRead[MModule]) */
void separate_compiler__SeparateCompilerPhase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var15 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
var_mainmodule = p0;
var_given_mmodules = p1;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SeparateCompilerPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:SeparateCompilerPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_separate (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 24);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts#Option#value (var3) on <var3:OptionBool> */
var8 = var3->attrs[COLOR_opts__Option___value].val; /* _value on <var3:OptionBool> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = ((struct instance_kernel__Bool*)var6)->value; /* autounbox from nullable Object to Bool */;
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SeparateCompilerPhase> */
var13 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:SeparateCompilerPhase> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = modelbuilder__ToolContext__modelbuilder(var11);
}
var_modelbuilder = var14;
{
var15 = rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(var_modelbuilder, var_mainmodule);
}
var_analysis = var15;
{
separate_compiler__ModelBuilder__run_separate_compiler(var_modelbuilder, var_mainmodule, var_analysis); /* Direct call separate_compiler#ModelBuilder#run_separate_compiler on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerPhase#process_mainmodule for (self: Object, MModule, SequenceRead[MModule]) */
void VIRTUAL_separate_compiler__SeparateCompilerPhase__process_mainmodule(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerPhase__process_mainmodule(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerPhase#process_mainmodule on <self:Object(SeparateCompilerPhase)>*/
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#run_separate_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
void separate_compiler__ModelBuilder__run_separate_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
long var /* : Int */;
long var2 /* : Int for extern */;
long var_time0 /* var time0: Int */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
long var10 /* : Int */;
val* var11 /* : SeparateCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : CodeFile */;
val* var34 /* : POSetElement[MModule] */;
val* var36 /* : POSetElement[MModule] */;
val* var37 /* : Collection[Object] */;
val* var_ /* var : Collection[MModule] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : Iterator[MModule] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var42 /* : Array[MClass] */;
val* var44 /* : Array[MClass] */;
val* var_45 /* var : Array[MClass] */;
val* var46 /* : ArrayIterator[nullable Object] */;
val* var_47 /* var : ArrayIterator[MClass] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var53 /* : String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
val* var65 /* : CodeFile */;
val* var66 /* : POSetElement[MModule] */;
val* var68 /* : POSetElement[MModule] */;
val* var69 /* : Collection[Object] */;
val* var_70 /* var : Collection[MModule] */;
val* var71 /* : Iterator[nullable Object] */;
val* var_72 /* var : Iterator[MModule] */;
short int var73 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_m75 /* var m: MModule */;
val* var76 /* : ToolContext */;
val* var78 /* : ToolContext */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : CodeFile */;
val* var104 /* : ToolContext */;
val* var106 /* : ToolContext */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
val* var125 /* : CodeFile */;
val* var126 /* : POSet[MType] */;
val* var_mtypes /* var mtypes: POSet[MType] */;
val* var_127 /* var : POSet[MType] */;
val* var128 /* : Iterator[Object] */;
val* var_129 /* var : Iterator[MType] */;
short int var130 /* : Bool */;
val* var131 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var134 /* : Set[MType] */;
val* var136 /* : Set[MType] */;
val* var_137 /* var : Set[MType] */;
val* var138 /* : Iterator[nullable Object] */;
val* var_139 /* var : Iterator[MType] */;
short int var140 /* : Bool */;
val* var141 /* : nullable Object */;
val* var_t142 /* var t: MType */;
short int var143 /* : Bool */;
long var147 /* : Int */;
long var149 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var150 /* : ToolContext */;
val* var152 /* : ToolContext */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
long var158 /* : Int */;
short int var160 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var161 /* : Int */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : Array[Object] */;
long var168 /* : Int */;
val* var169 /* : NativeArray[Object] */;
val* var170 /* : Object */;
val* var171 /* : String */;
long var172 /* : Int */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var2 = kernel_Any_Any_get_time_0(self);
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_time0 = var;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (varonce) {
var6 = varonce;
} else {
var7 = "*** GENERATING C ***";
var8 = 20;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = 1;
{
toolcontext__ToolContext__info(var3, var6, var10); /* Direct call toolcontext#ToolContext#info on <var3:ToolContext>*/
}
var11 = NEW_separate_compiler__SeparateCompiler(&type_separate_compiler__SeparateCompiler);
{
separate_compiler__SeparateCompiler__init(var11, var_mainmodule, self, var_runtime_type_analysis); /* Direct call separate_compiler#SeparateCompiler#init on <var11:SeparateCompiler>*/
}
var_compiler = var11;
{
abstract_compiler__AbstractCompiler__compile_header(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_header on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Property coloring";
var18 = 17;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = 2;
{
toolcontext__ToolContext__info(var12, var16, var20); /* Direct call toolcontext#ToolContext#info on <var12:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var23 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = ".classes";
var27 = 8;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 2;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
var33 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var32);
}
{
separate_compiler__SeparateCompiler__do_property_coloring(var_compiler); /* Direct call separate_compiler#SeparateCompiler#do_property_coloring on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var36 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = poset__POSetElement__greaters(var34);
}
var_ = var37;
{
var38 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_39 = var38;
for(;;) {
{
var40 = ((short int (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_39) /* is_ok on <var_39:Iterator[MModule]>*/;
}
if (var40){
{
var41 = ((val* (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__item]))(var_39) /* item on <var_39:Iterator[MModule]>*/;
}
var_m = var41;
{
{ /* Inline model#MModule#intro_mclasses (var_m) on <var_m:MModule> */
var44 = var_m->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <var_m:MModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 136);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_45 = var42;
{
var46 = array__AbstractArrayRead__iterator(var_45);
}
var_47 = var46;
for(;;) {
{
var48 = array__ArrayIterator__is_ok(var_47);
}
if (var48){
{
var49 = array__ArrayIterator__item(var_47);
}
var_mclass = var49;
{
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_class_to_c]))(var_compiler, var_mclass) /* compile_class_to_c on <var_compiler:SeparateCompiler>*/;
}
{
array__ArrayIterator__next(var_47); /* Direct call array#ArrayIterator#next on <var_47:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_47) on <var_47:ArrayIterator[MClass]> */
RET_LABEL50:(void)0;
}
}
{
((void (*)(val*))(var_39->class->vft[COLOR_abstract_collection__Iterator__next]))(var_39) /* next on <var_39:Iterator[MModule]>*/;
}
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_39) on <var_39:Iterator[MModule]> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var55 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ".main";
var59 = 5;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 2;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
var65 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var64);
}
{
abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions on <var_compiler:SeparateCompiler>*/
}
{
abstract_compiler__AbstractCompiler__compile_main_function(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_main_function on <var_compiler:SeparateCompiler>*/
}
{
abstract_compiler__AbstractCompiler__compile_finalizer_function(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_finalizer_function on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var68 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = poset__POSetElement__greaters(var66);
}
var_70 = var69;
{
var71 = ((val* (*)(val*))(var_70->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_70) /* iterator on <var_70:Collection[MModule]>*/;
}
var_72 = var71;
for(;;) {
{
var73 = ((short int (*)(val*))(var_72->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_72) /* is_ok on <var_72:Iterator[MModule]>*/;
}
if (var73){
{
var74 = ((val* (*)(val*))(var_72->class->vft[COLOR_abstract_collection__Iterator__item]))(var_72) /* item on <var_72:Iterator[MModule]>*/;
}
var_m75 = var74;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var78 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "Generate C for module ";
var82 = 22;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 2;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var80;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var_m75;
{
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
var88 = 2;
{
toolcontext__ToolContext__info(var76, var87, var88); /* Direct call toolcontext#ToolContext#info on <var76:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_m75) on <var_m75:MModule> */
var91 = var_m75->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_m75:MModule> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = ".sep";
var95 = 4;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 2;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var93;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
{
var101 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var100);
}
{
separate_compiler__SeparateCompiler__compile_module_to_c(var_compiler, var_m75); /* Direct call separate_compiler#SeparateCompiler#compile_module_to_c on <var_compiler:SeparateCompiler>*/
}
{
((void (*)(val*))(var_72->class->vft[COLOR_abstract_collection__Iterator__next]))(var_72) /* next on <var_72:Iterator[MModule]>*/;
}
} else {
goto BREAK_label102;
}
}
BREAK_label102: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_72) on <var_72:Iterator[MModule]> */
RET_LABEL103:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var106 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Type coloring";
var110 = 13;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = 2;
{
toolcontext__ToolContext__info(var104, var108, var112); /* Direct call toolcontext#ToolContext#info on <var104:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var115 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = ".types";
var119 = 6;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var113;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var117;
{
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
var125 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var124);
}
{
var126 = separate_compiler__SeparateCompiler__do_type_coloring(var_compiler);
}
var_mtypes = var126;
var_127 = var_mtypes;
{
var128 = poset__POSet__iterator(var_127);
}
var_129 = var128;
for(;;) {
{
var130 = ((short int (*)(val*))(var_129->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_129) /* is_ok on <var_129:Iterator[MType]>*/;
}
if (var130){
{
var131 = ((val* (*)(val*))(var_129->class->vft[COLOR_abstract_collection__Iterator__item]))(var_129) /* item on <var_129:Iterator[MType]>*/;
}
var_t = var131;
{
separate_compiler__SeparateCompiler__compile_type_to_c(var_compiler, var_t); /* Direct call separate_compiler#SeparateCompiler#compile_type_to_c on <var_compiler:SeparateCompiler>*/
}
{
((void (*)(val*))(var_129->class->vft[COLOR_abstract_collection__Iterator__next]))(var_129) /* next on <var_129:Iterator[MType]>*/;
}
} else {
goto BREAK_label132;
}
}
BREAK_label132: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_129) on <var_129:Iterator[MType]> */
RET_LABEL133:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var136 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
{
var138 = ((val* (*)(val*))(var_137->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_137) /* iterator on <var_137:Set[MType]>*/;
}
var_139 = var138;
for(;;) {
{
var140 = ((short int (*)(val*))(var_139->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_139) /* is_ok on <var_139:Iterator[MType]>*/;
}
if (var140){
{
var141 = ((val* (*)(val*))(var_139->class->vft[COLOR_abstract_collection__Iterator__item]))(var_139) /* item on <var_139:Iterator[MType]>*/;
}
var_t142 = var141;
{
var143 = poset__POSet__has(var_mtypes, var_t142);
}
if (var143){
goto BREAK_label144;
} else {
}
{
separate_compiler__SeparateCompiler__compile_type_to_c(var_compiler, var_t142); /* Direct call separate_compiler#SeparateCompiler#compile_type_to_c on <var_compiler:SeparateCompiler>*/
}
BREAK_label144: (void)0;
{
((void (*)(val*))(var_139->class->vft[COLOR_abstract_collection__Iterator__next]))(var_139) /* next on <var_139:Iterator[MType]>*/;
}
} else {
goto BREAK_label145;
}
}
BREAK_label145: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_139) on <var_139:Iterator[MType]> */
RET_LABEL146:(void)0;
}
}
{
separate_compiler__SeparateCompiler__display_stats(var_compiler); /* Direct call separate_compiler#SeparateCompiler#display_stats on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var149 = kernel_Any_Any_get_time_0(self);
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
var_time1 = var147;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var152 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "*** END GENERATING C: ";
var156 = 22;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var160 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var161 = var_time1 - var_time0;
var158 = var161;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
if (varonce162) {
var163 = varonce162;
} else {
var164 = " ***";
var165 = 4;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var167 = array_instance Array[Object] */
var168 = 3;
var169 = NEW_array__NativeArray(var168, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var169)->values[0] = (val*) var154;
var170 = BOX_kernel__Int(var158); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var169)->values[1] = (val*) var170;
((struct instance_array__NativeArray*)var169)->values[2] = (val*) var163;
{
((void (*)(val*, val*, long))(var167->class->vft[COLOR_array__Array__with_native]))(var167, var169, var168) /* with_native on <var167:Array[Object]>*/;
}
}
{
var171 = ((val* (*)(val*))(var167->class->vft[COLOR_string__Object__to_s]))(var167) /* to_s on <var167:Array[Object]>*/;
}
var172 = 2;
{
toolcontext__ToolContext__info(var150, var171, var172); /* Direct call toolcontext#ToolContext#info on <var150:ToolContext>*/
}
{
abstract_compiler__ModelBuilder__write_and_make(self, var_compiler); /* Direct call abstract_compiler#ModelBuilder#write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#run_separate_compiler for (self: Object, MModule, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_compiler__ModelBuilder__run_separate_compiler(val* self, val* p0, val* p1) {
separate_compiler__ModelBuilder__run_separate_compiler(self, p0, p1); /* Direct call separate_compiler#ModelBuilder#run_separate_compiler on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_tables for (self: ModelBuilder): Int */
long separate_compiler__ModelBuilder__nb_invok_by_tables(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_tables for (self: Object): Int */
long VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_tables(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <self:Object(ModelBuilder)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_tables= for (self: ModelBuilder, Int) */
void separate_compiler__ModelBuilder__nb_invok_by_tables_61d(val* self, long p0) {
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l = p0; /* _nb_invok_by_tables on <self:ModelBuilder> */
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_tables= for (self: Object, Int) */
void VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_tables_61d(val* self, long p0) {
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l = p0; /* _nb_invok_by_tables on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_direct for (self: ModelBuilder): Int */
long separate_compiler__ModelBuilder__nb_invok_by_direct(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_direct for (self: Object): Int */
long VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_direct(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <self:Object(ModelBuilder)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_direct= for (self: ModelBuilder, Int) */
void separate_compiler__ModelBuilder__nb_invok_by_direct_61d(val* self, long p0) {
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l = p0; /* _nb_invok_by_direct on <self:ModelBuilder> */
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_direct= for (self: Object, Int) */
void VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_direct_61d(val* self, long p0) {
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l = p0; /* _nb_invok_by_direct on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_inline for (self: ModelBuilder): Int */
long separate_compiler__ModelBuilder__nb_invok_by_inline(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_inline for (self: Object): Int */
long VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_inline(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <self:Object(ModelBuilder)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_inline= for (self: ModelBuilder, Int) */
void separate_compiler__ModelBuilder__nb_invok_by_inline_61d(val* self, long p0) {
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l = p0; /* _nb_invok_by_inline on <self:ModelBuilder> */
RET_LABEL:;
}
/* method separate_compiler#ModelBuilder#nb_invok_by_inline= for (self: Object, Int) */
void VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_inline_61d(val* self, long p0) {
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l = p0; /* _nb_invok_by_inline on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis for (self: SeparateCompiler): nullable RapidTypeAnalysis */
val* separate_compiler__SeparateCompiler__runtime_type_analysis(val* self) {
val* var /* : nullable RapidTypeAnalysis */;
val* var1 /* : nullable RapidTypeAnalysis */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis for (self: Object): nullable RapidTypeAnalysis */
val* VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis(val* self) {
val* var /* : nullable RapidTypeAnalysis */;
val* var1 /* : nullable RapidTypeAnalysis */;
val* var3 /* : nullable RapidTypeAnalysis */;
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:Object(SeparateCompiler)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis= for (self: SeparateCompiler, nullable RapidTypeAnalysis) */
void separate_compiler__SeparateCompiler__runtime_type_analysis_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val = p0; /* _runtime_type_analysis on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#runtime_type_analysis= for (self: Object, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val = p0; /* _runtime_type_analysis on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#undead_types for (self: SeparateCompiler): Set[MType] */
val* separate_compiler__SeparateCompiler__undead_types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#undead_types for (self: Object): Set[MType] */
val* VIRTUAL_separate_compiler__SeparateCompiler__undead_types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
val* var3 /* : Set[MType] */;
{ /* Inline separate_compiler#SeparateCompiler#undead_types (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#live_unresolved_types for (self: SeparateCompiler): Map[MClassDef, Set[MType]] */
val* separate_compiler__SeparateCompiler__live_unresolved_types(val* self) {
val* var /* : Map[MClassDef, Set[MType]] */;
val* var1 /* : Map[MClassDef, Set[MType]] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#live_unresolved_types for (self: Object): Map[MClassDef, Set[MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types(val* self) {
val* var /* : Map[MClassDef, Set[MType]] */;
val* var1 /* : Map[MClassDef, Set[MType]] */;
val* var3 /* : Map[MClassDef, Set[MType]] */;
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_ids for (self: SeparateCompiler): Map[MType, Int] */
val* separate_compiler__SeparateCompiler__type_ids(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 159);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_ids for (self: Object): Map[MType, Int] */
val* VIRTUAL_separate_compiler__SeparateCompiler__type_ids(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
val* var3 /* : Map[MType, Int] */;
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 159);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_ids= for (self: SeparateCompiler, Map[MType, Int]) */
void separate_compiler__SeparateCompiler__type_ids_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val = p0; /* _type_ids on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_ids= for (self: Object, Map[MType, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__type_ids_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#type_ids= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val = p0; /* _type_ids on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_colors for (self: SeparateCompiler): Map[MType, Int] */
val* separate_compiler__SeparateCompiler__type_colors(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val; /* _type_colors on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 160);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_colors for (self: Object): Map[MType, Int] */
val* VIRTUAL_separate_compiler__SeparateCompiler__type_colors(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
val* var3 /* : Map[MType, Int] */;
{ /* Inline separate_compiler#SeparateCompiler#type_colors (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val; /* _type_colors on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 160);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_colors= for (self: SeparateCompiler, Map[MType, Int]) */
void separate_compiler__SeparateCompiler__type_colors_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val = p0; /* _type_colors on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#type_colors= for (self: Object, Map[MType, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__type_colors_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#type_colors= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val = p0; /* _type_colors on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#opentype_colors for (self: SeparateCompiler): Map[MType, Int] */
val* separate_compiler__SeparateCompiler__opentype_colors(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 161);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#opentype_colors for (self: Object): Map[MType, Int] */
val* VIRTUAL_separate_compiler__SeparateCompiler__opentype_colors(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
val* var3 /* : Map[MType, Int] */;
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 161);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#opentype_colors= for (self: SeparateCompiler, Map[MType, Int]) */
void separate_compiler__SeparateCompiler__opentype_colors_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val = p0; /* _opentype_colors on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#opentype_colors= for (self: Object, Map[MType, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__opentype_colors_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val = p0; /* _opentype_colors on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_colors for (self: SeparateCompiler): Map[PropertyLayoutElement, Int] */
val* separate_compiler__SeparateCompiler__method_colors(val* self) {
val* var /* : Map[PropertyLayoutElement, Int] */;
val* var1 /* : Map[PropertyLayoutElement, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 162);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_colors for (self: Object): Map[PropertyLayoutElement, Int] */
val* VIRTUAL_separate_compiler__SeparateCompiler__method_colors(val* self) {
val* var /* : Map[PropertyLayoutElement, Int] */;
val* var1 /* : Map[PropertyLayoutElement, Int] */;
val* var3 /* : Map[PropertyLayoutElement, Int] */;
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 162);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_colors= for (self: SeparateCompiler, Map[PropertyLayoutElement, Int]) */
void separate_compiler__SeparateCompiler__method_colors_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val = p0; /* _method_colors on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_colors= for (self: Object, Map[PropertyLayoutElement, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__method_colors_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#method_colors= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val = p0; /* _method_colors on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_colors for (self: SeparateCompiler): Map[MAttribute, Int] */
val* separate_compiler__SeparateCompiler__attr_colors(val* self) {
val* var /* : Map[MAttribute, Int] */;
val* var1 /* : Map[MAttribute, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 163);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_colors for (self: Object): Map[MAttribute, Int] */
val* VIRTUAL_separate_compiler__SeparateCompiler__attr_colors(val* self) {
val* var /* : Map[MAttribute, Int] */;
val* var1 /* : Map[MAttribute, Int] */;
val* var3 /* : Map[MAttribute, Int] */;
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 163);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_colors= for (self: SeparateCompiler, Map[MAttribute, Int]) */
void separate_compiler__SeparateCompiler__attr_colors_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val = p0; /* _attr_colors on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_colors= for (self: Object, Map[MAttribute, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__attr_colors_61d(val* self, val* p0) {
{ /* Inline separate_compiler#SeparateCompiler#attr_colors= (self,p0) on <self:Object(SeparateCompiler)> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val = p0; /* _attr_colors on <self:Object(SeparateCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#init for (self: SeparateCompiler, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void separate_compiler__SeparateCompiler__init(val* self, val* p0, val* p1, val* p2) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_mmbuilder /* var mmbuilder: ModelBuilder */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : CodeFile */;
val* var_file /* var file: CodeFile */;
val* var5 /* : CodeWriter */;
var_mainmodule = p0;
var_mmbuilder = p1;
var_runtime_type_analysis = p2;
{
abstract_compiler__AbstractCompiler__init(self, var_mainmodule, var_mmbuilder); /* Direct call abstract_compiler#AbstractCompiler#init on <self:SeparateCompiler>*/
}
if (varonce) {
var = varonce;
} else {
var1 = "nit.common";
var2 = 10;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = abstract_compiler__AbstractCompiler__new_file(self, var);
}
var_file = var4;
var5 = NEW_abstract_compiler__CodeWriter(&type_abstract_compiler__CodeWriter);
{
abstract_compiler__CodeWriter__init(var5, var_file); /* Direct call abstract_compiler#CodeWriter#init on <var5:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header= (self,var5) on <self:SeparateCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val = var5; /* _header on <self:SeparateCompiler> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis= (self,var_runtime_type_analysis) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val = var_runtime_type_analysis; /* _runtime_type_analysis on <self:SeparateCompiler> */
RET_LABEL7:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_box_kinds(self); /* Direct call separate_compiler#SeparateCompiler#compile_box_kinds on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#init for (self: Object, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_compiler__SeparateCompiler__init(val* self, val* p0, val* p1, val* p2) {
separate_compiler__SeparateCompiler__init(self, p0, p1, p2); /* Direct call separate_compiler#SeparateCompiler#init on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_structs for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : CodeWriter */;
val* var9 /* : CodeWriter */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : CodeWriter */;
val* var17 /* : CodeWriter */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : CodeWriter */;
val* var25 /* : CodeWriter */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : CodeWriter */;
val* var33 /* : CodeWriter */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : CodeWriter */;
val* var41 /* : CodeWriter */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (varonce) {
var3 = varonce;
} else {
var4 = "typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */";
var5 = 81;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
abstract_compiler__CodeWriter__add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
separate_compiler__SeparateCompiler__compile_header_attribute_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_header_attribute_structs on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "struct class { int box_kind; nitmethod_t vft[]; }; /* general C type representing a Nit class. */";
var13 = 97;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
abstract_compiler__CodeWriter__add_decl(var7, var11); /* Direct call abstract_compiler#CodeWriter#add_decl on <var7:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var17 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "struct type { int id; const char *name; int color; short int is_nullable; const struct types *resolution_table; int table_size; int type_table[]; }; /* general C type representing a Nit type. */";
var21 = 194;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
abstract_compiler__CodeWriter__add_decl(var15, var19); /* Direct call abstract_compiler#CodeWriter#add_decl on <var15:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "struct instance { const struct type *type; const struct class *class; nitattribute_t attrs[]; }; /* general C type representing a Nit instance. */";
var29 = 146;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
abstract_compiler__CodeWriter__add_decl(var23, var27); /* Direct call abstract_compiler#CodeWriter#add_decl on <var23:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var33 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "struct types { int dummy; const struct type *types[]; }; /* a list types (used for vts, fts and unresolved lists). */";
var37 = 117;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
abstract_compiler__CodeWriter__add_decl(var31, var35); /* Direct call abstract_compiler#CodeWriter#add_decl on <var31:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var41 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "typedef struct instance val; /* general C type representing a Nit instance. */";
var45 = 78;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
abstract_compiler__CodeWriter__add_decl(var39, var43); /* Direct call abstract_compiler#CodeWriter#add_decl on <var39:CodeWriter>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_header_structs(val* self) {
separate_compiler__SeparateCompiler__compile_header_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_header_structs on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_attribute_structs for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_header_attribute_structs(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : CodeWriter */;
val* var15 /* : CodeWriter */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : CodeWriter */;
val* var22 /* : CodeWriter */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : CodeWriter */;
val* var30 /* : CodeWriter */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : HashMap[MClass, Int] */;
val* var38 /* : HashMap[MClass, Int] */;
val* var_ /* var : HashMap[MClass, Int] */;
val* var39 /* : HashMapIterator[Object, nullable Object] */;
val* var_40 /* var : HashMapIterator[MClass, Int] */;
short int var41 /* : Bool */;
val* var42 /* : Object */;
val* var_c /* var c: MClass */;
val* var43 /* : nullable Object */;
long var44 /* : Int */;
long var_v /* var v: Int */;
val* var45 /* : MClassType */;
val* var47 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var48 /* : MClass */;
val* var50 /* : MClass */;
val* var51 /* : String */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : CodeWriter */;
val* var63 /* : CodeWriter */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var82 /* : CodeWriter */;
val* var84 /* : CodeWriter */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = ((struct instance_kernel__Bool*)var9)->value; /* autounbox from nullable Object to Bool */;
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (varonce) {
var16 = varonce;
} else {
var17 = "typedef void* nitattribute_t; /* general C type representing a Nit attribute. */";
var18 = 80;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
abstract_compiler__CodeWriter__add_decl(var13, var16); /* Direct call abstract_compiler#CodeWriter#add_decl on <var13:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "typedef union {";
var26 = 15;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
abstract_compiler__CodeWriter__add_decl(var20, var24); /* Direct call abstract_compiler#CodeWriter#add_decl on <var20:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var30 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "void* val;";
var34 = 10;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__CodeWriter__add_decl(var28, var32); /* Direct call abstract_compiler#CodeWriter#add_decl on <var28:CodeWriter>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var38 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_ = var36;
{
var39 = hash_collection__HashMap__iterator(var_);
}
var_40 = var39;
for(;;) {
{
var41 = hash_collection__HashMapIterator__is_ok(var_40);
}
if (var41){
{
var42 = hash_collection__HashMapIterator__key(var_40);
}
var_c = var42;
{
var43 = hash_collection__HashMapIterator__item(var_40);
}
var44 = ((struct instance_kernel__Int*)var43)->value; /* autounbox from nullable Object to Int */;
var_v = var44;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var47 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_t = var45;
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MClassType> */
var50 = var_t->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_t:MClassType> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MClass#name (var48) on <var48:MClass> */
var53 = var48->attrs[COLOR_model__MClass___name].val; /* _name on <var48:MClass> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "Pointer";
var57 = 7;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
var60 = string__FlatString___61d_61d(var51, var55);
var59 = var60;
}
if (var59){
goto BREAK_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var63 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = abstract_compiler__MClassType__ctype_extern(var_t);
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " ";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
var70 = abstract_compiler__MClassType__ctypename(var_t);
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ";";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 4;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var70;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var72;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var61, var79); /* Direct call abstract_compiler#CodeWriter#add_decl on <var61:CodeWriter>*/
}
BREAK_label: (void)0;
{
hash_collection__HashMapIterator__next(var_40); /* Direct call hash_collection#HashMapIterator#next on <var_40:HashMapIterator[MClass, Int]>*/
}
} else {
goto BREAK_label80;
}
}
BREAK_label80: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_40) on <var_40:HashMapIterator[MClass, Int]> */
RET_LABEL81:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var84 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "} nitattribute_t; /* general C type representing a Nit attribute. */";
var88 = 68;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
abstract_compiler__CodeWriter__add_decl(var82, var86); /* Direct call abstract_compiler#CodeWriter#add_decl on <var82:CodeWriter>*/
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_header_attribute_structs for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs(val* self) {
separate_compiler__SeparateCompiler__compile_header_attribute_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_header_attribute_structs on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_box_kinds for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__compile_box_kinds(val* self) {
val* var /* : Array[String] */;
long var1 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var_31 /* var : Array[String] */;
val* var32 /* : ArrayIterator[nullable Object] */;
val* var_33 /* var : ArrayIterator[String] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_classname /* var classname: String */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var39 /* : Model */;
val* var41 /* : Model */;
val* var42 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var59 /* : String */;
val* var60 /* : HashMap[MClass, Int] */;
val* var62 /* : HashMap[MClass, Int] */;
val* var63 /* : nullable Object */;
val* var64 /* : HashMap[MClass, Int] */;
val* var66 /* : HashMap[MClass, Int] */;
long var67 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var72 /* : Int */;
val* var73 /* : nullable Object */;
var = NEW_array__Array(&type_array__Arraystring__String);
var1 = 6;
{
array__Array__with_capacity(var, var1); /* Direct call array#Array#with_capacity on <var:Array[String]>*/
}
var_ = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "Int";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
array__AbstractArray__push(var_, var2); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Bool";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
array__AbstractArray__push(var_, var7); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "Char";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
{
array__AbstractArray__push(var_, var12); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "Float";
var19 = 5;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
array__AbstractArray__push(var_, var17); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "NativeString";
var24 = 12;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
array__AbstractArray__push(var_, var22); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Pointer";
var29 = 7;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
array__AbstractArray__push(var_, var27); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var_31 = var_;
{
var32 = array__AbstractArrayRead__iterator(var_31);
}
var_33 = var32;
for(;;) {
{
var34 = array__ArrayIterator__is_ok(var_33);
}
if (var34){
{
var35 = array__ArrayIterator__item(var_33);
}
var_classname = var35;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var38 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var36) on <var36:MModule> */
var41 = var36->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var36:MModule> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 72);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = model__Model__get_mclasses_by_name(var39, var_classname);
}
var_classes = var42;
var43 = NULL;
if (var_classes == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
var45 = array__Array___61d_61d(var_classes, var43);
var44 = var45;
}
if (var44){
goto BREAK_label;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_classes) on <var_classes:nullable Array[MClass](Array[MClass])> */
var48 = var_classes->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_classes:nullable Array[MClass](Array[MClass])> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = 1;
{
{ /* Inline kernel#Int#== (var46,var49) on <var46:Int> */
var53 = var46 == var49;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (unlikely(!var50)) {
if (varonce54) {
var55 = varonce54;
} else {
var56 = ", ";
var57 = 2;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
var59 = string__Collection__join(var_classes, var55);
}
{
file__Object__print(self, var59); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 211);
show_backtrace(1);
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var62 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = abstract_collection__SequenceRead__first(var_classes);
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var66 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = hash_collection__HashMap__length(var64);
}
var68 = 1;
{
{ /* Inline kernel#Int#+ (var67,var68) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var72 = var67 + var68;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
var73 = BOX_kernel__Int(var69); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var60, var63, var73); /* Direct call hash_collection#HashMap#[]= on <var60:HashMap[MClass, Int]>*/
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_33); /* Direct call array#ArrayIterator#next on <var_33:ArrayIterator[String]>*/
}
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_33) on <var_33:ArrayIterator[String]> */
RET_LABEL75:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_box_kinds for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds(val* self) {
separate_compiler__SeparateCompiler__compile_box_kinds(self); /* Direct call separate_compiler#SeparateCompiler#compile_box_kinds on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#box_kinds for (self: SeparateCompiler): HashMap[MClass, Int] */
val* separate_compiler__SeparateCompiler__box_kinds(val* self) {
val* var /* : HashMap[MClass, Int] */;
val* var1 /* : HashMap[MClass, Int] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#box_kinds for (self: Object): HashMap[MClass, Int] */
val* VIRTUAL_separate_compiler__SeparateCompiler__box_kinds(val* self) {
val* var /* : HashMap[MClass, Int] */;
val* var1 /* : HashMap[MClass, Int] */;
val* var3 /* : HashMap[MClass, Int] */;
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#box_kind_of for (self: SeparateCompiler, MClass): Int */
long separate_compiler__SeparateCompiler__box_kind_of(val* self, val* p0) {
long var /* : Int */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var12 /* : Bool */;
val* var13 /* : MClassKind */;
val* var15 /* : MClassKind */;
val* var16 /* : MClassKind */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : String */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var_other34 /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : HashMap[MClass, Int] */;
val* var40 /* : HashMap[MClass, Int] */;
val* var41 /* : MModule */;
val* var43 /* : MModule */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : MClass */;
val* var50 /* : nullable Object */;
long var51 /* : Int */;
val* var52 /* : HashMap[MClass, Int] */;
val* var54 /* : HashMap[MClass, Int] */;
val* var55 /* : nullable Object */;
long var56 /* : Int */;
var_mclass = p0;
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var3 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_compiler__MClassType__ctype_extern(var1);
}
if (varonce) {
var5 = varonce;
} else {
var6 = "val*";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var10 = string__FlatString___61d_61d(var4, var5);
var9 = var10;
}
if (var9){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var15 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var13,var16) on <var13:MClassKind> */
var_other = var16;
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:MClassKind> */
var22 = var13 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
var_ = var17;
if (var17){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var25 = var_mclass->attrs[COLOR_model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "NativeString";
var29 = 12;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
{ /* Inline kernel#Object#!= (var23,var27) on <var23:String> */
var_other34 = var27;
{
var36 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_other34) /* == on <var23:String>*/;
var35 = var36;
}
var37 = !var35;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var12 = var31;
} else {
var12 = var_;
}
if (var12){
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var40 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var43 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "Pointer";
var47 = 7;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
var49 = model__MModule__get_primitive_class(var41, var45);
}
{
var50 = hash_collection__HashMap___91d_93d(var38, var49);
}
var51 = ((struct instance_kernel__Int*)var50)->value; /* autounbox from nullable Object to Int */;
var = var51;
goto RET_LABEL;
} else {
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var54 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = hash_collection__HashMap___91d_93d(var52, var_mclass);
}
var56 = ((struct instance_kernel__Int*)var55)->value; /* autounbox from nullable Object to Int */;
var = var56;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#box_kind_of for (self: Object, MClass): Int */
long VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = separate_compiler__SeparateCompiler__box_kind_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#compile_color_consts for (self: SeparateCompiler, Map[Object, Int]) */
void separate_compiler__SeparateCompiler__compile_color_consts(val* self, val* p0) {
val* var_colors /* var colors: Map[Object, Int] */;
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_ /* var : Map[Object, Int] */;
val* var1 /* : MapIterator[Object, nullable Object] */;
val* var_2 /* var : MapIterator[Object, Int] */;
short int var3 /* : Bool */;
val* var4 /* : Object */;
val* var_m /* var m: Object */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
long var_c /* var c: Int */;
var_colors = p0;
{
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var;
var_ = var_colors;
{
var1 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[Object, Int]>*/;
}
var_2 = var1;
for(;;) {
{
var3 = ((short int (*)(val*))(var_2->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_2) /* is_ok on <var_2:MapIterator[Object, Int]>*/;
}
if (var3){
{
var4 = ((val* (*)(val*))(var_2->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_2) /* key on <var_2:MapIterator[Object, Int]>*/;
}
var_m = var4;
{
var5 = ((val* (*)(val*))(var_2->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_2) /* item on <var_2:MapIterator[Object, Int]>*/;
}
var6 = ((struct instance_kernel__Int*)var5)->value; /* autounbox from nullable Object to Int */;
var_c = var6;
{
separate_compiler__SeparateCompiler__compile_color_const(self, var_v, var_m, var_c); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:SeparateCompiler>*/
}
{
((void (*)(val*))(var_2->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_2) /* next on <var_2:MapIterator[Object, Int]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_2) on <var_2:MapIterator[Object, Int]> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_color_consts for (self: Object, Map[Object, Int]) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_color_consts(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_color_const for (self: SeparateCompiler, SeparateCompilerVisitor, Object, Int) */
void separate_compiler__SeparateCompiler__compile_color_const(val* self, val* p0, val* p1, long p2) {
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_m /* var m: Object */;
long var_color /* var color: Int */;
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
val* var11 /* : OptionBool */;
val* var13 /* : OptionBool */;
val* var14 /* : nullable Object */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : Object */;
val* var33 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : Object */;
val* var70 /* : String */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
val* var74 /* : ModelBuilder */;
val* var76 /* : ModelBuilder */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
val* var80 /* : OptionBool */;
val* var82 /* : OptionBool */;
val* var83 /* : nullable Object */;
val* var85 /* : nullable Object */;
short int var86 /* : Bool */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : Object */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : Object */;
val* var140 /* : String */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
val* var144 /* : ModelBuilder */;
val* var146 /* : ModelBuilder */;
val* var147 /* : ToolContext */;
val* var149 /* : ToolContext */;
val* var150 /* : OptionBool */;
val* var152 /* : OptionBool */;
val* var153 /* : nullable Object */;
val* var155 /* : nullable Object */;
short int var156 /* : Bool */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : FlatString */;
val* var169 /* : Array[Object] */;
long var170 /* : Int */;
val* var171 /* : NativeArray[Object] */;
val* var172 /* : Object */;
val* var173 /* : String */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : Array[Object] */;
long var187 /* : Int */;
val* var188 /* : NativeArray[Object] */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
val* var206 /* : Array[Object] */;
long var207 /* : Int */;
val* var208 /* : NativeArray[Object] */;
val* var209 /* : Object */;
val* var210 /* : String */;
val* var211 /* : HashSet[Object] */;
val* var213 /* : HashSet[Object] */;
var_v = p0;
var_m = p1;
var_color = p2;
{
{ /* Inline separate_compiler#SeparateCompiler#color_consts_done (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_separate_compiler__SeparateCompiler___color_consts_done].val; /* _color_consts_done on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _color_consts_done");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 266);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = hash_collection__HashSet__has(var, var_m);
}
if (var3){
goto RET_LABEL;
} else {
}
/* <var_m:Object> isa MProperty */
cltype = type_model__MProperty.color;
idtype = type_model__MProperty.id;
if(cltype >= var_m->type->table_size) {
var4 = 0;
} else {
var4 = var_m->type->type_table[cltype] == idtype;
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var5) on <var5:ModelBuilder> */
var10 = var5->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var5:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_coloring_numbers (var8) on <var8:ToolContext> */
var13 = var8->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <var8:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline opts#Option#value (var11) on <var11:OptionBool> */
var16 = var11->attrs[COLOR_opts__Option___value].val; /* _value on <var11:OptionBool> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = ((struct instance_kernel__Bool*)var14)->value; /* autounbox from nullable Object to Bool */;
if (var17){
{
var18 = separate_compiler__MProperty__const_color(var_m);
}
if (varonce) {
var19 = varonce;
} else {
var20 = "#define ";
var21 = 8;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
{
var23 = separate_compiler__MProperty__const_color(var_m);
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = " ";
var27 = 1;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 4;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var23;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
var32 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var32;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var33 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var18, var33); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
} else {
{
var34 = separate_compiler__MProperty__const_color(var_m);
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "extern const int ";
var38 = 17;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var40 = separate_compiler__MProperty__const_color(var_m);
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var40;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var34, var49); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "const int ";
var53 = 10;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = separate_compiler__MProperty__const_color(var_m);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = " = ";
var59 = 3;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = ";";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 5;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var68)->values[2] = (val*) var57;
var69 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var68)->values[3] = (val*) var69;
((struct instance_array__NativeArray*)var68)->values[4] = (val*) var62;
{
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var70 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
} else {
/* <var_m:Object> isa MPropDef */
cltype72 = type_model__MPropDef.color;
idtype73 = type_model__MPropDef.id;
if(cltype72 >= var_m->type->table_size) {
var71 = 0;
} else {
var71 = var_m->type->type_table[cltype72] == idtype73;
}
if (var71){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var76 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var74) on <var74:ModelBuilder> */
var79 = var74->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var74:ModelBuilder> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_coloring_numbers (var77) on <var77:ToolContext> */
var82 = var77->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <var77:ToolContext> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline opts#Option#value (var80) on <var80:OptionBool> */
var85 = var80->attrs[COLOR_opts__Option___value].val; /* _value on <var80:OptionBool> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var86 = ((struct instance_kernel__Bool*)var83)->value; /* autounbox from nullable Object to Bool */;
if (var86){
{
var87 = separate_compiler__MPropDef__const_color(var_m);
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "#define ";
var91 = 8;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
var93 = separate_compiler__MPropDef__const_color(var_m);
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = " ";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 4;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var95;
var102 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var101)->values[3] = (val*) var102;
{
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var87, var103); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
} else {
{
var104 = separate_compiler__MPropDef__const_color(var_m);
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "extern const int ";
var108 = 17;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
var110 = separate_compiler__MPropDef__const_color(var_m);
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = ";";
var114 = 1;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 3;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var106;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var110;
((struct instance_array__NativeArray*)var118)->values[2] = (val*) var112;
{
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var104, var119); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = "const int ";
var123 = 10;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var125 = separate_compiler__MPropDef__const_color(var_m);
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = " = ";
var129 = 3;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = ";";
var134 = 1;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 5;
var138 = NEW_array__NativeArray(var137, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var138)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var138)->values[1] = (val*) var125;
((struct instance_array__NativeArray*)var138)->values[2] = (val*) var127;
var139 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var138)->values[3] = (val*) var139;
((struct instance_array__NativeArray*)var138)->values[4] = (val*) var132;
{
((void (*)(val*, val*, long))(var136->class->vft[COLOR_array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
}
{
var140 = ((val* (*)(val*))(var136->class->vft[COLOR_string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
} else {
/* <var_m:Object> isa MType */
cltype142 = type_model__MType.color;
idtype143 = type_model__MType.id;
if(cltype142 >= var_m->type->table_size) {
var141 = 0;
} else {
var141 = var_m->type->type_table[cltype142] == idtype143;
}
if (var141){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var146 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var144) on <var144:ModelBuilder> */
var149 = var144->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var144:ModelBuilder> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_coloring_numbers (var147) on <var147:ToolContext> */
var152 = var147->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val; /* _opt_inline_coloring_numbers on <var147:ToolContext> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_coloring_numbers");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 32);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline opts#Option#value (var150) on <var150:OptionBool> */
var155 = var150->attrs[COLOR_opts__Option___value].val; /* _value on <var150:OptionBool> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
var156 = ((struct instance_kernel__Bool*)var153)->value; /* autounbox from nullable Object to Bool */;
if (var156){
{
var157 = separate_compiler__MType__const_color(var_m);
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = "#define ";
var161 = 8;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
{
var163 = separate_compiler__MType__const_color(var_m);
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = " ";
var167 = 1;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
var169 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var169 = array_instance Array[Object] */
var170 = 4;
var171 = NEW_array__NativeArray(var170, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var171)->values[0] = (val*) var159;
((struct instance_array__NativeArray*)var171)->values[1] = (val*) var163;
((struct instance_array__NativeArray*)var171)->values[2] = (val*) var165;
var172 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var171)->values[3] = (val*) var172;
{
((void (*)(val*, val*, long))(var169->class->vft[COLOR_array__Array__with_native]))(var169, var171, var170) /* with_native on <var169:Array[Object]>*/;
}
}
{
var173 = ((val* (*)(val*))(var169->class->vft[COLOR_string__Object__to_s]))(var169) /* to_s on <var169:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var157, var173); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
} else {
{
var174 = separate_compiler__MType__const_color(var_m);
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = "extern const int ";
var178 = 17;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
var180 = separate_compiler__MType__const_color(var_m);
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = ";";
var184 = 1;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
var186 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var186 = array_instance Array[Object] */
var187 = 3;
var188 = NEW_array__NativeArray(var187, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var188)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var188)->values[1] = (val*) var180;
((struct instance_array__NativeArray*)var188)->values[2] = (val*) var182;
{
((void (*)(val*, val*, long))(var186->class->vft[COLOR_array__Array__with_native]))(var186, var188, var187) /* with_native on <var186:Array[Object]>*/;
}
}
{
var189 = ((val* (*)(val*))(var186->class->vft[COLOR_string__Object__to_s]))(var186) /* to_s on <var186:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var174, var189); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "const int ";
var193 = 10;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
var195 = separate_compiler__MType__const_color(var_m);
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = " = ";
var199 = 3;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = ";";
var204 = 1;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
var206 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var206 = array_instance Array[Object] */
var207 = 5;
var208 = NEW_array__NativeArray(var207, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var208)->values[0] = (val*) var191;
((struct instance_array__NativeArray*)var208)->values[1] = (val*) var195;
((struct instance_array__NativeArray*)var208)->values[2] = (val*) var197;
var209 = BOX_kernel__Int(var_color); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var208)->values[3] = (val*) var209;
((struct instance_array__NativeArray*)var208)->values[4] = (val*) var202;
{
((void (*)(val*, val*, long))(var206->class->vft[COLOR_array__Array__with_native]))(var206, var208, var207) /* with_native on <var206:Array[Object]>*/;
}
}
{
var210 = ((val* (*)(val*))(var206->class->vft[COLOR_string__Object__to_s]))(var206) /* to_s on <var206:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var210); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
} else {
}
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#color_consts_done (self) on <self:SeparateCompiler> */
var213 = self->attrs[COLOR_separate_compiler__SeparateCompiler___color_consts_done].val; /* _color_consts_done on <self:SeparateCompiler> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _color_consts_done");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 266);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
hash_collection__HashSet__add(var211, var_m); /* Direct call hash_collection#HashSet#add on <var211:HashSet[Object]>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_color_const for (self: Object, SeparateCompilerVisitor, Object, Int) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const(val* self, val* p0, val* p1, long p2) {
separate_compiler__SeparateCompiler__compile_color_const(self, p0, p1, p2); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#color_consts_done for (self: SeparateCompiler): HashSet[Object] */
val* separate_compiler__SeparateCompiler__color_consts_done(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_separate_compiler__SeparateCompiler___color_consts_done].val; /* _color_consts_done on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _color_consts_done");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 266);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#color_consts_done for (self: Object): HashSet[Object] */
val* VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline separate_compiler#SeparateCompiler#color_consts_done (self) on <self:Object(SeparateCompiler)> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___color_consts_done].val; /* _color_consts_done on <self:Object(SeparateCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _color_consts_done");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 266);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#do_property_coloring for (self: SeparateCompiler) */
void separate_compiler__SeparateCompiler__do_property_coloring(val* self) {
val* var /* : nullable RapidTypeAnalysis */;
val* var2 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : POSet[MClass] */;
val* var_poset /* var poset: POSet[MClass] */;
val* var7 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var8 /* : POSetColorer[MClass] */;
val* var_colorer /* var colorer: POSetColorer[MClass] */;
val* var9 /* : Array[MMethod] */;
val* var_dead_methods /* var dead_methods: Array[MMethod] */;
val* var10 /* : HashMap[MClass, Set[PropertyLayoutElement]] */;
val* var_mmethods /* var mmethods: HashMap[MClass, Set[PropertyLayoutElement]] */;
val* var11 /* : HashMap[MClass, Set[MAttribute]] */;
val* var_mattributes /* var mattributes: HashMap[MClass, Set[MAttribute]] */;
val* var_ /* var : HashSet[MClass] */;
val* var12 /* : Iterator[Object] */;
val* var_13 /* var : Iterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var16 /* : HashSet[PropertyLayoutElement] */;
val* var17 /* : HashSet[MAttribute] */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : Set[MProperty] */;
val* var_22 /* var : Set[MProperty] */;
val* var23 /* : Iterator[nullable Object] */;
val* var_24 /* var : Iterator[MProperty] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var27 /* : Bool */;
int cltype;
int idtype;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : ModelBuilder */;
val* var32 /* : ModelBuilder */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var39 /* : nullable Object */;
val* var41 /* : nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : HashSet[MMethod] */;
val* var55 /* : HashSet[MMethod] */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
val* var62 /* : nullable Object */;
val* var67 /* : HashSet[MMethodDef] */;
val* var_all_super_calls /* var all_super_calls: HashSet[MMethodDef] */;
val* var68 /* : MModule */;
val* var70 /* : MModule */;
val* var71 /* : POSetElement[MModule] */;
val* var73 /* : POSetElement[MModule] */;
val* var74 /* : Collection[Object] */;
val* var_75 /* var : Collection[MModule] */;
val* var76 /* : Iterator[nullable Object] */;
val* var_77 /* var : Iterator[MModule] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var80 /* : Array[MClassDef] */;
val* var82 /* : Array[MClassDef] */;
val* var_83 /* var : Array[MClassDef] */;
val* var84 /* : ArrayIterator[nullable Object] */;
val* var_85 /* var : ArrayIterator[MClassDef] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var88 /* : Array[MPropDef] */;
val* var90 /* : Array[MPropDef] */;
val* var_91 /* var : Array[MPropDef] */;
val* var92 /* : ArrayIterator[nullable Object] */;
val* var_93 /* var : ArrayIterator[MPropDef] */;
short int var94 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
val* var110 /* : null */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : HashSet[MMethodDef] */;
val* var119 /* : HashSet[MMethodDef] */;
val* var_super_calls /* var super_calls: nullable Object */;
val* var_120 /* var : HashSet[MMethodDef] */;
val* var121 /* : Iterator[Object] */;
val* var_122 /* var : Iterator[MMethodDef] */;
short int var123 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var125 /* : MClassDef */;
val* var127 /* : MClassDef */;
val* var128 /* : MClass */;
val* var130 /* : MClass */;
val* var_mclass131 /* var mclass: MClass */;
val* var132 /* : nullable Object */;
val* var133 /* : MModule */;
val* var135 /* : MModule */;
val* var136 /* : POSetElement[MClass] */;
val* var137 /* : Collection[Object] */;
val* var_138 /* var : Collection[MClass] */;
val* var139 /* : Iterator[nullable Object] */;
val* var_140 /* var : Iterator[MClass] */;
short int var141 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_descendant /* var descendant: MClass */;
val* var143 /* : nullable Object */;
val* var148 /* : POSetBucketsColorer[MClass, PropertyLayoutElement] */;
val* var149 /* : Map[Object, Set[Object]] */;
val* var_meth_colorer /* var meth_colorer: POSetBucketsColorer[MClass, PropertyLayoutElement] */;
val* var150 /* : Map[Object, Int] */;
val* var152 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var154 /* : Map[PropertyLayoutElement, Int] */;
val* var156 /* : Map[PropertyLayoutElement, Int] */;
val* var_157 /* var : Array[MMethod] */;
val* var158 /* : ArrayIterator[nullable Object] */;
val* var_159 /* var : ArrayIterator[MMethod] */;
short int var160 /* : Bool */;
val* var161 /* : nullable Object */;
val* var_mproperty /* var mproperty: MMethod */;
val* var162 /* : AbstractCompilerVisitor */;
long var163 /* : Int */;
long var164 /* : Int */;
long var166 /* : Int */;
val* var_169 /* var : HashSet[MMethodDef] */;
val* var170 /* : Iterator[Object] */;
val* var_171 /* var : Iterator[MMethodDef] */;
short int var172 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_mpropdef174 /* var mpropdef: MMethodDef */;
short int var175 /* : Bool */;
val* var177 /* : AbstractCompilerVisitor */;
long var178 /* : Int */;
long var179 /* : Int */;
long var181 /* : Int */;
val* var184 /* : POSetBucketsColorer[MClass, MAttribute] */;
val* var185 /* : Map[Object, Set[Object]] */;
val* var_attr_colorer /* var attr_colorer: POSetBucketsColorer[MClass, MAttribute] */;
val* var186 /* : Map[Object, Int] */;
val* var188 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var190 /* : Map[MAttribute, Int] */;
val* var192 /* : Map[MAttribute, Int] */;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_rta = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var5 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = model__MModule__flatten_mclass_hierarchy(var3);
}
var_poset = var6;
var7 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
{
hash_collection__HashSet__from(var7, var_poset); /* Direct call hash_collection#HashSet#from on <var7:HashSet[MClass]>*/
}
var_mclasses = var7;
var8 = NEW_coloring__POSetColorer(&type_coloring__POSetColorermodel__MClass);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:POSetColorer[MClass]>*/;
}
var_colorer = var8;
{
coloring__POSetColorer__colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MClass]>*/
}
var9 = NEW_array__Array(&type_array__Arraymodel__MMethod);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:Array[MMethod]>*/;
}
var_dead_methods = var9;
var10 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement);
{
((void (*)(val*))(var10->class->vft[COLOR_kernel__Object__init]))(var10) /* init on <var10:HashMap[MClass, Set[PropertyLayoutElement]]>*/;
}
var_mmethods = var10;
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:HashMap[MClass, Set[MAttribute]]>*/;
}
var_mattributes = var11;
var_ = var_mclasses;
{
var12 = hash_collection__HashSet__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_13) /* is_ok on <var_13:Iterator[MClass]>*/;
}
if (var14){
{
var15 = ((val* (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__item]))(var_13) /* item on <var_13:Iterator[MClass]>*/;
}
var_mclass = var15;
var16 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetseparate_compiler__PropertyLayoutElement);
{
((void (*)(val*))(var16->class->vft[COLOR_kernel__Object__init]))(var16) /* init on <var16:HashSet[PropertyLayoutElement]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var_mmethods, var_mclass, var16); /* Direct call hash_collection#HashMap#[]= on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/
}
var17 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MAttribute);
{
((void (*)(val*))(var17->class->vft[COLOR_kernel__Object__init]))(var17) /* init on <var17:HashSet[MAttribute]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var_mattributes, var_mclass, var17); /* Direct call hash_collection#HashMap#[]= on <var_mattributes:HashMap[MClass, Set[MAttribute]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var20 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = abstract_compiler__MModule__properties(var18, var_mclass);
}
var_22 = var21;
{
var23 = ((val* (*)(val*))(var_22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_22) /* iterator on <var_22:Set[MProperty]>*/;
}
var_24 = var23;
for(;;) {
{
var25 = ((short int (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_24) /* is_ok on <var_24:Iterator[MProperty]>*/;
}
if (var25){
{
var26 = ((val* (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__item]))(var_24) /* item on <var_24:Iterator[MProperty]>*/;
}
var_mprop = var26;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var27 = 0;
} else {
var27 = var_mprop->type->type_table[cltype] == idtype;
}
if (var27){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var32 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var30) on <var30:ModelBuilder> */
var35 = var30->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var30:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_colo_dead_methods (var33) on <var33:ToolContext> */
var38 = var33->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val; /* _opt_colo_dead_methods on <var33:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_colo_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 42);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline opts#Option#value (var36) on <var36:OptionBool> */
var41 = var36->attrs[COLOR_opts__Option___value].val; /* _value on <var36:OptionBool> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = ((struct instance_kernel__Bool*)var39)->value; /* autounbox from nullable Object to Bool */;
var43 = !var42;
var_44 = var43;
if (var43){
var45 = NULL;
if (var_rta == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var45) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var45;
{
var50 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var49 = var50;
}
var51 = !var49;
var47 = var51;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
var29 = var46;
} else {
var29 = var_44;
}
var_52 = var29;
if (var29){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var55 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 75);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = hash_collection__HashSet__has(var53, var_mprop);
}
var57 = !var56;
var28 = var57;
} else {
var28 = var_52;
}
if (var28){
{
array__Array__add(var_dead_methods, var_mprop); /* Direct call array#Array#add on <var_dead_methods:Array[MMethod]>*/
}
goto BREAK_label;
} else {
}
{
var58 = hash_collection__HashMap___91d_93d(var_mmethods, var_mclass);
}
{
((void (*)(val*, val*))(var58->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var58, var_mprop) /* add on <var58:nullable Object(Set[PropertyLayoutElement])>*/;
}
} else {
/* <var_mprop:MProperty> isa MAttribute */
cltype60 = type_model__MAttribute.color;
idtype61 = type_model__MAttribute.id;
if(cltype60 >= var_mprop->type->table_size) {
var59 = 0;
} else {
var59 = var_mprop->type->type_table[cltype60] == idtype61;
}
if (var59){
{
var62 = hash_collection__HashMap___91d_93d(var_mattributes, var_mclass);
}
{
((void (*)(val*, val*))(var62->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var62, var_mprop) /* add on <var62:nullable Object(Set[MAttribute])>*/;
}
} else {
}
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Iterator__next]))(var_24) /* next on <var_24:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label63;
}
}
BREAK_label63: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:Iterator[MProperty]> */
RET_LABEL64:(void)0;
}
}
{
((void (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__next]))(var_13) /* next on <var_13:Iterator[MClass]>*/;
}
} else {
goto BREAK_label65;
}
}
BREAK_label65: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:Iterator[MClass]> */
RET_LABEL66:(void)0;
}
}
var67 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
{
((void (*)(val*))(var67->class->vft[COLOR_kernel__Object__init]))(var67) /* init on <var67:HashSet[MMethodDef]>*/;
}
var_all_super_calls = var67;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var70 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var68) on <var68:MModule> */
var73 = var68->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var68:MModule> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = poset__POSetElement__greaters(var71);
}
var_75 = var74;
{
var76 = ((val* (*)(val*))(var_75->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_75) /* iterator on <var_75:Collection[MModule]>*/;
}
var_77 = var76;
for(;;) {
{
var78 = ((short int (*)(val*))(var_77->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_77) /* is_ok on <var_77:Iterator[MModule]>*/;
}
if (var78){
{
var79 = ((val* (*)(val*))(var_77->class->vft[COLOR_abstract_collection__Iterator__item]))(var_77) /* item on <var_77:Iterator[MModule]>*/;
}
var_mmodule = var79;
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var82 = var_mmodule->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_83 = var80;
{
var84 = array__AbstractArrayRead__iterator(var_83);
}
var_85 = var84;
for(;;) {
{
var86 = array__ArrayIterator__is_ok(var_85);
}
if (var86){
{
var87 = array__ArrayIterator__item(var_85);
}
var_mclassdef = var87;
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var90 = var_mclassdef->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 591);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_91 = var88;
{
var92 = array__AbstractArrayRead__iterator(var_91);
}
var_93 = var92;
for(;;) {
{
var94 = array__ArrayIterator__is_ok(var_93);
}
if (var94){
{
var95 = array__ArrayIterator__item(var_93);
}
var_mpropdef = var95;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype97 = type_model__MMethodDef.color;
idtype98 = type_model__MMethodDef.id;
if(cltype97 >= var_mpropdef->type->table_size) {
var96 = 0;
} else {
var96 = var_mpropdef->type->type_table[cltype97] == idtype98;
}
var99 = !var96;
if (var99){
goto BREAK_label100;
} else {
}
{
{ /* Inline modelize_property#MPropDef#has_supercall (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var103 = var_mpropdef->attrs[COLOR_modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var_mpropdef:MPropDef(MMethodDef)> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (var101){
{
hash_collection__HashSet__add(var_all_super_calls, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var_all_super_calls:HashSet[MMethodDef]>*/
}
} else {
}
BREAK_label100: (void)0;
{
array__ArrayIterator__next(var_93); /* Direct call array#ArrayIterator#next on <var_93:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label104;
}
}
BREAK_label104: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_93) on <var_93:ArrayIterator[MPropDef]> */
RET_LABEL105:(void)0;
}
}
{
array__ArrayIterator__next(var_85); /* Direct call array#ArrayIterator#next on <var_85:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label106;
}
}
BREAK_label106: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_85) on <var_85:ArrayIterator[MClassDef]> */
RET_LABEL107:(void)0;
}
}
{
((void (*)(val*))(var_77->class->vft[COLOR_abstract_collection__Iterator__next]))(var_77) /* next on <var_77:Iterator[MModule]>*/;
}
} else {
goto BREAK_label108;
}
}
BREAK_label108: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_77) on <var_77:Iterator[MModule]> */
RET_LABEL109:(void)0;
}
}
var110 = NULL;
if (var_rta == NULL) {
var111 = 0; /* is null */
} else {
var111 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var110) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var110;
{
var115 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var114 = var115;
}
var116 = !var114;
var112 = var116;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
var111 = var112;
}
if (var111){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var119 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 108);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_super_calls = var117;
} else {
var_super_calls = var_all_super_calls;
}
var_120 = var_super_calls;
{
var121 = hash_collection__HashSet__iterator(var_120);
}
var_122 = var121;
for(;;) {
{
var123 = ((short int (*)(val*))(var_122->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_122) /* is_ok on <var_122:Iterator[MMethodDef]>*/;
}
if (var123){
{
var124 = ((val* (*)(val*))(var_122->class->vft[COLOR_abstract_collection__Iterator__item]))(var_122) /* item on <var_122:Iterator[MMethodDef]>*/;
}
var_mmethoddef = var124;
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var127 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var125) on <var125:MClassDef> */
var130 = var125->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var125:MClassDef> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
var_mclass131 = var128;
{
var132 = hash_collection__HashMap___91d_93d(var_mmethods, var_mclass131);
}
{
((void (*)(val*, val*))(var132->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var132, var_mmethoddef) /* add on <var132:nullable Object(Set[PropertyLayoutElement])>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var135 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = model__MClass__in_hierarchy(var_mclass131, var133);
}
{
var137 = poset__POSetElement__smallers(var136);
}
var_138 = var137;
{
var139 = ((val* (*)(val*))(var_138->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_138) /* iterator on <var_138:Collection[MClass]>*/;
}
var_140 = var139;
for(;;) {
{
var141 = ((short int (*)(val*))(var_140->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_140) /* is_ok on <var_140:Iterator[MClass]>*/;
}
if (var141){
{
var142 = ((val* (*)(val*))(var_140->class->vft[COLOR_abstract_collection__Iterator__item]))(var_140) /* item on <var_140:Iterator[MClass]>*/;
}
var_descendant = var142;
{
var143 = hash_collection__HashMap___91d_93d(var_mmethods, var_descendant);
}
{
((void (*)(val*, val*))(var143->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var143, var_mmethoddef) /* add on <var143:nullable Object(Set[PropertyLayoutElement])>*/;
}
{
((void (*)(val*))(var_140->class->vft[COLOR_abstract_collection__Iterator__next]))(var_140) /* next on <var_140:Iterator[MClass]>*/;
}
} else {
goto BREAK_label144;
}
}
BREAK_label144: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_140) on <var_140:Iterator[MClass]> */
RET_LABEL145:(void)0;
}
}
{
((void (*)(val*))(var_122->class->vft[COLOR_abstract_collection__Iterator__next]))(var_122) /* next on <var_122:Iterator[MMethodDef]>*/;
}
} else {
goto BREAK_label146;
}
}
BREAK_label146: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_122) on <var_122:Iterator[MMethodDef]> */
RET_LABEL147:(void)0;
}
}
var148 = NEW_coloring__POSetBucketsColorer(&type_coloring__POSetBucketsColorermodel__MClassseparate_compiler__PropertyLayoutElement);
{
var149 = coloring__POSetColorer__conflicts(var_colorer);
}
{
coloring__POSetBucketsColorer__init(var148, var_poset, var149); /* Direct call coloring#POSetBucketsColorer#init on <var148:POSetBucketsColorer[MClass, PropertyLayoutElement]>*/
}
var_meth_colorer = var148;
{
var150 = coloring__POSetBucketsColorer__colorize(var_meth_colorer, var_mmethods);
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors= (self,var150) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val = var150; /* _method_colors on <self:SeparateCompiler> */
RET_LABEL151:(void)0;
}
}
{
var152 = separate_compiler__SeparateCompiler__build_method_tables(self, var_mclasses, var_super_calls);
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables= (self,var152) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val = var152; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL153:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var156 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 162);
show_backtrace(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(self, var154); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateCompiler>*/
}
var_157 = var_dead_methods;
{
var158 = array__AbstractArrayRead__iterator(var_157);
}
var_159 = var158;
for(;;) {
{
var160 = array__ArrayIterator__is_ok(var_159);
}
if (var160){
{
var161 = array__ArrayIterator__item(var_159);
}
var_mproperty = var161;
{
var162 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var163 = 1;
{
{ /* Inline kernel#Int#unary - (var163) on <var163:Int> */
var166 = -var163;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_const(self, var162, var_mproperty, var164); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:SeparateCompiler>*/
}
{
array__ArrayIterator__next(var_159); /* Direct call array#ArrayIterator#next on <var_159:ArrayIterator[MMethod]>*/
}
} else {
goto BREAK_label167;
}
}
BREAK_label167: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_159) on <var_159:ArrayIterator[MMethod]> */
RET_LABEL168:(void)0;
}
}
var_169 = var_all_super_calls;
{
var170 = hash_collection__HashSet__iterator(var_169);
}
var_171 = var170;
for(;;) {
{
var172 = ((short int (*)(val*))(var_171->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_171) /* is_ok on <var_171:Iterator[MMethodDef]>*/;
}
if (var172){
{
var173 = ((val* (*)(val*))(var_171->class->vft[COLOR_abstract_collection__Iterator__item]))(var_171) /* item on <var_171:Iterator[MMethodDef]>*/;
}
var_mpropdef174 = var173;
{
var175 = hash_collection__HashSet__has(var_super_calls, var_mpropdef174);
}
if (var175){
goto BREAK_label176;
} else {
}
{
var177 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var178 = 1;
{
{ /* Inline kernel#Int#unary - (var178) on <var178:Int> */
var181 = -var178;
var179 = var181;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_const(self, var177, var_mpropdef174, var179); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:SeparateCompiler>*/
}
BREAK_label176: (void)0;
{
((void (*)(val*))(var_171->class->vft[COLOR_abstract_collection__Iterator__next]))(var_171) /* next on <var_171:Iterator[MMethodDef]>*/;
}
} else {
goto BREAK_label182;
}
}
BREAK_label182: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_171) on <var_171:Iterator[MMethodDef]> */
RET_LABEL183:(void)0;
}
}
var184 = NEW_coloring__POSetBucketsColorer(&type_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute);
{
var185 = coloring__POSetColorer__conflicts(var_colorer);
}
{
coloring__POSetBucketsColorer__init(var184, var_poset, var185); /* Direct call coloring#POSetBucketsColorer#init on <var184:POSetBucketsColorer[MClass, MAttribute]>*/
}
var_attr_colorer = var184;
{
var186 = coloring__POSetBucketsColorer__colorize(var_attr_colorer, var_mattributes);
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors= (self,var186) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val = var186; /* _attr_colors on <self:SeparateCompiler> */
RET_LABEL187:(void)0;
}
}
{
var188 = separate_compiler__SeparateCompiler__build_attr_tables(self, var_mclasses);
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables= (self,var188) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val = var188; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL189:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:SeparateCompiler> */
var192 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 163);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(self, var190); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#do_property_coloring for (self: Object) */
void VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring(val* self) {
separate_compiler__SeparateCompiler__do_property_coloring(self); /* Direct call separate_compiler#SeparateCompiler#do_property_coloring on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#build_method_tables for (self: SeparateCompiler, Set[MClass], Set[MMethodDef]): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__build_method_tables(val* self, val* p0, val* p1) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var_super_calls /* var super_calls: Set[MMethodDef] */;
val* var1 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MPropDef]] */;
val* var_ /* var : Set[MClass] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[MClass] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Set[MProperty] */;
val* var_mproperties /* var mproperties: Set[MProperty] */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var_17 /* var : Set[MProperty] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MProperty] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var22 /* : Bool */;
int cltype;
int idtype;
short int var23 /* : Bool */;
val* var24 /* : Map[PropertyLayoutElement, Int] */;
val* var26 /* : Map[PropertyLayoutElement, Int] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Map[PropertyLayoutElement, Int] */;
val* var31 /* : Map[PropertyLayoutElement, Int] */;
val* var32 /* : nullable Object */;
long var33 /* : Int */;
long var_color /* var color: Int */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var45 /* : Int */;
long var_i /* var i: Int */;
long var_46 /* var : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
val* var54 /* : null */;
long var55 /* : Int */;
long var56 /* : Int */;
val* var58 /* : MModule */;
val* var60 /* : MModule */;
val* var61 /* : MPropDef */;
val* var_64 /* var : Set[MMethodDef] */;
val* var65 /* : Iterator[nullable Object] */;
val* var_66 /* var : Iterator[MMethodDef] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_supercall /* var supercall: MMethodDef */;
val* var69 /* : MModule */;
val* var71 /* : MModule */;
val* var72 /* : Set[MClassDef] */;
val* var73 /* : MClassDef */;
val* var75 /* : MClassDef */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var79 /* : Map[PropertyLayoutElement, Int] */;
val* var81 /* : Map[PropertyLayoutElement, Int] */;
val* var82 /* : nullable Object */;
long var83 /* : Int */;
long var_color84 /* var color: Int */;
long var85 /* : Int */;
long var87 /* : Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
short int var94 /* : Bool */;
long var95 /* : Int */;
long var97 /* : Int */;
long var_i98 /* var i: Int */;
long var_99 /* var : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
short int var106 /* : Bool */;
val* var107 /* : null */;
long var108 /* : Int */;
long var109 /* : Int */;
val* var111 /* : MModule */;
val* var113 /* : MModule */;
val* var114 /* : MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
var_mclasses = p0;
var_super_calls = p1;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClass]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MClass]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MClass]>*/;
}
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[nullable MPropDef]>*/;
}
var_table = var6;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_compiler__MModule__properties(var7, var_mclass);
}
var_mproperties = var10;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var13 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var11) on <var11:MClassDef> */
var16 = var11->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var11:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_mtype = var14;
var_17 = var_mproperties;
{
var18 = ((val* (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_17) /* iterator on <var_17:Set[MProperty]>*/;
}
var_19 = var18;
for(;;) {
{
var20 = ((short int (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_19) /* is_ok on <var_19:Iterator[MProperty]>*/;
}
if (var20){
{
var21 = ((val* (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__item]))(var_19) /* item on <var_19:Iterator[MProperty]>*/;
}
var_mproperty = var21;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var22 = 0;
} else {
var22 = var_mproperty->type->type_table[cltype] == idtype;
}
var23 = !var22;
if (var23){
goto BREAK_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var26 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 162);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = abstract_collection__MapRead__has_key(var24, var_mproperty);
}
var28 = !var27;
if (var28){
goto BREAK_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var31 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 162);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*, val*))(var29->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var29, var_mproperty) /* [] on <var29:Map[PropertyLayoutElement, Int]>*/;
}
var33 = ((struct instance_kernel__Int*)var32)->value; /* autounbox from nullable Object to Int */;
var_color = var33;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var36 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var34,var_color) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var39 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var42 = var34 <= var_color;
var37 = var42;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var45 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_i = var43;
var_46 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_46) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_46:Int> isa OTHER */
/* <var_46:Int> isa OTHER */
var49 = 1; /* easy <var_46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var53 = var_i < var_46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
var54 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var54); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var55 = 1;
{
var56 = kernel__Int__successor(var_i, var55);
}
var_i = var56;
} else {
goto BREAK_label57;
}
}
BREAK_label57: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var60 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = model__MProperty__lookup_first_definition(var_mproperty, var58, var_mtype);
}
{
array__Array___91d_93d_61d(var_table, var_color, var61); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__next]))(var_19) /* next on <var_19:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label62;
}
}
BREAK_label62: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:Iterator[MProperty]> */
RET_LABEL63:(void)0;
}
}
var_64 = var_super_calls;
{
var65 = ((val* (*)(val*))(var_64->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_64) /* iterator on <var_64:Set[MMethodDef]>*/;
}
var_66 = var65;
for(;;) {
{
var67 = ((short int (*)(val*))(var_66->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_66) /* is_ok on <var_66:Iterator[MMethodDef]>*/;
}
if (var67){
{
var68 = ((val* (*)(val*))(var_66->class->vft[COLOR_abstract_collection__Iterator__item]))(var_66) /* item on <var_66:Iterator[MMethodDef]>*/;
}
var_supercall = var68;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var71 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = model__MClassType__collect_mclassdefs(var_mtype, var69);
}
{
{ /* Inline model#MPropDef#mclassdef (var_supercall) on <var_supercall:MMethodDef> */
var75 = var_supercall->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_supercall:MMethodDef> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = ((short int (*)(val*, val*))(var72->class->vft[COLOR_abstract_collection__Collection__has]))(var72, var73) /* has on <var72:Set[MClassDef]>*/;
}
var77 = !var76;
if (var77){
goto BREAK_label78;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var81 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 162);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = ((val* (*)(val*, val*))(var79->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var79, var_supercall) /* [] on <var79:Map[PropertyLayoutElement, Int]>*/;
}
var83 = ((struct instance_kernel__Int*)var82)->value; /* autounbox from nullable Object to Int */;
var_color84 = var83;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var87 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var85,var_color84) on <var85:Int> */
/* Covariant cast for argument 0 (i) <var_color84:Int> isa OTHER */
/* <var_color84:Int> isa OTHER */
var90 = 1; /* easy <var_color84:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var94 = var85 <= var_color84;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var97 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_i98 = var95;
var_99 = var_color84;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i98,var_99) on <var_i98:Int> */
/* Covariant cast for argument 0 (i) <var_99:Int> isa OTHER */
/* <var_99:Int> isa OTHER */
var102 = 1; /* easy <var_99:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var106 = var_i98 < var_99;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
var107 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i98, var107); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var108 = 1;
{
var109 = kernel__Int__successor(var_i98, var108);
}
var_i98 = var109;
} else {
goto BREAK_label110;
}
}
BREAK_label110: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var113 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = model__MPropDef__lookup_next_definition(var_supercall, var111, var_mtype);
}
var_mmethoddef = var114;
{
array__Array___91d_93d_61d(var_table, var_color84, var_mmethoddef); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
BREAK_label78: (void)0;
{
((void (*)(val*))(var_66->class->vft[COLOR_abstract_collection__Iterator__next]))(var_66) /* next on <var_66:Iterator[MMethodDef]>*/;
}
} else {
goto BREAK_label115;
}
}
BREAK_label115: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_66) on <var_66:Iterator[MMethodDef]> */
RET_LABEL116:(void)0;
}
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MClass]>*/;
}
} else {
goto BREAK_label117;
}
}
BREAK_label117: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MClass]> */
RET_LABEL118:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#build_method_tables for (self: Object, Set[MClass], Set[MMethodDef]): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables(val* self, val* p0, val* p1) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_compiler__SeparateCompiler__build_method_tables(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#build_attr_tables for (self: SeparateCompiler, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
val* separate_compiler__SeparateCompiler__build_attr_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var1 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MPropDef]] */;
val* var_ /* var : Set[MClass] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[MClass] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Set[MProperty] */;
val* var_mproperties /* var mproperties: Set[MProperty] */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var_17 /* var : Set[MProperty] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MProperty] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var22 /* : Bool */;
int cltype;
int idtype;
short int var23 /* : Bool */;
val* var24 /* : Map[MAttribute, Int] */;
val* var26 /* : Map[MAttribute, Int] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Map[MAttribute, Int] */;
val* var31 /* : Map[MAttribute, Int] */;
val* var32 /* : nullable Object */;
long var33 /* : Int */;
long var_color /* var color: Int */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var45 /* : Int */;
long var_i /* var i: Int */;
long var_46 /* var : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
val* var54 /* : null */;
long var55 /* : Int */;
long var56 /* : Int */;
val* var58 /* : MModule */;
val* var60 /* : MModule */;
val* var61 /* : MPropDef */;
var_mclasses = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
var_tables = var1;
var_ = var_mclasses;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MClass]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MClass]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MClass]>*/;
}
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[nullable MPropDef]>*/;
}
var_table = var6;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_compiler__MModule__properties(var7, var_mclass);
}
var_mproperties = var10;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var13 = var_mclass->attrs[COLOR_model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var11) on <var11:MClassDef> */
var16 = var11->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var11:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_mtype = var14;
var_17 = var_mproperties;
{
var18 = ((val* (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_17) /* iterator on <var_17:Set[MProperty]>*/;
}
var_19 = var18;
for(;;) {
{
var20 = ((short int (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_19) /* is_ok on <var_19:Iterator[MProperty]>*/;
}
if (var20){
{
var21 = ((val* (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__item]))(var_19) /* item on <var_19:Iterator[MProperty]>*/;
}
var_mproperty = var21;
/* <var_mproperty:MProperty> isa MAttribute */
cltype = type_model__MAttribute.color;
idtype = type_model__MAttribute.id;
if(cltype >= var_mproperty->type->table_size) {
var22 = 0;
} else {
var22 = var_mproperty->type->type_table[cltype] == idtype;
}
var23 = !var22;
if (var23){
goto BREAK_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:SeparateCompiler> */
var26 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 163);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = abstract_collection__MapRead__has_key(var24, var_mproperty);
}
var28 = !var27;
if (var28){
goto BREAK_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:SeparateCompiler> */
var31 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 163);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*, val*))(var29->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var29, var_mproperty) /* [] on <var29:Map[MAttribute, Int]>*/;
}
var33 = ((struct instance_kernel__Int*)var32)->value; /* autounbox from nullable Object to Int */;
var_color = var33;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var36 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var34,var_color) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var39 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var42 = var34 <= var_color;
var37 = var42;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MPropDef]> */
var45 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MPropDef]> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_i = var43;
var_46 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_46) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_46:Int> isa OTHER */
/* <var_46:Int> isa OTHER */
var49 = 1; /* easy <var_46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var53 = var_i < var_46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
var54 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var54); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
var55 = 1;
{
var56 = kernel__Int__successor(var_i, var55);
}
var_i = var56;
} else {
goto BREAK_label57;
}
}
BREAK_label57: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var60 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = model__MProperty__lookup_first_definition(var_mproperty, var58, var_mtype);
}
{
array__Array___91d_93d_61d(var_table, var_color, var61); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__next]))(var_19) /* next on <var_19:Iterator[MProperty]>*/;
}
} else {
goto BREAK_label62;
}
}
BREAK_label62: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:Iterator[MProperty]> */
RET_LABEL63:(void)0;
}
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MClass]>*/;
}
} else {
goto BREAK_label64;
}
}
BREAK_label64: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MClass]> */
RET_LABEL65:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#build_attr_tables for (self: Object, Set[MClass]): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_compiler__SeparateCompiler__build_attr_tables(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#do_type_coloring for (self: SeparateCompiler): POSet[MType] */
val* separate_compiler__SeparateCompiler__do_type_coloring(val* self) {
val* var /* : POSet[MType] */;
val* var1 /* : nullable RapidTypeAnalysis */;
val* var3 /* : nullable RapidTypeAnalysis */;
val* var4 /* : HashSet[MClassType] */;
val* var6 /* : HashSet[MClassType] */;
val* var_live_types /* var live_types: HashSet[MClassType] */;
val* var7 /* : nullable RapidTypeAnalysis */;
val* var9 /* : nullable RapidTypeAnalysis */;
val* var10 /* : HashSet[MType] */;
val* var12 /* : HashSet[MType] */;
val* var_live_cast_types /* var live_cast_types: HashSet[MType] */;
val* var13 /* : HashSet[MType] */;
val* var_mtypes /* var mtypes: HashSet[MType] */;
val* var14 /* : HashMap[MClass, Int] */;
val* var16 /* : HashMap[MClass, Int] */;
val* var17 /* : RemovableCollection[Object] */;
val* var19 /* : RemovableCollection[Object] */;
val* var_ /* var : RemovableCollection[MClass] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : Iterator[MClass] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var24 /* : MClassType */;
val* var26 /* : MClassType */;
val* var28 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var29 /* : POSetColorer[MType] */;
val* var_colorer /* var colorer: POSetColorer[MType] */;
val* var30 /* : Map[Object, Int] */;
val* var32 /* : Map[Object, Int] */;
val* var34 /* : Map[MType, Array[nullable MType]] */;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 417);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var1) on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_live_types = var4;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var9 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 418);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (var7) on <var7:nullable RapidTypeAnalysis> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <var7:nullable RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_live_cast_types = var10;
var13 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var13->class->vft[COLOR_kernel__Object__init]))(var13) /* init on <var13:HashSet[MType]>*/;
}
var_mtypes = var13;
{
abstract_collection__SimpleCollection__add_all(var_mtypes, var_live_types); /* Direct call abstract_collection#SimpleCollection#add_all on <var_mtypes:HashSet[MType]>*/
}
{
abstract_collection__SimpleCollection__add_all(var_mtypes, var_live_cast_types); /* Direct call abstract_collection#SimpleCollection#add_all on <var_mtypes:HashSet[MType]>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var16 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 216);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var14) on <var14:HashMap[MClass, Int]> */
var19 = var14->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var14:HashMap[MClass, Int]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:RemovableCollection[MClass]>*/;
}
var_21 = var20;
for(;;) {
{
var22 = ((short int (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_21) /* is_ok on <var_21:Iterator[MClass]>*/;
}
if (var22){
{
var23 = ((val* (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Iterator__item]))(var_21) /* item on <var_21:Iterator[MClass]>*/;
}
var_c = var23;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var26 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
hash_collection__HashSet__add(var_mtypes, var24); /* Direct call hash_collection#HashSet#add on <var_mtypes:HashSet[MType]>*/
}
{
((void (*)(val*))(var_21->class->vft[COLOR_abstract_collection__Iterator__next]))(var_21) /* next on <var_21:Iterator[MClass]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_21) on <var_21:Iterator[MClass]> */
RET_LABEL27:(void)0;
}
}
{
var28 = separate_compiler__SeparateCompiler__poset_from_mtypes(self, var_mtypes);
}
var_poset = var28;
var29 = NEW_coloring__POSetColorer(&type_coloring__POSetColorermodel__MType);
{
((void (*)(val*))(var29->class->vft[COLOR_kernel__Object__init]))(var29) /* init on <var29:POSetColorer[MType]>*/;
}
var_colorer = var29;
{
coloring__POSetColorer__colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MType]>*/
}
{
var30 = coloring__POSetColorer__ids(var_colorer);
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids= (self,var30) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val = var30; /* _type_ids on <self:SeparateCompiler> */
RET_LABEL31:(void)0;
}
}
{
var32 = coloring__POSetColorer__colors(var_colorer);
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_colors= (self,var32) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val = var32; /* _type_colors on <self:SeparateCompiler> */
RET_LABEL33:(void)0;
}
}
{
var34 = separate_compiler__SeparateCompiler__build_type_tables(self, var_poset);
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables= (self,var34) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val = var34; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL35:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_resolution_tables(self, var_mtypes); /* Direct call separate_compiler#SeparateCompiler#compile_resolution_tables on <self:SeparateCompiler>*/
}
var = var_poset;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#do_type_coloring for (self: Object): POSet[MType] */
val* VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring(val* self) {
val* var /* : POSet[MType] */;
val* var1 /* : POSet[MType] */;
var1 = separate_compiler__SeparateCompiler__do_type_coloring(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#poset_from_mtypes for (self: SeparateCompiler, Set[MType]): POSet[MType] */
val* separate_compiler__SeparateCompiler__poset_from_mtypes(val* self, val* p0) {
val* var /* : POSet[MType] */;
val* var_mtypes /* var mtypes: Set[MType] */;
val* var1 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var_ /* var : Set[MType] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[MType] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: MType */;
val* var6 /* : POSetElement[Object] */;
val* var_7 /* var : Set[MType] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_o /* var o: MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : null */;
short int var22 /* : Bool */;
var_mtypes = p0;
var1 = NEW_poset__POSet(&type_poset__POSetmodel__MType);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:POSet[MType]>*/;
}
var_poset = var1;
var_ = var_mtypes;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Set[MType]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MType]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MType]>*/;
}
var_e = var5;
{
var6 = poset__POSet__add_node(var_poset, var_e);
}
var_7 = var_mtypes;
{
var8 = ((val* (*)(val*))(var_7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_7) /* iterator on <var_7:Set[MType]>*/;
}
var_9 = var8;
for(;;) {
{
var10 = ((short int (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_9) /* is_ok on <var_9:Iterator[MType]>*/;
}
if (var10){
{
var11 = ((val* (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Iterator__item]))(var_9) /* item on <var_9:Iterator[MType]>*/;
}
var_o = var11;
{
{ /* Inline kernel#Object#== (var_e,var_o) on <var_e:MType> */
var_other = var_o;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:MType> */
var17 = var_e == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var20 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = NULL;
{
var22 = model__MType__is_subtype(var_e, var18, var21, var_o);
}
if (var22){
{
poset__POSet__add_edge(var_poset, var_e, var_o); /* Direct call poset#POSet#add_edge on <var_poset:POSet[MType]>*/
}
} else {
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Iterator__next]))(var_9) /* next on <var_9:Iterator[MType]>*/;
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_9) on <var_9:Iterator[MType]> */
RET_LABEL24:(void)0;
}
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MType]>*/;
}
} else {
goto BREAK_label25;
}
}
BREAK_label25: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MType]> */
RET_LABEL26:(void)0;
}
}
var = var_poset;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#poset_from_mtypes for (self: Object, Set[MType]): POSet[MType] */
val* VIRTUAL_separate_compiler__SeparateCompiler__poset_from_mtypes(val* self, val* p0) {
val* var /* : POSet[MType] */;
val* var1 /* : POSet[MType] */;
var1 = separate_compiler__SeparateCompiler__poset_from_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#build_type_tables for (self: SeparateCompiler, POSet[MType]): Map[MType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__build_type_tables(val* self, val* p0) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var_mtypes /* var mtypes: POSet[MType] */;
val* var1 /* : HashMap[MType, Array[nullable MType]] */;
val* var_tables /* var tables: HashMap[MType, Array[nullable MType]] */;
val* var_ /* var : POSet[MType] */;
val* var2 /* : Iterator[Object] */;
val* var_3 /* var : Iterator[MType] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var6 /* : Array[nullable MType] */;
val* var_table /* var table: Array[nullable MType] */;
val* var7 /* : POSetElement[Object] */;
val* var8 /* : Collection[Object] */;
val* var_9 /* var : Collection[MType] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MType] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_sup /* var sup: MType */;
val* var14 /* : Map[MType, Int] */;
val* var16 /* : Map[MType, Int] */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
long var_color /* var color: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
long var_i /* var i: Int */;
long var_29 /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : null */;
long var38 /* : Int */;
long var39 /* : Int */;
var_mtypes = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[MType, Array[nullable MType]]>*/;
}
var_tables = var1;
var_ = var_mtypes;
{
var2 = poset__POSet__iterator(var_);
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[MType]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[MType]>*/;
}
var_mtype = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MType);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[nullable MType]>*/;
}
var_table = var6;
{
var7 = poset__POSet___91d_93d(var_mtypes, var_mtype);
}
{
var8 = poset__POSetElement__greaters(var7);
}
var_9 = var8;
{
var10 = ((val* (*)(val*))(var_9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_9) /* iterator on <var_9:Collection[MType]>*/;
}
var_11 = var10;
for(;;) {
{
var12 = ((short int (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_11) /* is_ok on <var_11:Iterator[MType]>*/;
}
if (var12){
{
var13 = ((val* (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__item]))(var_11) /* item on <var_11:Iterator[MType]>*/;
}
var_sup = var13;
{
{ /* Inline separate_compiler#SeparateCompiler#type_colors (self) on <self:SeparateCompiler> */
var16 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val; /* _type_colors on <self:SeparateCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 160);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_sup) /* [] on <var14:Map[MType, Int]>*/;
}
var18 = ((struct instance_kernel__Int*)var17)->value; /* autounbox from nullable Object to Int */;
var_color = var18;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var21 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var19,var_color) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var24 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var25 = var19 <= var_color;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var28 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_i = var26;
var_29 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_29) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_29:Int> isa OTHER */
/* <var_29:Int> isa OTHER */
var32 = 1; /* easy <var_29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var36 = var_i < var_29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var37 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var37); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
var38 = 1;
{
var39 = kernel__Int__successor(var_i, var38);
}
var_i = var39;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
array__Array___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
{
((void (*)(val*))(var_11->class->vft[COLOR_abstract_collection__Iterator__next]))(var_11) /* next on <var_11:Iterator[MType]>*/;
}
} else {
goto BREAK_label40;
}
}
BREAK_label40: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:Iterator[MType]> */
RET_LABEL41:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mtype, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MType, Array[nullable MType]]>*/
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[MType]>*/;
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[MType]> */
RET_LABEL43:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#build_type_tables for (self: Object, POSet[MType]): Map[MType, Array[nullable MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables(val* self, val* p0) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = separate_compiler__SeparateCompiler__build_type_tables(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#compile_resolution_tables for (self: SeparateCompiler, Set[MType]) */
void separate_compiler__SeparateCompiler__compile_resolution_tables(val* self, val* p0) {
val* var_mtypes /* var mtypes: Set[MType] */;
val* var /* : HashMap[MClassType, Set[MType]] */;
val* var_mtype2unresolved /* var mtype2unresolved: HashMap[MClassType, Set[MType]] */;
val* var1 /* : nullable RapidTypeAnalysis */;
val* var3 /* : nullable RapidTypeAnalysis */;
val* var4 /* : HashSet[MClassType] */;
val* var6 /* : HashSet[MClassType] */;
val* var_ /* var : HashSet[MClassType] */;
val* var7 /* : Iterator[Object] */;
val* var_8 /* var : Iterator[MClassType] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mtype /* var mtype: MClassType */;
val* var11 /* : HashSet[MType] */;
val* var_set /* var set: HashSet[MType] */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : Set[MClassDef] */;
val* var_16 /* var : Set[MClassDef] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[MClassDef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var21 /* : Map[MClassDef, Set[MType]] */;
val* var23 /* : Map[MClassDef, Set[MType]] */;
short int var24 /* : Bool */;
val* var25 /* : Map[MClassDef, Set[MType]] */;
val* var27 /* : Map[MClassDef, Set[MType]] */;
val* var28 /* : nullable Object */;
val* var32 /* : BucketsColorer[MType, MType] */;
val* var_colorer /* var colorer: BucketsColorer[MType, MType] */;
val* var33 /* : Map[Object, Int] */;
val* var35 /* : Map[MClassType, Array[nullable MType]] */;
val* var37 /* : HashSet[MType] */;
val* var_all_unresolved /* var all_unresolved: HashSet[MType] */;
val* var38 /* : Map[MClassDef, Set[MType]] */;
val* var40 /* : Map[MClassDef, Set[MType]] */;
val* var41 /* : Collection[nullable Object] */;
val* var_42 /* var : RemovableCollection[Set[MType]] */;
val* var43 /* : Iterator[nullable Object] */;
val* var_44 /* var : Iterator[Set[MType]] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_t /* var t: Set[MType] */;
val* var49 /* : HashMap[MType, Int] */;
val* var_all_unresolved_types_colors /* var all_unresolved_types_colors: HashMap[MType, Int] */;
val* var_50 /* var : HashSet[MType] */;
val* var51 /* : Iterator[Object] */;
val* var_52 /* var : Iterator[MType] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_t55 /* var t: MType */;
val* var56 /* : Map[MType, Int] */;
val* var58 /* : Map[MType, Int] */;
short int var59 /* : Bool */;
val* var60 /* : Map[MType, Int] */;
val* var62 /* : Map[MType, Int] */;
val* var63 /* : nullable Object */;
long var64 /* : Int */;
long var65 /* : Int */;
long var67 /* : Int */;
val* var68 /* : nullable Object */;
var_mtypes = p0;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashMap[MClassType, Set[MType]]>*/;
}
var_mtype2unresolved = var;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 482);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var1) on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
var7 = hash_collection__HashSet__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_8) /* is_ok on <var_8:Iterator[MClassType]>*/;
}
if (var9){
{
var10 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__item]))(var_8) /* item on <var_8:Iterator[MClassType]>*/;
}
var_mtype = var10;
var11 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:HashSet[MType]>*/;
}
var_set = var11;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = model__MClassType__collect_mclassdefs(var_mtype, var12);
}
var_16 = var15;
{
var17 = ((val* (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_16) /* iterator on <var_16:Set[MClassDef]>*/;
}
var_18 = var17;
for(;;) {
{
var19 = ((short int (*)(val*))(var_18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_18) /* is_ok on <var_18:Iterator[MClassDef]>*/;
}
if (var19){
{
var20 = ((val* (*)(val*))(var_18->class->vft[COLOR_abstract_collection__Iterator__item]))(var_18) /* item on <var_18:Iterator[MClassDef]>*/;
}
var_cd = var20;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:SeparateCompiler> */
var23 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = abstract_collection__MapRead__has_key(var21, var_cd);
}
if (var24){
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:SeparateCompiler> */
var27 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val* (*)(val*, val*))(var25->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var25, var_cd) /* [] on <var25:Map[MClassDef, Set[MType]]>*/;
}
{
abstract_collection__SimpleCollection__add_all(var_set, var28); /* Direct call abstract_collection#SimpleCollection#add_all on <var_set:HashSet[MType]>*/
}
} else {
}
{
((void (*)(val*))(var_18->class->vft[COLOR_abstract_collection__Iterator__next]))(var_18) /* next on <var_18:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_18) on <var_18:Iterator[MClassDef]> */
RET_LABEL29:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var_mtype2unresolved, var_mtype, var_set); /* Direct call hash_collection#HashMap#[]= on <var_mtype2unresolved:HashMap[MClassType, Set[MType]]>*/
}
{
((void (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Iterator__next]))(var_8) /* next on <var_8:Iterator[MClassType]>*/;
}
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:Iterator[MClassType]> */
RET_LABEL31:(void)0;
}
}
var32 = NEW_coloring__BucketsColorer(&type_coloring__BucketsColorermodel__MTypemodel__MType);
{
((void (*)(val*))(var32->class->vft[COLOR_kernel__Object__init]))(var32) /* init on <var32:BucketsColorer[MType, MType]>*/;
}
var_colorer = var32;
{
var33 = coloring__BucketsColorer__colorize(var_colorer, var_mtype2unresolved);
}
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors= (self,var33) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val = var33; /* _opentype_colors on <self:SeparateCompiler> */
RET_LABEL34:(void)0;
}
}
{
var35 = separate_compiler__SeparateCompiler__build_resolution_tables(self, var_mtype2unresolved);
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables= (self,var35) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val = var35; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL36:(void)0;
}
}
var37 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var37->class->vft[COLOR_kernel__Object__init]))(var37) /* init on <var37:HashSet[MType]>*/;
}
var_all_unresolved = var37;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:SeparateCompiler> */
var40 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 157);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__MapRead__values]))(var38) /* values on <var38:Map[MClassDef, Set[MType]]>*/;
}
var_42 = var41;
{
var43 = ((val* (*)(val*))(var_42->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_42) /* iterator on <var_42:RemovableCollection[Set[MType]]>*/;
}
var_44 = var43;
for(;;) {
{
var45 = ((short int (*)(val*))(var_44->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_44) /* is_ok on <var_44:Iterator[Set[MType]]>*/;
}
if (var45){
{
var46 = ((val* (*)(val*))(var_44->class->vft[COLOR_abstract_collection__Iterator__item]))(var_44) /* item on <var_44:Iterator[Set[MType]]>*/;
}
var_t = var46;
{
abstract_collection__SimpleCollection__add_all(var_all_unresolved, var_t); /* Direct call abstract_collection#SimpleCollection#add_all on <var_all_unresolved:HashSet[MType]>*/
}
{
((void (*)(val*))(var_44->class->vft[COLOR_abstract_collection__Iterator__next]))(var_44) /* next on <var_44:Iterator[Set[MType]]>*/;
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_44) on <var_44:Iterator[Set[MType]]> */
RET_LABEL48:(void)0;
}
}
var49 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
{
((void (*)(val*))(var49->class->vft[COLOR_kernel__Object__init]))(var49) /* init on <var49:HashMap[MType, Int]>*/;
}
var_all_unresolved_types_colors = var49;
var_50 = var_all_unresolved;
{
var51 = hash_collection__HashSet__iterator(var_50);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int (*)(val*))(var_52->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_52) /* is_ok on <var_52:Iterator[MType]>*/;
}
if (var53){
{
var54 = ((val* (*)(val*))(var_52->class->vft[COLOR_abstract_collection__Iterator__item]))(var_52) /* item on <var_52:Iterator[MType]>*/;
}
var_t55 = var54;
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:SeparateCompiler> */
var58 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 161);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = abstract_collection__MapRead__has_key(var56, var_t55);
}
if (var59){
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:SeparateCompiler> */
var62 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 161);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = ((val* (*)(val*, val*))(var60->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var60, var_t55) /* [] on <var60:Map[MType, Int]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var_all_unresolved_types_colors, var_t55, var63); /* Direct call hash_collection#HashMap#[]= on <var_all_unresolved_types_colors:HashMap[MType, Int]>*/
}
} else {
var64 = 1;
{
{ /* Inline kernel#Int#unary - (var64) on <var64:Int> */
var67 = -var64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
var68 = BOX_kernel__Int(var65); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_all_unresolved_types_colors, var_t55, var68); /* Direct call hash_collection#HashMap#[]= on <var_all_unresolved_types_colors:HashMap[MType, Int]>*/
}
}
{
((void (*)(val*))(var_52->class->vft[COLOR_abstract_collection__Iterator__next]))(var_52) /* next on <var_52:Iterator[MType]>*/;
}
} else {
goto BREAK_label69;
}
}
BREAK_label69: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_52) on <var_52:Iterator[MType]> */
RET_LABEL70:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(self, var_all_unresolved_types_colors); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_resolution_tables for (self: Object, Set[MType]) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_resolution_tables(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_resolution_tables on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#build_resolution_tables for (self: SeparateCompiler, Map[MClassType, Set[MType]]): Map[MClassType, Array[nullable MType]] */
val* separate_compiler__SeparateCompiler__build_resolution_tables(val* self, val* p0) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var1 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var_tables /* var tables: HashMap[MClassType, Array[nullable MType]] */;
val* var_ /* var : Map[MClassType, Set[MType]] */;
val* var2 /* : MapIterator[Object, nullable Object] */;
val* var_3 /* var : MapIterator[MClassType, Set[MType]] */;
short int var4 /* : Bool */;
val* var5 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var6 /* : nullable Object */;
val* var_mtypes /* var mtypes: Set[MType] */;
val* var7 /* : Array[nullable MType] */;
val* var_table /* var table: Array[nullable MType] */;
val* var_8 /* var : Set[MType] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : Iterator[MType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var13 /* : Map[MType, Int] */;
val* var15 /* : Map[MType, Int] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
long var_color /* var color: Int */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_i /* var i: Int */;
long var_28 /* var : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
val* var36 /* : null */;
long var37 /* : Int */;
long var38 /* : Int */;
var_elements = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[MClassType, Array[nullable MType]]>*/;
}
var_tables = var1;
var_ = var_elements;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_) /* iterator on <var_:Map[MClassType, Set[MType]]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_3) /* is_ok on <var_3:MapIterator[MClassType, Set[MType]]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_3) /* key on <var_3:MapIterator[MClassType, Set[MType]]>*/;
}
var_mclasstype = var5;
{
var6 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_3) /* item on <var_3:MapIterator[MClassType, Set[MType]]>*/;
}
var_mtypes = var6;
var7 = NEW_array__Array(&type_array__Arraynullable_model__MType);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[nullable MType]>*/;
}
var_table = var7;
var_8 = var_mtypes;
{
var9 = ((val* (*)(val*))(var_8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_8) /* iterator on <var_8:Set[MType]>*/;
}
var_10 = var9;
for(;;) {
{
var11 = ((short int (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_10) /* is_ok on <var_10:Iterator[MType]>*/;
}
if (var11){
{
var12 = ((val* (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__item]))(var_10) /* item on <var_10:Iterator[MType]>*/;
}
var_mtype = var12;
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 161);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_mtype) /* [] on <var13:Map[MType, Int]>*/;
}
var17 = ((struct instance_kernel__Int*)var16)->value; /* autounbox from nullable Object to Int */;
var_color = var17;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var20 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var18,var_color) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var23 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var24 = var18 <= var_color;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var27 = var_table->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_i = var25;
var_28 = var_color;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_28) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_28:Int> isa OTHER */
/* <var_28:Int> isa OTHER */
var31 = 1; /* easy <var_28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var35 = var_i < var_28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var36 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var36); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
var37 = 1;
{
var38 = kernel__Int__successor(var_i, var37);
}
var_i = var38;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
array__Array___91d_93d_61d(var_table, var_color, var_mtype); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
{
((void (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__next]))(var_10) /* next on <var_10:Iterator[MType]>*/;
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:Iterator[MType]> */
RET_LABEL40:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclasstype, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClassType, Array[nullable MType]]>*/
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_3) /* next on <var_3:MapIterator[MClassType, Set[MType]]>*/;
}
} else {
goto BREAK_label41;
}
}
BREAK_label41: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_3) on <var_3:MapIterator[MClassType, Set[MType]]> */
RET_LABEL42:(void)0;
}
}
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#build_resolution_tables for (self: Object, Map[MClassType, Set[MType]]): Map[MClassType, Array[nullable MType]] */
val* VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables(val* self, val* p0) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = separate_compiler__SeparateCompiler__build_resolution_tables(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#compile_module_to_c for (self: SeparateCompiler, MModule) */
void separate_compiler__SeparateCompiler__compile_module_to_c(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
val* var4 /* : Array[MClassDef] */;
val* var6 /* : Array[MClassDef] */;
val* var_ /* var : Array[MClassDef] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[MClassDef] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var11 /* : Array[MPropDef] */;
val* var13 /* : Array[MPropDef] */;
val* var_14 /* var : Array[MPropDef] */;
val* var15 /* : ArrayIterator[nullable Object] */;
val* var_16 /* var : ArrayIterator[MPropDef] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_pd /* var pd: MPropDef */;
short int var19 /* : Bool */;
int cltype;
int idtype;
short int var20 /* : Bool */;
val* var21 /* : nullable RapidTypeAnalysis */;
val* var23 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var32 /* : OptionBool */;
val* var34 /* : OptionBool */;
val* var35 /* : nullable Object */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var48 /* : HashSet[MMethodDef] */;
val* var50 /* : HashSet[MMethodDef] */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : AbstractRuntimeFunction */;
val* var_r /* var r: AbstractRuntimeFunction */;
val* var54 /* : AbstractRuntimeFunction */;
val* var_r2 /* var r2: AbstractRuntimeFunction */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var6 = var_mmodule->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 139);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
var7 = array__AbstractArrayRead__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = array__ArrayIterator__is_ok(var_8);
}
if (var9){
{
var10 = array__ArrayIterator__item(var_8);
}
var_cd = var10;
{
{ /* Inline model#MClassDef#mpropdefs (var_cd) on <var_cd:MClassDef> */
var13 = var_cd->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_cd:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 591);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_14 = var11;
{
var15 = array__AbstractArrayRead__iterator(var_14);
}
var_16 = var15;
for(;;) {
{
var17 = array__ArrayIterator__is_ok(var_16);
}
if (var17){
{
var18 = array__ArrayIterator__item(var_16);
}
var_pd = var18;
/* <var_pd:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_pd->type->table_size) {
var19 = 0;
} else {
var19 = var_pd->type->type_table[cltype] == idtype;
}
var20 = !var19;
if (var20){
goto BREAK_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var23 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_rta = var21;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_skip_dead_methods (var29) on <var29:ToolContext> */
var34 = var29->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val; /* _opt_skip_dead_methods on <var29:ToolContext> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_skip_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 38);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline opts#Option#value (var32) on <var32:OptionBool> */
var37 = var32->attrs[COLOR_opts__Option___value].val; /* _value on <var32:OptionBool> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = ((struct instance_kernel__Bool*)var35)->value; /* autounbox from nullable Object to Bool */;
var_39 = var38;
if (var38){
var40 = NULL;
if (var_rta == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var40) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var40;
{
var45 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var44 = var45;
}
var46 = !var44;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
var25 = var41;
} else {
var25 = var_39;
}
var_47 = var25;
if (var25){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var50 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 72);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = hash_collection__HashSet__has(var48, var_pd);
}
var52 = !var51;
var24 = var52;
} else {
var24 = var_47;
}
if (var24){
goto BREAK_label;
} else {
}
{
var53 = separate_compiler__MMethodDef__separate_runtime_function(var_pd);
}
var_r = var53;
{
((void (*)(val*, val*))(var_r->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_r, self) /* compile_to_c on <var_r:AbstractRuntimeFunction>*/;
}
{
var54 = separate_compiler__MMethodDef__virtual_runtime_function(var_pd);
}
var_r2 = var54;
{
((void (*)(val*, val*))(var_r2->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_r2, self) /* compile_to_c on <var_r2:AbstractRuntimeFunction>*/;
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_16); /* Direct call array#ArrayIterator#next on <var_16:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label55;
}
}
BREAK_label55: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:ArrayIterator[MPropDef]> */
RET_LABEL56:(void)0;
}
}
{
array__ArrayIterator__next(var_8); /* Direct call array#ArrayIterator#next on <var_8:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label57;
}
}
BREAK_label57: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_8) on <var_8:ArrayIterator[MClassDef]> */
RET_LABEL58:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL59:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_module_to_c for (self: Object, MModule) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_module_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_module_to_c(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_module_to_c on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_to_c for (self: SeparateCompiler, MType) */
void separate_compiler__SeparateCompiler__compile_type_to_c(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var7 /* : HashSet[MClassType] */;
val* var9 /* : HashSet[MClassType] */;
short int var10 /* : Bool */;
short int var_is_live /* var is_live: Bool */;
val* var11 /* : nullable RapidTypeAnalysis */;
val* var13 /* : nullable RapidTypeAnalysis */;
val* var14 /* : HashSet[MType] */;
val* var16 /* : HashSet[MType] */;
short int var17 /* : Bool */;
short int var_is_cast_live /* var is_cast_live: Bool */;
val* var18 /* : String */;
val* var_c_name /* var c_name: String */;
val* var19 /* : SeparateCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
val* var70 /* : Map[MType, Int] */;
val* var72 /* : Map[MType, Int] */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
val* var102 /* : Map[MType, Int] */;
val* var104 /* : Map[MType, Int] */;
val* var105 /* : nullable Object */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
val* var133 /* : MType */;
val* var_mclass_type /* var mclass_type: MType */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
val* var137 /* : Map[MClassType, Array[nullable MType]] */;
val* var139 /* : Map[MClassType, Array[nullable MType]] */;
val* var140 /* : nullable Object */;
short int var141 /* : Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
val* var152 /* : Array[Object] */;
long var153 /* : Int */;
val* var154 /* : NativeArray[Object] */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : Map[MType, Array[nullable MType]] */;
val* var177 /* : Map[MType, Array[nullable MType]] */;
val* var178 /* : nullable Object */;
long var179 /* : Int */;
long var181 /* : Int */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
val* var187 /* : Array[Object] */;
long var188 /* : Int */;
val* var189 /* : NativeArray[Object] */;
val* var190 /* : Object */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Map[MType, Array[nullable MType]] */;
val* var199 /* : Map[MType, Array[nullable MType]] */;
val* var200 /* : nullable Object */;
val* var_201 /* var : Array[nullable MType] */;
val* var202 /* : ArrayIterator[nullable Object] */;
val* var_203 /* var : ArrayIterator[nullable MType] */;
short int var204 /* : Bool */;
val* var205 /* : nullable Object */;
val* var_stype /* var stype: nullable MType */;
val* var206 /* : null */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var218 /* : Map[MType, Int] */;
val* var220 /* : Map[MType, Int] */;
val* var221 /* : nullable Object */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
long var230 /* : Int */;
val* var231 /* : FlatString */;
val* var232 /* : Array[Object] */;
long var233 /* : Int */;
val* var234 /* : NativeArray[Object] */;
val* var235 /* : String */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : FlatString */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : FlatString */;
var_mtype = p0;
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 561);
show_backtrace(1);
}
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var6 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 562);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var4) on <var4:nullable RapidTypeAnalysis> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var9 = var4->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var4:nullable RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = hash_collection__HashSet__has(var7, var_mtype);
}
var2 = var10;
} else {
var2 = var_;
}
var_is_live = var2;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 563);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (var11) on <var11:nullable RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
show_backtrace(1);
}
var16 = var11->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <var11:nullable RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 65);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = hash_collection__HashSet__has(var14, var_mtype);
}
var_is_cast_live = var17;
{
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
var_c_name = var18;
var19 = NEW_separate_compiler__SeparateCompilerVisitor(&type_separate_compiler__SeparateCompilerVisitor);
{
abstract_compiler__AbstractCompilerVisitor__init(var19, self); /* Direct call abstract_compiler#AbstractCompilerVisitor#init on <var19:SeparateCompilerVisitor>*/
}
var_v = var19;
if (varonce) {
var20 = varonce;
} else {
var21 = "/* runtime type ";
var22 = 16;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = " */";
var27 = 3;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "type_";
var36 = 5;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var34;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "extern const struct type type_";
var45 = 30;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = ";";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 3;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var48;
{
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var41, var55); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "const struct type type_";
var59 = 23;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = " = {";
var64 = 4;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 3;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var57;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var68)->values[2] = (val*) var62;
{
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var69); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_cast_live){
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var72 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 159);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = ((val* (*)(val*, val*))(var70->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var70, var_mtype) /* [] on <var70:Map[MType, Int]>*/;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = ",";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 2;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var75;
{
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var82); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce83) {
var84 = varonce83;
} else {
var85 = "-1, /*CAST DEAD*/";
var86 = 17;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var84); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "\"";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "\", /* class_name_string */";
var96 = 26;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 3;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var94;
{
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
}
{
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_cast_live){
{
{ /* Inline separate_compiler#SeparateCompiler#type_colors (self) on <self:SeparateCompiler> */
var104 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val; /* _type_colors on <self:SeparateCompiler> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_colors");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 160);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = ((val* (*)(val*, val*))(var102->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var102, var_mtype) /* [] on <var102:Map[MType, Int]>*/;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = ",";
var109 = 1;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 2;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var105;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var107;
{
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
}
{
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce115) {
var116 = varonce115;
} else {
var117 = "-1, /*CAST DEAD*/";
var118 = 17;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
/* <var_mtype:MType> isa MNullableType */
cltype121 = type_model__MNullableType.color;
idtype122 = type_model__MNullableType.id;
if(cltype121 >= var_mtype->type->table_size) {
var120 = 0;
} else {
var120 = var_mtype->type->type_table[cltype121] == idtype122;
}
if (var120){
if (varonce123) {
var124 = varonce123;
} else {
var125 = "1,";
var126 = 2;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce128) {
var129 = varonce128;
} else {
var130 = "0,";
var131 = 2;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (var_is_live){
{
var133 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mclass_type = var133;
/* <var_mclass_type:MType> isa MClassType */
cltype135 = type_model__MClassType.color;
idtype136 = type_model__MClassType.id;
if(cltype135 >= var_mclass_type->type->table_size) {
var134 = 0;
} else {
var134 = var_mclass_type->type->type_table[cltype135] == idtype136;
}
if (unlikely(!var134)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 601);
show_backtrace(1);
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var139 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 844);
show_backtrace(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = ((val* (*)(val*, val*))(var137->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var137, var_mclass_type) /* [] on <var137:Map[MClassType, Array[nullable MType]]>*/;
}
{
var141 = array__AbstractArrayRead__is_empty(var140);
}
if (var141){
if (varonce142) {
var143 = varonce142;
} else {
var144 = "NULL, /*NO RESOLUTIONS*/";
var145 = 24;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
separate_compiler__SeparateCompiler__compile_type_resolution_table(self, var_mtype); /* Direct call separate_compiler#SeparateCompiler#compile_type_resolution_table on <self:SeparateCompiler>*/
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "resolution_table_";
var150 = 17;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var152 = array_instance Array[Object] */
var153 = 2;
var154 = NEW_array__NativeArray(var153, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var154)->values[0] = (val*) var148;
((struct instance_array__NativeArray*)var154)->values[1] = (val*) var_c_name;
{
((void (*)(val*, val*, long))(var152->class->vft[COLOR_array__Array__with_native]))(var152, var154, var153) /* with_native on <var152:Array[Object]>*/;
}
}
{
var155 = ((val* (*)(val*))(var152->class->vft[COLOR_string__Object__to_s]))(var152) /* to_s on <var152:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var155); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = "&resolution_table_";
var159 = 18;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = ",";
var164 = 1;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 3;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var157;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var168)->values[2] = (val*) var162;
{
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
}
{
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var169); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
} else {
if (varonce170) {
var171 = varonce170;
} else {
var172 = "NULL, /*DEAD*/";
var173 = 14;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (var_is_live){
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var177 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 843);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = ((val* (*)(val*, val*))(var175->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var175, var_mtype) /* [] on <var175:Map[MType, Array[nullable MType]]>*/;
}
{
{ /* Inline array#AbstractArrayRead#length (var178) on <var178:nullable Object(Array[nullable MType])> */
var181 = var178->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var178:nullable Object(Array[nullable MType])> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = ",";
var185 = 1;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
var187 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var187 = array_instance Array[Object] */
var188 = 2;
var189 = NEW_array__NativeArray(var188, &type_array__NativeArraykernel__Object);
var190 = BOX_kernel__Int(var179); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var189)->values[0] = (val*) var190;
((struct instance_array__NativeArray*)var189)->values[1] = (val*) var183;
{
((void (*)(val*, val*, long))(var187->class->vft[COLOR_array__Array__with_native]))(var187, var189, var188) /* with_native on <var187:Array[Object]>*/;
}
}
{
var191 = ((val* (*)(val*))(var187->class->vft[COLOR_string__Object__to_s]))(var187) /* to_s on <var187:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "{";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var193); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var199 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 843);
show_backtrace(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
var200 = ((val* (*)(val*, val*))(var197->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var197, var_mtype) /* [] on <var197:Map[MType, Array[nullable MType]]>*/;
}
var_201 = var200;
{
var202 = array__AbstractArrayRead__iterator(var_201);
}
var_203 = var202;
for(;;) {
{
var204 = array__ArrayIterator__is_ok(var_203);
}
if (var204){
{
var205 = array__ArrayIterator__item(var_203);
}
var_stype = var205;
var206 = NULL;
if (var_stype == NULL) {
var207 = 1; /* is null */
} else {
var207 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_stype,var206) on <var_stype:nullable MType> */
var_other = var206;
{
{ /* Inline kernel#Object#is_same_instance (var_stype,var_other) on <var_stype:nullable MType(MType)> */
var212 = var_stype == var_other;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
if (var207){
if (varonce213) {
var214 = varonce213;
} else {
var215 = "-1, /* empty */";
var216 = 15;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var214); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var220 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 159);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
var221 = ((val* (*)(val*, val*))(var218->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var218, var_stype) /* [] on <var218:Map[MType, Int]>*/;
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = ", /* ";
var225 = 5;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
if (varonce227) {
var228 = varonce227;
} else {
var229 = " */";
var230 = 3;
var231 = string__NativeString__to_s_with_length(var229, var230);
var228 = var231;
varonce227 = var228;
}
var232 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var232 = array_instance Array[Object] */
var233 = 4;
var234 = NEW_array__NativeArray(var233, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var234)->values[0] = (val*) var221;
((struct instance_array__NativeArray*)var234)->values[1] = (val*) var223;
((struct instance_array__NativeArray*)var234)->values[2] = (val*) var_stype;
((struct instance_array__NativeArray*)var234)->values[3] = (val*) var228;
{
((void (*)(val*, val*, long))(var232->class->vft[COLOR_array__Array__with_native]))(var232, var234, var233) /* with_native on <var232:Array[Object]>*/;
}
}
{
var235 = ((val* (*)(val*))(var232->class->vft[COLOR_string__Object__to_s]))(var232) /* to_s on <var232:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var235); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
array__ArrayIterator__next(var_203); /* Direct call array#ArrayIterator#next on <var_203:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_203) on <var_203:ArrayIterator[nullable MType]> */
RET_LABEL236:(void)0;
}
}
if (varonce237) {
var238 = varonce237;
} else {
var239 = "},";
var240 = 2;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce242) {
var243 = varonce242;
} else {
var244 = "0, {}, /*DEAD TYPE*/";
var245 = 20;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var243); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce247) {
var248 = varonce247;
} else {
var249 = "};";
var250 = 2;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var248); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_to_c for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_type_to_c(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_type_to_c on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: SeparateCompiler, MType) */
void separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : Map[MClassType, Array[nullable MType]] */;
val* var54 /* : Map[MClassType, Array[nullable MType]] */;
val* var55 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var56 /* : ArrayIterator[nullable Object] */;
val* var_57 /* var : ArrayIterator[nullable MType] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MModule */;
val* var74 /* : MModule */;
short int var75 /* : Bool */;
val* var76 /* : MType */;
val* var_tv /* var tv: MType */;
val* var77 /* : Map[MType, Int] */;
val* var79 /* : Map[MType, Int] */;
short int var80 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : String */;
val* var87 /* : Array[Object] */;
long var88 /* : Int */;
val* var89 /* : NativeArray[Object] */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
var_mtype = p0;
{
var = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
/* <var:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 633);
show_backtrace(1);
}
var_mclass_type = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "resolution_table_";
var4 = 17;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var6;
{
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
}
{
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "extern const struct types resolution_table_";
var14 = 43;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
{
var16 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = ";";
var20 = 1;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var16;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var18;
{
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(self, var10, var25); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
{
var26 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var26;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "const struct types resolution_table_";
var30 = 36;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
var32 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " = {";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "0, /* dummy */";
var45 = 14;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "{";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var54 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 844);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = ((val* (*)(val*, val*))(var52->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var52, var_mclass_type) /* [] on <var52:Map[MClassType, Array[nullable MType]]>*/;
}
var_ = var55;
{
var56 = array__AbstractArrayRead__iterator(var_);
}
var_57 = var56;
for(;;) {
{
var58 = array__ArrayIterator__is_ok(var_57);
}
if (var58){
{
var59 = array__ArrayIterator__item(var_57);
}
var_t = var59;
var60 = NULL;
if (var_t == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var60) on <var_t:nullable MType> */
var_other = var60;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var66 = var_t == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NULL, /* empty */";
var70 = 17;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var68); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var74 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var75 = 1;
{
var76 = ((val* (*)(val*, val*, val*, val*, short int))(var_t->class->vft[COLOR_model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var72, var75) /* resolve_for on <var_t:nullable MType(MType)>*/;
}
var_tv = var76;
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var79 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 159);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = abstract_collection__MapRead__has_key(var77, var_tv);
}
if (var80){
if (varonce81) {
var82 = varonce81;
} else {
var83 = "type_";
var84 = 5;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
var86 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
}
var87 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var87 = array_instance Array[Object] */
var88 = 2;
var89 = NEW_array__NativeArray(var88, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var89)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var89)->values[1] = (val*) var86;
{
((void (*)(val*, val*, long))(var87->class->vft[COLOR_array__Array__with_native]))(var87, var89, var88) /* with_native on <var87:Array[Object]>*/;
}
}
{
var90 = ((val* (*)(val*))(var87->class->vft[COLOR_string__Object__to_s]))(var87) /* to_s on <var87:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "&type_";
var94 = 6;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var96 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = ", /* ";
var100 = 5;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = ": ";
var105 = 2;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = " */";
var110 = 3;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 7;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var92;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var96;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var98;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var114)->values[4] = (val*) var103;
((struct instance_array__NativeArray*)var114)->values[5] = (val*) var_tv;
((struct instance_array__NativeArray*)var114)->values[6] = (val*) var108;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce116) {
var117 = varonce116;
} else {
var118 = "NULL, /* empty (";
var119 = 16;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ": ";
var124 = 2;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = " not a live type) */";
var129 = 20;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 5;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var117;
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var133)->values[2] = (val*) var122;
((struct instance_array__NativeArray*)var133)->values[3] = (val*) var_tv;
((struct instance_array__NativeArray*)var133)->values[4] = (val*) var127;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
var134 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
{
array__ArrayIterator__next(var_57); /* Direct call array#ArrayIterator#next on <var_57:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_57) on <var_57:ArrayIterator[nullable MType]> */
RET_LABEL135:(void)0;
}
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "}";
var139 = 1;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var137); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = "};";
var144 = 2;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var142); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_type_resolution_table(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_type_resolution_table on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
