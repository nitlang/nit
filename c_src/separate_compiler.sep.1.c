#include "separate_compiler.sep.0.h"
/* method separate_compiler#ToolContext#opt_separate for (self: ToolContext): OptionBool */
val* separate_compiler__ToolContext__opt_separate(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 30);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 30);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 38);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 38);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 44);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 44);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 26);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 30);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 38);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 44);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 38);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
long var2 /* : Int */;
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
val* var38 /* : Iterator[nullable Object] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var41 /* : Array[MClass] */;
val* var43 /* : Array[MClass] */;
val* var44 /* : ArrayIterator[nullable Object] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
short int var47 /* : Bool */;
val* var48 /* : MClassKind */;
val* var50 /* : MClassKind */;
val* var51 /* : MClassKind */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var_ /* var : Bool */;
val* var58 /* : MClassKind */;
val* var60 /* : MClassKind */;
val* var61 /* : MClassKind */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
val* var69 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
val* var81 /* : CodeFile */;
val* var82 /* : POSetElement[MModule] */;
val* var84 /* : POSetElement[MModule] */;
val* var85 /* : Collection[Object] */;
val* var86 /* : Iterator[nullable Object] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_m89 /* var m: MModule */;
val* var90 /* : ToolContext */;
val* var92 /* : ToolContext */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
val* var115 /* : CodeFile */;
val* var117 /* : ToolContext */;
val* var119 /* : ToolContext */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
long var125 /* : Int */;
val* var126 /* : String */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : Array[Object] */;
long var135 /* : Int */;
val* var136 /* : NativeArray[Object] */;
val* var137 /* : String */;
val* var138 /* : CodeFile */;
val* var139 /* : POSet[MType] */;
val* var_mtypes /* var mtypes: POSet[MType] */;
val* var140 /* : Iterator[Object] */;
short int var141 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var144 /* : Set[MType] */;
val* var146 /* : Set[MType] */;
val* var147 /* : Iterator[nullable Object] */;
short int var148 /* : Bool */;
val* var149 /* : nullable Object */;
val* var_t150 /* var t: MType */;
short int var151 /* : Bool */;
long var153 /* : Int */;
long var155 /* : Int */;
long var_time1 /* var time1: Int */;
val* var156 /* : ToolContext */;
val* var158 /* : ToolContext */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
long var164 /* : Int */;
short int var166 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var167 /* : Int */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : Object */;
val* var177 /* : String */;
long var178 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
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
var33;
{
separate_compiler__SeparateCompiler__do_property_coloring(var_compiler); /* Direct call separate_compiler#SeparateCompiler#do_property_coloring on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var36 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = poset__POSetElement__greaters(var34);
}
{
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Collection__iterator]))(var37) /* iterator on <var37:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[nullable Object]>*/;
}
if(!var39) break;
{
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[nullable Object]>*/;
}
var_m = var40;
{
{ /* Inline model#MModule#intro_mclasses (var_m) on <var_m:MModule> */
var43 = var_m->attrs[COLOR_model__MModule___intro_mclasses].val; /* _intro_mclasses on <var_m:MModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclasses");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 138);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = array__AbstractArrayRead__iterator(var41);
}
for(;;) {
{
var45 = array__ArrayIterator__is_ok(var44);
}
if(!var45) break;
{
var46 = array__ArrayIterator__item(var44);
}
var_mclass = var46;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var50 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = model__Object__abstract_kind(self);
}
{
{ /* Inline kernel#Object#== (var48,var51) on <var48:MClassKind> */
var_other = var51;
{
{ /* Inline kernel#Object#is_same_instance (var48,var_other) on <var48:MClassKind> */
var57 = var48 == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
var_ = var52;
if (var52){
var47 = var_;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var60 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var58,var61) on <var58:MClassKind> */
var_other = var61;
{
{ /* Inline kernel#Object#is_same_instance (var58,var_other) on <var58:MClassKind> */
var67 = var58 == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
var47 = var62;
}
if (var47){
goto CONTINUE_label;
} else {
}
{
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_class_to_c]))(var_compiler, var_mclass) /* compile_class_to_c on <var_compiler:SeparateCompiler>*/;
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var44); /* Direct call array#ArrayIterator#next on <var44:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label68: (void)0;
{
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[nullable Object]>*/;
}
}
BREAK_label68: (void)0;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var71 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = ".main";
var75 = 5;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 2;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
var81 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var80);
}
var81;
{
abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions on <var_compiler:SeparateCompiler>*/
}
{
abstract_compiler__AbstractCompiler__compile_main_function(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_main_function on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var84 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = poset__POSetElement__greaters(var82);
}
{
var86 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Collection__iterator]))(var85) /* iterator on <var85:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var87 = ((short int (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var86) /* is_ok on <var86:Iterator[nullable Object]>*/;
}
if(!var87) break;
{
var88 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__item]))(var86) /* item on <var86:Iterator[nullable Object]>*/;
}
var_m89 = var88;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var92 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "Generate C for module ";
var96 = 22;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 2;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var94;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var_m89;
{
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
}
{
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
}
var102 = 2;
{
toolcontext__ToolContext__info(var90, var101, var102); /* Direct call toolcontext#ToolContext#info on <var90:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_m89) on <var_m89:MModule> */
var105 = var_m89->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_m89:MModule> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = ".sep";
var109 = 4;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 2;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var107;
{
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
}
{
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
}
{
var115 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var114);
}
var115;
{
separate_compiler__SeparateCompiler__compile_module_to_c(var_compiler, var_m89); /* Direct call separate_compiler#SeparateCompiler#compile_module_to_c on <var_compiler:SeparateCompiler>*/
}
CONTINUE_label116: (void)0;
{
((void (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__next]))(var86) /* next on <var86:Iterator[nullable Object]>*/;
}
}
BREAK_label116: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var119 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = "Type coloring";
var123 = 13;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = 2;
{
toolcontext__ToolContext__info(var117, var121, var125); /* Direct call toolcontext#ToolContext#info on <var117:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var128 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = ".types";
var132 = 6;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var134 = array_instance Array[Object] */
var135 = 2;
var136 = NEW_array__NativeArray(var135, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var136)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var136)->values[1] = (val*) var130;
{
((void (*)(val*, val*, long))(var134->class->vft[COLOR_array__Array__with_native]))(var134, var136, var135) /* with_native on <var134:Array[Object]>*/;
}
}
{
var137 = ((val* (*)(val*))(var134->class->vft[COLOR_string__Object__to_s]))(var134) /* to_s on <var134:Array[Object]>*/;
}
{
var138 = abstract_compiler__AbstractCompiler__new_file(var_compiler, var137);
}
var138;
{
var139 = separate_compiler__SeparateCompiler__do_type_coloring(var_compiler);
}
var_mtypes = var139;
{
var140 = poset__POSet__iterator(var_mtypes);
}
for(;;) {
{
var141 = ((short int (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var140) /* is_ok on <var140:Iterator[Object]>*/;
}
if(!var141) break;
{
var142 = ((val* (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__item]))(var140) /* item on <var140:Iterator[Object]>*/;
}
var_t = var142;
{
separate_compiler__SeparateCompiler__compile_type_to_c(var_compiler, var_t); /* Direct call separate_compiler#SeparateCompiler#compile_type_to_c on <var_compiler:SeparateCompiler>*/
}
CONTINUE_label143: (void)0;
{
((void (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__next]))(var140) /* next on <var140:Iterator[Object]>*/;
}
}
BREAK_label143: (void)0;
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var146 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = ((val* (*)(val*))(var144->class->vft[COLOR_abstract_collection__Collection__iterator]))(var144) /* iterator on <var144:Set[MType]>*/;
}
for(;;) {
{
var148 = ((short int (*)(val*))(var147->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var147) /* is_ok on <var147:Iterator[nullable Object]>*/;
}
if(!var148) break;
{
var149 = ((val* (*)(val*))(var147->class->vft[COLOR_abstract_collection__Iterator__item]))(var147) /* item on <var147:Iterator[nullable Object]>*/;
}
var_t150 = var149;
{
var151 = poset__POSet__has(var_mtypes, var_t150);
}
if (var151){
goto CONTINUE_label152;
} else {
}
{
separate_compiler__SeparateCompiler__compile_type_to_c(var_compiler, var_t150); /* Direct call separate_compiler#SeparateCompiler#compile_type_to_c on <var_compiler:SeparateCompiler>*/
}
CONTINUE_label152: (void)0;
{
((void (*)(val*))(var147->class->vft[COLOR_abstract_collection__Iterator__next]))(var147) /* next on <var147:Iterator[nullable Object]>*/;
}
}
BREAK_label152: (void)0;
{
separate_compiler__SeparateCompiler__display_stats(var_compiler); /* Direct call separate_compiler#SeparateCompiler#display_stats on <var_compiler:SeparateCompiler>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var155 = kernel_Any_Any_get_time_0(self);
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_time1 = var153;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var158 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = "*** END GENERATING C: ";
var162 = 22;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var166 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var166)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var167 = var_time1 - var_time0;
var164 = var167;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = " ***";
var171 = 4;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 3;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var160;
var176 = BOX_kernel__Int(var164); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var176;
((struct instance_array__NativeArray*)var175)->values[2] = (val*) var169;
{
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var177 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
var178 = 2;
{
toolcontext__ToolContext__info(var156, var177, var178); /* Direct call toolcontext#ToolContext#info on <var156:ToolContext>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 158);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 158);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 159);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 159);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 160);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 160);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 161);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 161);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
val* var39 /* : HashMapIterator[Object, nullable Object] */;
short int var40 /* : Bool */;
val* var41 /* : Object */;
val* var_c /* var c: MClass */;
val* var42 /* : nullable Object */;
long var_v /* var v: Int */;
long var43 /* : Int */;
val* var44 /* : MClassType */;
val* var46 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var47 /* : CodeWriter */;
val* var49 /* : CodeWriter */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : String */;
val* var66 /* : CodeWriter */;
val* var68 /* : CodeWriter */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = hash_collection__HashMap__iterator(var36);
}
for(;;) {
{
var40 = hash_collection__HashMapIterator__is_ok(var39);
}
if(!var40) break;
{
var41 = hash_collection__HashMapIterator__key(var39);
}
var_c = var41;
{
var42 = hash_collection__HashMapIterator__item(var39);
}
var43 = ((struct instance_kernel__Int*)var42)->value; /* autounbox from nullable Object to Int */;
var_v = var43;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var46 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_t = var44;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var49 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = abstract_compiler__MClassType__ctype(var_t);
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = " ";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
var56 = abstract_compiler__MClassType__ctypename(var_t);
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = ";";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 4;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var64)->values[1] = (val*) var52;
((struct instance_array__NativeArray*)var64)->values[2] = (val*) var56;
((struct instance_array__NativeArray*)var64)->values[3] = (val*) var58;
{
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
}
{
var65 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
}
{
abstract_compiler__CodeWriter__add_decl(var47, var65); /* Direct call abstract_compiler#CodeWriter#add_decl on <var47:CodeWriter>*/
}
CONTINUE_label: (void)0;
{
hash_collection__HashMapIterator__next(var39); /* Direct call hash_collection#HashMapIterator#next on <var39:HashMapIterator[Object, nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var68 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "} nitattribute_t; /* general C type representing a Nit attribute. */";
var72 = 68;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
abstract_compiler__CodeWriter__add_decl(var66, var70); /* Direct call abstract_compiler#CodeWriter#add_decl on <var66:CodeWriter>*/
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
val* var31 /* : ArrayIterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_classname /* var classname: String */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var37 /* : Model */;
val* var39 /* : Model */;
val* var40 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
val* var56 /* : HashMap[MClass, Int] */;
val* var58 /* : HashMap[MClass, Int] */;
val* var59 /* : nullable Object */;
val* var60 /* : HashMap[MClass, Int] */;
val* var62 /* : HashMap[MClass, Int] */;
long var63 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var68 /* : Int */;
val* var69 /* : nullable Object */;
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
{
var31 = array__AbstractArrayRead__iterator(var_);
}
for(;;) {
{
var32 = array__ArrayIterator__is_ok(var31);
}
if(!var32) break;
{
var33 = array__ArrayIterator__item(var31);
}
var_classname = var33;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var36 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var34) on <var34:MModule> */
var39 = var34->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var34:MModule> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 74);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = model__Model__get_mclasses_by_name(var37, var_classname);
}
var_classes = var40;
var41 = NULL;
if (var_classes == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
var43 = abstract_collection__SequenceRead___61d_61d(var_classes, var41);
var42 = var43;
}
if (var42){
goto CONTINUE_label;
} else {
}
{
var44 = array__AbstractArrayRead__length(var_classes);
}
var45 = 1;
{
{ /* Inline kernel#Int#== (var44,var45) on <var44:Int> */
var49 = var44 == var45;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (unlikely(!var46)) {
if (varonce50) {
var51 = varonce50;
} else {
var52 = ", ";
var53 = 2;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = string__Collection__join(var_classes, var51);
}
{
file__Object__print(self, var55); /* Direct call file#Object#print on <self:SeparateCompiler>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 206);
show_backtrace(1);
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var58 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = abstract_collection__SequenceRead__first(var_classes);
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var62 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = hash_collection__HashMap__length(var60);
}
var64 = 1;
{
{ /* Inline kernel#Int#+ (var63,var64) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var68 = var63 + var64;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
var69 = BOX_kernel__Int(var65); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var56, var59, var69); /* Direct call hash_collection#HashMap#[]= on <var56:HashMap[MClass, Int]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var31); /* Direct call array#ArrayIterator#next on <var31:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
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
val* var12 /* : MClassKind */;
val* var14 /* : MClassKind */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : HashMap[MClass, Int] */;
val* var24 /* : HashMap[MClass, Int] */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : MClass */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
val* var36 /* : HashMap[MClass, Int] */;
val* var38 /* : HashMap[MClass, Int] */;
val* var39 /* : nullable Object */;
long var40 /* : Int */;
var_mclass = p0;
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var3 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_compiler__MClassType__ctype(var1);
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
var14 = var_mclass->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var12,var15) on <var12:MClassKind> */
var_other = var15;
{
{ /* Inline kernel#Object#is_same_instance (var12,var_other) on <var12:MClassKind> */
var21 = var12 == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var24 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Pointer";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
var33 = model__MModule__get_primitive_class(var25, var29);
}
{
var34 = hash_collection__HashMap___91d_93d(var22, var33);
}
var35 = ((struct instance_kernel__Int*)var34)->value; /* autounbox from nullable Object to Int */;
var = var35;
goto RET_LABEL;
} else {
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var38 = self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = hash_collection__HashMap___91d_93d(var36, var_mclass);
}
var40 = ((struct instance_kernel__Int*)var39)->value; /* autounbox from nullable Object to Int */;
var = var40;
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
val* var1 /* : MapIterator[Object, nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : Object */;
val* var_m /* var m: Object */;
val* var4 /* : nullable Object */;
long var_c /* var c: Int */;
long var5 /* : Int */;
var_colors = p0;
{
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var_v = var;
{
var1 = ((val* (*)(val*))(var_colors->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_colors) /* iterator on <var_colors:Map[Object, Int]>*/;
}
for(;;) {
{
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var1) /* is_ok on <var1:MapIterator[Object, nullable Object]>*/;
}
if(!var2) break;
{
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__key]))(var1) /* key on <var1:MapIterator[Object, nullable Object]>*/;
}
var_m = var3;
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__item]))(var1) /* item on <var1:MapIterator[Object, nullable Object]>*/;
}
var5 = ((struct instance_kernel__Int*)var4)->value; /* autounbox from nullable Object to Int */;
var_c = var5;
{
separate_compiler__SeparateCompiler__compile_color_const(self, var_v, var_m, var_c); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:SeparateCompiler>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapIterator__next]))(var1) /* next on <var1:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 259);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 32);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 259);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 259);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 259);
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
val* var10 /* : Array[MMethod] */;
val* var_dead_methods /* var dead_methods: Array[MMethod] */;
val* var11 /* : HashMap[MClass, Set[PropertyLayoutElement]] */;
val* var_mmethods /* var mmethods: HashMap[MClass, Set[PropertyLayoutElement]] */;
val* var12 /* : HashMap[MClass, Set[MAttribute]] */;
val* var_mattributes /* var mattributes: HashMap[MClass, Set[MAttribute]] */;
val* var13 /* : Iterator[Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var16 /* : HashSet[PropertyLayoutElement] */;
val* var17 /* : HashSet[MAttribute] */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : Set[MProperty] */;
val* var22 /* : Iterator[nullable Object] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var25 /* : Bool */;
int cltype;
int idtype;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : ModelBuilder */;
val* var30 /* : ModelBuilder */;
val* var31 /* : ToolContext */;
val* var33 /* : ToolContext */;
val* var34 /* : OptionBool */;
val* var36 /* : OptionBool */;
val* var37 /* : nullable Object */;
val* var39 /* : nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var_ /* var : Bool */;
val* var42 /* : null */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var_49 /* var : Bool */;
val* var50 /* : HashSet[MMethod] */;
val* var52 /* : HashSet[MMethod] */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
val* var59 /* : nullable Object */;
val* var61 /* : HashSet[MMethodDef] */;
val* var_all_super_calls /* var all_super_calls: HashSet[MMethodDef] */;
val* var62 /* : MModule */;
val* var64 /* : MModule */;
val* var65 /* : POSetElement[MModule] */;
val* var67 /* : POSetElement[MModule] */;
val* var68 /* : Collection[Object] */;
val* var69 /* : Iterator[nullable Object] */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var72 /* : Array[MClassDef] */;
val* var74 /* : Array[MClassDef] */;
val* var75 /* : ArrayIterator[nullable Object] */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var78 /* : Array[MPropDef] */;
val* var80 /* : Array[MPropDef] */;
val* var81 /* : ArrayIterator[nullable Object] */;
short int var82 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : HashSet[MMethodDef] */;
val* var103 /* : HashSet[MMethodDef] */;
val* var_super_calls /* var super_calls: nullable Object */;
val* var104 /* : Iterator[Object] */;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var107 /* : MClassDef */;
val* var109 /* : MClassDef */;
val* var110 /* : MClass */;
val* var112 /* : MClass */;
val* var_mclass113 /* var mclass: MClass */;
val* var114 /* : nullable Object */;
val* var115 /* : MModule */;
val* var117 /* : MModule */;
val* var118 /* : POSetElement[MClass] */;
val* var119 /* : Collection[Object] */;
val* var120 /* : Iterator[nullable Object] */;
short int var121 /* : Bool */;
val* var122 /* : nullable Object */;
val* var_descendant /* var descendant: MClass */;
val* var123 /* : nullable Object */;
val* var126 /* : POSetBucketsColorer[MClass, PropertyLayoutElement] */;
val* var127 /* : Map[Object, Set[Object]] */;
val* var_meth_colorer /* var meth_colorer: POSetBucketsColorer[MClass, PropertyLayoutElement] */;
val* var128 /* : Map[Object, Int] */;
val* var130 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var132 /* : Map[PropertyLayoutElement, Int] */;
val* var134 /* : Map[PropertyLayoutElement, Int] */;
val* var135 /* : ArrayIterator[nullable Object] */;
short int var136 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_mproperty /* var mproperty: MMethod */;
val* var138 /* : AbstractCompilerVisitor */;
long var139 /* : Int */;
long var140 /* : Int */;
long var142 /* : Int */;
val* var144 /* : Iterator[Object] */;
short int var145 /* : Bool */;
val* var146 /* : nullable Object */;
val* var_mpropdef147 /* var mpropdef: MMethodDef */;
short int var148 /* : Bool */;
val* var150 /* : AbstractCompilerVisitor */;
long var151 /* : Int */;
long var152 /* : Int */;
long var154 /* : Int */;
val* var155 /* : POSetBucketsColorer[MClass, MAttribute] */;
val* var156 /* : Map[Object, Set[Object]] */;
val* var_attr_colorer /* var attr_colorer: POSetBucketsColorer[MClass, MAttribute] */;
val* var157 /* : Map[Object, Int] */;
val* var159 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var161 /* : Map[MAttribute, Int] */;
val* var163 /* : Map[MAttribute, Int] */;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
{ /* Inline coloring#POSetColorer#init (var8) on <var8:POSetColorer[MClass]> */
RET_LABEL9:(void)0;
}
}
var_colorer = var8;
{
coloring__POSetColorer__colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MClass]>*/
}
var10 = NEW_array__Array(&type_array__Arraymodel__MMethod);
{
array__Array__init(var10); /* Direct call array#Array#init on <var10:Array[MMethod]>*/
}
var_dead_methods = var10;
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement);
{
hash_collection__HashMap__init(var11); /* Direct call hash_collection#HashMap#init on <var11:HashMap[MClass, Set[PropertyLayoutElement]]>*/
}
var_mmethods = var11;
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute);
{
hash_collection__HashMap__init(var12); /* Direct call hash_collection#HashMap#init on <var12:HashMap[MClass, Set[MAttribute]]>*/
}
var_mattributes = var12;
{
var13 = hash_collection__HashSet__iterator(var_mclasses);
}
for(;;) {
{
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[Object]>*/;
}
if(!var14) break;
{
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[Object]>*/;
}
var_mclass = var15;
var16 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetseparate_compiler__PropertyLayoutElement);
{
hash_collection__HashSet__init(var16); /* Direct call hash_collection#HashSet#init on <var16:HashSet[PropertyLayoutElement]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var_mmethods, var_mclass, var16); /* Direct call hash_collection#HashMap#[]= on <var_mmethods:HashMap[MClass, Set[PropertyLayoutElement]]>*/
}
var17 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MAttribute);
{
hash_collection__HashSet__init(var17); /* Direct call hash_collection#HashSet#init on <var17:HashSet[MAttribute]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var_mattributes, var_mclass, var17); /* Direct call hash_collection#HashMap#[]= on <var_mattributes:HashMap[MClass, Set[MAttribute]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var20 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = abstract_compiler__MModule__properties(var18, var_mclass);
}
{
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__iterator]))(var21) /* iterator on <var21:Set[MProperty]>*/;
}
for(;;) {
{
var23 = ((short int (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var22) /* is_ok on <var22:Iterator[nullable Object]>*/;
}
if(!var23) break;
{
var24 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__item]))(var22) /* item on <var22:Iterator[nullable Object]>*/;
}
var_mprop = var24;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var25 = 0;
} else {
var25 = var_mprop->type->type_table[cltype] == idtype;
}
if (var25){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var30 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var28) on <var28:ModelBuilder> */
var33 = var28->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var28:ModelBuilder> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_colo_dead_methods (var31) on <var31:ToolContext> */
var36 = var31->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val; /* _opt_colo_dead_methods on <var31:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_colo_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 42);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline opts#Option#value (var34) on <var34:OptionBool> */
var39 = var34->attrs[COLOR_opts__Option___value].val; /* _value on <var34:OptionBool> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = ((struct instance_kernel__Bool*)var37)->value; /* autounbox from nullable Object to Bool */;
var41 = !var40;
var_ = var41;
if (var41){
var42 = NULL;
if (var_rta == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var42) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var42;
{
var47 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var46 = var47;
}
var48 = !var46;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
var27 = var43;
} else {
var27 = var_;
}
var_49 = var27;
if (var27){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var52 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 77);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = hash_collection__HashSet__has(var50, var_mprop);
}
var54 = !var53;
var26 = var54;
} else {
var26 = var_49;
}
if (var26){
{
array__Array__add(var_dead_methods, var_mprop); /* Direct call array#Array#add on <var_dead_methods:Array[MMethod]>*/
}
goto CONTINUE_label;
} else {
}
{
var55 = hash_collection__HashMap___91d_93d(var_mmethods, var_mclass);
}
{
((void (*)(val*, val*))(var55->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var55, var_mprop) /* add on <var55:nullable Object(Set[PropertyLayoutElement])>*/;
}
} else {
/* <var_mprop:MProperty> isa MAttribute */
cltype57 = type_model__MAttribute.color;
idtype58 = type_model__MAttribute.id;
if(cltype57 >= var_mprop->type->table_size) {
var56 = 0;
} else {
var56 = var_mprop->type->type_table[cltype57] == idtype58;
}
if (var56){
{
var59 = hash_collection__HashMap___91d_93d(var_mattributes, var_mclass);
}
{
((void (*)(val*, val*))(var59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var59, var_mprop) /* add on <var59:nullable Object(Set[MAttribute])>*/;
}
} else {
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__next]))(var22) /* next on <var22:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label60: (void)0;
{
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[Object]>*/;
}
}
BREAK_label60: (void)0;
var61 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
{
hash_collection__HashSet__init(var61); /* Direct call hash_collection#HashSet#init on <var61:HashSet[MMethodDef]>*/
}
var_all_super_calls = var61;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var64 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var62) on <var62:MModule> */
var67 = var62->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var62:MModule> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = poset__POSetElement__greaters(var65);
}
{
var69 = ((val* (*)(val*))(var68->class->vft[COLOR_abstract_collection__Collection__iterator]))(var68) /* iterator on <var68:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var70 = ((short int (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var69) /* is_ok on <var69:Iterator[nullable Object]>*/;
}
if(!var70) break;
{
var71 = ((val* (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__item]))(var69) /* item on <var69:Iterator[nullable Object]>*/;
}
var_mmodule = var71;
{
{ /* Inline model#MModule#mclassdefs (var_mmodule) on <var_mmodule:MModule> */
var74 = var_mmodule->attrs[COLOR_model__MModule___mclassdefs].val; /* _mclassdefs on <var_mmodule:MModule> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 141);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = array__AbstractArrayRead__iterator(var72);
}
for(;;) {
{
var76 = array__ArrayIterator__is_ok(var75);
}
if(!var76) break;
{
var77 = array__ArrayIterator__item(var75);
}
var_mclassdef = var77;
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var80 = var_mclassdef->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 574);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = array__AbstractArrayRead__iterator(var78);
}
for(;;) {
{
var82 = array__ArrayIterator__is_ok(var81);
}
if(!var82) break;
{
var83 = array__ArrayIterator__item(var81);
}
var_mpropdef = var83;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype85 = type_model__MMethodDef.color;
idtype86 = type_model__MMethodDef.id;
if(cltype85 >= var_mpropdef->type->table_size) {
var84 = 0;
} else {
var84 = var_mpropdef->type->type_table[cltype85] == idtype86;
}
var87 = !var84;
if (var87){
goto CONTINUE_label88;
} else {
}
{
{ /* Inline modelize_property#MPropDef#has_supercall (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var91 = var_mpropdef->attrs[COLOR_modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var_mpropdef:MPropDef(MMethodDef)> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89){
{
hash_collection__HashSet__add(var_all_super_calls, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var_all_super_calls:HashSet[MMethodDef]>*/
}
} else {
}
CONTINUE_label88: (void)0;
{
array__ArrayIterator__next(var81); /* Direct call array#ArrayIterator#next on <var81:ArrayIterator[nullable Object]>*/
}
}
BREAK_label88: (void)0;
CONTINUE_label92: (void)0;
{
array__ArrayIterator__next(var75); /* Direct call array#ArrayIterator#next on <var75:ArrayIterator[nullable Object]>*/
}
}
BREAK_label92: (void)0;
CONTINUE_label93: (void)0;
{
((void (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__next]))(var69) /* next on <var69:Iterator[nullable Object]>*/;
}
}
BREAK_label93: (void)0;
var94 = NULL;
if (var_rta == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var94) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var94;
{
var99 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var98 = var99;
}
var100 = !var98;
var96 = var100;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var103 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 110);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_super_calls = var101;
} else {
var_super_calls = var_all_super_calls;
}
{
var104 = hash_collection__HashSet__iterator(var_super_calls);
}
for(;;) {
{
var105 = ((short int (*)(val*))(var104->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var104) /* is_ok on <var104:Iterator[Object]>*/;
}
if(!var105) break;
{
var106 = ((val* (*)(val*))(var104->class->vft[COLOR_abstract_collection__Iterator__item]))(var104) /* item on <var104:Iterator[Object]>*/;
}
var_mmethoddef = var106;
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var109 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var107) on <var107:MClassDef> */
var112 = var107->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var107:MClassDef> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_mclass113 = var110;
{
var114 = hash_collection__HashMap___91d_93d(var_mmethods, var_mclass113);
}
{
((void (*)(val*, val*))(var114->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var114, var_mmethoddef) /* add on <var114:nullable Object(Set[PropertyLayoutElement])>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var117 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = model__MClass__in_hierarchy(var_mclass113, var115);
}
{
var119 = poset__POSetElement__smallers(var118);
}
{
var120 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Collection__iterator]))(var119) /* iterator on <var119:Collection[Object](Collection[MClass])>*/;
}
for(;;) {
{
var121 = ((short int (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var120) /* is_ok on <var120:Iterator[nullable Object]>*/;
}
if(!var121) break;
{
var122 = ((val* (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__item]))(var120) /* item on <var120:Iterator[nullable Object]>*/;
}
var_descendant = var122;
{
var123 = hash_collection__HashMap___91d_93d(var_mmethods, var_descendant);
}
{
((void (*)(val*, val*))(var123->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var123, var_mmethoddef) /* add on <var123:nullable Object(Set[PropertyLayoutElement])>*/;
}
CONTINUE_label124: (void)0;
{
((void (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__next]))(var120) /* next on <var120:Iterator[nullable Object]>*/;
}
}
BREAK_label124: (void)0;
CONTINUE_label125: (void)0;
{
((void (*)(val*))(var104->class->vft[COLOR_abstract_collection__Iterator__next]))(var104) /* next on <var104:Iterator[Object]>*/;
}
}
BREAK_label125: (void)0;
var126 = NEW_coloring__POSetBucketsColorer(&type_coloring__POSetBucketsColorermodel__MClassseparate_compiler__PropertyLayoutElement);
{
var127 = coloring__POSetColorer__conflicts(var_colorer);
}
{
coloring__POSetBucketsColorer__init(var126, var_poset, var127); /* Direct call coloring#POSetBucketsColorer#init on <var126:POSetBucketsColorer[MClass, PropertyLayoutElement]>*/
}
var_meth_colorer = var126;
{
var128 = coloring__POSetBucketsColorer__colorize(var_meth_colorer, var_mmethods);
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors= (self,var128) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val = var128; /* _method_colors on <self:SeparateCompiler> */
RET_LABEL129:(void)0;
}
}
{
var130 = separate_compiler__SeparateCompiler__build_method_tables(self, var_mclasses, var_super_calls);
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables= (self,var130) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val = var130; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL131:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var134 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 161);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(self, var132); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateCompiler>*/
}
{
var135 = array__AbstractArrayRead__iterator(var_dead_methods);
}
for(;;) {
{
var136 = array__ArrayIterator__is_ok(var135);
}
if(!var136) break;
{
var137 = array__ArrayIterator__item(var135);
}
var_mproperty = var137;
{
var138 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var139 = 1;
{
{ /* Inline kernel#Int#unary - (var139) on <var139:Int> */
var142 = -var139;
var140 = var142;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_const(self, var138, var_mproperty, var140); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:SeparateCompiler>*/
}
CONTINUE_label143: (void)0;
{
array__ArrayIterator__next(var135); /* Direct call array#ArrayIterator#next on <var135:ArrayIterator[nullable Object]>*/
}
}
BREAK_label143: (void)0;
{
var144 = hash_collection__HashSet__iterator(var_all_super_calls);
}
for(;;) {
{
var145 = ((short int (*)(val*))(var144->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var144) /* is_ok on <var144:Iterator[Object]>*/;
}
if(!var145) break;
{
var146 = ((val* (*)(val*))(var144->class->vft[COLOR_abstract_collection__Iterator__item]))(var144) /* item on <var144:Iterator[Object]>*/;
}
var_mpropdef147 = var146;
{
var148 = hash_collection__HashSet__has(var_super_calls, var_mpropdef147);
}
if (var148){
goto CONTINUE_label149;
} else {
}
{
var150 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateCompiler>*/;
}
var151 = 1;
{
{ /* Inline kernel#Int#unary - (var151) on <var151:Int> */
var154 = -var151;
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_const(self, var150, var_mpropdef147, var152); /* Direct call separate_compiler#SeparateCompiler#compile_color_const on <self:SeparateCompiler>*/
}
CONTINUE_label149: (void)0;
{
((void (*)(val*))(var144->class->vft[COLOR_abstract_collection__Iterator__next]))(var144) /* next on <var144:Iterator[Object]>*/;
}
}
BREAK_label149: (void)0;
var155 = NEW_coloring__POSetBucketsColorer(&type_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute);
{
var156 = coloring__POSetColorer__conflicts(var_colorer);
}
{
coloring__POSetBucketsColorer__init(var155, var_poset, var156); /* Direct call coloring#POSetBucketsColorer#init on <var155:POSetBucketsColorer[MClass, MAttribute]>*/
}
var_attr_colorer = var155;
{
var157 = coloring__POSetBucketsColorer__colorize(var_attr_colorer, var_mattributes);
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors= (self,var157) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val = var157; /* _attr_colors on <self:SeparateCompiler> */
RET_LABEL158:(void)0;
}
}
{
var159 = separate_compiler__SeparateCompiler__build_attr_tables(self, var_mclasses);
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables= (self,var159) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val = var159; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL160:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:SeparateCompiler> */
var163 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 162);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
separate_compiler__SeparateCompiler__compile_color_consts(self, var161); /* Direct call separate_compiler#SeparateCompiler#compile_color_consts on <self:SeparateCompiler>*/
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
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : Set[MProperty] */;
val* var_mproperties /* var mproperties: Set[MProperty] */;
val* var10 /* : MClassDef */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var18 /* : Bool */;
val* var19 /* : Map[PropertyLayoutElement, Int] */;
val* var21 /* : Map[PropertyLayoutElement, Int] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : Map[PropertyLayoutElement, Int] */;
val* var26 /* : Map[PropertyLayoutElement, Int] */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var_color /* var color: Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name;
short int var35 /* : Bool */;
val* var36 /* : Range[Int] */;
long var37 /* : Int */;
val* var38 /* : Discrete */;
val* var39 /* : Discrete */;
val* var40 /* : Iterator[Discrete] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
long var_i /* var i: Int */;
long var43 /* : Int */;
val* var44 /* : null */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
val* var49 /* : MPropDef */;
val* var50 /* : Iterator[nullable Object] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_supercall /* var supercall: MMethodDef */;
val* var53 /* : MModule */;
val* var55 /* : MModule */;
val* var56 /* : Set[MClassDef] */;
val* var57 /* : MClassDef */;
val* var59 /* : MClassDef */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var63 /* : Map[PropertyLayoutElement, Int] */;
val* var65 /* : Map[PropertyLayoutElement, Int] */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var_color68 /* var color: Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : Range[Int] */;
long var78 /* : Int */;
val* var79 /* : Discrete */;
val* var80 /* : Discrete */;
val* var81 /* : Iterator[Discrete] */;
short int var82 /* : Bool */;
val* var83 /* : nullable Object */;
long var_i84 /* var i: Int */;
long var85 /* : Int */;
val* var86 /* : null */;
val* var88 /* : MModule */;
val* var90 /* : MModule */;
val* var91 /* : MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
var_mclasses = p0;
var_super_calls = p1;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/
}
var_tables = var1;
{
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_mclass = var4;
var5 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[nullable MPropDef]>*/
}
var_table = var5;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var8 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_compiler__MModule__properties(var6, var_mclass);
}
var_mproperties = var9;
{
var10 = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var10) on <var10:MClassDef> */
var13 = var10->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_mtype = var11;
{
var14 = ((val* (*)(val*))(var_mproperties->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mproperties) /* iterator on <var_mproperties:Set[MProperty]>*/;
}
for(;;) {
{
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
}
if(!var15) break;
{
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
}
var_mproperty = var16;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var17 = 0;
} else {
var17 = var_mproperty->type->type_table[cltype] == idtype;
}
var18 = !var17;
if (var18){
goto CONTINUE_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var21 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 161);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = abstract_collection__MapRead__has_key(var19, var_mproperty);
}
var23 = !var22;
if (var23){
goto CONTINUE_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var26 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 161);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var24, var_mproperty) /* [] on <var24:Map[PropertyLayoutElement, Int]>*/;
}
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_color = var28;
{
var29 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var29,var_color) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var32 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var35 = var29 <= var_color;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var36 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var37 = array__AbstractArrayRead__length(var_table);
}
{
var38 = BOX_kernel__Int(var37); /* autobox from Int to Discrete */
var39 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
range__Range__without_last(var36, var38, var39); /* Direct call range#Range#without_last on <var36:Range[Int]>*/
}
{
var40 = range__Range__iterator(var36);
}
for(;;) {
{
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[Discrete]>*/;
}
if(!var41) break;
{
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[Discrete]>*/;
}
var43 = ((struct instance_kernel__Int*)var42)->value; /* autounbox from nullable Object to Int */;
var_i = var43;
var44 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var44); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label45: (void)0;
{
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[Discrete]>*/;
}
}
BREAK_label45: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var48 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = model__MProperty__lookup_first_definition(var_mproperty, var46, var_mtype);
}
{
array__Array___91d_93d_61d(var_table, var_color, var49); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
var50 = ((val* (*)(val*))(var_super_calls->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_calls) /* iterator on <var_super_calls:Set[MMethodDef]>*/;
}
for(;;) {
{
var51 = ((short int (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var50) /* is_ok on <var50:Iterator[nullable Object]>*/;
}
if(!var51) break;
{
var52 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__item]))(var50) /* item on <var50:Iterator[nullable Object]>*/;
}
var_supercall = var52;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var55 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = model__MClassType__collect_mclassdefs(var_mtype, var53);
}
{
{ /* Inline model#MPropDef#mclassdef (var_supercall) on <var_supercall:MMethodDef> */
var59 = var_supercall->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_supercall:MMethodDef> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = ((short int (*)(val*, val*))(var56->class->vft[COLOR_abstract_collection__Collection__has]))(var56, var57) /* has on <var56:Set[MClassDef]>*/;
}
var61 = !var60;
if (var61){
goto CONTINUE_label62;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_colors (self) on <self:SeparateCompiler> */
var65 = self->attrs[COLOR_separate_compiler__SeparateCompiler___method_colors].val; /* _method_colors on <self:SeparateCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 161);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = ((val* (*)(val*, val*))(var63->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var63, var_supercall) /* [] on <var63:Map[PropertyLayoutElement, Int]>*/;
}
var67 = ((struct instance_kernel__Int*)var66)->value; /* autounbox from nullable Object to Int */;
var_color68 = var67;
{
var69 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var69,var_color68) on <var69:Int> */
/* Covariant cast for argument 0 (i) <var_color68:Int> isa OTHER */
/* <var_color68:Int> isa OTHER */
var72 = 1; /* easy <var_color68:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var76 = var69 <= var_color68;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
var77 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var78 = array__AbstractArrayRead__length(var_table);
}
{
var79 = BOX_kernel__Int(var78); /* autobox from Int to Discrete */
var80 = BOX_kernel__Int(var_color68); /* autobox from Int to Discrete */
range__Range__without_last(var77, var79, var80); /* Direct call range#Range#without_last on <var77:Range[Int]>*/
}
{
var81 = range__Range__iterator(var77);
}
for(;;) {
{
var82 = ((short int (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var81) /* is_ok on <var81:Iterator[Discrete]>*/;
}
if(!var82) break;
{
var83 = ((val* (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__item]))(var81) /* item on <var81:Iterator[Discrete]>*/;
}
var85 = ((struct instance_kernel__Int*)var83)->value; /* autounbox from nullable Object to Int */;
var_i84 = var85;
var86 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i84, var86); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label87: (void)0;
{
((void (*)(val*))(var81->class->vft[COLOR_abstract_collection__Iterator__next]))(var81) /* next on <var81:Iterator[Discrete]>*/;
}
}
BREAK_label87: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var90 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = model__MPropDef__lookup_next_definition(var_supercall, var88, var_mtype);
}
var_mmethoddef = var91;
{
array__Array___91d_93d_61d(var_table, var_color68, var_mmethoddef); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label62: (void)0;
{
((void (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__next]))(var50) /* next on <var50:Iterator[nullable Object]>*/;
}
}
BREAK_label62: (void)0;
CONTINUE_label92: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label92: (void)0;
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
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : Set[MProperty] */;
val* var_mproperties /* var mproperties: Set[MProperty] */;
val* var10 /* : MClassDef */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var18 /* : Bool */;
val* var19 /* : Map[MAttribute, Int] */;
val* var21 /* : Map[MAttribute, Int] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : Map[MAttribute, Int] */;
val* var26 /* : Map[MAttribute, Int] */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var_color /* var color: Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name;
short int var35 /* : Bool */;
val* var36 /* : Range[Int] */;
long var37 /* : Int */;
val* var38 /* : Discrete */;
val* var39 /* : Discrete */;
val* var40 /* : Iterator[Discrete] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
long var_i /* var i: Int */;
long var43 /* : Int */;
val* var44 /* : null */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
val* var49 /* : MPropDef */;
var_mclasses = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/
}
var_tables = var1;
{
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_mclass = var4;
var5 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[nullable MPropDef]>*/
}
var_table = var5;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclass, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var8 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_compiler__MModule__properties(var6, var_mclass);
}
var_mproperties = var9;
{
var10 = model__MClass__intro(var_mclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var10) on <var10:MClassDef> */
var13 = var10->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_mtype = var11;
{
var14 = ((val* (*)(val*))(var_mproperties->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mproperties) /* iterator on <var_mproperties:Set[MProperty]>*/;
}
for(;;) {
{
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
}
if(!var15) break;
{
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
}
var_mproperty = var16;
/* <var_mproperty:MProperty> isa MAttribute */
cltype = type_model__MAttribute.color;
idtype = type_model__MAttribute.id;
if(cltype >= var_mproperty->type->table_size) {
var17 = 0;
} else {
var17 = var_mproperty->type->type_table[cltype] == idtype;
}
var18 = !var17;
if (var18){
goto CONTINUE_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:SeparateCompiler> */
var21 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 162);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = abstract_collection__MapRead__has_key(var19, var_mproperty);
}
var23 = !var22;
if (var23){
goto CONTINUE_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_colors (self) on <self:SeparateCompiler> */
var26 = self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_colors].val; /* _attr_colors on <self:SeparateCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 162);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var24, var_mproperty) /* [] on <var24:Map[MAttribute, Int]>*/;
}
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_color = var28;
{
var29 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var29,var_color) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var32 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var35 = var29 <= var_color;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var36 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var37 = array__AbstractArrayRead__length(var_table);
}
{
var38 = BOX_kernel__Int(var37); /* autobox from Int to Discrete */
var39 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
range__Range__without_last(var36, var38, var39); /* Direct call range#Range#without_last on <var36:Range[Int]>*/
}
{
var40 = range__Range__iterator(var36);
}
for(;;) {
{
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[Discrete]>*/;
}
if(!var41) break;
{
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[Discrete]>*/;
}
var43 = ((struct instance_kernel__Int*)var42)->value; /* autounbox from nullable Object to Int */;
var_i = var43;
var44 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var44); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label45: (void)0;
{
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[Discrete]>*/;
}
}
BREAK_label45: (void)0;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var48 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = model__MProperty__lookup_first_definition(var_mproperty, var46, var_mtype);
}
{
array__Array___91d_93d_61d(var_table, var_color, var49); /* Direct call array#Array#[]= on <var_table:Array[nullable MPropDef]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label50: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label50: (void)0;
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
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var23 /* : MClassType */;
val* var25 /* : MClassType */;
val* var26 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var27 /* : POSetColorer[MType] */;
val* var_colorer /* var colorer: POSetColorer[MType] */;
val* var29 /* : Map[Object, Int] */;
val* var31 /* : Map[Object, Int] */;
val* var33 /* : Map[MType, Array[nullable MType]] */;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var3 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 410);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var1) on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 411);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (var7) on <var7:nullable RapidTypeAnalysis> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <var7:nullable RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_live_cast_types = var10;
var13 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
hash_collection__HashSet__init(var13); /* Direct call hash_collection#HashSet#init on <var13:HashSet[MType]>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var17) /* iterator on <var17:RemovableCollection[Object](RemovableCollection[MClass])>*/;
}
for(;;) {
{
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
}
if(!var21) break;
{
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
}
var_c = var22;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var25 = var_c->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
hash_collection__HashSet__add(var_mtypes, var23); /* Direct call hash_collection#HashSet#add on <var_mtypes:HashSet[MType]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
var26 = separate_compiler__SeparateCompiler__poset_from_mtypes(self, var_mtypes);
}
var_poset = var26;
var27 = NEW_coloring__POSetColorer(&type_coloring__POSetColorermodel__MType);
{
{ /* Inline coloring#POSetColorer#init (var27) on <var27:POSetColorer[MType]> */
RET_LABEL28:(void)0;
}
}
var_colorer = var27;
{
coloring__POSetColorer__colorize(var_colorer, var_poset); /* Direct call coloring#POSetColorer#colorize on <var_colorer:POSetColorer[MType]>*/
}
{
var29 = coloring__POSetColorer__ids(var_colorer);
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids= (self,var29) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val = var29; /* _type_ids on <self:SeparateCompiler> */
RET_LABEL30:(void)0;
}
}
{
var31 = coloring__POSetColorer__colors(var_colorer);
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_colors= (self,var31) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val = var31; /* _type_colors on <self:SeparateCompiler> */
RET_LABEL32:(void)0;
}
}
{
var33 = separate_compiler__SeparateCompiler__build_type_tables(self, var_poset);
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables= (self,var33) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val = var33; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL34:(void)0;
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
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: MType */;
val* var6 /* : POSetElement[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_o /* var o: MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var19 /* : null */;
short int var20 /* : Bool */;
var_mtypes = p0;
var1 = NEW_poset__POSet(&type_poset__POSetmodel__MType);
{
{ /* Inline poset#POSet#init (var1) on <var1:POSet[MType]> */
RET_LABEL2:(void)0;
}
}
var_poset = var1;
{
var3 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[MType]>*/;
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
}
var_e = var5;
{
var6 = poset__POSet__add_node(var_poset, var_e);
}
var6;
{
var7 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[MType]>*/;
}
for(;;) {
{
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
}
if(!var8) break;
{
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
var_o = var9;
{
{ /* Inline kernel#Object#== (var_e,var_o) on <var_e:MType> */
var_other = var_o;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:MType> */
var15 = var_e == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
goto CONTINUE_label;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var18 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = NULL;
{
var20 = model__MType__is_subtype(var_e, var16, var19, var_o);
}
if (var20){
{
poset__POSet__add_edge(var_poset, var_e, var_o); /* Direct call poset#POSet#add_edge on <var_poset:POSet[MType]>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label21: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
}
BREAK_label21: (void)0;
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
val* var2 /* : Iterator[Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var5 /* : Array[nullable MType] */;
val* var_table /* var table: Array[nullable MType] */;
val* var6 /* : POSetElement[Object] */;
val* var7 /* : Collection[Object] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_sup /* var sup: MType */;
val* var11 /* : Map[MType, Int] */;
val* var13 /* : Map[MType, Int] */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var_color /* var color: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var20 /* : Bool */;
val* var21 /* : Range[Int] */;
long var22 /* : Int */;
val* var23 /* : Discrete */;
val* var24 /* : Discrete */;
val* var25 /* : Iterator[Discrete] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
long var_i /* var i: Int */;
long var28 /* : Int */;
val* var29 /* : null */;
var_mtypes = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MType, Array[nullable MType]]>*/
}
var_tables = var1;
{
var2 = poset__POSet__iterator(var_mtypes);
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[Object]>*/;
}
var_mtype = var4;
var5 = NEW_array__Array(&type_array__Arraynullable_model__MType);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[nullable MType]>*/
}
var_table = var5;
{
var6 = poset__POSet___91d_93d(var_mtypes, var_mtype);
}
{
var7 = poset__POSetElement__greaters(var6);
}
{
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Collection[Object](Collection[MType])>*/;
}
for(;;) {
{
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
}
if(!var9) break;
{
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
}
var_sup = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#type_colors (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_colors].val; /* _type_colors on <self:SeparateCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 159);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_sup) /* [] on <var11:Map[MType, Int]>*/;
}
var15 = ((struct instance_kernel__Int*)var14)->value; /* autounbox from nullable Object to Int */;
var_color = var15;
{
var16 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var16,var_color) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var19 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var20 = var16 <= var_color;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var21 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var22 = array__AbstractArrayRead__length(var_table);
}
{
var23 = BOX_kernel__Int(var22); /* autobox from Int to Discrete */
var24 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
range__Range__without_last(var21, var23, var24); /* Direct call range#Range#without_last on <var21:Range[Int]>*/
}
{
var25 = range__Range__iterator(var21);
}
for(;;) {
{
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[Discrete]>*/;
}
if(!var26) break;
{
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[Discrete]>*/;
}
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_i = var28;
var29 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var29); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
} else {
}
{
array__Array___91d_93d_61d(var_table, var_color, var_sup); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
CONTINUE_label30: (void)0;
{
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
}
BREAK_label30: (void)0;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mtype, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MType, Array[nullable MType]]>*/
}
CONTINUE_label31: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[Object]>*/;
}
}
BREAK_label31: (void)0;
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
val* var7 /* : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mtype /* var mtype: MClassType */;
val* var10 /* : HashSet[MType] */;
val* var_set /* var set: HashSet[MType] */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var14 /* : Set[MClassDef] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var18 /* : Map[MClassDef, Set[MType]] */;
val* var20 /* : Map[MClassDef, Set[MType]] */;
short int var21 /* : Bool */;
val* var22 /* : Map[MClassDef, Set[MType]] */;
val* var24 /* : Map[MClassDef, Set[MType]] */;
val* var25 /* : nullable Object */;
val* var27 /* : BucketsColorer[MType, MType] */;
val* var_colorer /* var colorer: BucketsColorer[MType, MType] */;
val* var29 /* : Map[Object, Int] */;
val* var31 /* : Map[MClassType, Array[nullable MType]] */;
val* var33 /* : HashSet[MType] */;
val* var_all_unresolved /* var all_unresolved: HashSet[MType] */;
val* var34 /* : Map[MClassDef, Set[MType]] */;
val* var36 /* : Map[MClassDef, Set[MType]] */;
val* var37 /* : Collection[nullable Object] */;
val* var38 /* : Iterator[nullable Object] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_t /* var t: Set[MType] */;
val* var42 /* : HashMap[MType, Int] */;
val* var_all_unresolved_types_colors /* var all_unresolved_types_colors: HashMap[MType, Int] */;
val* var43 /* : Iterator[Object] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_t46 /* var t: MType */;
val* var47 /* : Map[MType, Int] */;
val* var49 /* : Map[MType, Int] */;
short int var50 /* : Bool */;
val* var51 /* : Map[MType, Int] */;
val* var53 /* : Map[MType, Int] */;
val* var54 /* : nullable Object */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
var_mtypes = p0;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType);
{
hash_collection__HashMap__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[MClassType, Set[MType]]>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 475);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var1) on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var1:nullable RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = hash_collection__HashSet__iterator(var4);
}
for(;;) {
{
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[Object]>*/;
}
if(!var8) break;
{
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[Object]>*/;
}
var_mtype = var9;
var10 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
hash_collection__HashSet__init(var10); /* Direct call hash_collection#HashSet#init on <var10:HashSet[MType]>*/
}
var_set = var10;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = model__MClassType__collect_mclassdefs(var_mtype, var11);
}
{
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:Set[MClassDef]>*/;
}
for(;;) {
{
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
}
if(!var16) break;
{
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
}
var_cd = var17;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:SeparateCompiler> */
var20 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = abstract_collection__MapRead__has_key(var18, var_cd);
}
if (var21){
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:SeparateCompiler> */
var24 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val* (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var22, var_cd) /* [] on <var22:Map[MClassDef, Set[MType]]>*/;
}
{
abstract_collection__SimpleCollection__add_all(var_set, var25); /* Direct call abstract_collection#SimpleCollection#add_all on <var_set:HashSet[MType]>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
hash_collection__HashMap___91d_93d_61d(var_mtype2unresolved, var_mtype, var_set); /* Direct call hash_collection#HashMap#[]= on <var_mtype2unresolved:HashMap[MClassType, Set[MType]]>*/
}
CONTINUE_label26: (void)0;
{
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[Object]>*/;
}
}
BREAK_label26: (void)0;
var27 = NEW_coloring__BucketsColorer(&type_coloring__BucketsColorermodel__MTypemodel__MType);
{
{ /* Inline coloring#BucketsColorer#init (var27) on <var27:BucketsColorer[MType, MType]> */
RET_LABEL28:(void)0;
}
}
var_colorer = var27;
{
var29 = coloring__BucketsColorer__colorize(var_colorer, var_mtype2unresolved);
}
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors= (self,var29) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val = var29; /* _opentype_colors on <self:SeparateCompiler> */
RET_LABEL30:(void)0;
}
}
{
var31 = separate_compiler__SeparateCompiler__build_resolution_tables(self, var_mtype2unresolved);
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables= (self,var31) on <self:SeparateCompiler> */
self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val = var31; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL32:(void)0;
}
}
var33 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
hash_collection__HashSet__init(var33); /* Direct call hash_collection#HashSet#init on <var33:HashSet[MType]>*/
}
var_all_unresolved = var33;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (self) on <self:SeparateCompiler> */
var36 = self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <self:SeparateCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_collection__MapRead__values]))(var34) /* values on <var34:Map[MClassDef, Set[MType]]>*/;
}
{
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Collection__iterator]))(var37) /* iterator on <var37:Collection[nullable Object](RemovableCollection[Set[MType]])>*/;
}
for(;;) {
{
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[nullable Object]>*/;
}
if(!var39) break;
{
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[nullable Object]>*/;
}
var_t = var40;
{
abstract_collection__SimpleCollection__add_all(var_all_unresolved, var_t); /* Direct call abstract_collection#SimpleCollection#add_all on <var_all_unresolved:HashSet[MType]>*/
}
CONTINUE_label41: (void)0;
{
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[nullable Object]>*/;
}
}
BREAK_label41: (void)0;
var42 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
{
hash_collection__HashMap__init(var42); /* Direct call hash_collection#HashMap#init on <var42:HashMap[MType, Int]>*/
}
var_all_unresolved_types_colors = var42;
{
var43 = hash_collection__HashSet__iterator(var_all_unresolved);
}
for(;;) {
{
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[Object]>*/;
}
if(!var44) break;
{
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[Object]>*/;
}
var_t46 = var45;
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:SeparateCompiler> */
var49 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 160);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = abstract_collection__MapRead__has_key(var47, var_t46);
}
if (var50){
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:SeparateCompiler> */
var53 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 160);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = ((val* (*)(val*, val*))(var51->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var51, var_t46) /* [] on <var51:Map[MType, Int]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var_all_unresolved_types_colors, var_t46, var54); /* Direct call hash_collection#HashMap#[]= on <var_all_unresolved_types_colors:HashMap[MType, Int]>*/
}
} else {
var55 = 1;
{
{ /* Inline kernel#Int#unary - (var55) on <var55:Int> */
var58 = -var55;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
var59 = BOX_kernel__Int(var56); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_all_unresolved_types_colors, var_t46, var59); /* Direct call hash_collection#HashMap#[]= on <var_all_unresolved_types_colors:HashMap[MType, Int]>*/
}
}
CONTINUE_label60: (void)0;
{
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[Object]>*/;
}
}
BREAK_label60: (void)0;
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
val* var2 /* : MapIterator[Object, nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var5 /* : nullable Object */;
val* var_mtypes /* var mtypes: Set[MType] */;
val* var6 /* : Array[nullable MType] */;
val* var_table /* var table: Array[nullable MType] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var10 /* : Map[MType, Int] */;
val* var12 /* : Map[MType, Int] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var_color /* var color: Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
val* var20 /* : Range[Int] */;
long var21 /* : Int */;
val* var22 /* : Discrete */;
val* var23 /* : Discrete */;
val* var24 /* : Iterator[Discrete] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
long var_i /* var i: Int */;
long var27 /* : Int */;
val* var28 /* : null */;
var_elements = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
{
hash_collection__HashMap__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MClassType, Array[nullable MType]]>*/
}
var_tables = var1;
{
var2 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var2) /* is_ok on <var2:MapIterator[Object, nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__key]))(var2) /* key on <var2:MapIterator[Object, nullable Object]>*/;
}
var_mclasstype = var4;
{
var5 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__item]))(var2) /* item on <var2:MapIterator[Object, nullable Object]>*/;
}
var_mtypes = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MType);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[nullable MType]>*/
}
var_table = var6;
{
var7 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[MType]>*/;
}
for(;;) {
{
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
}
if(!var8) break;
{
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
var_mtype = var9;
{
{ /* Inline separate_compiler#SeparateCompiler#opentype_colors (self) on <self:SeparateCompiler> */
var12 = self->attrs[COLOR_separate_compiler__SeparateCompiler___opentype_colors].val; /* _opentype_colors on <self:SeparateCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opentype_colors");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 160);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val* (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var10, var_mtype) /* [] on <var10:Map[MType, Int]>*/;
}
var14 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var_color = var14;
{
var15 = array__AbstractArrayRead__length(var_table);
}
{
{ /* Inline kernel#Int#<= (var15,var_color) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var18 = 1; /* easy <var_color:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var19 = var15 <= var_color;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var20 = NEW_range__Range(&type_range__Rangekernel__Int);
{
var21 = array__AbstractArrayRead__length(var_table);
}
{
var22 = BOX_kernel__Int(var21); /* autobox from Int to Discrete */
var23 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
range__Range__without_last(var20, var22, var23); /* Direct call range#Range#without_last on <var20:Range[Int]>*/
}
{
var24 = range__Range__iterator(var20);
}
for(;;) {
{
var25 = ((short int (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var24) /* is_ok on <var24:Iterator[Discrete]>*/;
}
if(!var25) break;
{
var26 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__item]))(var24) /* item on <var24:Iterator[Discrete]>*/;
}
var27 = ((struct instance_kernel__Int*)var26)->value; /* autounbox from nullable Object to Int */;
var_i = var27;
var28 = NULL;
{
array__Array___91d_93d_61d(var_table, var_i, var28); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__next]))(var24) /* next on <var24:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
} else {
}
{
array__Array___91d_93d_61d(var_table, var_color, var_mtype); /* Direct call array#Array#[]= on <var_table:Array[nullable MType]>*/
}
CONTINUE_label29: (void)0;
{
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
}
BREAK_label29: (void)0;
{
hash_collection__HashMap___91d_93d_61d(var_tables, var_mclasstype, var_table); /* Direct call hash_collection#HashMap#[]= on <var_tables:HashMap[MClassType, Array[nullable MType]]>*/
}
CONTINUE_label30: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__next]))(var2) /* next on <var2:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label30: (void)0;
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
val* var7 /* : ArrayIterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var10 /* : Array[MPropDef] */;
val* var12 /* : Array[MPropDef] */;
val* var13 /* : ArrayIterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_pd /* var pd: MPropDef */;
short int var16 /* : Bool */;
int cltype;
int idtype;
short int var17 /* : Bool */;
val* var18 /* : nullable RapidTypeAnalysis */;
val* var20 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : ModelBuilder */;
val* var25 /* : ModelBuilder */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
short int var_ /* var : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var_43 /* var : Bool */;
val* var44 /* : HashSet[MMethodDef] */;
val* var46 /* : HashSet[MMethodDef] */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : AbstractRuntimeFunction */;
val* var_r /* var r: AbstractRuntimeFunction */;
val* var50 /* : AbstractRuntimeFunction */;
val* var_r2 /* var r2: AbstractRuntimeFunction */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 141);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = array__AbstractArrayRead__iterator(var4);
}
for(;;) {
{
var8 = array__ArrayIterator__is_ok(var7);
}
if(!var8) break;
{
var9 = array__ArrayIterator__item(var7);
}
var_cd = var9;
{
{ /* Inline model#MClassDef#mpropdefs (var_cd) on <var_cd:MClassDef> */
var12 = var_cd->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_cd:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 574);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = array__AbstractArrayRead__iterator(var10);
}
for(;;) {
{
var14 = array__ArrayIterator__is_ok(var13);
}
if(!var14) break;
{
var15 = array__ArrayIterator__item(var13);
}
var_pd = var15;
/* <var_pd:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_pd->type->table_size) {
var16 = 0;
} else {
var16 = var_pd->type->type_table[cltype] == idtype;
}
var17 = !var16;
if (var17){
goto CONTINUE_label;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var20 = self->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_rta = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var23) on <var23:ModelBuilder> */
var28 = var23->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var23:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_skip_dead_methods (var26) on <var26:ToolContext> */
var31 = var26->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val; /* _opt_skip_dead_methods on <var26:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_skip_dead_methods");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 38);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline opts#Option#value (var29) on <var29:OptionBool> */
var34 = var29->attrs[COLOR_opts__Option___value].val; /* _value on <var29:OptionBool> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = ((struct instance_kernel__Bool*)var32)->value; /* autounbox from nullable Object to Bool */;
var_ = var35;
if (var35){
var36 = NULL;
if (var_rta == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var36) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var36;
{
var41 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var40 = var41;
}
var42 = !var40;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
var22 = var37;
} else {
var22 = var_;
}
var_43 = var22;
if (var22){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var46 = var_rta->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 74);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = hash_collection__HashSet__has(var44, var_pd);
}
var48 = !var47;
var21 = var48;
} else {
var21 = var_43;
}
if (var21){
goto CONTINUE_label;
} else {
}
{
var49 = separate_compiler__MMethodDef__separate_runtime_function(var_pd);
}
var_r = var49;
{
((void (*)(val*, val*))(var_r->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_r, self) /* compile_to_c on <var_r:AbstractRuntimeFunction>*/;
}
{
var50 = separate_compiler__MMethodDef__virtual_runtime_function(var_pd);
}
var_r2 = var50;
{
((void (*)(val*, val*))(var_r2->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_r2, self) /* compile_to_c on <var_r2:AbstractRuntimeFunction>*/;
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var13); /* Direct call array#ArrayIterator#next on <var13:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label51: (void)0;
{
array__ArrayIterator__next(var7); /* Direct call array#ArrayIterator#next on <var7:ArrayIterator[nullable Object]>*/
}
}
BREAK_label51: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL52:(void)0;
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
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : Object */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : Map[MType, Array[nullable MType]] */;
val* var197 /* : Map[MType, Array[nullable MType]] */;
val* var198 /* : nullable Object */;
val* var199 /* : ArrayIterator[nullable Object] */;
short int var200 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_stype /* var stype: nullable MType */;
val* var202 /* : null */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : Map[MType, Int] */;
val* var216 /* : Map[MType, Int] */;
val* var217 /* : nullable Object */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
val* var228 /* : Array[Object] */;
long var229 /* : Int */;
val* var230 /* : NativeArray[Object] */;
val* var231 /* : String */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : FlatString */;
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
var_mtype = p0;
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 554);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 555);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var4) on <var4:nullable RapidTypeAnalysis> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
show_backtrace(1);
}
var9 = var4->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var4:nullable RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 55);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 556);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (var11) on <var11:nullable RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
show_backtrace(1);
}
var16 = var11->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <var11:nullable RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", "src/rapid_type_analysis.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 158);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 159);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 594);
show_backtrace(1);
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var139 = self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 791);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 790);
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
var179 = array__AbstractArrayRead__length(var178);
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = ",";
var183 = 1;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 2;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
var188 = BOX_kernel__Int(var179); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var188;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var181;
{
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
}
{
var189 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var189); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "{";
var193 = 1;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var197 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 790);
show_backtrace(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
var198 = ((val* (*)(val*, val*))(var195->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var195, var_mtype) /* [] on <var195:Map[MType, Array[nullable MType]]>*/;
}
{
var199 = array__AbstractArrayRead__iterator(var198);
}
for(;;) {
{
var200 = array__ArrayIterator__is_ok(var199);
}
if(!var200) break;
{
var201 = array__ArrayIterator__item(var199);
}
var_stype = var201;
var202 = NULL;
if (var_stype == NULL) {
var203 = 1; /* is null */
} else {
var203 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_stype,var202) on <var_stype:nullable MType> */
var_other = var202;
{
{ /* Inline kernel#Object#is_same_instance (var_stype,var_other) on <var_stype:nullable MType(MType)> */
var208 = var_stype == var_other;
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
var203 = var204;
}
if (var203){
if (varonce209) {
var210 = varonce209;
} else {
var211 = "-1, /* empty */";
var212 = 15;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var210); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var216 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 158);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = ((val* (*)(val*, val*))(var214->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var214, var_stype) /* [] on <var214:Map[MType, Int]>*/;
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = ", /* ";
var221 = 5;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = " */";
var226 = 3;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
var228 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var228 = array_instance Array[Object] */
var229 = 4;
var230 = NEW_array__NativeArray(var229, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var230)->values[0] = (val*) var217;
((struct instance_array__NativeArray*)var230)->values[1] = (val*) var219;
((struct instance_array__NativeArray*)var230)->values[2] = (val*) var_stype;
((struct instance_array__NativeArray*)var230)->values[3] = (val*) var224;
{
((void (*)(val*, val*, long))(var228->class->vft[COLOR_array__Array__with_native]))(var228, var230, var229) /* with_native on <var228:Array[Object]>*/;
}
}
{
var231 = ((val* (*)(val*))(var228->class->vft[COLOR_string__Object__to_s]))(var228) /* to_s on <var228:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var231); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var199); /* Direct call array#ArrayIterator#next on <var199:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
if (varonce232) {
var233 = varonce232;
} else {
var234 = "},";
var235 = 2;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (varonce237) {
var238 = varonce237;
} else {
var239 = "0, {}, /*DEAD TYPE*/";
var240 = 20;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "};";
var245 = 2;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var243); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
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
val* var56 /* : ArrayIterator[nullable Object] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
val* var59 /* : null */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : MModule */;
val* var73 /* : MModule */;
short int var74 /* : Bool */;
val* var75 /* : MType */;
val* var_tv /* var tv: MType */;
val* var76 /* : Map[MType, Int] */;
val* var78 /* : Map[MType, Int] */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
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
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : Array[Object] */;
long var131 /* : Int */;
val* var132 /* : NativeArray[Object] */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 626);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 791);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = ((val* (*)(val*, val*))(var52->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var52, var_mclass_type) /* [] on <var52:Map[MClassType, Array[nullable MType]]>*/;
}
{
var56 = array__AbstractArrayRead__iterator(var55);
}
for(;;) {
{
var57 = array__ArrayIterator__is_ok(var56);
}
if(!var57) break;
{
var58 = array__ArrayIterator__item(var56);
}
var_t = var58;
var59 = NULL;
if (var_t == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var59) on <var_t:nullable MType> */
var_other = var59;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var65 = var_t == var_other;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
if (varonce66) {
var67 = varonce66;
} else {
var68 = "NULL, /* empty */";
var69 = 17;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var73 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var74 = 1;
{
var75 = ((val* (*)(val*, val*, val*, val*, short int))(var_t->class->vft[COLOR_model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var71, var74) /* resolve_for on <var_t:nullable MType(MType)>*/;
}
var_tv = var75;
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var78 = self->attrs[COLOR_separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 158);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = abstract_collection__MapRead__has_key(var76, var_tv);
}
if (var79){
if (varonce80) {
var81 = varonce80;
} else {
var82 = "type_";
var83 = 5;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
var85 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 2;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var85;
{
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(var_v, var89); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = "&type_";
var93 = 6;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
{
var95 = ((val* (*)(val*))(var_tv->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_tv) /* c_name on <var_tv:MType>*/;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = ", /* ";
var99 = 5;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = ": ";
var104 = 2;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = " */";
var109 = 3;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 7;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var91;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var95;
((struct instance_array__NativeArray*)var113)->values[2] = (val*) var97;
((struct instance_array__NativeArray*)var113)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var113)->values[4] = (val*) var102;
((struct instance_array__NativeArray*)var113)->values[5] = (val*) var_tv;
((struct instance_array__NativeArray*)var113)->values[6] = (val*) var107;
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
var117 = "NULL, /* empty (";
var118 = 16;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ": ";
var123 = 2;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = " not a live type) */";
var128 = 20;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var130 = array_instance Array[Object] */
var131 = 5;
var132 = NEW_array__NativeArray(var131, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var132)->values[0] = (val*) var116;
((struct instance_array__NativeArray*)var132)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var132)->values[2] = (val*) var121;
((struct instance_array__NativeArray*)var132)->values[3] = (val*) var_tv;
((struct instance_array__NativeArray*)var132)->values[4] = (val*) var126;
{
((void (*)(val*, val*, long))(var130->class->vft[COLOR_array__Array__with_native]))(var130, var132, var131) /* with_native on <var130:Array[Object]>*/;
}
}
{
var133 = ((val* (*)(val*))(var130->class->vft[COLOR_string__Object__to_s]))(var130) /* to_s on <var130:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var133); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var56); /* Direct call array#ArrayIterator#next on <var56:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
if (varonce134) {
var135 = varonce134;
} else {
var136 = "}";
var137 = 1;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "};";
var142 = 2;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0) {
separate_compiler__SeparateCompiler__compile_type_resolution_table(self, p0); /* Direct call separate_compiler#SeparateCompiler#compile_type_resolution_table on <self:Object(SeparateCompiler)>*/
RET_LABEL:;
}
