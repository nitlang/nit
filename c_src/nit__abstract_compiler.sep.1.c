#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* nit__abstract_compiler___ToolContext___opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_dir for (self: ToolContext): OptionString */
val* nit__abstract_compiler___ToolContext___opt_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 31);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_cc for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_cc(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 33);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_main for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_main(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 35);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_make_flags for (self: ToolContext): OptionString */
val* nit__abstract_compiler___ToolContext___opt_make_flags(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 37);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_max_c_lines for (self: ToolContext): OptionInt */
val* nit__abstract_compiler___ToolContext___opt_max_c_lines(val* self) {
val* var /* : OptionInt */;
val* var1 /* : OptionInt */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 39);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_group_c_files for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_group_c_files(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 41);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_compile_dir for (self: ToolContext): OptionString */
val* nit__abstract_compiler___ToolContext___opt_compile_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 43);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_hardening for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_hardening(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 45);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_check_covariance(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 47);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_attr_isset for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_check_attr_isset(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 49);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_check_assert(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 51);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_check_autocast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 53);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_null for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_check_null(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 55);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_all for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_check_all(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_typing_test_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_invocation_metrics for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_invocation_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_isset_checks_metrics for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_isset_checks_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_stacktrace for (self: ToolContext): OptionString */
val* nit__abstract_compiler___ToolContext___opt_stacktrace(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_gcc_directive for (self: ToolContext): OptionArray */
val* nit__abstract_compiler___ToolContext___opt_no_gcc_directive(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 67);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_release for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_release(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 69);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#init for (self: ToolContext) */
void nit__abstract_compiler___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionString */;
val* var5 /* : OptionString */;
val* var6 /* : OptionString */;
val* var8 /* : OptionString */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : OptionString */;
val* var17 /* : OptionString */;
val* var18 /* : OptionString */;
val* var20 /* : OptionString */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : Array[Option] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Option] */;
val* var27 /* : OptionContext */;
val* var29 /* : OptionContext */;
val* var30 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var39 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var45 /* : OptionBool */;
val* var47 /* : OptionBool */;
val* var48 /* : Array[Option] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Option] */;
val* var51 /* : OptionContext */;
val* var53 /* : OptionContext */;
val* var54 /* : OptionBool */;
val* var56 /* : OptionBool */;
val* var57 /* : OptionBool */;
val* var59 /* : OptionBool */;
val* var60 /* : OptionBool */;
val* var62 /* : OptionBool */;
val* var63 /* : Array[Option] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Option] */;
val* var66 /* : OptionContext */;
val* var68 /* : OptionContext */;
val* var69 /* : OptionString */;
val* var71 /* : OptionString */;
val* var72 /* : Array[Option] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Option] */;
val* var75 /* : OptionContext */;
val* var77 /* : OptionContext */;
val* var78 /* : OptionArray */;
val* var80 /* : OptionArray */;
val* var81 /* : Array[Option] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Option] */;
val* var84 /* : OptionContext */;
val* var86 /* : OptionContext */;
val* var87 /* : OptionBool */;
val* var89 /* : OptionBool */;
val* var90 /* : Array[Option] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Option] */;
val* var93 /* : OptionContext */;
val* var95 /* : OptionContext */;
val* var96 /* : OptionInt */;
val* var98 /* : OptionInt */;
val* var99 /* : OptionBool */;
val* var101 /* : OptionBool */;
val* var102 /* : Array[Option] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Option] */;
val* var105 /* : OptionBool */;
val* var107 /* : OptionBool */;
short int var108 /* : Bool */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 29);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 31);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 33);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 35);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 37);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 43);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 45);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var24 = array_instance Array[Option] */
var25 = 7;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var6;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var9;
((struct instance_standard__NativeArray*)var26)->values[3] = (val*) var12;
((struct instance_standard__NativeArray*)var26)->values[4] = (val*) var15;
((struct instance_standard__NativeArray*)var26)->values[5] = (val*) var18;
((struct instance_standard__NativeArray*)var26)->values[6] = (val*) var21;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var, var24); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 47);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 49);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 51);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 53);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 55);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 57);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var48 = array_instance Array[Option] */
var49 = 6;
var50 = NEW_standard__NativeArray(var49, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var50)->values[0] = (val*) var30;
((struct instance_standard__NativeArray*)var50)->values[1] = (val*) var33;
((struct instance_standard__NativeArray*)var50)->values[2] = (val*) var36;
((struct instance_standard__NativeArray*)var50)->values[3] = (val*) var39;
((struct instance_standard__NativeArray*)var50)->values[4] = (val*) var42;
((struct instance_standard__NativeArray*)var50)->values[5] = (val*) var45;
{
((void (*)(val* self, val* p0, long p1))(var48->class->vft[COLOR_standard__array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var27, var48); /* Direct call opts#OptionContext#add_option on <var27:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var53 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (self) on <self:ToolContext> */
var56 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 59);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (self) on <self:ToolContext> */
var59 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (self) on <self:ToolContext> */
var62 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var63 = array_instance Array[Option] */
var64 = 3;
var65 = NEW_standard__NativeArray(var64, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_standard__NativeArray*)var65)->values[1] = (val*) var57;
((struct instance_standard__NativeArray*)var65)->values[2] = (val*) var60;
{
((void (*)(val* self, val* p0, long p1))(var63->class->vft[COLOR_standard__array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var51, var63); /* Direct call opts#OptionContext#add_option on <var51:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var71 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var72 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var72 = array_instance Array[Option] */
var73 = 1;
var74 = NEW_standard__NativeArray(var73, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var74)->values[0] = (val*) var69;
{
((void (*)(val* self, val* p0, long p1))(var72->class->vft[COLOR_standard__array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var66, var72); /* Direct call opts#OptionContext#add_option on <var66:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var77 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (self) on <self:ToolContext> */
var80 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 67);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var81 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var81 = array_instance Array[Option] */
var82 = 1;
var83 = NEW_standard__NativeArray(var82, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var83)->values[0] = (val*) var78;
{
((void (*)(val* self, val* p0, long p1))(var81->class->vft[COLOR_standard__array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var75, var81); /* Direct call opts#OptionContext#add_option on <var75:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var86 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (self) on <self:ToolContext> */
var89 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 69);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var90 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var90 = array_instance Array[Option] */
var91 = 1;
var92 = NEW_standard__NativeArray(var91, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var92)->values[0] = (val*) var87;
{
((void (*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_standard__array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var84, var90); /* Direct call opts#OptionContext#add_option on <var84:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var95 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (self) on <self:ToolContext> */
var98 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 39);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (self) on <self:ToolContext> */
var101 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 41);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
var102 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var102 = array_instance Array[Option] */
var103 = 2;
var104 = NEW_standard__NativeArray(var103, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var104)->values[0] = (val*) var96;
((struct instance_standard__NativeArray*)var104)->values[1] = (val*) var99;
{
((void (*)(val* self, val* p0, long p1))(var102->class->vft[COLOR_standard__array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var93, var102); /* Direct call opts#OptionContext#add_option on <var93:OptionContext>*/
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:ToolContext> */
var107 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 35);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
var108 = 1;
{
{ /* Inline opts#Option#hidden= (var105,var108) on <var105:OptionBool> */
var105->attrs[COLOR_opts__Option___hidden].s = var108; /* _hidden on <var105:OptionBool> */
RET_LABEL109:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit__abstract_compiler___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionString */;
val* var2 /* : OptionString */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
val* var_st /* var st: nullable String */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : OptionString */;
val* var43 /* : OptionString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
long var65 /* : Int */;
short int var67 /* : Bool */;
val* var68 /* : OptionString */;
val* var70 /* : OptionString */;
val* var71 /* : nullable Object */;
val* var73 /* : nullable Object */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
val* var81 /* : OptionString */;
val* var83 /* : OptionString */;
val* var84 /* : nullable Object */;
val* var86 /* : nullable Object */;
val* var87 /* : null */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
long var98 /* : Int */;
val* var100 /* : OptionBool */;
val* var102 /* : OptionBool */;
val* var103 /* : nullable Object */;
val* var105 /* : nullable Object */;
short int var106 /* : Bool */;
val* var107 /* : OptionBool */;
val* var109 /* : OptionBool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const struct type* type_struct115;
const char* var_class_name116;
val* var117 /* : nullable Object */;
val* var118 /* : OptionBool */;
val* var120 /* : OptionBool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const struct type* type_struct126;
const char* var_class_name127;
val* var128 /* : nullable Object */;
val* var129 /* : OptionBool */;
val* var131 /* : OptionBool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const struct type* type_struct137;
const char* var_class_name138;
val* var139 /* : nullable Object */;
val* var140 /* : OptionBool */;
val* var142 /* : OptionBool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
const struct type* type_struct148;
const char* var_class_name149;
val* var150 /* : nullable Object */;
val* var151 /* : OptionBool */;
val* var153 /* : OptionBool */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const struct type* type_struct159;
const char* var_class_name160;
val* var161 /* : nullable Object */;
var_args = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler___ToolContext___process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionString> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionString> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_st = var3;
if (varonce) {
var8 = varonce;
} else {
var9 = "none";
var10 = 4;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (var_st == NULL) {
var12 = 0; /* <var8:String> cannot be null */
} else {
var13 = ((short int (*)(val* self, val* p0))(var_st->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st, var8) /* == on <var_st:nullable String>*/;
var12 = var13;
}
var_ = var12;
if (var12){
var7 = var_;
} else {
if (varonce14) {
var15 = varonce14;
} else {
var16 = "libunwind";
var17 = 9;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (var_st == NULL) {
var19 = 0; /* <var15:String> cannot be null */
} else {
var20 = ((short int (*)(val* self, val* p0))(var_st->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st, var15) /* == on <var_st:nullable String>*/;
var19 = var20;
}
var7 = var19;
}
var_21 = var7;
if (var7){
var6 = var_21;
} else {
if (varonce22) {
var23 = varonce22;
} else {
var24 = "nitstack";
var25 = 8;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (var_st == NULL) {
var27 = 0; /* <var23:String> cannot be null */
} else {
var28 = ((short int (*)(val* self, val* p0))(var_st->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st, var23) /* == on <var_st:nullable String>*/;
var27 = var28;
}
var6 = var27;
}
if (var6){
} else {
if (varonce30) {
var31 = varonce30;
} else {
var32 = "auto";
var33 = 4;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (var_st == NULL) {
var35 = 0; /* <var31:String> cannot be null */
} else {
var36 = ((short int (*)(val* self, val* p0))(var_st->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st, var31) /* == on <var_st:nullable String>*/;
var35 = var36;
}
var_37 = var35;
if (var35){
var29 = var_37;
} else {
var38 = NULL;
if (var_st == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
var40 = ((short int (*)(val* self, val* p0))(var_st->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_st, var38) /* == on <var_st:nullable String>*/;
var39 = var40;
}
var29 = var39;
}
if (var29){
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "nitstack";
var47 = 8;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
{ /* Inline opts#Option#value= (var41,var45) on <var41:OptionString> */
/* Covariant cast for argument 0 (value) <var45:String> isa VALUE */
/* <var45:String> isa VALUE */
type_struct = var41->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var45->type->table_size) {
var50 = 0;
} else {
var50 = var45->type->type_table[cltype] == idtype;
}
if (unlikely(!var50)) {
var_class_name = var45 == NULL ? "null" : var45->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var41->attrs[COLOR_opts__Option___value].val = var45; /* _value on <var41:OptionString> */
RET_LABEL49:(void)0;
}
}
} else {
if (varonce51) {
var52 = varonce51;
} else {
var53 = "Error: unknown value `";
var54 = 22;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "` for --stacktrace. Use `none`, `libunwind`, `nitstack` or `auto`.";
var59 = 66;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_standard__NativeArray(var62, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var63)->values[1] = (val*) var_st;
((struct instance_standard__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
standard__file___Object___print(self, var64); /* Direct call file#Object#print on <self:ToolContext>*/
}
var65 = 1;
{
{ /* Inline kernel#Object#exit (self,var65) on <self:ToolContext> */
exit(var65);
RET_LABEL66:(void)0;
}
}
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var70 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 29);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline opts#Option#value (var68) on <var68:OptionString> */
var73 = var68->attrs[COLOR_opts__Option___value].val; /* _value on <var68:OptionString> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
var74 = NULL;
if (var71 == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var71,var74) on <var71:nullable Object(nullable String)> */
var_other = var74;
{
var78 = ((short int (*)(val* self, val* p0))(var71->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var71, var_other) /* == on <var71:nullable String(String)>*/;
}
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
var_80 = var75;
if (var75){
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var83 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 31);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline opts#Option#value (var81) on <var81:OptionString> */
var86 = var81->attrs[COLOR_opts__Option___value].val; /* _value on <var81:OptionString> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var87 = NULL;
if (var84 == NULL) {
var88 = 0; /* is null */
} else {
var88 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var84,var87) on <var84:nullable Object(nullable String)> */
var_other = var87;
{
var91 = ((short int (*)(val* self, val* p0))(var84->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var84, var_other) /* == on <var84:nullable String(String)>*/;
}
var92 = !var91;
var89 = var92;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
var67 = var88;
} else {
var67 = var_80;
}
if (var67){
if (varonce93) {
var94 = varonce93;
} else {
var95 = "Error: cannot use both --dir and --output";
var96 = 41;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
standard__file___Object___print(self, var94); /* Direct call file#Object#print on <self:ToolContext>*/
}
var98 = 1;
{
{ /* Inline kernel#Object#exit (self,var98) on <self:ToolContext> */
exit(var98);
RET_LABEL99:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var102 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 57);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline opts#Option#value (var100) on <var100:OptionBool> */
var105 = var100->attrs[COLOR_opts__Option___value].val; /* _value on <var100:OptionBool> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var106 = ((struct instance_standard__Bool*)var103)->value; /* autounbox from nullable Object to Bool */;
if (var106){
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var109 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 47);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
var110 = 1;
{
{ /* Inline opts#Option#value= (var107,var110) on <var107:OptionBool> */
/* Covariant cast for argument 0 (value) <var110:Bool> isa VALUE */
/* <var110:Bool> isa VALUE */
type_struct115 = var107->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype113 = type_struct115->color;
idtype114 = type_struct115->id;
if(cltype113 >= (&type_standard__Bool)->table_size) {
var112 = 0;
} else {
var112 = (&type_standard__Bool)->type_table[cltype113] == idtype114;
}
if (unlikely(!var112)) {
var_class_name116 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var117 = BOX_standard__Bool(var110); /* autobox from Bool to nullable Object */
var107->attrs[COLOR_opts__Option___value].val = var117; /* _value on <var107:OptionBool> */
RET_LABEL111:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var120 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 49);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
var121 = 1;
{
{ /* Inline opts#Option#value= (var118,var121) on <var118:OptionBool> */
/* Covariant cast for argument 0 (value) <var121:Bool> isa VALUE */
/* <var121:Bool> isa VALUE */
type_struct126 = var118->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype124 = type_struct126->color;
idtype125 = type_struct126->id;
if(cltype124 >= (&type_standard__Bool)->table_size) {
var123 = 0;
} else {
var123 = (&type_standard__Bool)->type_table[cltype124] == idtype125;
}
if (unlikely(!var123)) {
var_class_name127 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var128 = BOX_standard__Bool(var121); /* autobox from Bool to nullable Object */
var118->attrs[COLOR_opts__Option___value].val = var128; /* _value on <var118:OptionBool> */
RET_LABEL122:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var131 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 51);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
var132 = 1;
{
{ /* Inline opts#Option#value= (var129,var132) on <var129:OptionBool> */
/* Covariant cast for argument 0 (value) <var132:Bool> isa VALUE */
/* <var132:Bool> isa VALUE */
type_struct137 = var129->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype135 = type_struct137->color;
idtype136 = type_struct137->id;
if(cltype135 >= (&type_standard__Bool)->table_size) {
var134 = 0;
} else {
var134 = (&type_standard__Bool)->type_table[cltype135] == idtype136;
}
if (unlikely(!var134)) {
var_class_name138 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name138);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var139 = BOX_standard__Bool(var132); /* autobox from Bool to nullable Object */
var129->attrs[COLOR_opts__Option___value].val = var139; /* _value on <var129:OptionBool> */
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var142 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 53);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
var143 = 1;
{
{ /* Inline opts#Option#value= (var140,var143) on <var140:OptionBool> */
/* Covariant cast for argument 0 (value) <var143:Bool> isa VALUE */
/* <var143:Bool> isa VALUE */
type_struct148 = var140->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype146 = type_struct148->color;
idtype147 = type_struct148->id;
if(cltype146 >= (&type_standard__Bool)->table_size) {
var145 = 0;
} else {
var145 = (&type_standard__Bool)->type_table[cltype146] == idtype147;
}
if (unlikely(!var145)) {
var_class_name149 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var150 = BOX_standard__Bool(var143); /* autobox from Bool to nullable Object */
var140->attrs[COLOR_opts__Option___value].val = var150; /* _value on <var140:OptionBool> */
RET_LABEL144:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var153 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 55);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var154 = 1;
{
{ /* Inline opts#Option#value= (var151,var154) on <var151:OptionBool> */
/* Covariant cast for argument 0 (value) <var154:Bool> isa VALUE */
/* <var154:Bool> isa VALUE */
type_struct159 = var151->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype157 = type_struct159->color;
idtype158 = type_struct159->id;
if(cltype157 >= (&type_standard__Bool)->table_size) {
var156 = 0;
} else {
var156 = (&type_standard__Bool)->type_table[cltype157] == idtype158;
}
if (unlikely(!var156)) {
var_class_name160 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name160);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var161 = BOX_standard__Bool(var154); /* autobox from Bool to nullable Object */
var151->attrs[COLOR_opts__Option___value].val = var161; /* _value on <var151:OptionBool> */
RET_LABEL155:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#compile_dir for (self: ModelBuilder): String */
val* nit__abstract_compiler___ModelBuilder___compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ModelBuilder___compile_dir].val; /* _compile_dir on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 117);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ModelBuilder#compile_dir= for (self: ModelBuilder, String) */
void nit__abstract_compiler___ModelBuilder___compile_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__ModelBuilder___compile_dir].val = p0; /* _compile_dir on <self:ModelBuilder> */
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: ModelBuilder, AbstractCompiler) */
void nit__abstract_compiler___ModelBuilder___write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : Platform */;
val* var2 /* : Platform */;
val* var_platform /* var platform: Platform */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : Toolchain */;
val* var_toolchain /* var toolchain: Toolchain */;
val* var7 /* : String */;
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 487);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_platform = var;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__abstract_compiler___Platform___toolchain(var_platform, var3);
}
var_toolchain = var6;
{
var7 = nit___nit__Toolchain___compile_dir(var_toolchain);
}
{
{ /* Inline abstract_compiler#ModelBuilder#compile_dir= (self,var7) on <self:ModelBuilder> */
self->attrs[COLOR_nit__abstract_compiler__ModelBuilder___compile_dir].val = var7; /* _compile_dir on <self:ModelBuilder> */
RET_LABEL8:(void)0;
}
}
{
nit___nit__MakefileToolchain___Toolchain__write_and_make(var_toolchain, var_compiler); /* Direct call abstract_compiler#MakefileToolchain#write_and_make on <var_toolchain:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler#Platform#toolchain for (self: Platform, ToolContext): Toolchain */
val* nit__abstract_compiler___Platform___toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var1 /* : MakefileToolchain */;
var_toolcontext = p0;
var1 = NEW_nit__MakefileToolchain(&type_nit__MakefileToolchain);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_nit__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext) /* toolcontext= on <var1:MakefileToolchain>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:MakefileToolchain>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext for (self: Toolchain): ToolContext */
val* nit___nit__Toolchain___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext= for (self: Toolchain, ToolContext) */
void nit___nit__Toolchain___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#compile_dir for (self: Toolchain): String */
val* nit___nit__Toolchain___compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_compile_dir /* var compile_dir: nullable String */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:Toolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 43);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts#Option#value (var4) on <var4:OptionString> */
var9 = var4->attrs[COLOR_opts__Option___value].val; /* _value on <var4:OptionString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_compile_dir = var7;
var10 = NULL;
if (var_compile_dir == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int (*)(val* self, val* p0))(var_compile_dir->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_compile_dir, var10) /* == on <var_compile_dir:nullable String>*/;
var11 = var12;
}
if (var11){
if (varonce) {
var13 = varonce;
} else {
var14 = ".nit_compile";
var15 = 12;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var_compile_dir = var13;
} else {
}
var = var_compile_dir;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#init for (self: Toolchain) */
void nit___nit__Toolchain___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__Toolchain___standard__kernel__Object__init]))(self) /* init on <self:Toolchain>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: MakefileToolchain, AbstractCompiler) */
void nit___nit__MakefileToolchain___Toolchain__write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : String */;
val* var_compile_dir /* var compile_dir: String */;
long var1 /* : Int */;
long var3 /* : Int for extern */;
long var_time0 /* var time0: Int */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
long var11 /* : Int */;
val* var12 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
long var13 /* : Int */;
long var15 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var27 /* : Int */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : Object */;
val* var37 /* : String */;
long var38 /* : Int */;
val* var39 /* : ToolContext */;
val* var41 /* : ToolContext */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var45 /* : nullable Object */;
val* var47 /* : nullable Object */;
short int var48 /* : Bool */;
val* var49 /* : ToolContext */;
val* var51 /* : ToolContext */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
long var57 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int for extern */;
val* var61 /* : ToolContext */;
val* var63 /* : ToolContext */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : Object */;
val* var85 /* : String */;
long var86 /* : Int */;
var_compiler = p0;
{
var = nit___nit__Toolchain___compile_dir(self);
}
var_compile_dir = var;
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var3 = kernel_Any_Any_get_time_0(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var6 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "*** WRITING C ***";
var9 = 17;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = 1;
{
nit___nit__ToolContext___info(var4, var7, var11); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
{
standard__file___String___mkdir(var_compile_dir); /* Direct call file#String#mkdir on <var_compile_dir:String>*/
}
var12 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[String]>*/
}
var_cfiles = var12;
{
nit___nit__MakefileToolchain___write_files(self, var_compiler, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_files on <self:MakefileToolchain>*/
}
{
nit___nit__MakefileToolchain___write_makefile(self, var_compiler, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_makefile on <self:MakefileToolchain>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var15 = kernel_Any_Any_get_time_0(self);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_time1 = var13;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var18 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "*** END WRITING C: ";
var22 = 19;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var26 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var27 = var_time1 - var_time0;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " ***";
var31 = 4;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_standard__NativeArray(var34, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var35)->values[0] = (val*) var20;
var36 = BOX_standard__Int(var24); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var35)->values[1] = (val*) var36;
((struct instance_standard__NativeArray*)var35)->values[2] = (val*) var29;
{
((void (*)(val* self, val* p0, long p1))(var33->class->vft[COLOR_standard__array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var33->class->vft[COLOR_standard__string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
}
var38 = 2;
{
nit___nit__ToolContext___info(var16, var37, var38); /* Direct call toolcontext#ToolContext#info on <var16:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var41 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (var39) on <var39:ToolContext> */
var44 = var39->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <var39:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 33);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline opts#Option#value (var42) on <var42:OptionBool> */
var47 = var42->attrs[COLOR_opts__Option___value].val; /* _value on <var42:OptionBool> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = ((struct instance_standard__Bool*)var45)->value; /* autounbox from nullable Object to Bool */;
if (var48){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var51 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "*** COMPILING C ***";
var55 = 19;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = 1;
{
nit___nit__ToolContext___info(var49, var53, var57); /* Direct call toolcontext#ToolContext#info on <var49:ToolContext>*/
}
{
nit___nit__MakefileToolchain___compile_c_code(self, var_compiler, var_compile_dir); /* Direct call abstract_compiler#MakefileToolchain#compile_c_code on <self:MakefileToolchain>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var60 = kernel_Any_Any_get_time_0(self);
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_time1 = var58;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var63 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "*** END COMPILING C: ";
var67 = 21;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var71 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var75 = var_time1 - var_time0;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = " ***";
var79 = 4;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 3;
var83 = NEW_standard__NativeArray(var82, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var83)->values[0] = (val*) var65;
var84 = BOX_standard__Int(var69); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var83)->values[1] = (val*) var84;
((struct instance_standard__NativeArray*)var83)->values[2] = (val*) var77;
{
((void (*)(val* self, val* p0, long p1))(var81->class->vft[COLOR_standard__array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var85 = ((val* (*)(val* self))(var81->class->vft[COLOR_standard__string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
var86 = 2;
{
nit___nit__ToolContext___info(var61, var85, var86); /* Direct call toolcontext#ToolContext#info on <var61:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: MakefileToolchain, AbstractCompiler, String, Array[String]) */
void nit___nit__MakefileToolchain___write_files(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : Platform */;
val* var2 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var3 /* : Bool */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionString */;
val* var9 /* : OptionString */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var_cc_opt_with_libgc /* var cc_opt_with_libgc: String */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : ExternCFile */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
short int var43 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : Array[String] */;
val* var49 /* : Array[String] */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[ExternFile] */;
val* var57 /* : Array[ExternFile] */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
val* var61 /* : String */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
val* var_clib /* var clib: String */;
val* var70 /* : Array[String] */;
val* var72 /* : Array[String] */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
val* var82 /* : Array[String] */;
val* var84 /* : Array[String] */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
val* var94 /* : MModule */;
val* var96 /* : MModule */;
val* var97 /* : POSetElement[MModule] */;
val* var99 /* : POSetElement[MModule] */;
val* var100 /* : Collection[nullable Object] */;
val* var_101 /* var : Collection[MModule] */;
val* var102 /* : Iterator[nullable Object] */;
val* var_103 /* var : Iterator[MModule] */;
short int var104 /* : Bool */;
val* var105 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var107 /* : Array[String] */;
val* var109 /* : Array[String] */;
val* var_110 /* var : Array[String] */;
val* var111 /* : ArrayIterator[nullable Object] */;
val* var_112 /* var : ArrayIterator[String] */;
short int var113 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_src /* var src: String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : String */;
val* var_basename /* var basename: String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
val* var_dst /* var dst: String */;
val* var132 /* : CodeWriter */;
val* var134 /* : CodeWriter */;
val* var135 /* : CodeFile */;
val* var137 /* : CodeFile */;
val* var138 /* : String */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
val* var146 /* : String */;
val* var_hfilename /* var hfilename: String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
val* var152 /* : Array[Object] */;
long var153 /* : Int */;
val* var154 /* : NativeArray[Object] */;
val* var155 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var156 /* : OFStream */;
val* var_h /* var h: OFStream */;
val* var157 /* : CodeWriter */;
val* var159 /* : CodeWriter */;
val* var160 /* : List[String] */;
val* var162 /* : List[String] */;
val* var_163 /* var : List[String] */;
val* var164 /* : ListIterator[nullable Object] */;
val* var_165 /* var : ListIterator[String] */;
short int var166 /* : Bool */;
val* var167 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var175 /* : CodeWriter */;
val* var177 /* : CodeWriter */;
val* var178 /* : List[String] */;
val* var180 /* : List[String] */;
val* var_181 /* var : List[String] */;
val* var182 /* : ListIterator[nullable Object] */;
val* var_183 /* var : ListIterator[String] */;
short int var184 /* : Bool */;
val* var185 /* : nullable Object */;
val* var_l186 /* var l: String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
val* var194 /* : ToolContext */;
val* var196 /* : ToolContext */;
val* var197 /* : OptionInt */;
val* var199 /* : OptionInt */;
val* var200 /* : nullable Object */;
val* var202 /* : nullable Object */;
long var203 /* : Int */;
long var_max_c_lines /* var max_c_lines: Int */;
val* var204 /* : List[CodeFile] */;
val* var206 /* : List[CodeFile] */;
val* var_207 /* var : List[CodeFile] */;
val* var208 /* : ListIterator[nullable Object] */;
val* var_209 /* var : ListIterator[CodeFile] */;
short int var210 /* : Bool */;
val* var211 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var212 /* : Int */;
long var_i /* var i: Int */;
long var213 /* : Int */;
long var_count /* var count: Int */;
val* var214 /* : null */;
val* var_file /* var file: nullable OFStream */;
val* var215 /* : Array[CodeWriter] */;
val* var217 /* : Array[CodeWriter] */;
val* var_218 /* var : Array[CodeWriter] */;
val* var219 /* : ArrayIterator[nullable Object] */;
val* var_220 /* var : ArrayIterator[CodeWriter] */;
short int var221 /* : Bool */;
val* var222 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var223 /* : CodeWriter */;
val* var225 /* : CodeWriter */;
short int var226 /* : Bool */;
val* var_other228 /* var other: nullable Object */;
short int var229 /* : Bool */;
short int var231 /* : Bool */;
val* var233 /* : List[String] */;
val* var235 /* : List[String] */;
long var236 /* : Int */;
val* var237 /* : List[String] */;
val* var239 /* : List[String] */;
long var240 /* : Int */;
long var241 /* : Int */;
short int var243 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var244 /* : Int */;
long var_total_lines /* var total_lines: Int */;
long var245 /* : Int */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
long var249 /* : Int */;
short int var251 /* : Bool */;
int cltype252;
int idtype253;
const char* var_class_name254;
long var255 /* : Int */;
short int var256 /* : Bool */;
val* var257 /* : null */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var_264 /* var : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
short int var268 /* : Bool */;
int cltype269;
int idtype270;
const char* var_class_name271;
short int var272 /* : Bool */;
short int var_273 /* var : Bool */;
long var274 /* : Int */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
int cltype278;
int idtype279;
const char* var_class_name280;
short int var281 /* : Bool */;
long var282 /* : Int */;
long var283 /* : Int */;
short int var285 /* : Bool */;
int cltype286;
int idtype287;
const char* var_class_name288;
long var289 /* : Int */;
val* var290 /* : null */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
val* var296 /* : String */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : FlatString */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : FlatString */;
val* var309 /* : Array[Object] */;
long var310 /* : Int */;
val* var311 /* : NativeArray[Object] */;
val* var312 /* : Object */;
val* var313 /* : String */;
val* var_cfilename /* var cfilename: String */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : Array[Object] */;
long var320 /* : Int */;
val* var321 /* : NativeArray[Object] */;
val* var322 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var323 /* : ToolContext */;
val* var325 /* : ToolContext */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
val* var331 /* : Array[Object] */;
long var332 /* : Int */;
val* var333 /* : NativeArray[Object] */;
val* var334 /* : String */;
long var335 /* : Int */;
val* var336 /* : OFStream */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
long var340 /* : Int */;
val* var341 /* : FlatString */;
val* var342 /* : String */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : FlatString */;
val* var350 /* : Array[Object] */;
long var351 /* : Int */;
val* var352 /* : NativeArray[Object] */;
val* var353 /* : String */;
val* var354 /* : List[String] */;
val* var356 /* : List[String] */;
val* var_357 /* var : List[String] */;
val* var358 /* : ListIterator[nullable Object] */;
val* var_359 /* var : ListIterator[String] */;
short int var360 /* : Bool */;
val* var361 /* : nullable Object */;
val* var_l362 /* var l: String */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
long var366 /* : Int */;
val* var367 /* : FlatString */;
val* var370 /* : List[String] */;
val* var372 /* : List[String] */;
val* var_373 /* var : List[String] */;
val* var374 /* : ListIterator[nullable Object] */;
val* var_375 /* var : ListIterator[String] */;
short int var376 /* : Bool */;
val* var377 /* : nullable Object */;
val* var_l378 /* var l: String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : FlatString */;
val* var388 /* : null */;
short int var389 /* : Bool */;
short int var390 /* : Bool */;
short int var392 /* : Bool */;
short int var394 /* : Bool */;
val* var396 /* : String */;
val* var398 /* : String */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : FlatString */;
val* var404 /* : Array[Object] */;
long var405 /* : Int */;
val* var406 /* : NativeArray[Object] */;
val* var407 /* : String */;
val* var_cfilename408 /* var cfilename: String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
long var412 /* : Int */;
val* var413 /* : FlatString */;
val* var414 /* : Array[Object] */;
long var415 /* : Int */;
val* var416 /* : NativeArray[Object] */;
val* var417 /* : String */;
val* var_cfilepath418 /* var cfilepath: String */;
val* var419 /* : null */;
val* var_hfile /* var hfile: nullable OFStream */;
val* var420 /* : OFStream */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
long var429 /* : Int */;
val* var430 /* : FlatString */;
val* var431 /* : Array[Object] */;
long var432 /* : Int */;
val* var433 /* : NativeArray[Object] */;
val* var434 /* : String */;
val* var435 /* : HashSet[String] */;
val* var437 /* : HashSet[String] */;
val* var_438 /* var : HashSet[String] */;
val* var439 /* : Iterator[nullable Object] */;
val* var_440 /* var : Iterator[String] */;
short int var441 /* : Bool */;
val* var442 /* : nullable Object */;
val* var_key /* var key: String */;
val* var443 /* : HashMap[String, String] */;
val* var445 /* : HashMap[String, String] */;
short int var446 /* : Bool */;
short int var447 /* : Bool */;
val* var448 /* : HashMap[String, ANode] */;
val* var450 /* : HashMap[String, ANode] */;
val* var451 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
val* var452 /* : null */;
short int var453 /* : Bool */;
short int var454 /* : Bool */;
short int var456 /* : Bool */;
short int var457 /* : Bool */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
long var461 /* : Int */;
val* var462 /* : FlatString */;
val* var463 /* : Array[Object] */;
long var464 /* : Int */;
val* var465 /* : NativeArray[Object] */;
val* var466 /* : String */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
long var470 /* : Int */;
val* var471 /* : FlatString */;
val* var472 /* : Array[Object] */;
long var473 /* : Int */;
val* var474 /* : NativeArray[Object] */;
val* var475 /* : String */;
val* var476 /* : HashMap[String, String] */;
val* var478 /* : HashMap[String, String] */;
val* var479 /* : nullable Object */;
static val* varonce480;
val* var481 /* : String */;
char* var482 /* : NativeString */;
long var483 /* : Int */;
val* var484 /* : FlatString */;
val* var489 /* : ToolContext */;
val* var491 /* : ToolContext */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : FlatString */;
long var497 /* : Int */;
long var499 /* : Int */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : Object */;
val* var504 /* : String */;
long var505 /* : Int */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 487);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_platform = var;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var6 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionString> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionString> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (varonce) {
var13 = varonce;
} else {
var14 = "nitstack";
var15 = 8;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (var10 == NULL) {
var17 = 0; /* <var13:String> cannot be null */
} else {
var18 = ((short int (*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var13) /* == on <var10:nullable Object(nullable String)>*/;
var17 = var18;
}
var_ = var17;
if (var17){
{
var19 = nit___nit__Platform___supports_libunwind(var_platform);
}
var3 = var19;
} else {
var3 = var_;
}
if (var3){
{
nit___nit__AbstractCompiler___build_c_to_nit_bindings(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#build_c_to_nit_bindings on <var_compiler:AbstractCompiler>*/
}
} else {
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "-DWITH_LIBGC";
var23 = 12;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var_cc_opt_with_libgc = var21;
{
var25 = nit___nit__Platform___supports_libgc(var_platform);
}
var26 = !var25;
if (var26){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "";
var30 = 0;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var_cc_opt_with_libgc = var28;
} else {
}
var32 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
if (varonce33) {
var34 = varonce33;
} else {
var35 = "gc_chooser.c";
var36 = 12;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
((void (*)(val* self, val* p0))(var32->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var32, var34) /* filename= on <var32:ExternCFile>*/;
}
{
((void (*)(val* self, val* p0))(var32->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var32, var_cc_opt_with_libgc) /* cflags= on <var32:ExternCFile>*/;
}
{
((void (*)(val* self))(var32->class->vft[COLOR_standard__kernel__Object__init]))(var32) /* init on <var32:ExternCFile>*/;
}
var_gc_chooser = var32;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "";
var41 = 0;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
{ /* Inline kernel#Object#!= (var_cc_opt_with_libgc,var39) on <var_cc_opt_with_libgc:String> */
var_other = var39;
{
var45 = ((short int (*)(val* self, val* p0))(var_cc_opt_with_libgc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cc_opt_with_libgc, var_other) /* == on <var_cc_opt_with_libgc:String>*/;
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_gc_chooser) on <var_gc_chooser:ExternCFile> */
var49 = var_gc_chooser->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_gc_chooser:ExternCFile> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 119);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "bdw-gc";
var53 = 6;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var47, var51); /* Direct call array#Array#add on <var47:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var_compiler) on <var_compiler:AbstractCompiler> */
var57 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var_compiler:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 928);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var55, var_gc_chooser); /* Direct call array#Array#add on <var55:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var60 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var58) on <var58:ToolContext> */
var63 = var58->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var58:ToolContext> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 452);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "clib";
var67 = 4;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
var69 = standard__file___String____47d(var61, var65);
}
var_clib = var69;
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var72 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "/gc_chooser.c";
var76 = 13;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 2;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) var_clib;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var74;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var70, var81); /* Direct call array#Array#add on <var70:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var84 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "/gc_chooser.h";
var88 = 13;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 2;
var92 = NEW_standard__NativeArray(var91, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var92)->values[0] = (val*) var_clib;
((struct instance_standard__NativeArray*)var92)->values[1] = (val*) var86;
{
((void (*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_standard__array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val* self))(var90->class->vft[COLOR_standard__string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var82, var93); /* Direct call array#Array#add on <var82:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var96 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var94) on <var94:MModule> */
var99 = var94->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var94:MModule> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = poset___poset__POSetElement___greaters(var97);
}
var_101 = var100;
{
var102 = ((val* (*)(val* self))(var_101->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_101) /* iterator on <var_101:Collection[MModule]>*/;
}
var_103 = var102;
for(;;) {
{
var104 = ((short int (*)(val* self))(var_103->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_103) /* is_ok on <var_103:Iterator[MModule]>*/;
}
if (var104){
{
var105 = ((val* (*)(val* self))(var_103->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_103) /* item on <var_103:Iterator[MModule]>*/;
}
var_m = var105;
{
nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(var_compiler, var_m); /* Direct call separate_compiler#SeparateCompiler#finalize_ffi_for_module on <var_compiler:AbstractCompiler>*/
}
{
((void (*)(val* self))(var_103->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_103) /* next on <var_103:Iterator[MModule]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_103) on <var_103:Iterator[MModule]> */
RET_LABEL106:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var109 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_110 = var107;
{
var111 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_110);
}
var_112 = var111;
for(;;) {
{
var113 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_112);
}
if (var113){
{
var114 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_112);
}
var_src = var114;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "";
var118 = 0;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
var120 = standard__file___String___basename(var_src, var116);
}
var_basename = var120;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "/";
var124 = 1;
var125 = standard___standard__NativeString___to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 3;
var128 = NEW_standard__NativeArray(var127, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var128)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var128)->values[1] = (val*) var122;
((struct instance_standard__NativeArray*)var128)->values[2] = (val*) var_basename;
{
((void (*)(val* self, val* p0, long p1))(var126->class->vft[COLOR_standard__array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val* self))(var126->class->vft[COLOR_standard__string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
var_dst = var129;
{
standard__file___String___file_copy_to(var_src, var_dst); /* Direct call file#String#file_copy_to on <var_src:String>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_112); /* Direct call array#ArrayIterator#next on <var_112:ArrayIterator[String]>*/
}
} else {
goto BREAK_label130;
}
}
BREAK_label130: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_112) on <var_112:ArrayIterator[String]> */
RET_LABEL131:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var134 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var132) on <var132:CodeWriter> */
var137 = var132->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val; /* _file on <var132:CodeWriter> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1037);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#name (var135) on <var135:CodeFile> */
var140 = var135->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var135:CodeFile> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1030);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = ".h";
var144 = 2;
var145 = standard___standard__NativeString___to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
var146 = ((val* (*)(val* self, val* p0))(var138->class->vft[COLOR_standard__string__String___43d]))(var138, var142) /* + on <var138:String>*/;
}
var_hfilename = var146;
if (varonce147) {
var148 = varonce147;
} else {
var149 = "/";
var150 = 1;
var151 = standard___standard__NativeString___to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var152 = array_instance Array[Object] */
var153 = 3;
var154 = NEW_standard__NativeArray(var153, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var154)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var154)->values[1] = (val*) var148;
((struct instance_standard__NativeArray*)var154)->values[2] = (val*) var_hfilename;
{
((void (*)(val* self, val* p0, long p1))(var152->class->vft[COLOR_standard__array__Array__with_native]))(var152, var154, var153) /* with_native on <var152:Array[Object]>*/;
}
}
{
var155 = ((val* (*)(val* self))(var152->class->vft[COLOR_standard__string__Object__to_s]))(var152) /* to_s on <var152:Array[Object]>*/;
}
var_hfilepath = var155;
var156 = NEW_standard__OFStream(&type_standard__OFStream);
{
standard___standard__OFStream___open(var156, var_hfilepath); /* Direct call file#OFStream#open on <var156:OFStream>*/
}
var_h = var156;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var159 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var157) on <var157:CodeWriter> */
var162 = var157->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var157:CodeWriter> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1039);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
var_163 = var160;
{
var164 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_163);
}
var_165 = var164;
for(;;) {
{
var166 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_165);
}
if (var166){
{
var167 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_165);
}
var_l = var167;
{
standard___standard__OFStream___standard__stream__OStream__write(var_h, var_l); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "\n";
var171 = 1;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_h, var169); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_165); /* Direct call list#ListIterator#next on <var_165:ListIterator[String]>*/
}
} else {
goto BREAK_label173;
}
}
BREAK_label173: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_165) on <var_165:ListIterator[String]> */
RET_LABEL174:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var177 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var175) on <var175:CodeWriter> */
var180 = var175->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var175:CodeWriter> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1038);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
var_181 = var178;
{
var182 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_181);
}
var_183 = var182;
for(;;) {
{
var184 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_183);
}
if (var184){
{
var185 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_183);
}
var_l186 = var185;
{
standard___standard__OFStream___standard__stream__OStream__write(var_h, var_l186); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = "\n";
var190 = 1;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_h, var188); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_183); /* Direct call list#ListIterator#next on <var_183:ListIterator[String]>*/
}
} else {
goto BREAK_label192;
}
}
BREAK_label192: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_183) on <var_183:ListIterator[String]> */
RET_LABEL193:(void)0;
}
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_h); /* Direct call file#OFStream#close on <var_h:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var196 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (var194) on <var194:ToolContext> */
var199 = var194->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <var194:ToolContext> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 39);
show_backtrace(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline opts#Option#value (var197) on <var197:OptionInt> */
var202 = var197->attrs[COLOR_opts__Option___value].val; /* _value on <var197:OptionInt> */
var200 = var202;
RET_LABEL201:(void)0;
}
}
var203 = ((struct instance_standard__Int*)var200)->value; /* autounbox from nullable Object to Int */;
var_max_c_lines = var203;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var_compiler) on <var_compiler:AbstractCompiler> */
var206 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <var_compiler:AbstractCompiler> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
var_207 = var204;
{
var208 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_207);
}
var_209 = var208;
for(;;) {
{
var210 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_209);
}
if (var210){
{
var211 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_209);
}
var_f = var211;
var212 = 0;
var_i = var212;
var213 = 0;
var_count = var213;
var214 = NULL;
var_file = var214;
{
{ /* Inline abstract_compiler#CodeFile#writers (var_f) on <var_f:CodeFile> */
var217 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___writers].val; /* _writers on <var_f:CodeFile> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1031);
show_backtrace(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
var_218 = var215;
{
var219 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_218);
}
var_220 = var219;
for(;;) {
{
var221 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_220);
}
if (var221){
{
var222 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_220);
}
var_vis = var222;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var225 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_vis,var223) on <var_vis:CodeWriter> */
var_other228 = var223;
{
{ /* Inline kernel#Object#is_same_instance (var_vis,var_other228) on <var_vis:CodeWriter> */
var231 = var_vis == var_other228;
var229 = var231;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
}
var226 = var229;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
if (var226){
goto BREAK_label232;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var235 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1038);
show_backtrace(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
var236 = standard___standard__List___standard__abstract_collection__Collection__length(var233);
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var239 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1039);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
var240 = standard___standard__List___standard__abstract_collection__Collection__length(var237);
}
{
{ /* Inline kernel#Int#+ (var236,var240) on <var236:Int> */
/* Covariant cast for argument 0 (i) <var240:Int> isa OTHER */
/* <var240:Int> isa OTHER */
var243 = 1; /* easy <var240:Int> isa OTHER*/
if (unlikely(!var243)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var244 = var236 + var240;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
}
var_total_lines = var241;
var245 = 0;
{
{ /* Inline kernel#Int#== (var_total_lines,var245) on <var_total_lines:Int> */
var248 = var_total_lines == var245;
var246 = var248;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
if (var246){
goto BREAK_label232;
} else {
}
{
{ /* Inline kernel#Int#+ (var_count,var_total_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_total_lines:Int> isa OTHER */
/* <var_total_lines:Int> isa OTHER */
var251 = 1; /* easy <var_total_lines:Int> isa OTHER*/
if (unlikely(!var251)) {
var_class_name254 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name254);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var255 = var_count + var_total_lines;
var249 = var255;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
var_count = var249;
var257 = NULL;
if (var_file == NULL) {
var258 = 1; /* is null */
} else {
var258 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var257) on <var_file:nullable OFStream> */
var_other228 = var257;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other228) on <var_file:nullable OFStream(OFStream)> */
var263 = var_file == var_other228;
var261 = var263;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
}
var259 = var261;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
var258 = var259;
}
var_264 = var258;
if (var258){
var256 = var_264;
} else {
{
{ /* Inline kernel#Int#> (var_count,var_max_c_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_max_c_lines:Int> isa OTHER */
/* <var_max_c_lines:Int> isa OTHER */
var268 = 1; /* easy <var_max_c_lines:Int> isa OTHER*/
if (unlikely(!var268)) {
var_class_name271 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name271);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var272 = var_count > var_max_c_lines;
var266 = var272;
goto RET_LABEL267;
RET_LABEL267:(void)0;
}
}
var_273 = var266;
if (var266){
var274 = 0;
{
{ /* Inline kernel#Int#> (var_max_c_lines,var274) on <var_max_c_lines:Int> */
/* Covariant cast for argument 0 (i) <var274:Int> isa OTHER */
/* <var274:Int> isa OTHER */
var277 = 1; /* easy <var274:Int> isa OTHER*/
if (unlikely(!var277)) {
var_class_name280 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name280);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var281 = var_max_c_lines > var274;
var275 = var281;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
}
var265 = var275;
} else {
var265 = var_273;
}
var256 = var265;
}
if (var256){
var282 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var282) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var282:Int> isa OTHER */
/* <var282:Int> isa OTHER */
var285 = 1; /* easy <var282:Int> isa OTHER*/
if (unlikely(!var285)) {
var_class_name288 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name288);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var289 = var_i + var282;
var283 = var289;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
}
var_i = var283;
var290 = NULL;
if (var_file == NULL) {
var291 = 0; /* is null */
} else {
var291 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_file,var290) on <var_file:nullable OFStream> */
var_other = var290;
{
var294 = ((short int (*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_file, var_other) /* == on <var_file:nullable OFStream(OFStream)>*/;
}
var295 = !var294;
var292 = var295;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
var291 = var292;
}
if (var291){
{
standard___standard__OFStream___standard__stream__IOS__close(var_file); /* Direct call file#OFStream#close on <var_file:nullable OFStream(OFStream)>*/
}
} else {
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var298 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1030);
show_backtrace(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
if (varonce299) {
var300 = varonce299;
} else {
var301 = ".";
var302 = 1;
var303 = standard___standard__NativeString___to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = ".c";
var307 = 2;
var308 = standard___standard__NativeString___to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
var309 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 4;
var311 = NEW_standard__NativeArray(var310, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var311)->values[0] = (val*) var296;
((struct instance_standard__NativeArray*)var311)->values[1] = (val*) var300;
var312 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var311)->values[2] = (val*) var312;
((struct instance_standard__NativeArray*)var311)->values[3] = (val*) var305;
{
((void (*)(val* self, val* p0, long p1))(var309->class->vft[COLOR_standard__array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
}
{
var313 = ((val* (*)(val* self))(var309->class->vft[COLOR_standard__string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
}
var_cfilename = var313;
if (varonce314) {
var315 = varonce314;
} else {
var316 = "/";
var317 = 1;
var318 = standard___standard__NativeString___to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
var319 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var319 = array_instance Array[Object] */
var320 = 3;
var321 = NEW_standard__NativeArray(var320, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var321)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var321)->values[1] = (val*) var315;
((struct instance_standard__NativeArray*)var321)->values[2] = (val*) var_cfilename;
{
((void (*)(val* self, val* p0, long p1))(var319->class->vft[COLOR_standard__array__Array__with_native]))(var319, var321, var320) /* with_native on <var319:Array[Object]>*/;
}
}
{
var322 = ((val* (*)(val* self))(var319->class->vft[COLOR_standard__string__Object__to_s]))(var319) /* to_s on <var319:Array[Object]>*/;
}
var_cfilepath = var322;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var325 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
if (varonce326) {
var327 = varonce326;
} else {
var328 = "new C source files to compile: ";
var329 = 31;
var330 = standard___standard__NativeString___to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
var331 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var331 = array_instance Array[Object] */
var332 = 2;
var333 = NEW_standard__NativeArray(var332, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var333)->values[0] = (val*) var327;
((struct instance_standard__NativeArray*)var333)->values[1] = (val*) var_cfilepath;
{
((void (*)(val* self, val* p0, long p1))(var331->class->vft[COLOR_standard__array__Array__with_native]))(var331, var333, var332) /* with_native on <var331:Array[Object]>*/;
}
}
{
var334 = ((val* (*)(val* self))(var331->class->vft[COLOR_standard__string__Object__to_s]))(var331) /* to_s on <var331:Array[Object]>*/;
}
var335 = 3;
{
nit___nit__ToolContext___info(var323, var334, var335); /* Direct call toolcontext#ToolContext#info on <var323:ToolContext>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_cfiles, var_cfilename); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
var336 = NEW_standard__OFStream(&type_standard__OFStream);
{
standard___standard__OFStream___open(var336, var_cfilepath); /* Direct call file#OFStream#open on <var336:OFStream>*/
}
var_file = var336;
if (varonce337) {
var338 = varonce337;
} else {
var339 = "#include \"";
var340 = 10;
var341 = standard___standard__NativeString___to_s_with_length(var339, var340);
var338 = var341;
varonce337 = var338;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var344 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var344 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1030);
show_backtrace(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
if (varonce345) {
var346 = varonce345;
} else {
var347 = ".0.h\"\n";
var348 = 6;
var349 = standard___standard__NativeString___to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
var350 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var350 = array_instance Array[Object] */
var351 = 3;
var352 = NEW_standard__NativeArray(var351, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var352)->values[0] = (val*) var338;
((struct instance_standard__NativeArray*)var352)->values[1] = (val*) var342;
((struct instance_standard__NativeArray*)var352)->values[2] = (val*) var346;
{
((void (*)(val* self, val* p0, long p1))(var350->class->vft[COLOR_standard__array__Array__with_native]))(var350, var352, var351) /* with_native on <var350:Array[Object]>*/;
}
}
{
var353 = ((val* (*)(val* self))(var350->class->vft[COLOR_standard__string__Object__to_s]))(var350) /* to_s on <var350:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_file, var353); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
var_count = var_total_lines;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var356 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var356 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1039);
show_backtrace(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
var_357 = var354;
{
var358 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_357);
}
var_359 = var358;
for(;;) {
{
var360 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_359);
}
if (var360){
{
var361 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_359);
}
var_l362 = var361;
{
standard___standard__OFStream___standard__stream__OStream__write(var_file, var_l362); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
if (varonce363) {
var364 = varonce363;
} else {
var365 = "\n";
var366 = 1;
var367 = standard___standard__NativeString___to_s_with_length(var365, var366);
var364 = var367;
varonce363 = var364;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_file, var364); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_359); /* Direct call list#ListIterator#next on <var_359:ListIterator[String]>*/
}
} else {
goto BREAK_label368;
}
}
BREAK_label368: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_359) on <var_359:ListIterator[String]> */
RET_LABEL369:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var372 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1038);
show_backtrace(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
var_373 = var370;
{
var374 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_373);
}
var_375 = var374;
for(;;) {
{
var376 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_375);
}
if (var376){
{
var377 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_375);
}
var_l378 = var377;
{
standard___standard__OFStream___standard__stream__OStream__write(var_file, var_l378); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
if (varonce379) {
var380 = varonce379;
} else {
var381 = "\n";
var382 = 1;
var383 = standard___standard__NativeString___to_s_with_length(var381, var382);
var380 = var383;
varonce379 = var380;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_file, var380); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_375); /* Direct call list#ListIterator#next on <var_375:ListIterator[String]>*/
}
} else {
goto BREAK_label384;
}
}
BREAK_label384: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_375) on <var_375:ListIterator[String]> */
RET_LABEL385:(void)0;
}
}
BREAK_label232: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_220); /* Direct call array#ArrayIterator#next on <var_220:ArrayIterator[CodeWriter]>*/
}
} else {
goto BREAK_label386;
}
}
BREAK_label386: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_220) on <var_220:ArrayIterator[CodeWriter]> */
RET_LABEL387:(void)0;
}
}
var388 = NULL;
if (var_file == NULL) {
var389 = 1; /* is null */
} else {
var389 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var388) on <var_file:nullable OFStream> */
var_other228 = var388;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other228) on <var_file:nullable OFStream(OFStream)> */
var394 = var_file == var_other228;
var392 = var394;
goto RET_LABEL393;
RET_LABEL393:(void)0;
}
}
var390 = var392;
goto RET_LABEL391;
RET_LABEL391:(void)0;
}
var389 = var390;
}
if (var389){
goto BREAK_label395;
} else {
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_file); /* Direct call file#OFStream#close on <var_file:nullable OFStream(OFStream)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var398 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var398 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1030);
show_backtrace(1);
}
var396 = var398;
RET_LABEL397:(void)0;
}
}
if (varonce399) {
var400 = varonce399;
} else {
var401 = ".0.h";
var402 = 4;
var403 = standard___standard__NativeString___to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
var404 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var404 = array_instance Array[Object] */
var405 = 2;
var406 = NEW_standard__NativeArray(var405, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var406)->values[0] = (val*) var396;
((struct instance_standard__NativeArray*)var406)->values[1] = (val*) var400;
{
((void (*)(val* self, val* p0, long p1))(var404->class->vft[COLOR_standard__array__Array__with_native]))(var404, var406, var405) /* with_native on <var404:Array[Object]>*/;
}
}
{
var407 = ((val* (*)(val* self))(var404->class->vft[COLOR_standard__string__Object__to_s]))(var404) /* to_s on <var404:Array[Object]>*/;
}
var_cfilename408 = var407;
if (varonce409) {
var410 = varonce409;
} else {
var411 = "/";
var412 = 1;
var413 = standard___standard__NativeString___to_s_with_length(var411, var412);
var410 = var413;
varonce409 = var410;
}
var414 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var414 = array_instance Array[Object] */
var415 = 3;
var416 = NEW_standard__NativeArray(var415, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var416)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var416)->values[1] = (val*) var410;
((struct instance_standard__NativeArray*)var416)->values[2] = (val*) var_cfilename408;
{
((void (*)(val* self, val* p0, long p1))(var414->class->vft[COLOR_standard__array__Array__with_native]))(var414, var416, var415) /* with_native on <var414:Array[Object]>*/;
}
}
{
var417 = ((val* (*)(val* self))(var414->class->vft[COLOR_standard__string__Object__to_s]))(var414) /* to_s on <var414:Array[Object]>*/;
}
var_cfilepath418 = var417;
var419 = NULL;
var_hfile = var419;
var420 = NEW_standard__OFStream(&type_standard__OFStream);
{
standard___standard__OFStream___open(var420, var_cfilepath418); /* Direct call file#OFStream#open on <var420:OFStream>*/
}
var_hfile = var420;
if (varonce421) {
var422 = varonce421;
} else {
var423 = "#include \"";
var424 = 10;
var425 = standard___standard__NativeString___to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
if (varonce426) {
var427 = varonce426;
} else {
var428 = "\"\n";
var429 = 2;
var430 = standard___standard__NativeString___to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
var431 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var431 = array_instance Array[Object] */
var432 = 3;
var433 = NEW_standard__NativeArray(var432, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var433)->values[0] = (val*) var422;
((struct instance_standard__NativeArray*)var433)->values[1] = (val*) var_hfilename;
((struct instance_standard__NativeArray*)var433)->values[2] = (val*) var427;
{
((void (*)(val* self, val* p0, long p1))(var431->class->vft[COLOR_standard__array__Array__with_native]))(var431, var433, var432) /* with_native on <var431:Array[Object]>*/;
}
}
{
var434 = ((val* (*)(val* self))(var431->class->vft[COLOR_standard__string__Object__to_s]))(var431) /* to_s on <var431:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_hfile, var434); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var_f) on <var_f:CodeFile> */
var437 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var_f:CodeFile> */
if (unlikely(var437 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1032);
show_backtrace(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
var_438 = var435;
{
var439 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_438);
}
var_440 = var439;
for(;;) {
{
var441 = ((short int (*)(val* self))(var_440->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_440) /* is_ok on <var_440:Iterator[String]>*/;
}
if (var441){
{
var442 = ((val* (*)(val* self))(var_440->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_440) /* item on <var_440:Iterator[String]>*/;
}
var_key = var442;
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var445 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var445 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 539);
show_backtrace(1);
}
var443 = var445;
RET_LABEL444:(void)0;
}
}
{
var446 = standard___standard__MapRead___has_key(var443, var_key);
}
var447 = !var446;
if (var447){
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var450 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var450 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 541);
show_backtrace(1);
}
var448 = var450;
RET_LABEL449:(void)0;
}
}
{
var451 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var448, var_key);
}
var_node = var451;
var452 = NULL;
if (var_node == NULL) {
var453 = 0; /* is null */
} else {
var453 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var452) on <var_node:nullable ANode> */
var_other = var452;
{
var456 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ANode(ANode)>*/;
}
var457 = !var456;
var454 = var457;
goto RET_LABEL455;
RET_LABEL455:(void)0;
}
var453 = var454;
}
if (var453){
if (varonce458) {
var459 = varonce458;
} else {
var460 = "No provided declaration for ";
var461 = 28;
var462 = standard___standard__NativeString___to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
var463 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var463 = array_instance Array[Object] */
var464 = 2;
var465 = NEW_standard__NativeArray(var464, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var465)->values[0] = (val*) var459;
((struct instance_standard__NativeArray*)var465)->values[1] = (val*) var_key;
{
((void (*)(val* self, val* p0, long p1))(var463->class->vft[COLOR_standard__array__Array__with_native]))(var463, var465, var464) /* with_native on <var463:Array[Object]>*/;
}
}
{
var466 = ((val* (*)(val* self))(var463->class->vft[COLOR_standard__string__Object__to_s]))(var463) /* to_s on <var463:Array[Object]>*/;
}
{
nit___nit__ANode___debug(var_node, var466); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
} else {
if (varonce467) {
var468 = varonce467;
} else {
var469 = "No provided declaration for ";
var470 = 28;
var471 = standard___standard__NativeString___to_s_with_length(var469, var470);
var468 = var471;
varonce467 = var468;
}
var472 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var472 = array_instance Array[Object] */
var473 = 2;
var474 = NEW_standard__NativeArray(var473, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var474)->values[0] = (val*) var468;
((struct instance_standard__NativeArray*)var474)->values[1] = (val*) var_key;
{
((void (*)(val* self, val* p0, long p1))(var472->class->vft[COLOR_standard__array__Array__with_native]))(var472, var474, var473) /* with_native on <var472:Array[Object]>*/;
}
}
{
var475 = ((val* (*)(val* self))(var472->class->vft[COLOR_standard__string__Object__to_s]))(var472) /* to_s on <var472:Array[Object]>*/;
}
{
standard__file___Object___print(self, var475); /* Direct call file#Object#print on <self:MakefileToolchain>*/
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 272);
show_backtrace(1);
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var478 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var478 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 539);
show_backtrace(1);
}
var476 = var478;
RET_LABEL477:(void)0;
}
}
{
var479 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var476, var_key);
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_hfile, var479); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
if (varonce480) {
var481 = varonce480;
} else {
var482 = "\n";
var483 = 1;
var484 = standard___standard__NativeString___to_s_with_length(var482, var483);
var481 = var484;
varonce480 = var481;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_hfile, var481); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
{
((void (*)(val* self))(var_440->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_440) /* next on <var_440:Iterator[String]>*/;
}
} else {
goto BREAK_label485;
}
}
BREAK_label485: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_440) on <var_440:Iterator[String]> */
RET_LABEL486:(void)0;
}
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_hfile); /* Direct call file#OFStream#close on <var_hfile:nullable OFStream(OFStream)>*/
}
BREAK_label395: (void)0;
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_209); /* Direct call list#ListIterator#next on <var_209:ListIterator[CodeFile]>*/
}
} else {
goto BREAK_label487;
}
}
BREAK_label487: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_209) on <var_209:ListIterator[CodeFile]> */
RET_LABEL488:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var491 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var491 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var489 = var491;
RET_LABEL490:(void)0;
}
}
if (varonce492) {
var493 = varonce492;
} else {
var494 = "Total C source files to compile: ";
var495 = 33;
var496 = standard___standard__NativeString___to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
{
{ /* Inline array#AbstractArrayRead#length (var_cfiles) on <var_cfiles:Array[String]> */
var499 = var_cfiles->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_cfiles:Array[String]> */
var497 = var499;
RET_LABEL498:(void)0;
}
}
var500 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 2;
var502 = NEW_standard__NativeArray(var501, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var502)->values[0] = (val*) var493;
var503 = BOX_standard__Int(var497); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var502)->values[1] = (val*) var503;
{
((void (*)(val* self, val* p0, long p1))(var500->class->vft[COLOR_standard__array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
}
{
var504 = ((val* (*)(val* self))(var500->class->vft[COLOR_standard__string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
}
var505 = 2;
{
nit___nit__ToolContext___info(var489, var504, var505); /* Direct call toolcontext#ToolContext#info on <var489:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#makefile_name for (self: MakefileToolchain, MModule): String */
val* nit___nit__MakefileToolchain___makefile_name(val* self, val* p0) {
val* var /* : String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
var_mainmodule = p0;
{
var1 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mainmodule);
}
if (varonce) {
var2 = varonce;
} else {
var3 = ".mk";
var4 = 3;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_standard__NativeArray(var7, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var8)->values[1] = (val*) var2;
{
((void (*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#default_outname for (self: MakefileToolchain, MModule): String */
val* nit___nit__MakefileToolchain___default_outname(val* self, val* p0) {
val* var /* : String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var_res /* var res: String */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : POSetElement[MModule] */;
val* var9 /* : POSetElement[MModule] */;
val* var10 /* : Collection[nullable Object] */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
val* var14 /* : String */;
var_mainmodule = p0;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var3 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
for(;;) {
{
{ /* Inline mmodule#MModule#is_fictive (var_mainmodule) on <var_mainmodule:MModule> */
var6 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___is_fictive].s; /* _is_fictive on <var_mainmodule:MModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var9 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = poset___poset__POSetElement___direct_greaters(var7);
}
{
var11 = ((val* (*)(val* self))(var10->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var10) /* first on <var10:Collection[nullable Object](Collection[MModule])>*/;
}
var_mainmodule = var11;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var14 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_res = var12;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#outfile for (self: MakefileToolchain, MModule): String */
val* nit___nit__MakefileToolchain___outfile(val* self, val* p0) {
val* var /* : String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_res /* var res: nullable String */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
val* var17 /* : ToolContext */;
val* var19 /* : ToolContext */;
val* var20 /* : OptionString */;
val* var22 /* : OptionString */;
val* var23 /* : nullable Object */;
val* var25 /* : nullable Object */;
val* var_dir /* var dir: nullable String */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : String */;
var_mainmodule = p0;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 29);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts#Option#value (var4) on <var4:OptionString> */
var9 = var4->attrs[COLOR_opts__Option___value].val; /* _value on <var4:OptionString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_res = var7;
var10 = NULL;
if (var_res == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var10) on <var_res:nullable String> */
var_other = var10;
{
var14 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = var_res;
goto RET_LABEL;
} else {
}
{
var16 = nit___nit__MakefileToolchain___default_outname(self, var_mainmodule);
}
var_res = var16;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var19 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (var17) on <var17:ToolContext> */
var22 = var17->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <var17:ToolContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 31);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline opts#Option#value (var20) on <var20:OptionString> */
var25 = var20->attrs[COLOR_opts__Option___value].val; /* _value on <var20:OptionString> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_dir = var23;
var26 = NULL;
if (var_dir == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dir,var26) on <var_dir:nullable String> */
var_other = var26;
{
var30 = ((short int (*)(val* self, val* p0))(var_dir->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dir, var_other) /* == on <var_dir:nullable String(String)>*/;
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
var32 = standard__file___String___join_path(var_dir, var_res);
}
var = var32;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: MakefileToolchain, AbstractCompiler, String, Array[String]) */
void nit___nit__MakefileToolchain___write_makefile(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var3 /* : Platform */;
val* var5 /* : Platform */;
val* var_platform /* var platform: Platform */;
val* var6 /* : String */;
val* var_outname /* var outname: String */;
val* var7 /* : String */;
val* var_real_outpath /* var real_outpath: String */;
val* var8 /* : String */;
val* var_outpath /* var outpath: String */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_makename /* var makename: String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
val* var_makepath /* var makepath: String */;
val* var23 /* : OFStream */;
val* var_makefile /* var makefile: OFStream */;
val* var24 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var25 /* : POSetElement[MModule] */;
val* var27 /* : POSetElement[MModule] */;
val* var28 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : Iterator[MModule] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var33 /* : nullable Array[String] */;
val* var_libs /* var libs: nullable Array[String] */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
val* var61 /* : ToolContext */;
val* var63 /* : ToolContext */;
val* var64 /* : OptionString */;
val* var66 /* : OptionString */;
val* var67 /* : nullable Object */;
val* var69 /* : nullable Object */;
val* var_ost /* var ost: nullable String */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var_79 /* var : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var_87 /* var : Bool */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : Array[Object] */;
long var135 /* : Int */;
val* var136 /* : NativeArray[Object] */;
val* var137 /* : String */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
val* var164 /* : String */;
val* var165 /* : Array[Object] */;
long var166 /* : Int */;
val* var167 /* : NativeArray[Object] */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var175 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var_176 /* var : Array[String] */;
val* var177 /* : ArrayIterator[nullable Object] */;
val* var_178 /* var : ArrayIterator[String] */;
short int var179 /* : Bool */;
val* var180 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
val* var192 /* : String */;
val* var_o /* var o: String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
val* var213 /* : Array[Object] */;
long var214 /* : Int */;
val* var215 /* : NativeArray[Object] */;
val* var216 /* : String */;
val* var219 /* : Array[String] */;
val* var221 /* : Array[String] */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
val* var229 /* : Array[Object] */;
long var230 /* : Int */;
val* var231 /* : NativeArray[Object] */;
val* var232 /* : String */;
val* var_linker_script_path /* var linker_script_path: String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : FlatString */;
val* var238 /* : OFStream */;
val* var_f239 /* var f: OFStream */;
val* var240 /* : Array[String] */;
val* var242 /* : Array[String] */;
val* var_243 /* var : Array[String] */;
val* var244 /* : ArrayIterator[nullable Object] */;
val* var_245 /* var : ArrayIterator[String] */;
short int var246 /* : Bool */;
val* var247 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : FlatString */;
val* var255 /* : Array[ExternFile] */;
val* var_java_files /* var java_files: Array[ExternFile] */;
val* var256 /* : Array[String] */;
val* var_pkgconfigs /* var pkgconfigs: Array[String] */;
val* var257 /* : Array[ExternFile] */;
val* var259 /* : Array[ExternFile] */;
val* var_260 /* var : Array[ExternFile] */;
val* var261 /* : ArrayIterator[nullable Object] */;
val* var_262 /* var : ArrayIterator[ExternFile] */;
short int var263 /* : Bool */;
val* var264 /* : nullable Object */;
val* var_f265 /* var f: ExternFile */;
val* var266 /* : Array[String] */;
val* var268 /* : Array[String] */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
val* var_278 /* var : Array[String] */;
val* var279 /* : ArrayIterator[nullable Object] */;
val* var_280 /* var : ArrayIterator[String] */;
short int var281 /* : Bool */;
val* var282 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : FlatString */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : NativeString */;
long var291 /* : Int */;
val* var292 /* : FlatString */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
val* var303 /* : Array[Object] */;
long var304 /* : Int */;
val* var305 /* : NativeArray[Object] */;
val* var306 /* : String */;
val* var309 /* : Array[ExternFile] */;
val* var311 /* : Array[ExternFile] */;
val* var_312 /* var : Array[ExternFile] */;
val* var313 /* : ArrayIterator[nullable Object] */;
val* var_314 /* var : ArrayIterator[ExternFile] */;
short int var315 /* : Bool */;
val* var316 /* : nullable Object */;
val* var_f317 /* var f: ExternFile */;
val* var318 /* : String */;
val* var_o319 /* var o: String */;
val* var320 /* : String */;
val* var322 /* : String */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : FlatString */;
val* var328 /* : String */;
val* var_ff /* var ff: String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
val* var339 /* : Array[Object] */;
long var340 /* : Int */;
val* var341 /* : NativeArray[Object] */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : FlatString */;
val* var348 /* : String */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
long var352 /* : Int */;
val* var353 /* : FlatString */;
val* var354 /* : Array[Object] */;
long var355 /* : Int */;
val* var356 /* : NativeArray[Object] */;
val* var357 /* : String */;
val* var358 /* : String */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : FlatString */;
val* var370 /* : Array[Object] */;
long var371 /* : Int */;
val* var372 /* : NativeArray[Object] */;
val* var373 /* : String */;
val* var_jar_file /* var jar_file: String */;
val* var374 /* : Array[String] */;
val* var_class_files_array /* var class_files_array: Array[String] */;
val* var_375 /* var : Array[ExternFile] */;
val* var376 /* : ArrayIterator[nullable Object] */;
val* var_377 /* var : ArrayIterator[ExternFile] */;
short int var378 /* : Bool */;
val* var379 /* : nullable Object */;
val* var_f380 /* var f: ExternFile */;
val* var381 /* : String */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : FlatString */;
val* var389 /* : String */;
val* var_class_files /* var class_files: String */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
long var398 /* : Int */;
val* var399 /* : FlatString */;
val* var400 /* : Array[Object] */;
long var401 /* : Int */;
val* var402 /* : NativeArray[Object] */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
long var412 /* : Int */;
val* var413 /* : FlatString */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
long var417 /* : Int */;
val* var418 /* : FlatString */;
val* var419 /* : Array[Object] */;
long var420 /* : Int */;
val* var421 /* : NativeArray[Object] */;
val* var422 /* : String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : FlatString */;
val* var_pkg /* var pkg: String */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
long var433 /* : Int */;
val* var434 /* : FlatString */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
val* var440 /* : String */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
long var444 /* : Int */;
val* var445 /* : FlatString */;
val* var446 /* : Array[Object] */;
long var447 /* : Int */;
val* var448 /* : NativeArray[Object] */;
val* var449 /* : String */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : FlatString */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
long var464 /* : Int */;
val* var465 /* : FlatString */;
val* var466 /* : String */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
long var470 /* : Int */;
val* var471 /* : FlatString */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
long var475 /* : Int */;
val* var476 /* : FlatString */;
val* var477 /* : String */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : FlatString */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : FlatString */;
val* var488 /* : Array[Object] */;
long var489 /* : Int */;
val* var490 /* : NativeArray[Object] */;
val* var491 /* : String */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : FlatString */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : FlatString */;
val* var502 /* : String */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : NativeString */;
long var506 /* : Int */;
val* var507 /* : FlatString */;
val* var508 /* : Array[Object] */;
long var509 /* : Int */;
val* var510 /* : NativeArray[Object] */;
val* var511 /* : String */;
short int var512 /* : Bool */;
short int var514 /* : Bool */;
short int var515 /* : Bool */;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
long var519 /* : Int */;
val* var520 /* : FlatString */;
val* var521 /* : String */;
static val* varonce522;
val* var523 /* : String */;
char* var524 /* : NativeString */;
long var525 /* : Int */;
val* var526 /* : FlatString */;
val* var527 /* : Array[Object] */;
long var528 /* : Int */;
val* var529 /* : NativeArray[Object] */;
val* var530 /* : String */;
val* var531 /* : ToolContext */;
val* var533 /* : ToolContext */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : FlatString */;
val* var539 /* : Array[Object] */;
long var540 /* : Int */;
val* var541 /* : NativeArray[Object] */;
val* var542 /* : String */;
long var543 /* : Int */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : NativeString */;
long var547 /* : Int */;
val* var548 /* : FlatString */;
val* var549 /* : Array[Object] */;
long var550 /* : Int */;
val* var551 /* : NativeArray[Object] */;
val* var552 /* : String */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mainmodule = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var_compiler) on <var_compiler:AbstractCompiler> */
var5 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var_compiler:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 487);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_platform = var3;
{
var6 = nit___nit__MakefileToolchain___outfile(self, var_mainmodule);
}
var_outname = var6;
{
var7 = standard__file___String___relpath(var_compile_dir, var_outname);
}
var_real_outpath = var7;
{
var8 = standard___standard__Text___escape_to_mk(var_real_outpath);
}
var_outpath = var8;
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var11 = ((short int (*)(val* self, val* p0))(var_outpath->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_outpath, var_other) /* == on <var_outpath:String>*/;
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mainmodule);
}
var_outpath = var13;
} else {
}
{
var14 = nit___nit__MakefileToolchain___makefile_name(self, var_mainmodule);
}
var_makename = var14;
if (varonce) {
var15 = varonce;
} else {
var16 = "/";
var17 = 1;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_standard__NativeArray(var20, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var21)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var21)->values[1] = (val*) var15;
((struct instance_standard__NativeArray*)var21)->values[2] = (val*) var_makename;
{
((void (*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var_makepath = var22;
var23 = NEW_standard__OFStream(&type_standard__OFStream);
{
standard___standard__OFStream___open(var23, var_makepath); /* Direct call file#OFStream#open on <var23:OFStream>*/
}
var_makefile = var23;
var24 = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var24); /* Direct call hash_collection#HashSet#init on <var24:HashSet[String]>*/
}
var_linker_options = var24;
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var27 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = poset___poset__POSetElement___greaters(var25);
}
var_ = var28;
{
var29 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_30 = var29;
for(;;) {
{
var31 = ((short int (*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_30) /* is_ok on <var_30:Iterator[MModule]>*/;
}
if (var31){
{
var32 = ((val* (*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_30) /* item on <var_30:Iterator[MModule]>*/;
}
var_m = var32;
{
var33 = nit__abstract_compiler___MModule___collect_linker_libs(var_m);
}
var_libs = var33;
var34 = NULL;
if (var_libs == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_libs,var34) on <var_libs:nullable Array[String]> */
var_other = var34;
{
var38 = ((short int (*)(val* self, val* p0))(var_libs->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_libs, var_other) /* == on <var_libs:nullable Array[String](Array[String])>*/;
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
standard___standard__SimpleCollection___add_all(var_linker_options, var_libs); /* Direct call abstract_collection#SimpleCollection#add_all on <var_linker_options:HashSet[String]>*/
}
} else {
}
{
((void (*)(val* self))(var_30->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_30) /* next on <var_30:Iterator[MModule]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_30) on <var_30:Iterator[MModule]> */
RET_LABEL40:(void)0;
}
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "CC = ccache cc\nCXX = ccache c++\nCFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes\nCINCL =\nLDFLAGS ?= \nLDLIBS  ?= -lm ";
var44 = 129;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " ";
var49 = 1;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
var51 = standard__string___Collection___join(var_linker_options, var47);
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "\n\n";
var55 = 2;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 3;
var59 = NEW_standard__NativeArray(var58, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var59)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var59)->values[1] = (val*) var51;
((struct instance_standard__NativeArray*)var59)->values[2] = (val*) var53;
{
((void (*)(val* self, val* p0, long p1))(var57->class->vft[COLOR_standard__array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val* self))(var57->class->vft[COLOR_standard__string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var60); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var63 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var61) on <var61:ToolContext> */
var66 = var61->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var61:ToolContext> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 65);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline opts#Option#value (var64) on <var64:OptionString> */
var69 = var64->attrs[COLOR_opts__Option___value].val; /* _value on <var64:OptionString> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_ost = var67;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "libunwind";
var75 = 9;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (var_ost == NULL) {
var77 = 0; /* <var73:String> cannot be null */
} else {
var78 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var73) /* == on <var_ost:nullable String>*/;
var77 = var78;
}
var_79 = var77;
if (var77){
var71 = var_79;
} else {
if (varonce80) {
var81 = varonce80;
} else {
var82 = "nitstack";
var83 = 8;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (var_ost == NULL) {
var85 = 0; /* <var81:String> cannot be null */
} else {
var86 = ((short int (*)(val* self, val* p0))(var_ost->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ost, var81) /* == on <var_ost:nullable String>*/;
var85 = var86;
}
var71 = var85;
}
var_87 = var71;
if (var71){
{
var88 = nit___nit__Platform___supports_libunwind(var_platform);
}
var70 = var88;
} else {
var70 = var_87;
}
if (var70){
if (varonce89) {
var90 = varonce89;
} else {
var91 = "NEED_LIBUNWIND := YesPlease\n";
var92 = 28;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var90); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
} else {
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "uname_S := $(shell sh -c \'uname -s 2>/dev/null || echo not\')\n";
var97 = 61;
var98 = standard___standard__NativeString___to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var95); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "ifeq ($(uname_S),Darwin)\n";
var102 = 25;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var100); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "\11NEED_LIBUNWIND :=\n";
var107 = 19;
var108 = standard___standard__NativeString___to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var105); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = "endif\n\n";
var112 = 7;
var113 = standard___standard__NativeString___to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var110); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = "clang_check := $(shell sh -c \'$(CC) -v 2>&1 | grep -q clang; echo $$?\')\nifeq ($(clang_check), 0)\n\11CFLAGS += -Qunused-arguments\nendif\n";
var117 = 133;
var118 = standard___standard__NativeString___to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var115); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "ifdef NEED_LIBUNWIND\n\11LDLIBS += -lunwind\nendif\n";
var122 = 47;
var123 = standard___standard__NativeString___to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var120); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "all: ";
var127 = 5;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "\n";
var132 = 1;
var133 = standard___standard__NativeString___to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var134 = array_instance Array[Object] */
var135 = 3;
var136 = NEW_standard__NativeArray(var135, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var136)->values[0] = (val*) var125;
((struct instance_standard__NativeArray*)var136)->values[1] = (val*) var_outpath;
((struct instance_standard__NativeArray*)var136)->values[2] = (val*) var130;
{
((void (*)(val* self, val* p0, long p1))(var134->class->vft[COLOR_standard__array__Array__with_native]))(var134, var136, var135) /* with_native on <var134:Array[Object]>*/;
}
}
{
var137 = ((val* (*)(val* self))(var134->class->vft[COLOR_standard__string__Object__to_s]))(var134) /* to_s on <var134:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var137); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var140 = ((short int (*)(val* self, val* p0))(var_outpath->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_outpath, var_other) /* == on <var_outpath:String>*/;
}
var141 = !var140;
var138 = var141;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
if (var138){
if (varonce142) {
var143 = varonce142;
} else {
var144 = "\11cp -- ";
var145 = 7;
var146 = standard___standard__NativeString___to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
{
var147 = standard___standard__Text___escape_to_sh(var_outpath);
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = " ";
var151 = 1;
var152 = standard___standard__NativeString___to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
{
var153 = standard___standard__Text___escape_to_sh(var_real_outpath);
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = "$";
var157 = 1;
var158 = standard___standard__NativeString___to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = "$$";
var162 = 2;
var163 = standard___standard__NativeString___to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
var164 = standard__string_search___Text___replace(var153, var155, var160);
}
var165 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var165 = array_instance Array[Object] */
var166 = 4;
var167 = NEW_standard__NativeArray(var166, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var167)->values[0] = (val*) var143;
((struct instance_standard__NativeArray*)var167)->values[1] = (val*) var147;
((struct instance_standard__NativeArray*)var167)->values[2] = (val*) var149;
((struct instance_standard__NativeArray*)var167)->values[3] = (val*) var164;
{
((void (*)(val* self, val* p0, long p1))(var165->class->vft[COLOR_standard__array__Array__with_native]))(var165, var167, var166) /* with_native on <var165:Array[Object]>*/;
}
}
{
var168 = ((val* (*)(val* self))(var165->class->vft[COLOR_standard__string__Object__to_s]))(var165) /* to_s on <var165:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var168); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
} else {
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = "\n";
var172 = 1;
var173 = standard___standard__NativeString___to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var170); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
var174 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var174); /* Direct call array#Array#init on <var174:Array[String]>*/
}
var_ofiles = var174;
var175 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var175); /* Direct call array#Array#init on <var175:Array[String]>*/
}
var_dep_rules = var175;
var_176 = var_cfiles;
{
var177 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_176);
}
var_178 = var177;
for(;;) {
{
var179 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_178);
}
if (var179){
{
var180 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_178);
}
var_f = var180;
if (varonce181) {
var182 = varonce181;
} else {
var183 = ".c";
var184 = 2;
var185 = standard___standard__NativeString___to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
var186 = standard__file___String___strip_extension(var_f, var182);
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ".o";
var190 = 2;
var191 = standard___standard__NativeString___to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
{
var192 = ((val* (*)(val* self, val* p0))(var186->class->vft[COLOR_standard__string__String___43d]))(var186, var188) /* + on <var186:String>*/;
}
var_o = var192;
if (varonce193) {
var194 = varonce193;
} else {
var195 = ": ";
var196 = 2;
var197 = standard___standard__NativeString___to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
if (varonce198) {
var199 = varonce198;
} else {
var200 = "\n\11$(CC) $(CFLAGS) $(CINCL) -c -o ";
var201 = 33;
var202 = standard___standard__NativeString___to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = " ";
var206 = 1;
var207 = standard___standard__NativeString___to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
if (varonce208) {
var209 = varonce208;
} else {
var210 = "\n\n";
var211 = 2;
var212 = standard___standard__NativeString___to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
var213 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var213 = array_instance Array[Object] */
var214 = 8;
var215 = NEW_standard__NativeArray(var214, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var215)->values[0] = (val*) var_o;
((struct instance_standard__NativeArray*)var215)->values[1] = (val*) var194;
((struct instance_standard__NativeArray*)var215)->values[2] = (val*) var_f;
((struct instance_standard__NativeArray*)var215)->values[3] = (val*) var199;
((struct instance_standard__NativeArray*)var215)->values[4] = (val*) var_o;
((struct instance_standard__NativeArray*)var215)->values[5] = (val*) var204;
((struct instance_standard__NativeArray*)var215)->values[6] = (val*) var_f;
((struct instance_standard__NativeArray*)var215)->values[7] = (val*) var209;
{
((void (*)(val* self, val* p0, long p1))(var213->class->vft[COLOR_standard__array__Array__with_native]))(var213, var215, var214) /* with_native on <var213:Array[Object]>*/;
}
}
{
var216 = ((val* (*)(val* self))(var213->class->vft[COLOR_standard__string__Object__to_s]))(var213) /* to_s on <var213:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var216); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ofiles, var_o); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_dep_rules, var_o); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_178); /* Direct call array#ArrayIterator#next on <var_178:ArrayIterator[String]>*/
}
} else {
goto BREAK_label217;
}
}
BREAK_label217: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_178) on <var_178:ArrayIterator[String]> */
RET_LABEL218:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#linker_script (var_compiler) on <var_compiler:AbstractCompiler> */
var221 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var_compiler:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 526);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var219);
}
var223 = !var222;
if (var223){
if (varonce224) {
var225 = varonce224;
} else {
var226 = "/linker_script";
var227 = 14;
var228 = standard___standard__NativeString___to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
var229 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var229 = array_instance Array[Object] */
var230 = 2;
var231 = NEW_standard__NativeArray(var230, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var231)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var231)->values[1] = (val*) var225;
{
((void (*)(val* self, val* p0, long p1))(var229->class->vft[COLOR_standard__array__Array__with_native]))(var229, var231, var230) /* with_native on <var229:Array[Object]>*/;
}
}
{
var232 = ((val* (*)(val* self))(var229->class->vft[COLOR_standard__string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
}
var_linker_script_path = var232;
if (varonce233) {
var234 = varonce233;
} else {
var235 = "linker_script";
var236 = 13;
var237 = standard___standard__NativeString___to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ofiles, var234); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
var238 = NEW_standard__OFStream(&type_standard__OFStream);
{
standard___standard__OFStream___open(var238, var_linker_script_path); /* Direct call file#OFStream#open on <var238:OFStream>*/
}
var_f239 = var238;
{
{ /* Inline abstract_compiler#AbstractCompiler#linker_script (var_compiler) on <var_compiler:AbstractCompiler> */
var242 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var_compiler:AbstractCompiler> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 526);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
var_243 = var240;
{
var244 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_243);
}
var_245 = var244;
for(;;) {
{
var246 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_245);
}
if (var246){
{
var247 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_245);
}
var_l = var247;
{
standard___standard__OFStream___standard__stream__OStream__write(var_f239, var_l); /* Direct call file#OFStream#write on <var_f239:OFStream>*/
}
if (varonce248) {
var249 = varonce248;
} else {
var250 = "\n";
var251 = 1;
var252 = standard___standard__NativeString___to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_f239, var249); /* Direct call file#OFStream#write on <var_f239:OFStream>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_245); /* Direct call array#ArrayIterator#next on <var_245:ArrayIterator[String]>*/
}
} else {
goto BREAK_label253;
}
}
BREAK_label253: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_245) on <var_245:ArrayIterator[String]> */
RET_LABEL254:(void)0;
}
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_f239); /* Direct call file#OFStream#close on <var_f239:OFStream>*/
}
} else {
}
var255 = NEW_standard__Array(&type_standard__Array__nit__ExternFile);
{
standard___standard__Array___standard__kernel__Object__init(var255); /* Direct call array#Array#init on <var255:Array[ExternFile]>*/
}
var_java_files = var255;
var256 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var256); /* Direct call array#Array#init on <var256:Array[String]>*/
}
var_pkgconfigs = var256;
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var_compiler) on <var_compiler:AbstractCompiler> */
var259 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var_compiler:AbstractCompiler> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 928);
show_backtrace(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
var_260 = var257;
{
var261 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_260);
}
var_262 = var261;
for(;;) {
{
var263 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_262);
}
if (var263){
{
var264 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_262);
}
var_f265 = var264;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_f265) on <var_f265:ExternFile> */
var268 = var_f265->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f265:ExternFile> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 119);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_pkgconfigs, var266); /* Direct call array#Array#add_all on <var_pkgconfigs:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_262); /* Direct call array#ArrayIterator#next on <var_262:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label269;
}
}
BREAK_label269: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_262) on <var_262:ArrayIterator[ExternFile]> */
RET_LABEL270:(void)0;
}
}
{
var271 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var272 = !var271;
if (var272){
if (varonce273) {
var274 = varonce273;
} else {
var275 = "# does pkg-config exists?\nifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)\n$(error \"Command `pkg-config` not found. Please install it\")\nendif\n";
var276 = 151;
var277 = standard___standard__NativeString___to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var274); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
var_278 = var_pkgconfigs;
{
var279 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_278);
}
var_280 = var279;
for(;;) {
{
var281 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_280);
}
if (var281){
{
var282 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_280);
}
var_p = var282;
if (varonce283) {
var284 = varonce283;
} else {
var285 = "# Check for library ";
var286 = 20;
var287 = standard___standard__NativeString___to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
if (varonce288) {
var289 = varonce288;
} else {
var290 = "\nifneq ($(shell pkg-config --exists \'";
var291 = 37;
var292 = standard___standard__NativeString___to_s_with_length(var290, var291);
var289 = var292;
varonce288 = var289;
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = "\'; echo $$?), 0)\n$(error \"pkg-config: package ";
var296 = 46;
var297 = standard___standard__NativeString___to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = " is not found.\")\nendif\n";
var301 = 23;
var302 = standard___standard__NativeString___to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
var303 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var303 = array_instance Array[Object] */
var304 = 7;
var305 = NEW_standard__NativeArray(var304, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var305)->values[0] = (val*) var284;
((struct instance_standard__NativeArray*)var305)->values[1] = (val*) var_p;
((struct instance_standard__NativeArray*)var305)->values[2] = (val*) var289;
((struct instance_standard__NativeArray*)var305)->values[3] = (val*) var_p;
((struct instance_standard__NativeArray*)var305)->values[4] = (val*) var294;
((struct instance_standard__NativeArray*)var305)->values[5] = (val*) var_p;
((struct instance_standard__NativeArray*)var305)->values[6] = (val*) var299;
{
((void (*)(val* self, val* p0, long p1))(var303->class->vft[COLOR_standard__array__Array__with_native]))(var303, var305, var304) /* with_native on <var303:Array[Object]>*/;
}
}
{
var306 = ((val* (*)(val* self))(var303->class->vft[COLOR_standard__string__Object__to_s]))(var303) /* to_s on <var303:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var306); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_280); /* Direct call array#ArrayIterator#next on <var_280:ArrayIterator[String]>*/
}
} else {
goto BREAK_label307;
}
}
BREAK_label307: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_280) on <var_280:ArrayIterator[String]> */
RET_LABEL308:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var_compiler) on <var_compiler:AbstractCompiler> */
var311 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var_compiler:AbstractCompiler> */
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 928);
show_backtrace(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
var_312 = var309;
{
var313 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_312);
}
var_314 = var313;
for(;;) {
{
var315 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_314);
}
if (var315){
{
var316 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_314);
}
var_f317 = var316;
{
var318 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(var_f317);
}
var_o319 = var318;
{
{ /* Inline c_tools#ExternFile#filename (var_f317) on <var_f317:ExternFile> */
var322 = var_f317->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <var_f317:ExternFile> */
if (unlikely(var322 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 104);
show_backtrace(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
if (varonce323) {
var324 = varonce323;
} else {
var325 = "";
var326 = 0;
var327 = standard___standard__NativeString___to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
{
var328 = standard__file___String___basename(var320, var324);
}
var_ff = var328;
if (varonce329) {
var330 = varonce329;
} else {
var331 = ": ";
var332 = 2;
var333 = standard___standard__NativeString___to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = "\n";
var337 = 1;
var338 = standard___standard__NativeString___to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
var339 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var339 = array_instance Array[Object] */
var340 = 4;
var341 = NEW_standard__NativeArray(var340, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var341)->values[0] = (val*) var_o319;
((struct instance_standard__NativeArray*)var341)->values[1] = (val*) var330;
((struct instance_standard__NativeArray*)var341)->values[2] = (val*) var_ff;
((struct instance_standard__NativeArray*)var341)->values[3] = (val*) var335;
{
((void (*)(val* self, val* p0, long p1))(var339->class->vft[COLOR_standard__array__Array__with_native]))(var339, var341, var340) /* with_native on <var339:Array[Object]>*/;
}
}
{
var342 = ((val* (*)(val* self))(var339->class->vft[COLOR_standard__string__Object__to_s]))(var339) /* to_s on <var339:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var342); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "\11";
var346 = 1;
var347 = standard___standard__NativeString___to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
{
var348 = nit___nit__ExternCFile___ExternFile__makefile_rule_content(var_f317);
}
if (varonce349) {
var350 = varonce349;
} else {
var351 = "\n\n";
var352 = 2;
var353 = standard___standard__NativeString___to_s_with_length(var351, var352);
var350 = var353;
varonce349 = var350;
}
var354 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var354 = array_instance Array[Object] */
var355 = 3;
var356 = NEW_standard__NativeArray(var355, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var356)->values[0] = (val*) var344;
((struct instance_standard__NativeArray*)var356)->values[1] = (val*) var348;
((struct instance_standard__NativeArray*)var356)->values[2] = (val*) var350;
{
((void (*)(val* self, val* p0, long p1))(var354->class->vft[COLOR_standard__array__Array__with_native]))(var354, var356, var355) /* with_native on <var354:Array[Object]>*/;
}
}
{
var357 = ((val* (*)(val* self))(var354->class->vft[COLOR_standard__string__Object__to_s]))(var354) /* to_s on <var354:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var357); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
var358 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(var_f317);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_dep_rules, var358); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
var359 = nit___nit__ExternCFile___ExternFile__compiles_to_o_file(var_f317);
}
if (var359){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ofiles, var_o319); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
} else {
}
{
var360 = nit___nit__ExternFile___add_to_jar(var_f317);
}
if (var360){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_java_files, var_f317); /* Direct call array#Array#add on <var_java_files:Array[ExternFile]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_314); /* Direct call array#ArrayIterator#next on <var_314:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label361;
}
}
BREAK_label361: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_314) on <var_314:ArrayIterator[ExternFile]> */
RET_LABEL362:(void)0;
}
}
{
var363 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_java_files);
}
var364 = !var363;
if (var364){
if (varonce365) {
var366 = varonce365;
} else {
var367 = ".jar";
var368 = 4;
var369 = standard___standard__NativeString___to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
var370 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var370 = array_instance Array[Object] */
var371 = 2;
var372 = NEW_standard__NativeArray(var371, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var372)->values[0] = (val*) var_outpath;
((struct instance_standard__NativeArray*)var372)->values[1] = (val*) var366;
{
((void (*)(val* self, val* p0, long p1))(var370->class->vft[COLOR_standard__array__Array__with_native]))(var370, var372, var371) /* with_native on <var370:Array[Object]>*/;
}
}
{
var373 = ((val* (*)(val* self))(var370->class->vft[COLOR_standard__string__Object__to_s]))(var370) /* to_s on <var370:Array[Object]>*/;
}
var_jar_file = var373;
var374 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var374); /* Direct call array#Array#init on <var374:Array[String]>*/
}
var_class_files_array = var374;
var_375 = var_java_files;
{
var376 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_375);
}
var_377 = var376;
for(;;) {
{
var378 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_377);
}
if (var378){
{
var379 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_377);
}
var_f380 = var379;
{
var381 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(var_f380);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_class_files_array, var381); /* Direct call array#Array#add on <var_class_files_array:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_377); /* Direct call array#ArrayIterator#next on <var_377:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label382;
}
}
BREAK_label382: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_377) on <var_377:ArrayIterator[ExternFile]> */
RET_LABEL383:(void)0;
}
}
if (varonce384) {
var385 = varonce384;
} else {
var386 = " ";
var387 = 1;
var388 = standard___standard__NativeString___to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
{
var389 = standard__string___Collection___join(var_class_files_array, var385);
}
var_class_files = var389;
if (varonce390) {
var391 = varonce390;
} else {
var392 = ": ";
var393 = 2;
var394 = standard___standard__NativeString___to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
if (varonce395) {
var396 = varonce395;
} else {
var397 = "\n";
var398 = 1;
var399 = standard___standard__NativeString___to_s_with_length(var397, var398);
var396 = var399;
varonce395 = var396;
}
var400 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var400 = array_instance Array[Object] */
var401 = 4;
var402 = NEW_standard__NativeArray(var401, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var402)->values[0] = (val*) var_jar_file;
((struct instance_standard__NativeArray*)var402)->values[1] = (val*) var391;
((struct instance_standard__NativeArray*)var402)->values[2] = (val*) var_class_files;
((struct instance_standard__NativeArray*)var402)->values[3] = (val*) var396;
{
((void (*)(val* self, val* p0, long p1))(var400->class->vft[COLOR_standard__array__Array__with_native]))(var400, var402, var401) /* with_native on <var400:Array[Object]>*/;
}
}
{
var403 = ((val* (*)(val* self))(var400->class->vft[COLOR_standard__string__Object__to_s]))(var400) /* to_s on <var400:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var403); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce404) {
var405 = varonce404;
} else {
var406 = "\11jar cf ";
var407 = 8;
var408 = standard___standard__NativeString___to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
if (varonce409) {
var410 = varonce409;
} else {
var411 = " ";
var412 = 1;
var413 = standard___standard__NativeString___to_s_with_length(var411, var412);
var410 = var413;
varonce409 = var410;
}
if (varonce414) {
var415 = varonce414;
} else {
var416 = "\n\n";
var417 = 2;
var418 = standard___standard__NativeString___to_s_with_length(var416, var417);
var415 = var418;
varonce414 = var415;
}
var419 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var419 = array_instance Array[Object] */
var420 = 5;
var421 = NEW_standard__NativeArray(var420, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var421)->values[0] = (val*) var405;
((struct instance_standard__NativeArray*)var421)->values[1] = (val*) var_jar_file;
((struct instance_standard__NativeArray*)var421)->values[2] = (val*) var410;
((struct instance_standard__NativeArray*)var421)->values[3] = (val*) var_class_files;
((struct instance_standard__NativeArray*)var421)->values[4] = (val*) var415;
{
((void (*)(val* self, val* p0, long p1))(var419->class->vft[COLOR_standard__array__Array__with_native]))(var419, var421, var420) /* with_native on <var419:Array[Object]>*/;
}
}
{
var422 = ((val* (*)(val* self))(var419->class->vft[COLOR_standard__string__Object__to_s]))(var419) /* to_s on <var419:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var422); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_dep_rules, var_jar_file); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
} else {
}
if (varonce423) {
var424 = varonce423;
} else {
var425 = "";
var426 = 0;
var427 = standard___standard__NativeString___to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
var_pkg = var424;
{
var428 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var429 = !var428;
if (var429){
if (varonce430) {
var431 = varonce430;
} else {
var432 = "`pkg-config --libs ";
var433 = 19;
var434 = standard___standard__NativeString___to_s_with_length(var432, var433);
var431 = var434;
varonce430 = var431;
}
if (varonce435) {
var436 = varonce435;
} else {
var437 = " ";
var438 = 1;
var439 = standard___standard__NativeString___to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
{
var440 = standard__string___Collection___join(var_pkgconfigs, var436);
}
if (varonce441) {
var442 = varonce441;
} else {
var443 = "`";
var444 = 1;
var445 = standard___standard__NativeString___to_s_with_length(var443, var444);
var442 = var445;
varonce441 = var442;
}
var446 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var446 = array_instance Array[Object] */
var447 = 3;
var448 = NEW_standard__NativeArray(var447, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var448)->values[0] = (val*) var431;
((struct instance_standard__NativeArray*)var448)->values[1] = (val*) var440;
((struct instance_standard__NativeArray*)var448)->values[2] = (val*) var442;
{
((void (*)(val* self, val* p0, long p1))(var446->class->vft[COLOR_standard__array__Array__with_native]))(var446, var448, var447) /* with_native on <var446:Array[Object]>*/;
}
}
{
var449 = ((val* (*)(val* self))(var446->class->vft[COLOR_standard__string__Object__to_s]))(var446) /* to_s on <var446:Array[Object]>*/;
}
var_pkg = var449;
} else {
}
if (varonce450) {
var451 = varonce450;
} else {
var452 = ": ";
var453 = 2;
var454 = standard___standard__NativeString___to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = " ";
var458 = 1;
var459 = standard___standard__NativeString___to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
{
var460 = standard__string___Collection___join(var_dep_rules, var456);
}
if (varonce461) {
var462 = varonce461;
} else {
var463 = "\n\11$(CC) $(LDFLAGS) -o ";
var464 = 22;
var465 = standard___standard__NativeString___to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
{
var466 = standard___standard__Text___escape_to_sh(var_outpath);
}
if (varonce467) {
var468 = varonce467;
} else {
var469 = " ";
var470 = 1;
var471 = standard___standard__NativeString___to_s_with_length(var469, var470);
var468 = var471;
varonce467 = var468;
}
if (varonce472) {
var473 = varonce472;
} else {
var474 = " ";
var475 = 1;
var476 = standard___standard__NativeString___to_s_with_length(var474, var475);
var473 = var476;
varonce472 = var473;
}
{
var477 = standard__string___Collection___join(var_ofiles, var473);
}
if (varonce478) {
var479 = varonce478;
} else {
var480 = " $(LDLIBS) ";
var481 = 11;
var482 = standard___standard__NativeString___to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
if (varonce483) {
var484 = varonce483;
} else {
var485 = "\n\n";
var486 = 2;
var487 = standard___standard__NativeString___to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
var488 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var488 = array_instance Array[Object] */
var489 = 10;
var490 = NEW_standard__NativeArray(var489, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var490)->values[0] = (val*) var_outpath;
((struct instance_standard__NativeArray*)var490)->values[1] = (val*) var451;
((struct instance_standard__NativeArray*)var490)->values[2] = (val*) var460;
((struct instance_standard__NativeArray*)var490)->values[3] = (val*) var462;
((struct instance_standard__NativeArray*)var490)->values[4] = (val*) var466;
((struct instance_standard__NativeArray*)var490)->values[5] = (val*) var468;
((struct instance_standard__NativeArray*)var490)->values[6] = (val*) var477;
((struct instance_standard__NativeArray*)var490)->values[7] = (val*) var479;
((struct instance_standard__NativeArray*)var490)->values[8] = (val*) var_pkg;
((struct instance_standard__NativeArray*)var490)->values[9] = (val*) var484;
{
((void (*)(val* self, val* p0, long p1))(var488->class->vft[COLOR_standard__array__Array__with_native]))(var488, var490, var489) /* with_native on <var488:Array[Object]>*/;
}
}
{
var491 = ((val* (*)(val* self))(var488->class->vft[COLOR_standard__string__Object__to_s]))(var488) /* to_s on <var488:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var491); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce492) {
var493 = varonce492;
} else {
var494 = "clean:\n\11rm ";
var495 = 11;
var496 = standard___standard__NativeString___to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
if (varonce497) {
var498 = varonce497;
} else {
var499 = " ";
var500 = 1;
var501 = standard___standard__NativeString___to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
{
var502 = standard__string___Collection___join(var_ofiles, var498);
}
if (varonce503) {
var504 = varonce503;
} else {
var505 = " 2>/dev/null\n";
var506 = 13;
var507 = standard___standard__NativeString___to_s_with_length(var505, var506);
var504 = var507;
varonce503 = var504;
}
var508 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var508 = array_instance Array[Object] */
var509 = 3;
var510 = NEW_standard__NativeArray(var509, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var510)->values[0] = (val*) var493;
((struct instance_standard__NativeArray*)var510)->values[1] = (val*) var502;
((struct instance_standard__NativeArray*)var510)->values[2] = (val*) var504;
{
((void (*)(val* self, val* p0, long p1))(var508->class->vft[COLOR_standard__array__Array__with_native]))(var508, var510, var509) /* with_native on <var508:Array[Object]>*/;
}
}
{
var511 = ((val* (*)(val* self))(var508->class->vft[COLOR_standard__string__Object__to_s]))(var508) /* to_s on <var508:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var511); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var514 = ((short int (*)(val* self, val* p0))(var_outpath->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_outpath, var_other) /* == on <var_outpath:String>*/;
}
var515 = !var514;
var512 = var515;
goto RET_LABEL513;
RET_LABEL513:(void)0;
}
}
if (var512){
if (varonce516) {
var517 = varonce516;
} else {
var518 = "\11rm -- ";
var519 = 7;
var520 = standard___standard__NativeString___to_s_with_length(var518, var519);
var517 = var520;
varonce516 = var517;
}
{
var521 = standard___standard__Text___escape_to_sh(var_outpath);
}
if (varonce522) {
var523 = varonce522;
} else {
var524 = " 2>/dev/null\n";
var525 = 13;
var526 = standard___standard__NativeString___to_s_with_length(var524, var525);
var523 = var526;
varonce522 = var523;
}
var527 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var527 = array_instance Array[Object] */
var528 = 3;
var529 = NEW_standard__NativeArray(var528, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var529)->values[0] = (val*) var517;
((struct instance_standard__NativeArray*)var529)->values[1] = (val*) var521;
((struct instance_standard__NativeArray*)var529)->values[2] = (val*) var523;
{
((void (*)(val* self, val* p0, long p1))(var527->class->vft[COLOR_standard__array__Array__with_native]))(var527, var529, var528) /* with_native on <var527:Array[Object]>*/;
}
}
{
var530 = ((val* (*)(val* self))(var527->class->vft[COLOR_standard__string__Object__to_s]))(var527) /* to_s on <var527:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_makefile, var530); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
} else {
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_makefile); /* Direct call file#OFStream#close on <var_makefile:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var533 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var533 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var531 = var533;
RET_LABEL532:(void)0;
}
}
if (varonce534) {
var535 = varonce534;
} else {
var536 = "Generated makefile: ";
var537 = 20;
var538 = standard___standard__NativeString___to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
var539 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var539 = array_instance Array[Object] */
var540 = 2;
var541 = NEW_standard__NativeArray(var540, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var541)->values[0] = (val*) var535;
((struct instance_standard__NativeArray*)var541)->values[1] = (val*) var_makepath;
{
((void (*)(val* self, val* p0, long p1))(var539->class->vft[COLOR_standard__array__Array__with_native]))(var539, var541, var540) /* with_native on <var539:Array[Object]>*/;
}
}
{
var542 = ((val* (*)(val* self))(var539->class->vft[COLOR_standard__string__Object__to_s]))(var539) /* to_s on <var539:Array[Object]>*/;
}
var543 = 2;
{
nit___nit__ToolContext___info(var531, var542, var543); /* Direct call toolcontext#ToolContext#info on <var531:ToolContext>*/
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = "/Makefile";
var547 = 9;
var548 = standard___standard__NativeString___to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 2;
var551 = NEW_standard__NativeArray(var550, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var551)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var551)->values[1] = (val*) var545;
{
((void (*)(val* self, val* p0, long p1))(var549->class->vft[COLOR_standard__array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
}
{
var552 = ((val* (*)(val* self))(var549->class->vft[COLOR_standard__string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
}
{
standard__file___String___file_copy_to(var_makepath, var552); /* Direct call file#String#file_copy_to on <var_makepath:String>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: MakefileToolchain, AbstractCompiler, String) */
void nit___nit__MakefileToolchain___compile_c_code(val* self, val* p0, val* p1) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : String */;
val* var_makename /* var makename: String */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionString */;
val* var9 /* : OptionString */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
val* var_makeflags /* var makeflags: nullable String */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
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
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
long var42 /* : Int */;
val* var43 /* : ToolContext */;
val* var45 /* : ToolContext */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var53 /* : Bool */;
val* var54 /* : Sys */;
val* var56 /* : Sys */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
long var81 /* : Int */;
val* var82 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var83 /* : Sys */;
val* var85 /* : Sys */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
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
val* var106 /* : Array[Object] */;
long var107 /* : Int */;
val* var108 /* : NativeArray[Object] */;
val* var109 /* : String */;
long var110 /* : Int */;
val* var111 /* : nullable Object */;
long var112 /* : Int */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
long var116 /* : Int */;
short int var117 /* : Bool */;
val* var118 /* : ToolContext */;
val* var120 /* : ToolContext */;
val* var121 /* : null */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
var_compiler = p0;
var_compile_dir = p1;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__MakefileToolchain___makefile_name(self, var);
}
var_makename = var3;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var6 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 37);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionString> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionString> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_makeflags = var10;
var13 = NULL;
if (var_makeflags == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
var15 = ((short int (*)(val* self, val* p0))(var_makeflags->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_makeflags, var13) /* == on <var_makeflags:nullable String>*/;
var14 = var15;
}
if (var14){
if (varonce) {
var16 = varonce;
} else {
var17 = "";
var18 = 0;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
var_makeflags = var16;
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var22 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "make -B -C ";
var26 = 11;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " -f ";
var31 = 4;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " -j 4 ";
var36 = 6;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 6;
var40 = NEW_standard__NativeArray(var39, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var40)->values[0] = (val*) var24;
((struct instance_standard__NativeArray*)var40)->values[1] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var40)->values[2] = (val*) var29;
((struct instance_standard__NativeArray*)var40)->values[3] = (val*) var_makename;
((struct instance_standard__NativeArray*)var40)->values[4] = (val*) var34;
((struct instance_standard__NativeArray*)var40)->values[5] = (val*) var_makeflags;
{
((void (*)(val* self, val* p0, long p1))(var38->class->vft[COLOR_standard__array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
var42 = 2;
{
nit___nit__ToolContext___info(var20, var41, var42); /* Direct call toolcontext#ToolContext#info on <var20:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var45 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var43) on <var43:ToolContext> */
var48 = var43->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var43:ToolContext> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = 3;
{
{ /* Inline kernel#Int#>= (var46,var49) on <var46:Int> */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var53 = var46 >= var49;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var56 = glob_sys;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = "make -B -C ";
var60 = 11;
var61 = standard___standard__NativeString___to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = " -f ";
var65 = 4;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = " -j 4 ";
var70 = 6;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = " 2>&1";
var75 = 5;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 7;
var79 = NEW_standard__NativeArray(var78, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var79)->values[0] = (val*) var58;
((struct instance_standard__NativeArray*)var79)->values[1] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var79)->values[2] = (val*) var63;
((struct instance_standard__NativeArray*)var79)->values[3] = (val*) var_makename;
((struct instance_standard__NativeArray*)var79)->values[4] = (val*) var68;
((struct instance_standard__NativeArray*)var79)->values[5] = (val*) var_makeflags;
((struct instance_standard__NativeArray*)var79)->values[6] = (val*) var73;
{
((void (*)(val* self, val* p0, long p1))(var77->class->vft[COLOR_standard__array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val* self))(var77->class->vft[COLOR_standard__string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
var81 = standard__exec___Sys___system(var54, var80);
}
var82 = BOX_standard__Int(var81); /* autobox from Int to nullable Object */
var_res = var82;
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var85 = glob_sys;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "make -B -C ";
var89 = 11;
var90 = standard___standard__NativeString___to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = " -f ";
var94 = 4;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = " -j 4 ";
var99 = 6;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = " 2>&1 >/dev/null";
var104 = 16;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 7;
var108 = NEW_standard__NativeArray(var107, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var108)->values[0] = (val*) var87;
((struct instance_standard__NativeArray*)var108)->values[1] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var108)->values[2] = (val*) var92;
((struct instance_standard__NativeArray*)var108)->values[3] = (val*) var_makename;
((struct instance_standard__NativeArray*)var108)->values[4] = (val*) var97;
((struct instance_standard__NativeArray*)var108)->values[5] = (val*) var_makeflags;
((struct instance_standard__NativeArray*)var108)->values[6] = (val*) var102;
{
((void (*)(val* self, val* p0, long p1))(var106->class->vft[COLOR_standard__array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
}
{
var109 = ((val* (*)(val* self))(var106->class->vft[COLOR_standard__string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
}
{
var110 = standard__exec___Sys___system(var83, var109);
}
var111 = BOX_standard__Int(var110); /* autobox from Int to nullable Object */
var_res = var111;
}
var112 = 0;
{
{ /* Inline kernel#Int#!= (var_res,var112) on <var_res:nullable Object(Int)> */
var115 = (var_res != NULL) && (var_res->class == &class_standard__Int);
if (var115) {
var116 = ((struct instance_standard__Int*)var_res)->value; /* autounbox from nullable Object to Int */;
var115 = (var116 == var112);
}
var117 = !var115;
var113 = var117;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
if (var113){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var120 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 136);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
var121 = NULL;
if (varonce122) {
var123 = varonce122;
} else {
var124 = "make failed! Error code: ";
var125 = 25;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = ".";
var130 = 1;
var131 = standard___standard__NativeString___to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 3;
var134 = NEW_standard__NativeArray(var133, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var134)->values[0] = (val*) var123;
((struct instance_standard__NativeArray*)var134)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var134)->values[2] = (val*) var128;
{
((void (*)(val* self, val* p0, long p1))(var132->class->vft[COLOR_standard__array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val* self))(var132->class->vft[COLOR_standard__string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var118, var121, var135); /* Direct call toolcontext#ToolContext#error on <var118:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#names for (self: AbstractCompiler): HashMap[String, String] */
val* nit___nit__AbstractCompiler___names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 471);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule for (self: AbstractCompiler): MModule */
val* nit___nit__AbstractCompiler___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule= for (self: AbstractCompiler, MModule) */
void nit___nit__AbstractCompiler___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = p0; /* _mainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule for (self: AbstractCompiler): MModule */
val* nit___nit__AbstractCompiler___realmainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 478);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule= for (self: AbstractCompiler, MModule) */
void nit___nit__AbstractCompiler___realmainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val = p0; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder for (self: AbstractCompiler): ModelBuilder */
val* nit___nit__AbstractCompiler___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder= for (self: AbstractCompiler, ModelBuilder) */
void nit___nit__AbstractCompiler___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val = p0; /* _modelbuilder on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#target_platform for (self: AbstractCompiler): Platform */
val* nit___nit__AbstractCompiler___target_platform(val* self) {
val* var /* : Platform */;
val* var1 /* : Platform */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 487);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#target_platform= for (self: AbstractCompiler, Platform) */
void nit___nit__AbstractCompiler___target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val = p0; /* _target_platform on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#init for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___standard__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var4 /* : Platform */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : nullable Platform */;
val* var9 /* : Platform */;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule= (self,var) on <self:AbstractCompiler> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val = var; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var7 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit__platform___MModule___target_platform(var5);
}
if (var8!=NULL) {
var4 = var8;
} else {
var9 = NEW_nit__Platform(&type_nit__Platform);
{
{ /* Inline kernel#Object#init (var9) on <var9:Platform> */
RET_LABEL10:(void)0;
}
}
var4 = var9;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform= (self,var4) on <self:AbstractCompiler> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val = var4; /* _target_platform on <self:AbstractCompiler> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#new_file for (self: AbstractCompiler, String): CodeFile */
val* nit___nit__AbstractCompiler___new_file(val* self, val* p0) {
val* var /* : CodeFile */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
val* var14 /* : List[CodeFile] */;
val* var16 /* : List[CodeFile] */;
short int var17 /* : Bool */;
val* var18 /* : CodeFile */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : String */;
val* var_f /* var f: CodeFile */;
val* var23 /* : List[CodeFile] */;
val* var25 /* : List[CodeFile] */;
val* var26 /* : List[CodeFile] */;
val* var28 /* : List[CodeFile] */;
val* var29 /* : nullable Object */;
val* var30 /* : CodeFile */;
val* var_f31 /* var f: CodeFile */;
val* var32 /* : List[CodeFile] */;
val* var34 /* : List[CodeFile] */;
var_name = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 41);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionBool> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionBool> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = ((struct instance_standard__Bool*)var10)->value; /* autounbox from nullable Object to Bool */;
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var14);
}
if (var17){
var18 = NEW_nit__CodeFile(&type_nit__CodeFile);
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__MModule___nit__model_base__MEntity__c_name(var19);
}
{
((void (*)(val* self, val* p0))(var18->class->vft[COLOR_nit__abstract_compiler__CodeFile__name_61d]))(var18, var22) /* name= on <var18:CodeFile>*/;
}
{
((void (*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18) /* init on <var18:CodeFile>*/;
}
var_f = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var23, var_f); /* Direct call abstract_collection#Sequence#add on <var23:List[CodeFile]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var28 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__List___standard__abstract_collection__Collection__first(var26);
}
var = var29;
goto RET_LABEL;
} else {
}
var30 = NEW_nit__CodeFile(&type_nit__CodeFile);
{
((void (*)(val* self, val* p0))(var30->class->vft[COLOR_nit__abstract_compiler__CodeFile__name_61d]))(var30, var_name) /* name= on <var30:CodeFile>*/;
}
{
((void (*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30) /* init on <var30:CodeFile>*/;
}
var_f31 = var30;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var32, var_f31); /* Direct call abstract_collection#Sequence#add on <var32:List[CodeFile]>*/
}
var = var_f31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files for (self: AbstractCompiler): List[CodeFile] */
val* nit___nit__AbstractCompiler___files(val* self) {
val* var /* : List[CodeFile] */;
val* var1 /* : List[CodeFile] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 516);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header for (self: AbstractCompiler): CodeWriter */
val* nit___nit__AbstractCompiler___header(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header= for (self: AbstractCompiler, CodeWriter) */
void nit___nit__AbstractCompiler___header_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val = p0; /* _header on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#linker_script for (self: AbstractCompiler): Array[String] */
val* nit___nit__AbstractCompiler___linker_script(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 526);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#provide_declaration for (self: AbstractCompiler, String, String) */
void nit___nit__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_s /* var s: String */;
val* var /* : HashMap[String, String] */;
val* var2 /* : HashMap[String, String] */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[String, String] */;
val* var6 /* : HashMap[String, String] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[String, String] */;
val* var11 /* : HashMap[String, String] */;
var_key = p0;
var_s = p1;
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 539);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__MapRead___has_key(var, var_key);
}
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 539);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var4, var_key);
}
{
var8 = ((short int (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var_s) /* == on <var7:nullable Object(String)>*/;
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 534);
show_backtrace(1);
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 539);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var9, var_key, var_s); /* Direct call hash_collection#HashMap#[]= on <var9:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations for (self: AbstractCompiler): HashMap[String, String] */
val* nit___nit__AbstractCompiler___provided_declarations(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 539);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations for (self: AbstractCompiler): HashMap[String, ANode] */
val* nit___nit__AbstractCompiler___requirers_of_declarations(val* self) {
val* var /* : HashMap[String, ANode] */;
val* var1 /* : HashMap[String, ANode] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 541);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___build_c_to_nit_bindings(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var6 /* : OFStream */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
val* var_stream /* var stream: OFStream */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : HashMap[String, String] */;
val* var62 /* : HashMap[String, String] */;
long var63 /* : Int */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : Object */;
val* var73 /* : String */;
val* var74 /* : HashMap[String, String] */;
val* var76 /* : HashMap[String, String] */;
val* var77 /* : RemovableCollection[nullable Object] */;
val* var79 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[String] */;
val* var80 /* : Iterator[nullable Object] */;
val* var_81 /* var : Iterator[String] */;
short int var82 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_i /* var i: String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
val* var95 /* : HashMap[String, String] */;
val* var97 /* : HashMap[String, String] */;
val* var98 /* : nullable Object */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : HashMap[String, String] */;
val* var123 /* : HashMap[String, String] */;
long var124 /* : Int */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : Array[Object] */;
long var131 /* : Int */;
val* var132 /* : NativeArray[Object] */;
val* var133 /* : Object */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : OFStream */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : Array[Object] */;
long var182 /* : Int */;
val* var183 /* : NativeArray[Object] */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : Array[ExternFile] */;
val* var192 /* : Array[ExternFile] */;
val* var193 /* : ExternCFile */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
val* var199 /* : Array[Object] */;
long var200 /* : Int */;
val* var201 /* : NativeArray[Object] */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#ModelBuilder#compile_dir (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__abstract_compiler__ModelBuilder___compile_dir].val; /* _compile_dir on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 117);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_compile_dir = var3;
var6 = NEW_standard__OFStream(&type_standard__OFStream);
if (varonce) {
var7 = varonce;
} else {
var8 = "/c_functions_hash.c";
var9 = 19;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 2;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
{
standard___standard__OFStream___open(var6, var14); /* Direct call file#OFStream#open on <var6:OFStream>*/
}
var_stream = var6;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "#include <string.h>\n";
var18 = 20;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var16); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "#include <stdlib.h>\n";
var23 = 20;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var21); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "#include \"c_functions_hash.h\"\n";
var28 = 30;
var29 = standard___standard__NativeString___to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var26); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var33 = 68;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var31); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "const char* get_nit_name(register const char* procproc, register unsigned int len){\n";
var38 = 84;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var36); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "char* procname = malloc(len+1);";
var43 = 31;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var41); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "memcpy(procname, procproc, len);";
var48 = 32;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var46); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "procname[len] = \'\\0\';";
var53 = 21;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var51); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "static const C_Nit_Names map[";
var58 = 29;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var62 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 471);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var60);
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "] = {\n";
var67 = 6;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var56;
var72 = BOX_standard__Int(var63); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var72;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var73); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var76 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 471);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var74) on <var74:HashMap[String, String]> */
var79 = var74->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <var74:HashMap[String, String]> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_ = var77;
{
var80 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:RemovableCollection[String]>*/;
}
var_81 = var80;
for(;;) {
{
var82 = ((short int (*)(val* self))(var_81->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_81) /* is_ok on <var_81:Iterator[String]>*/;
}
if (var82){
{
var83 = ((val* (*)(val* self))(var_81->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_81) /* item on <var_81:Iterator[String]>*/;
}
var_i = var83;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "{\"";
var87 = 2;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var85); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
var89 = standard___standard__Text___escape_to_c(var_i);
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var89); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = "\",\"";
var93 = 3;
var94 = standard___standard__NativeString___to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var91); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var97 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 471);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var95, var_i);
}
{
var99 = standard___standard__Text___escape_to_c(var98);
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var99); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "\"},\n";
var103 = 4;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var101); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
((void (*)(val* self))(var_81->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_81) /* next on <var_81:Iterator[String]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_81) on <var_81:Iterator[String]> */
RET_LABEL105:(void)0;
}
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "};\n";
var109 = 3;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var107); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = "int i;";
var114 = 6;
var115 = standard___standard__NativeString___to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var112); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "for(i = 0; i < ";
var119 = 15;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var123 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 471);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var121);
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "; i++){";
var128 = 7;
var129 = standard___standard__NativeString___to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var130 = array_instance Array[Object] */
var131 = 3;
var132 = NEW_standard__NativeArray(var131, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var132)->values[0] = (val*) var117;
var133 = BOX_standard__Int(var124); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var132)->values[1] = (val*) var133;
((struct instance_standard__NativeArray*)var132)->values[2] = (val*) var126;
{
((void (*)(val* self, val* p0, long p1))(var130->class->vft[COLOR_standard__array__Array__with_native]))(var130, var132, var131) /* with_native on <var130:Array[Object]>*/;
}
}
{
var134 = ((val* (*)(val* self))(var130->class->vft[COLOR_standard__string__Object__to_s]))(var130) /* to_s on <var130:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var134); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "if(strcmp(procname,map[i].name) == 0){";
var138 = 38;
var139 = standard___standard__NativeString___to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var136); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "free(procname);";
var143 = 15;
var144 = standard___standard__NativeString___to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var141); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "return map[i].nit_name;";
var148 = 23;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var146); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = "}";
var153 = 1;
var154 = standard___standard__NativeString___to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var151); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "}";
var158 = 1;
var159 = standard___standard__NativeString___to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var156); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = "free(procname);";
var163 = 15;
var164 = standard___standard__NativeString___to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var161); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "return NULL;";
var168 = 12;
var169 = standard___standard__NativeString___to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var166); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "}\n";
var173 = 2;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var171); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_stream); /* Direct call file#OFStream#close on <var_stream:OFStream>*/
}
var175 = NEW_standard__OFStream(&type_standard__OFStream);
if (varonce176) {
var177 = varonce176;
} else {
var178 = "/c_functions_hash.h";
var179 = 19;
var180 = standard___standard__NativeString___to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
var181 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var181 = array_instance Array[Object] */
var182 = 2;
var183 = NEW_standard__NativeArray(var182, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var183)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var183)->values[1] = (val*) var177;
{
((void (*)(val* self, val* p0, long p1))(var181->class->vft[COLOR_standard__array__Array__with_native]))(var181, var183, var182) /* with_native on <var181:Array[Object]>*/;
}
}
{
var184 = ((val* (*)(val* self))(var181->class->vft[COLOR_standard__string__Object__to_s]))(var181) /* to_s on <var181:Array[Object]>*/;
}
{
standard___standard__OFStream___open(var175, var184); /* Direct call file#OFStream#open on <var175:OFStream>*/
}
var_stream = var175;
if (varonce185) {
var186 = varonce185;
} else {
var187 = "const char* get_nit_name(register const char* procname, register unsigned int len);\n";
var188 = 84;
var189 = standard___standard__NativeString___to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var_stream, var186); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
standard___standard__OFStream___standard__stream__IOS__close(var_stream); /* Direct call file#OFStream#close on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (self) on <self:AbstractCompiler> */
var192 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 928);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
var193 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
if (varonce194) {
var195 = varonce194;
} else {
var196 = "/c_functions_hash.c";
var197 = 19;
var198 = standard___standard__NativeString___to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
var199 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var199 = array_instance Array[Object] */
var200 = 2;
var201 = NEW_standard__NativeArray(var200, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var201)->values[0] = (val*) var_compile_dir;
((struct instance_standard__NativeArray*)var201)->values[1] = (val*) var195;
{
((void (*)(val* self, val* p0, long p1))(var199->class->vft[COLOR_standard__array__Array__with_native]))(var199, var201, var200) /* with_native on <var199:Array[Object]>*/;
}
}
{
var202 = ((val* (*)(val* self))(var199->class->vft[COLOR_standard__string__Object__to_s]))(var199) /* to_s on <var199:Array[Object]>*/;
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "";
var206 = 0;
var207 = standard___standard__NativeString___to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
{
((void (*)(val* self, val* p0))(var193->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var193, var202) /* filename= on <var193:ExternCFile>*/;
}
{
((void (*)(val* self, val* p0))(var193->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var193, var204) /* cflags= on <var193:ExternCFile>*/;
}
{
((void (*)(val* self))(var193->class->vft[COLOR_standard__kernel__Object__init]))(var193) /* init on <var193:ExternCFile>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var190, var193); /* Direct call array#Array#add on <var190:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___compile_header(val* self) {
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
val* var47 /* : CodeWriter */;
val* var49 /* : CodeWriter */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : CodeWriter */;
val* var57 /* : CodeWriter */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : CodeWriter */;
val* var65 /* : CodeWriter */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : CodeWriter */;
val* var73 /* : CodeWriter */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : ModelBuilder */;
val* var81 /* : ModelBuilder */;
val* var82 /* : ToolContext */;
val* var84 /* : ToolContext */;
val* var85 /* : OptionArray */;
val* var87 /* : OptionArray */;
val* var88 /* : nullable Object */;
val* var90 /* : nullable Object */;
val* var_gccd_disable /* var gccd_disable: Array[String] */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
short int var97 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
short int var103 /* : Bool */;
val* var104 /* : CodeWriter */;
val* var106 /* : CodeWriter */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : CodeWriter */;
val* var114 /* : CodeWriter */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
short int var120 /* : Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
short int var126 /* : Bool */;
short int var_127 /* var : Bool */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
short int var133 /* : Bool */;
val* var134 /* : CodeWriter */;
val* var136 /* : CodeWriter */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
val* var142 /* : CodeWriter */;
val* var144 /* : CodeWriter */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
short int var155 /* : Bool */;
val* var156 /* : CodeWriter */;
val* var158 /* : CodeWriter */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
val* var164 /* : CodeWriter */;
val* var166 /* : CodeWriter */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : CodeWriter */;
val* var174 /* : CodeWriter */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var180 /* : CodeWriter */;
val* var182 /* : CodeWriter */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : CodeWriter */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : CodeWriter */;
val* var198 /* : CodeWriter */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : FlatString */;
val* var204 /* : CodeWriter */;
val* var206 /* : CodeWriter */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (varonce) {
var3 = varonce;
} else {
var4 = "#include <stdlib.h>";
var5 = 19;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
nit___nit__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var9 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "#include <stdio.h>";
var13 = 18;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
nit___nit__CodeWriter___add_decl(var7, var11); /* Direct call abstract_compiler#CodeWriter#add_decl on <var7:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var17 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "#include <string.h>";
var21 = 19;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
nit___nit__CodeWriter___add_decl(var15, var19); /* Direct call abstract_compiler#CodeWriter#add_decl on <var15:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "#include \"gc_chooser.h\"";
var29 = 23;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
nit___nit__CodeWriter___add_decl(var23, var27); /* Direct call abstract_compiler#CodeWriter#add_decl on <var23:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "#ifdef ANDROID";
var37 = 14;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
nit___nit__CodeWriter___add_decl(var31, var35); /* Direct call abstract_compiler#CodeWriter#add_decl on <var31:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var41 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "\11#include <android/log.h>";
var45 = 25;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
nit___nit__CodeWriter___add_decl(var39, var43); /* Direct call abstract_compiler#CodeWriter#add_decl on <var39:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var49 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "\11#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)";
var53 = 89;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
nit___nit__CodeWriter___add_decl(var47, var51); /* Direct call abstract_compiler#CodeWriter#add_decl on <var47:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "#else";
var61 = 5;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
nit___nit__CodeWriter___add_decl(var55, var59); /* Direct call abstract_compiler#CodeWriter#add_decl on <var55:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var65 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "\11#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)";
var69 = 54;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
nit___nit__CodeWriter___add_decl(var63, var67); /* Direct call abstract_compiler#CodeWriter#add_decl on <var63:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var73 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "#endif";
var77 = 6;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
nit___nit__CodeWriter___add_decl(var71, var75); /* Direct call abstract_compiler#CodeWriter#add_decl on <var71:CodeWriter>*/
}
{
((void (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__compile_header_structs]))(self) /* compile_header_structs on <self:AbstractCompiler>*/;
}
{
nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_nitni_structs on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var81 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var79) on <var79:ModelBuilder> */
var84 = var79->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var79:ModelBuilder> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (var82) on <var82:ToolContext> */
var87 = var82->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var82:ToolContext> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 67);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline opts#Option#value (var85) on <var85:OptionArray> */
var90 = var85->attrs[COLOR_opts__Option___value].val; /* _value on <var85:OptionArray> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_gccd_disable = var88;
if (varonce92) {
var93 = varonce92;
} else {
var94 = "noreturn";
var95 = 8;
var96 = standard___standard__NativeString___to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var93);
}
var_ = var97;
if (var97){
var91 = var_;
} else {
if (varonce98) {
var99 = varonce98;
} else {
var100 = "all";
var101 = 3;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
var103 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var99);
}
var91 = var103;
}
if (var91){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var106 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "void show_backtrace(int);";
var110 = 25;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
nit___nit__CodeWriter___add_decl(var104, var108); /* Direct call abstract_compiler#CodeWriter#add_decl on <var104:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var114 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "void show_backtrace(int) __attribute__ ((noreturn));";
var118 = 52;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
nit___nit__CodeWriter___add_decl(var112, var116); /* Direct call abstract_compiler#CodeWriter#add_decl on <var112:CodeWriter>*/
}
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "likely";
var124 = 6;
var125 = standard___standard__NativeString___to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
{
var126 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var122);
}
var_127 = var126;
if (var126){
var120 = var_127;
} else {
if (varonce128) {
var129 = varonce128;
} else {
var130 = "all";
var131 = 3;
var132 = standard___standard__NativeString___to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
{
var133 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var129);
}
var120 = var133;
}
if (var120){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var136 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "#define likely(x)       (x)";
var140 = 27;
var141 = standard___standard__NativeString___to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
{
nit___nit__CodeWriter___add_decl(var134, var138); /* Direct call abstract_compiler#CodeWriter#add_decl on <var134:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var144 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "#define unlikely(x)     (x)";
var148 = 27;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
nit___nit__CodeWriter___add_decl(var142, var146); /* Direct call abstract_compiler#CodeWriter#add_decl on <var142:CodeWriter>*/
}
} else {
if (varonce150) {
var151 = varonce150;
} else {
var152 = "correct-likely";
var153 = 14;
var154 = standard___standard__NativeString___to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
var155 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var151);
}
if (var155){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var158 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = "#define likely(x)       __builtin_expect((x),0)";
var162 = 47;
var163 = standard___standard__NativeString___to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
nit___nit__CodeWriter___add_decl(var156, var160); /* Direct call abstract_compiler#CodeWriter#add_decl on <var156:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var166 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = "#define unlikely(x)     __builtin_expect((x),1)";
var170 = 47;
var171 = standard___standard__NativeString___to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
{
nit___nit__CodeWriter___add_decl(var164, var168); /* Direct call abstract_compiler#CodeWriter#add_decl on <var164:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var174 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = "#define likely(x)       __builtin_expect((x),1)";
var178 = 47;
var179 = standard___standard__NativeString___to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
nit___nit__CodeWriter___add_decl(var172, var176); /* Direct call abstract_compiler#CodeWriter#add_decl on <var172:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var182 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "#define unlikely(x)     __builtin_expect((x),0)";
var186 = 47;
var187 = standard___standard__NativeString___to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
nit___nit__CodeWriter___add_decl(var180, var184); /* Direct call abstract_compiler#CodeWriter#add_decl on <var180:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var190 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = "extern int glob_argc;";
var194 = 21;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
nit___nit__CodeWriter___add_decl(var188, var192); /* Direct call abstract_compiler#CodeWriter#add_decl on <var188:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var198 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
if (varonce199) {
var200 = varonce199;
} else {
var201 = "extern char **glob_argv;";
var202 = 24;
var203 = standard___standard__NativeString___to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
{
nit___nit__CodeWriter___add_decl(var196, var200); /* Direct call abstract_compiler#CodeWriter#add_decl on <var196:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var206 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = "extern val *glob_sys;";
var210 = 21;
var211 = standard___standard__NativeString___to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
nit___nit__CodeWriter___add_decl(var204, var208); /* Direct call abstract_compiler#CodeWriter#add_decl on <var204:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_structs for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 523);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (varonce) {
var3 = varonce;
} else {
var4 = "/* Native reference to Nit objects */\n/* This structure is used to represent every Nit type in extern methods and custom C code. */\nstruct nitni_ref {\n\11struct nitni_ref *next,\n\11\11*prev; /* adjacent global references in global list */\n\11int count; /* number of time this global reference has been marked */\n};\n\n/* List of global references from C code to Nit objects */\n/* Instanciated empty at init of Nit system and filled explicitly by user in C code */\nstruct nitni_global_ref_list_t {\n\11struct nitni_ref *head, *tail;\n};\nextern struct nitni_global_ref_list_t *nitni_global_ref_list;\n\n/* Initializer of global reference list */\nextern void nitni_global_ref_list_init();\n\n/* Intern function to add a global reference to the list */\nextern void nitni_global_ref_add( struct nitni_ref *ref );\n\n/* Intern function to remove a global reference from the list */\nextern void nitni_global_ref_remove( struct nitni_ref *ref );\n\n/* Increase count on an existing global reference */\nextern void nitni_global_ref_incr( struct nitni_ref *ref );\n\n/* Decrease count on an existing global reference */\nextern void nitni_global_ref_decr( struct nitni_ref *ref );\n";
var5 = 1146;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
nit___nit__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_finalizer_function for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___compile_finalizer_function(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : ModelBuilder */;
val* var31 /* : ModelBuilder */;
val* var32 /* : ToolContext */;
val* var34 /* : ToolContext */;
val* var35 /* : null */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
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
val* var52 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var53 /* : Array[RuntimeVariable] */;
long var54 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var55 /* : nullable RuntimeVariable */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__model___MModule___finalizable_type(var);
}
var_finalizable_type = var3;
var4 = NULL;
if (var_finalizable_type == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_finalizable_type,var4) on <var_finalizable_type:nullable MClassType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_finalizable_type,var_other) on <var_finalizable_type:nullable MClassType(MClassType)> */
var10 = var_finalizable_type == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var13 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (varonce) {
var14 = varonce;
} else {
var15 = "finalize";
var16 = 8;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var20 = var_finalizable_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit__model___MModule___try_get_primitive_method(var11, var14, var18);
}
var_finalize_meth = var21;
var22 = NULL;
if (var_finalize_meth == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_finalize_meth,var22) on <var_finalize_meth:nullable MMethod> */
var_other = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_finalize_meth,var_other) on <var_finalize_meth:nullable MMethod(MMethod)> */
var28 = var_finalize_meth == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var31 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var29) on <var29:ModelBuilder> */
var34 = var29->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var29:ModelBuilder> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = NULL;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "The `Finalizable` class doesn\'t declare the `finalize` method.";
var39 = 62;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
nit___nit__ToolContext___error(var32, var35, var37); /* Direct call toolcontext#ToolContext#error on <var32:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var41 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
}
var_v = var41;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "void gc_finalize (void *obj, void *client_data) {";
var45 = 49;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "obj";
var50 = 3;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
var52 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var48, var_finalizable_type);
}
var_recv = var52;
var53 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var54 = 1;
{
standard___standard__Array___with_capacity(var53, var54); /* Direct call array#Array#with_capacity on <var53:Array[RuntimeVariable]>*/
}
var_ = var53;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var55 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_finalize_meth, var_);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "}";
var59 = 1;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
