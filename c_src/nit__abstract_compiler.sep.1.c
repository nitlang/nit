#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* nit__abstract_compiler___ToolContext___opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 30);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 32);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 34);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 36);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 38);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 40);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 42);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 44);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 46);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 48);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 50);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 52);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 54);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 56);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 58);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_stacktrace for (self: ToolContext): OptionBool */
val* nit__abstract_compiler___ToolContext___opt_no_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 66);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 68);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 70);
fatal_exit(1);
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
val* var25 /* : NativeArray[Option] */;
val* var26 /* : OptionContext */;
val* var28 /* : OptionContext */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var34 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var37 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var40 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var43 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var46 /* : OptionBool */;
val* var47 /* : Array[Option] */;
val* var48 /* : NativeArray[Option] */;
val* var49 /* : OptionContext */;
val* var51 /* : OptionContext */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
val* var55 /* : OptionBool */;
val* var57 /* : OptionBool */;
val* var58 /* : OptionBool */;
val* var60 /* : OptionBool */;
val* var61 /* : Array[Option] */;
val* var62 /* : NativeArray[Option] */;
val* var63 /* : OptionContext */;
val* var65 /* : OptionContext */;
val* var66 /* : OptionBool */;
val* var68 /* : OptionBool */;
val* var69 /* : Array[Option] */;
val* var70 /* : NativeArray[Option] */;
val* var71 /* : OptionContext */;
val* var73 /* : OptionContext */;
val* var74 /* : OptionArray */;
val* var76 /* : OptionArray */;
val* var77 /* : Array[Option] */;
val* var78 /* : NativeArray[Option] */;
val* var79 /* : OptionContext */;
val* var81 /* : OptionContext */;
val* var82 /* : OptionBool */;
val* var84 /* : OptionBool */;
val* var85 /* : Array[Option] */;
val* var86 /* : NativeArray[Option] */;
val* var87 /* : OptionContext */;
val* var89 /* : OptionContext */;
val* var90 /* : OptionInt */;
val* var92 /* : OptionInt */;
val* var93 /* : OptionBool */;
val* var95 /* : OptionBool */;
val* var96 /* : Array[Option] */;
val* var97 /* : NativeArray[Option] */;
val* var98 /* : OptionBool */;
val* var100 /* : OptionBool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 30);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 32);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 34);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 36);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 38);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 44);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 46);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var24 = array_instance Array[Option] */
var25 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var25)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var25)->values[1] = (val*) var6;
((struct instance_standard__NativeArray*)var25)->values[2] = (val*) var9;
((struct instance_standard__NativeArray*)var25)->values[3] = (val*) var12;
((struct instance_standard__NativeArray*)var25)->values[4] = (val*) var15;
((struct instance_standard__NativeArray*)var25)->values[5] = (val*) var18;
((struct instance_standard__NativeArray*)var25)->values[6] = (val*) var21;
{
((void(*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var25, 7l); /* with_native on <var24:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var24); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var28 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 48);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var34 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 50);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var37 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 52);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 54);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 56);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var46 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 58);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var47 = array_instance Array[Option] */
var48 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var48)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var48)->values[1] = (val*) var32;
((struct instance_standard__NativeArray*)var48)->values[2] = (val*) var35;
((struct instance_standard__NativeArray*)var48)->values[3] = (val*) var38;
((struct instance_standard__NativeArray*)var48)->values[4] = (val*) var41;
((struct instance_standard__NativeArray*)var48)->values[5] = (val*) var44;
{
((void(*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_standard__array__Array__with_native]))(var47, var48, 6l); /* with_native on <var47:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var26, var47); /* Direct call opts#OptionContext#add_option on <var26:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (self) on <self:ToolContext> */
var57 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 62);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var61 = array_instance Array[Option] */
var62 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var62)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var62)->values[1] = (val*) var55;
((struct instance_standard__NativeArray*)var62)->values[2] = (val*) var58;
{
((void(*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var62, 3l); /* with_native on <var61:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var49, var61); /* Direct call opts#OptionContext#add_option on <var49:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_stacktrace (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <self:ToolContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 66);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var69 = array_instance Array[Option] */
var70 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var70)->values[0] = (val*) var66;
{
((void(*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var70, 1l); /* with_native on <var69:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var63, var69); /* Direct call opts#OptionContext#add_option on <var63:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var73 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (self) on <self:ToolContext> */
var76 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 68);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var77 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var77 = array_instance Array[Option] */
var78 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var78)->values[0] = (val*) var74;
{
((void(*)(val* self, val* p0, long p1))(var77->class->vft[COLOR_standard__array__Array__with_native]))(var77, var78, 1l); /* with_native on <var77:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var71, var77); /* Direct call opts#OptionContext#add_option on <var71:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var81 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 70);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
var85 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var85 = array_instance Array[Option] */
var86 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var86)->values[0] = (val*) var82;
{
((void(*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_standard__array__Array__with_native]))(var85, var86, 1l); /* with_native on <var85:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var79, var85); /* Direct call opts#OptionContext#add_option on <var79:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var89 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (self) on <self:ToolContext> */
var92 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 40);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (self) on <self:ToolContext> */
var95 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 42);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var96 = array_instance Array[Option] */
var97 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var97)->values[0] = (val*) var90;
((struct instance_standard__NativeArray*)var97)->values[1] = (val*) var93;
{
((void(*)(val* self, val* p0, long p1))(var96->class->vft[COLOR_standard__array__Array__with_native]))(var96, var97, 2l); /* with_native on <var96:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var87, var96); /* Direct call opts#OptionContext#add_option on <var87:OptionContext>*/
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:ToolContext> */
var100 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 36);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline opts#Option#hidden= (var98,1) on <var98:OptionBool> */
var98->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var98:OptionBool> */
RET_LABEL101:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit__abstract_compiler___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
short int var /* : Bool */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : OptionString */;
val* var14 /* : OptionString */;
val* var15 /* : nullable Object */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Sys */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : Sys */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
short int var40 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var41 /* : nullable Object */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const struct type* type_struct49;
const char* var_class_name50;
val* var51 /* : nullable Object */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const struct type* type_struct59;
const char* var_class_name60;
val* var61 /* : nullable Object */;
val* var62 /* : OptionBool */;
val* var64 /* : OptionBool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const struct type* type_struct69;
const char* var_class_name70;
val* var71 /* : nullable Object */;
val* var72 /* : OptionBool */;
val* var74 /* : OptionBool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const struct type* type_struct79;
const char* var_class_name80;
val* var81 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 30);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionString> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionString> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var4,((val*)NULL)) on <var4:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_other); /* == on <var4:nullable String(String)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 32);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline opts#Option#value (var12) on <var12:OptionString> */
var17 = var12->attrs[COLOR_opts__Option___value].val; /* _value on <var12:OptionString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var15,((val*)NULL)) on <var15:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:nullable String(String)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
var = var18;
} else {
var = var_;
}
if (var){
var23 = glob_sys;
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "Option Error: cannot use both --dir and --output";
var26 = standard___standard__NativeString___to_s_with_length(var25, 48l);
var24 = var26;
varonce = var24;
}
{
standard__file___Sys___print(var23, var24); /* Direct call file#Sys#print on <var23:Sys>*/
}
var27 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var27,1l) on <var27:Sys> */
exit(1l);
RET_LABEL28:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 58);
fatal_exit(1);
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
var35 = (short int)((long)(var32)>>2);
if (var35){
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 48);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var36,1) on <var36:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var36->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_standard__Bool)->table_size) {
var40 = 0;
} else {
var40 = (&type_standard__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var40)) {
var_class_name = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var41 = (val*)((long)(1)<<2|3);
var36->attrs[COLOR_opts__Option___value].val = var41; /* _value on <var36:OptionBool> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 50);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var42,1) on <var42:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct49 = var42->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype47 = type_struct49->color;
idtype48 = type_struct49->id;
if(cltype47 >= (&type_standard__Bool)->table_size) {
var46 = 0;
} else {
var46 = (&type_standard__Bool)->type_table[cltype47] == idtype48;
}
if (unlikely(!var46)) {
var_class_name50 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var51 = (val*)((long)(1)<<2|3);
var42->attrs[COLOR_opts__Option___value].val = var51; /* _value on <var42:OptionBool> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 52);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var52,1) on <var52:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct59 = var52->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype57 = type_struct59->color;
idtype58 = type_struct59->id;
if(cltype57 >= (&type_standard__Bool)->table_size) {
var56 = 0;
} else {
var56 = (&type_standard__Bool)->type_table[cltype57] == idtype58;
}
if (unlikely(!var56)) {
var_class_name60 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var61 = (val*)((long)(1)<<2|3);
var52->attrs[COLOR_opts__Option___value].val = var61; /* _value on <var52:OptionBool> */
RET_LABEL55:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var64 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 54);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var62,1) on <var62:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct69 = var62->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype67 = type_struct69->color;
idtype68 = type_struct69->id;
if(cltype67 >= (&type_standard__Bool)->table_size) {
var66 = 0;
} else {
var66 = (&type_standard__Bool)->type_table[cltype67] == idtype68;
}
if (unlikely(!var66)) {
var_class_name70 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var71 = (val*)((long)(1)<<2|3);
var62->attrs[COLOR_opts__Option___value].val = var71; /* _value on <var62:OptionBool> */
RET_LABEL65:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var74 = self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 56);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var72,1) on <var72:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct79 = var72->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype77 = type_struct79->color;
idtype78 = type_struct79->id;
if(cltype77 >= (&type_standard__Bool)->table_size) {
var76 = 0;
} else {
var76 = (&type_standard__Bool)->type_table[cltype77] == idtype78;
}
if (unlikely(!var76)) {
var_class_name80 = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var81 = (val*)((long)(1)<<2|3);
var72->attrs[COLOR_opts__Option___value].val = var81; /* _value on <var72:OptionBool> */
RET_LABEL75:(void)0;
}
}
} else {
}
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
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 533);
fatal_exit(1);
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
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nit__abstract_compiler___Platform___toolchain(var_platform, var3, var_compiler);
}
var_toolchain = var6;
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain= (var_compiler,var_toolchain) on <var_compiler:AbstractCompiler> */
var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___toolchain].val = var_toolchain; /* _toolchain on <var_compiler:AbstractCompiler> */
RET_LABEL7:(void)0;
}
}
{
nit___nit__MakefileToolchain___Toolchain__write_and_make(var_toolchain); /* Direct call abstract_compiler#MakefileToolchain#write_and_make on <var_toolchain:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler#Platform#toolchain for (self: Platform, ToolContext, AbstractCompiler): Toolchain */
val* nit__abstract_compiler___Platform___toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MakefileToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nit__MakefileToolchain(&type_nit__MakefileToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:MakefileToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:MakefileToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:MakefileToolchain>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
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
/* method abstract_compiler#Toolchain#compiler for (self: Toolchain): AbstractCompiler */
val* nit___nit__Toolchain___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#compiler= for (self: Toolchain, AbstractCompiler) */
void nit___nit__Toolchain___compiler_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val = p0; /* _compiler on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#root_compile_dir for (self: Toolchain): String */
val* nit___nit__Toolchain___root_compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_compile_dir /* var compile_dir: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:Toolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 44);
fatal_exit(1);
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
if (var_compile_dir == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_compile_dir->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_compile_dir, ((val*)NULL)); /* == on <var_compile_dir:nullable String>*/
var10 = var11;
}
if (var10){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "nit_compile";
var14 = standard___standard__NativeString___to_s_with_length(var13, 11l);
var12 = var14;
varonce = var12;
}
var_compile_dir = var12;
} else {
}
var = var_compile_dir;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#compile_dir for (self: Toolchain): String */
val* nit___nit__Toolchain___compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = nit___nit__Toolchain___root_compile_dir(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#init for (self: Toolchain) */
void nit___nit__Toolchain___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Toolchain___standard__kernel__Object__init]))(self); /* init on <self:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: MakefileToolchain) */
void nit___nit__MakefileToolchain___Toolchain__write_and_make(val* self) {
val* var /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_auto_remove /* var auto_remove: Bool */;
long var12 /* : Int */;
long var14 /* : Int for extern */;
long var_time0 /* var time0: Int */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : nullable Error */;
val* var23 /* : nullable Error */;
val* var24 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
long var25 /* : Int */;
long var27 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var28 /* : ToolContext */;
val* var30 /* : ToolContext */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : ToolContext */;
val* var49 /* : ToolContext */;
val* var50 /* : OptionBool */;
val* var52 /* : OptionBool */;
val* var53 /* : nullable Object */;
val* var55 /* : nullable Object */;
short int var56 /* : Bool */;
val* var57 /* : ToolContext */;
val* var59 /* : ToolContext */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : Sys */;
val* var66 /* : Sys */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : String */;
long var80 /* : Int */;
long var81 /* : Int */;
long var83 /* : Int for extern */;
val* var84 /* : ToolContext */;
val* var86 /* : ToolContext */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
{
var = nit___nit__Toolchain___compile_dir(self);
}
var_compile_dir = var;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 44);
fatal_exit(1);
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
if (var7 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, ((val*)NULL)); /* == on <var7:nullable Object(nullable String)>*/
var10 = var11;
}
var_auto_remove = var10;
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var14 = kernel_Any_Any_get_time_0(self);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_time0 = var12;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var17 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "*** WRITING C ***";
var20 = standard___standard__NativeString___to_s_with_length(var19, 17l);
var18 = var20;
varonce = var18;
}
{
nit___nit__ToolContext___info(var15, var18, 1l); /* Direct call toolcontext#ToolContext#info on <var15:ToolContext>*/
}
{
var21 = nit___nit__Toolchain___root_compile_dir(self);
}
{
var22 = standard__file___String___mkdir(var21);
}
{
var23 = standard__file___String___mkdir(var_compile_dir);
}
var24 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var24); /* Direct call array#Array#init on <var24:Array[String]>*/
}
var_cfiles = var24;
{
nit___nit__MakefileToolchain___write_files(self, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_files on <self:MakefileToolchain>*/
}
{
nit___nit__MakefileToolchain___write_makefile(self, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_makefile on <self:MakefileToolchain>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var27 = kernel_Any_Any_get_time_0(self);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_time1 = var25;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var30 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(varonce31==NULL)) {
var32 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "*** END WRITING C: ";
var36 = standard___standard__NativeString___to_s_with_length(var35, 19l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var32)->values[0]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " ***";
var40 = standard___standard__NativeString___to_s_with_length(var39, 4l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var32)->values[2]=var38;
} else {
var32 = varonce31;
varonce31 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var43 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var44 = var_time1 - var_time0;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var45 = standard__string___Int___Object__to_s(var41);
((struct instance_standard__NativeArray*)var32)->values[1]=var45;
{
var46 = ((val*(*)(val* self))(var32->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
{
nit___nit__ToolContext___info(var28, var46, 2l); /* Direct call toolcontext#ToolContext#info on <var28:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var49 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (var47) on <var47:ToolContext> */
var52 = var47->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <var47:ToolContext> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 34);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline opts#Option#value (var50) on <var50:OptionBool> */
var55 = var50->attrs[COLOR_opts__Option___value].val; /* _value on <var50:OptionBool> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = (short int)((long)(var53)>>2);
if (var56){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var59 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "*** COMPILING C ***";
var63 = standard___standard__NativeString___to_s_with_length(var62, 19l);
var61 = var63;
varonce60 = var61;
}
{
nit___nit__ToolContext___info(var57, var61, 1l); /* Direct call toolcontext#ToolContext#info on <var57:ToolContext>*/
}
{
nit___nit__MakefileToolchain___compile_c_code(self, var_compile_dir); /* Direct call abstract_compiler#MakefileToolchain#compile_c_code on <self:MakefileToolchain>*/
}
if (var_auto_remove){
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var66 = glob_sys;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (unlikely(varonce67==NULL)) {
var68 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "rm -r -- \'";
var72 = standard___standard__NativeString___to_s_with_length(var71, 10l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "/\'";
var76 = standard___standard__NativeString___to_s_with_length(var75, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var68)->values[2]=var74;
} else {
var68 = varonce67;
varonce67 = NULL;
}
{
var77 = nit___nit__Toolchain___root_compile_dir(self);
}
{
var78 = standard___standard__Text___escape_to_sh(var77);
}
((struct instance_standard__NativeArray*)var68)->values[1]=var78;
{
var79 = ((val*(*)(val* self))(var68->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
var80 = standard__exec___Sys___system(var64, var79);
}
} else {
}
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var83 = kernel_Any_Any_get_time_0(self);
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_time1 = var81;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var86 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "*** END COMPILING C: ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 21l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = " ***";
var96 = standard___standard__NativeString___to_s_with_length(var95, 4l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var88)->values[2]=var94;
} else {
var88 = varonce87;
varonce87 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var99 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var103 = var_time1 - var_time0;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var104 = standard__string___Int___Object__to_s(var97);
((struct instance_standard__NativeArray*)var88)->values[1]=var104;
{
var105 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nit___nit__ToolContext___info(var84, var105, 2l); /* Direct call toolcontext#ToolContext#info on <var84:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: MakefileToolchain, String, Array[String]) */
void nit___nit__MakefileToolchain___write_files(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : Platform */;
val* var5 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var6 /* : Bool */;
val* var7 /* : AbstractCompiler */;
val* var9 /* : AbstractCompiler */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var_cc_opt_with_libgc /* var cc_opt_with_libgc: String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : ExternCFile */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : Array[String] */;
val* var34 /* : Array[String] */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : AbstractCompiler */;
val* var41 /* : AbstractCompiler */;
val* var42 /* : Array[ExternFile] */;
val* var44 /* : Array[ExternFile] */;
val* var45 /* : ToolContext */;
val* var47 /* : ToolContext */;
val* var48 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
val* var_clib /* var clib: String */;
val* var56 /* : AbstractCompiler */;
val* var58 /* : AbstractCompiler */;
val* var59 /* : Array[String] */;
val* var61 /* : Array[String] */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
val* var69 /* : AbstractCompiler */;
val* var71 /* : AbstractCompiler */;
val* var72 /* : Array[String] */;
val* var74 /* : Array[String] */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : AbstractCompiler */;
val* var84 /* : AbstractCompiler */;
val* var85 /* : MModule */;
val* var87 /* : MModule */;
val* var88 /* : POSetElement[MModule] */;
val* var90 /* : POSetElement[MModule] */;
val* var91 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var92 /* : Iterator[nullable Object] */;
val* var_93 /* var : Iterator[MModule] */;
short int var94 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var96 /* : AbstractCompiler */;
val* var98 /* : AbstractCompiler */;
val* var99 /* : AbstractCompiler */;
val* var101 /* : AbstractCompiler */;
val* var102 /* : Array[String] */;
val* var104 /* : Array[String] */;
val* var_105 /* var : Array[String] */;
val* var106 /* : ArrayIterator[nullable Object] */;
val* var_107 /* var : ArrayIterator[String] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_src /* var src: String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
val* var114 /* : String */;
val* var_basename /* var basename: String */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
val* var121 /* : String */;
val* var_dst /* var dst: String */;
val* var123 /* : AbstractCompiler */;
val* var125 /* : AbstractCompiler */;
val* var126 /* : CodeWriter */;
val* var128 /* : CodeWriter */;
val* var129 /* : CodeFile */;
val* var131 /* : CodeFile */;
val* var132 /* : String */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : FlatString */;
val* var139 /* : String */;
val* var_hfilename /* var hfilename: String */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
val* var146 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var147 /* : FileWriter */;
val* var_h /* var h: FileWriter */;
val* var148 /* : AbstractCompiler */;
val* var150 /* : AbstractCompiler */;
val* var151 /* : CodeWriter */;
val* var153 /* : CodeWriter */;
val* var154 /* : List[String] */;
val* var156 /* : List[String] */;
val* var_157 /* var : List[String] */;
val* var158 /* : ListIterator[nullable Object] */;
val* var_159 /* var : ListIterator[String] */;
short int var160 /* : Bool */;
val* var161 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : FlatString */;
val* var168 /* : AbstractCompiler */;
val* var170 /* : AbstractCompiler */;
val* var171 /* : CodeWriter */;
val* var173 /* : CodeWriter */;
val* var174 /* : List[String] */;
val* var176 /* : List[String] */;
val* var_177 /* var : List[String] */;
val* var178 /* : ListIterator[nullable Object] */;
val* var_179 /* var : ListIterator[String] */;
short int var180 /* : Bool */;
val* var181 /* : nullable Object */;
val* var_l182 /* var l: String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
val* var189 /* : ToolContext */;
val* var191 /* : ToolContext */;
val* var192 /* : OptionInt */;
val* var194 /* : OptionInt */;
val* var195 /* : nullable Object */;
val* var197 /* : nullable Object */;
long var198 /* : Int */;
long var_max_c_lines /* var max_c_lines: Int */;
val* var199 /* : AbstractCompiler */;
val* var201 /* : AbstractCompiler */;
val* var202 /* : List[CodeFile] */;
val* var204 /* : List[CodeFile] */;
val* var_205 /* var : List[CodeFile] */;
val* var206 /* : ListIterator[nullable Object] */;
val* var_207 /* var : ListIterator[CodeFile] */;
short int var208 /* : Bool */;
val* var209 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var_i /* var i: Int */;
long var_count /* var count: Int */;
val* var_file /* var file: nullable FileWriter */;
val* var210 /* : Array[CodeWriter] */;
val* var212 /* : Array[CodeWriter] */;
val* var_213 /* var : Array[CodeWriter] */;
val* var214 /* : ArrayIterator[nullable Object] */;
val* var_215 /* var : ArrayIterator[CodeWriter] */;
short int var216 /* : Bool */;
val* var217 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var218 /* : AbstractCompiler */;
val* var220 /* : AbstractCompiler */;
val* var221 /* : CodeWriter */;
val* var223 /* : CodeWriter */;
short int var224 /* : Bool */;
val* var_other226 /* var other: nullable Object */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
val* var231 /* : List[String] */;
val* var233 /* : List[String] */;
long var234 /* : Int */;
val* var235 /* : List[String] */;
val* var237 /* : List[String] */;
long var238 /* : Int */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var242 /* : Int */;
long var_total_lines /* var total_lines: Int */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
long var246 /* : Int */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
const char* var_class_name251;
long var252 /* : Int */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
short int var_260 /* var : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
short int var268 /* : Bool */;
short int var_269 /* var : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
int cltype273;
int idtype274;
const char* var_class_name275;
short int var276 /* : Bool */;
long var277 /* : Int */;
short int var279 /* : Bool */;
int cltype280;
int idtype281;
const char* var_class_name282;
long var283 /* : Int */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
val* var290 /* : NativeArray[String] */;
static val* varonce289;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : FlatString */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : FlatString */;
val* var299 /* : String */;
val* var301 /* : String */;
val* var302 /* : String */;
val* var303 /* : String */;
val* var_cfilename /* var cfilename: String */;
val* var305 /* : NativeArray[String] */;
static val* varonce304;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : FlatString */;
val* var310 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var311 /* : ToolContext */;
val* var313 /* : ToolContext */;
val* var315 /* : NativeArray[String] */;
static val* varonce314;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : FlatString */;
val* var320 /* : String */;
val* var321 /* : FileWriter */;
val* var323 /* : NativeArray[String] */;
static val* varonce322;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
val* var327 /* : FlatString */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : NativeString */;
val* var331 /* : FlatString */;
val* var332 /* : String */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : List[String] */;
val* var338 /* : List[String] */;
val* var_339 /* var : List[String] */;
val* var340 /* : ListIterator[nullable Object] */;
val* var_341 /* var : ListIterator[String] */;
short int var342 /* : Bool */;
val* var343 /* : nullable Object */;
val* var_l344 /* var l: String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : FlatString */;
val* var351 /* : List[String] */;
val* var353 /* : List[String] */;
val* var_354 /* var : List[String] */;
val* var355 /* : ListIterator[nullable Object] */;
val* var_356 /* var : ListIterator[String] */;
short int var357 /* : Bool */;
val* var358 /* : nullable Object */;
val* var_l359 /* var l: String */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
val* var363 /* : FlatString */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
val* var375 /* : NativeArray[String] */;
static val* varonce374;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
val* var379 /* : FlatString */;
val* var380 /* : String */;
val* var382 /* : String */;
val* var383 /* : String */;
val* var_cfilename384 /* var cfilename: String */;
val* var386 /* : NativeArray[String] */;
static val* varonce385;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
val* var390 /* : FlatString */;
val* var391 /* : String */;
val* var_cfilepath392 /* var cfilepath: String */;
val* var_hfile /* var hfile: nullable FileWriter */;
val* var393 /* : FileWriter */;
val* var395 /* : NativeArray[String] */;
static val* varonce394;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : NativeString */;
val* var399 /* : FlatString */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
val* var403 /* : FlatString */;
val* var404 /* : String */;
val* var405 /* : HashSet[String] */;
val* var407 /* : HashSet[String] */;
val* var_408 /* var : HashSet[String] */;
val* var409 /* : Iterator[nullable Object] */;
val* var_410 /* var : Iterator[String] */;
short int var411 /* : Bool */;
val* var412 /* : nullable Object */;
val* var_key /* var key: String */;
val* var413 /* : AbstractCompiler */;
val* var415 /* : AbstractCompiler */;
val* var416 /* : HashMap[String, String] */;
val* var418 /* : HashMap[String, String] */;
short int var419 /* : Bool */;
short int var420 /* : Bool */;
val* var421 /* : AbstractCompiler */;
val* var423 /* : AbstractCompiler */;
val* var424 /* : HashMap[String, ANode] */;
val* var426 /* : HashMap[String, ANode] */;
val* var427 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
short int var431 /* : Bool */;
short int var432 /* : Bool */;
val* var434 /* : NativeArray[String] */;
static val* varonce433;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
val* var438 /* : FlatString */;
val* var439 /* : String */;
val* var440 /* : Sys */;
val* var442 /* : NativeArray[String] */;
static val* varonce441;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : FlatString */;
val* var447 /* : String */;
val* var448 /* : AbstractCompiler */;
val* var450 /* : AbstractCompiler */;
val* var451 /* : HashMap[String, String] */;
val* var453 /* : HashMap[String, String] */;
val* var454 /* : nullable Object */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
val* var458 /* : FlatString */;
val* var462 /* : ToolContext */;
val* var464 /* : ToolContext */;
val* var466 /* : NativeArray[String] */;
static val* varonce465;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
val* var470 /* : FlatString */;
long var471 /* : Int */;
long var473 /* : Int */;
val* var474 /* : String */;
val* var475 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 533);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_platform = var3;
{
var6 = nit___nit__Platform___supports_libunwind(var_platform);
}
if (var6){
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var9 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit___nit__AbstractCompiler___build_c_to_nit_bindings(var7); /* Direct call abstract_compiler#AbstractCompiler#build_c_to_nit_bindings on <var7:AbstractCompiler>*/
}
} else {
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "-DWITH_LIBGC";
var12 = standard___standard__NativeString___to_s_with_length(var11, 12l);
var10 = var12;
varonce = var10;
}
var_cc_opt_with_libgc = var10;
{
var13 = nit___nit__Platform___supports_libgc(var_platform);
}
var14 = !var13;
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "";
var18 = standard___standard__NativeString___to_s_with_length(var17, 0l);
var16 = var18;
varonce15 = var16;
}
var_cc_opt_with_libgc = var16;
} else {
}
var19 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "gc_chooser.c";
var23 = standard___standard__NativeString___to_s_with_length(var22, 12l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var19, var21); /* filename= on <var19:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var19, var_cc_opt_with_libgc); /* cflags= on <var19:ExternCFile>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_standard__kernel__Object__init]))(var19); /* init on <var19:ExternCFile>*/
}
var_gc_chooser = var19;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "";
var27 = standard___standard__NativeString___to_s_with_length(var26, 0l);
var25 = var27;
varonce24 = var25;
}
{
{ /* Inline kernel#Object#!= (var_cc_opt_with_libgc,var25) on <var_cc_opt_with_libgc:String> */
var_other = var25;
{
var30 = ((short int(*)(val* self, val* p0))(var_cc_opt_with_libgc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cc_opt_with_libgc, var_other); /* == on <var_cc_opt_with_libgc:String>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_gc_chooser) on <var_gc_chooser:ExternCFile> */
var34 = var_gc_chooser->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_gc_chooser:ExternCFile> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 123);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "bdw-gc";
var38 = standard___standard__NativeString___to_s_with_length(var37, 6l);
var36 = var38;
varonce35 = var36;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var32, var36); /* Direct call array#Array#add on <var32:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var41 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var39) on <var39:AbstractCompiler> */
var44 = var39->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var39:AbstractCompiler> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var42, var_gc_chooser); /* Direct call array#Array#add on <var42:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var47 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var45) on <var45:ToolContext> */
var50 = var45->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var45:ToolContext> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 521);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "clib";
var54 = standard___standard__NativeString___to_s_with_length(var53, 4l);
var52 = var54;
varonce51 = var52;
}
{
var55 = standard__file___String____47d(var48, var52);
}
var_clib = var55;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var58 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var56) on <var56:AbstractCompiler> */
var61 = var56->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var56:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "/gc_chooser.c";
var67 = standard___standard__NativeString___to_s_with_length(var66, 13l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var63)->values[1]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
((struct instance_standard__NativeArray*)var63)->values[0]=var_clib;
{
var68 = ((val*(*)(val* self))(var63->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var59, var68); /* Direct call array#Array#add on <var59:Array[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var71 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var69) on <var69:AbstractCompiler> */
var74 = var69->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var69:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "/gc_chooser.h";
var80 = standard___standard__NativeString___to_s_with_length(var79, 13l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var76)->values[1]=var78;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_standard__NativeArray*)var76)->values[0]=var_clib;
{
var81 = ((val*(*)(val* self))(var76->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var72, var81); /* Direct call array#Array#add on <var72:Array[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var84 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var82) on <var82:AbstractCompiler> */
var87 = var82->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var82:AbstractCompiler> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var85) on <var85:MModule> */
var90 = var85->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var85:MModule> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = poset___poset__POSetElement___greaters(var88);
}
var_ = var91;
{
var92 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_93 = var92;
for(;;) {
{
var94 = ((short int(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_93); /* is_ok on <var_93:Iterator[MModule]>*/
}
if (var94){
{
var95 = ((val*(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_93); /* item on <var_93:Iterator[MModule]>*/
}
var_m = var95;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var98 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(var96, var_m); /* Direct call separate_compiler#SeparateCompiler#finalize_ffi_for_module on <var96:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_93); /* next on <var_93:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_93); /* finish on <var_93:Iterator[MModule]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var101 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var99) on <var99:AbstractCompiler> */
var104 = var99->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var99:AbstractCompiler> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
{
var106 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_105);
}
var_107 = var106;
for(;;) {
{
var108 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_107);
}
if (var108){
{
var109 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_107);
}
var_src = var109;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "";
var113 = standard___standard__NativeString___to_s_with_length(var112, 0l);
var111 = var113;
varonce110 = var111;
}
{
var114 = standard__file___String___basename(var_src, var111);
}
var_basename = var114;
if (unlikely(varonce115==NULL)) {
var116 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "/";
var120 = standard___standard__NativeString___to_s_with_length(var119, 1l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var116)->values[1]=var118;
} else {
var116 = varonce115;
varonce115 = NULL;
}
((struct instance_standard__NativeArray*)var116)->values[0]=var_compile_dir;
((struct instance_standard__NativeArray*)var116)->values[2]=var_basename;
{
var121 = ((val*(*)(val* self))(var116->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
var_dst = var121;
{
standard__file___String___file_copy_to(var_src, var_dst); /* Direct call file#String#file_copy_to on <var_src:String>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_107); /* Direct call array#ArrayIterator#next on <var_107:ArrayIterator[String]>*/
}
} else {
goto BREAK_label122;
}
}
BREAK_label122: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_107); /* Direct call array#ArrayIterator#finish on <var_107:ArrayIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var125 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var123) on <var123:AbstractCompiler> */
var128 = var123->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var123:AbstractCompiler> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var126) on <var126:CodeWriter> */
var131 = var126->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val; /* _file on <var126:CodeWriter> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1080);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#name (var129) on <var129:CodeFile> */
var134 = var129->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var129:CodeFile> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1073);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ".h";
var138 = standard___standard__NativeString___to_s_with_length(var137, 2l);
var136 = var138;
varonce135 = var136;
}
{
var139 = ((val*(*)(val* self, val* p0))(var132->class->vft[COLOR_standard__string__String___43d]))(var132, var136); /* + on <var132:String>*/
}
var_hfilename = var139;
if (unlikely(varonce140==NULL)) {
var141 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "/";
var145 = standard___standard__NativeString___to_s_with_length(var144, 1l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var141)->values[1]=var143;
} else {
var141 = varonce140;
varonce140 = NULL;
}
((struct instance_standard__NativeArray*)var141)->values[0]=var_compile_dir;
((struct instance_standard__NativeArray*)var141)->values[2]=var_hfilename;
{
var146 = ((val*(*)(val* self))(var141->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
var_hfilepath = var146;
var147 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var147, var_hfilepath); /* Direct call file#FileWriter#open on <var147:FileWriter>*/
}
var_h = var147;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var150 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var148) on <var148:AbstractCompiler> */
var153 = var148->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var148:AbstractCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var151) on <var151:CodeWriter> */
var156 = var151->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var151:CodeWriter> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1082);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
var_157 = var154;
{
var158 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_157);
}
var_159 = var158;
for(;;) {
{
var160 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_159);
}
if (var160){
{
var161 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_159);
}
var_l = var161;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_h, var_l); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "\n";
var165 = standard___standard__NativeString___to_s_with_length(var164, 1l);
var163 = var165;
varonce162 = var163;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_h, var163); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_159); /* Direct call list#ListIterator#next on <var_159:ListIterator[String]>*/
}
} else {
goto BREAK_label166;
}
}
BREAK_label166: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_159) on <var_159:ListIterator[String]> */
RET_LABEL167:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var170 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var168) on <var168:AbstractCompiler> */
var173 = var168->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var168:AbstractCompiler> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var171) on <var171:CodeWriter> */
var176 = var171->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var171:CodeWriter> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1081);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_177 = var174;
{
var178 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_177);
}
var_179 = var178;
for(;;) {
{
var180 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_179);
}
if (var180){
{
var181 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_179);
}
var_l182 = var181;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_h, var_l182); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "\n";
var186 = standard___standard__NativeString___to_s_with_length(var185, 1l);
var184 = var186;
varonce183 = var184;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_h, var184); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_179); /* Direct call list#ListIterator#next on <var_179:ListIterator[String]>*/
}
} else {
goto BREAK_label187;
}
}
BREAK_label187: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_179) on <var_179:ListIterator[String]> */
RET_LABEL188:(void)0;
}
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_h); /* Direct call file#FileWriter#close on <var_h:FileWriter>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var191 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (var189) on <var189:ToolContext> */
var194 = var189->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <var189:ToolContext> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 40);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline opts#Option#value (var192) on <var192:OptionInt> */
var197 = var192->attrs[COLOR_opts__Option___value].val; /* _value on <var192:OptionInt> */
var195 = var197;
RET_LABEL196:(void)0;
}
}
var198 = (long)(var195)>>2;
var_max_c_lines = var198;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var201 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var199) on <var199:AbstractCompiler> */
var204 = var199->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <var199:AbstractCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_205 = var202;
{
var206 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_205);
}
var_207 = var206;
for(;;) {
{
var208 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_207);
}
if (var208){
{
var209 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_207);
}
var_f = var209;
var_i = 0l;
var_count = 0l;
var_file = ((val*)NULL);
{
{ /* Inline abstract_compiler#CodeFile#writers (var_f) on <var_f:CodeFile> */
var212 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___writers].val; /* _writers on <var_f:CodeFile> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
var_213 = var210;
{
var214 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_213);
}
var_215 = var214;
for(;;) {
{
var216 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_215);
}
if (var216){
{
var217 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_215);
}
var_vis = var217;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var220 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var218) on <var218:AbstractCompiler> */
var223 = var218->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <var218:AbstractCompiler> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_vis,var221) on <var_vis:CodeWriter> */
var_other226 = var221;
{
{ /* Inline kernel#Object#is_same_instance (var_vis,var_other226) on <var_vis:CodeWriter> */
var229 = var_vis == var_other226;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var224 = var227;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
}
if (var224){
goto BREAK_label230;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var233 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1081);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = standard___standard__List___standard__abstract_collection__Collection__length(var231);
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var237 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1082);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
var238 = standard___standard__List___standard__abstract_collection__Collection__length(var235);
}
{
{ /* Inline kernel#Int#+ (var234,var238) on <var234:Int> */
/* Covariant cast for argument 0 (i) <var238:Int> isa OTHER */
/* <var238:Int> isa OTHER */
var241 = 1; /* easy <var238:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var242 = var234 + var238;
var239 = var242;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
var_total_lines = var239;
{
{ /* Inline kernel#Int#== (var_total_lines,0l) on <var_total_lines:Int> */
var245 = var_total_lines == 0l;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
if (var243){
goto BREAK_label230;
} else {
}
{
{ /* Inline kernel#Int#+ (var_count,var_total_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_total_lines:Int> isa OTHER */
/* <var_total_lines:Int> isa OTHER */
var248 = 1; /* easy <var_total_lines:Int> isa OTHER*/
if (unlikely(!var248)) {
var_class_name251 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name251);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var252 = var_count + var_total_lines;
var246 = var252;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
var_count = var246;
if (var_file == NULL) {
var254 = 1; /* is null */
} else {
var254 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other226 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other226) on <var_file:nullable FileWriter(FileWriter)> */
var259 = var_file == var_other226;
var257 = var259;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
var255 = var257;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
var254 = var255;
}
var_260 = var254;
if (var254){
var253 = var_260;
} else {
{
{ /* Inline kernel#Int#> (var_count,var_max_c_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_max_c_lines:Int> isa OTHER */
/* <var_max_c_lines:Int> isa OTHER */
var264 = 1; /* easy <var_max_c_lines:Int> isa OTHER*/
if (unlikely(!var264)) {
var_class_name267 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var268 = var_count > var_max_c_lines;
var262 = var268;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
var_269 = var262;
if (var262){
{
{ /* Inline kernel#Int#> (var_max_c_lines,0l) on <var_max_c_lines:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var272 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var272)) {
var_class_name275 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name275);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var276 = var_max_c_lines > 0l;
var270 = var276;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
var261 = var270;
} else {
var261 = var_269;
}
var253 = var261;
}
if (var253){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var279 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var279)) {
var_class_name282 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name282);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var283 = var_i + 1l;
var277 = var283;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
}
var_i = var277;
if (var_file == NULL) {
var284 = 0; /* is null */
} else {
var284 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other = ((val*)NULL);
{
var287 = ((short int(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_file, var_other); /* == on <var_file:nullable FileWriter(FileWriter)>*/
}
var288 = !var287;
var285 = var288;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
{
standard___standard__FileWriter___standard__stream__Stream__close(var_file); /* Direct call file#FileWriter#close on <var_file:nullable FileWriter(FileWriter)>*/
}
} else {
}
if (unlikely(varonce289==NULL)) {
var290 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = ".";
var294 = standard___standard__NativeString___to_s_with_length(var293, 1l);
var292 = var294;
varonce291 = var292;
}
((struct instance_standard__NativeArray*)var290)->values[1]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = ".c";
var298 = standard___standard__NativeString___to_s_with_length(var297, 2l);
var296 = var298;
varonce295 = var296;
}
((struct instance_standard__NativeArray*)var290)->values[3]=var296;
} else {
var290 = varonce289;
varonce289 = NULL;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var301 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1073);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
((struct instance_standard__NativeArray*)var290)->values[0]=var299;
var302 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var290)->values[2]=var302;
{
var303 = ((val*(*)(val* self))(var290->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
var_cfilename = var303;
if (unlikely(varonce304==NULL)) {
var305 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "/";
var309 = standard___standard__NativeString___to_s_with_length(var308, 1l);
var307 = var309;
varonce306 = var307;
}
((struct instance_standard__NativeArray*)var305)->values[1]=var307;
} else {
var305 = varonce304;
varonce304 = NULL;
}
((struct instance_standard__NativeArray*)var305)->values[0]=var_compile_dir;
((struct instance_standard__NativeArray*)var305)->values[2]=var_cfilename;
{
var310 = ((val*(*)(val* self))(var305->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var305); /* native_to_s on <var305:NativeArray[String]>*/
}
varonce304 = var305;
var_cfilepath = var310;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var313 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
if (unlikely(varonce314==NULL)) {
var315 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "new C source files to compile: ";
var319 = standard___standard__NativeString___to_s_with_length(var318, 31l);
var317 = var319;
varonce316 = var317;
}
((struct instance_standard__NativeArray*)var315)->values[0]=var317;
} else {
var315 = varonce314;
varonce314 = NULL;
}
((struct instance_standard__NativeArray*)var315)->values[1]=var_cfilepath;
{
var320 = ((val*(*)(val* self))(var315->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var315); /* native_to_s on <var315:NativeArray[String]>*/
}
varonce314 = var315;
{
nit___nit__ToolContext___info(var311, var320, 3l); /* Direct call toolcontext#ToolContext#info on <var311:ToolContext>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_cfiles, var_cfilename); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
var321 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var321, var_cfilepath); /* Direct call file#FileWriter#open on <var321:FileWriter>*/
}
var_file = var321;
if (unlikely(varonce322==NULL)) {
var323 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "#include \"";
var327 = standard___standard__NativeString___to_s_with_length(var326, 10l);
var325 = var327;
varonce324 = var325;
}
((struct instance_standard__NativeArray*)var323)->values[0]=var325;
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = ".0.h\"\n";
var331 = standard___standard__NativeString___to_s_with_length(var330, 6l);
var329 = var331;
varonce328 = var329;
}
((struct instance_standard__NativeArray*)var323)->values[2]=var329;
} else {
var323 = varonce322;
varonce322 = NULL;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var334 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var334 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1073);
fatal_exit(1);
}
var332 = var334;
RET_LABEL333:(void)0;
}
}
((struct instance_standard__NativeArray*)var323)->values[1]=var332;
{
var335 = ((val*(*)(val* self))(var323->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var323); /* native_to_s on <var323:NativeArray[String]>*/
}
varonce322 = var323;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_file, var335); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
var_count = var_total_lines;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var338 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1082);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
var_339 = var336;
{
var340 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_339);
}
var_341 = var340;
for(;;) {
{
var342 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_341);
}
if (var342){
{
var343 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_341);
}
var_l344 = var343;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_file, var_l344); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "\n";
var348 = standard___standard__NativeString___to_s_with_length(var347, 1l);
var346 = var348;
varonce345 = var346;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_file, var346); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_341); /* Direct call list#ListIterator#next on <var_341:ListIterator[String]>*/
}
} else {
goto BREAK_label349;
}
}
BREAK_label349: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_341) on <var_341:ListIterator[String]> */
RET_LABEL350:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var353 = var_vis->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var353 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1081);
fatal_exit(1);
}
var351 = var353;
RET_LABEL352:(void)0;
}
}
var_354 = var351;
{
var355 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_354);
}
var_356 = var355;
for(;;) {
{
var357 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_356);
}
if (var357){
{
var358 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_356);
}
var_l359 = var358;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_file, var_l359); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "\n";
var363 = standard___standard__NativeString___to_s_with_length(var362, 1l);
var361 = var363;
varonce360 = var361;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_file, var361); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_356); /* Direct call list#ListIterator#next on <var_356:ListIterator[String]>*/
}
} else {
goto BREAK_label364;
}
}
BREAK_label364: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_356) on <var_356:ListIterator[String]> */
RET_LABEL365:(void)0;
}
}
BREAK_label230: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_215); /* Direct call array#ArrayIterator#next on <var_215:ArrayIterator[CodeWriter]>*/
}
} else {
goto BREAK_label366;
}
}
BREAK_label366: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_215); /* Direct call array#ArrayIterator#finish on <var_215:ArrayIterator[CodeWriter]>*/
}
if (var_file == NULL) {
var367 = 1; /* is null */
} else {
var367 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other226 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other226) on <var_file:nullable FileWriter(FileWriter)> */
var372 = var_file == var_other226;
var370 = var372;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
}
var368 = var370;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
var367 = var368;
}
if (var367){
goto BREAK_label373;
} else {
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_file); /* Direct call file#FileWriter#close on <var_file:nullable FileWriter(FileWriter)>*/
}
if (unlikely(varonce374==NULL)) {
var375 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = ".0.h";
var379 = standard___standard__NativeString___to_s_with_length(var378, 4l);
var377 = var379;
varonce376 = var377;
}
((struct instance_standard__NativeArray*)var375)->values[1]=var377;
} else {
var375 = varonce374;
varonce374 = NULL;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var382 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1073);
fatal_exit(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
((struct instance_standard__NativeArray*)var375)->values[0]=var380;
{
var383 = ((val*(*)(val* self))(var375->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var375); /* native_to_s on <var375:NativeArray[String]>*/
}
varonce374 = var375;
var_cfilename384 = var383;
if (unlikely(varonce385==NULL)) {
var386 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = "/";
var390 = standard___standard__NativeString___to_s_with_length(var389, 1l);
var388 = var390;
varonce387 = var388;
}
((struct instance_standard__NativeArray*)var386)->values[1]=var388;
} else {
var386 = varonce385;
varonce385 = NULL;
}
((struct instance_standard__NativeArray*)var386)->values[0]=var_compile_dir;
((struct instance_standard__NativeArray*)var386)->values[2]=var_cfilename384;
{
var391 = ((val*(*)(val* self))(var386->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var386); /* native_to_s on <var386:NativeArray[String]>*/
}
varonce385 = var386;
var_cfilepath392 = var391;
var_hfile = ((val*)NULL);
var393 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var393, var_cfilepath392); /* Direct call file#FileWriter#open on <var393:FileWriter>*/
}
var_hfile = var393;
if (unlikely(varonce394==NULL)) {
var395 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce396!=NULL)) {
var397 = varonce396;
} else {
var398 = "#include \"";
var399 = standard___standard__NativeString___to_s_with_length(var398, 10l);
var397 = var399;
varonce396 = var397;
}
((struct instance_standard__NativeArray*)var395)->values[0]=var397;
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = "\"\n";
var403 = standard___standard__NativeString___to_s_with_length(var402, 2l);
var401 = var403;
varonce400 = var401;
}
((struct instance_standard__NativeArray*)var395)->values[2]=var401;
} else {
var395 = varonce394;
varonce394 = NULL;
}
((struct instance_standard__NativeArray*)var395)->values[1]=var_hfilename;
{
var404 = ((val*(*)(val* self))(var395->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var395); /* native_to_s on <var395:NativeArray[String]>*/
}
varonce394 = var395;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_hfile, var404); /* Direct call file#FileWriter#write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var_f) on <var_f:CodeFile> */
var407 = var_f->attrs[COLOR_nit__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var_f:CodeFile> */
if (unlikely(var407 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1075);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
var_408 = var405;
{
var409 = standard___standard__HashSet___standard__abstract_collection__Collection__iterator(var_408);
}
var_410 = var409;
for(;;) {
{
var411 = ((short int(*)(val* self))((((long)var_410&3)?class_info[((long)var_410&3)]:var_410->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_410); /* is_ok on <var_410:Iterator[String]>*/
}
if (var411){
{
var412 = ((val*(*)(val* self))((((long)var_410&3)?class_info[((long)var_410&3)]:var_410->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_410); /* item on <var_410:Iterator[String]>*/
}
var_key = var412;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var415 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var415 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var413 = var415;
RET_LABEL414:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var413) on <var413:AbstractCompiler> */
var418 = var413->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var413:AbstractCompiler> */
if (unlikely(var418 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 585);
fatal_exit(1);
}
var416 = var418;
RET_LABEL417:(void)0;
}
}
{
var419 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var416, var_key);
}
var420 = !var419;
if (var420){
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var423 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var423 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var421) on <var421:AbstractCompiler> */
var426 = var421->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var421:AbstractCompiler> */
if (unlikely(var426 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 587);
fatal_exit(1);
}
var424 = var426;
RET_LABEL425:(void)0;
}
}
{
var427 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var424, var_key);
}
var_node = var427;
if (var_node == NULL) {
var428 = 0; /* is null */
} else {
var428 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
var431 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ANode(ANode)>*/
}
var432 = !var431;
var429 = var432;
goto RET_LABEL430;
RET_LABEL430:(void)0;
}
var428 = var429;
}
if (var428){
if (unlikely(varonce433==NULL)) {
var434 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce435!=NULL)) {
var436 = varonce435;
} else {
var437 = "No provided declaration for ";
var438 = standard___standard__NativeString___to_s_with_length(var437, 28l);
var436 = var438;
varonce435 = var436;
}
((struct instance_standard__NativeArray*)var434)->values[0]=var436;
} else {
var434 = varonce433;
varonce433 = NULL;
}
((struct instance_standard__NativeArray*)var434)->values[1]=var_key;
{
var439 = ((val*(*)(val* self))(var434->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var434); /* native_to_s on <var434:NativeArray[String]>*/
}
varonce433 = var434;
{
nit___nit__ANode___debug(var_node, var439); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
} else {
var440 = glob_sys;
if (unlikely(varonce441==NULL)) {
var442 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "No provided declaration for ";
var446 = standard___standard__NativeString___to_s_with_length(var445, 28l);
var444 = var446;
varonce443 = var444;
}
((struct instance_standard__NativeArray*)var442)->values[0]=var444;
} else {
var442 = varonce441;
varonce441 = NULL;
}
((struct instance_standard__NativeArray*)var442)->values[1]=var_key;
{
var447 = ((val*(*)(val* self))(var442->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var442); /* native_to_s on <var442:NativeArray[String]>*/
}
varonce441 = var442;
{
standard__file___Sys___print(var440, var447); /* Direct call file#Sys#print on <var440:Sys>*/
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 287);
fatal_exit(1);
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var450 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var450 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var448 = var450;
RET_LABEL449:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var448) on <var448:AbstractCompiler> */
var453 = var448->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var448:AbstractCompiler> */
if (unlikely(var453 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 585);
fatal_exit(1);
}
var451 = var453;
RET_LABEL452:(void)0;
}
}
{
var454 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var451, var_key);
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_hfile, var454); /* Direct call file#FileWriter#write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce455!=NULL)) {
var456 = varonce455;
} else {
var457 = "\n";
var458 = standard___standard__NativeString___to_s_with_length(var457, 1l);
var456 = var458;
varonce455 = var456;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_hfile, var456); /* Direct call file#FileWriter#write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_410&3)?class_info[((long)var_410&3)]:var_410->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_410); /* next on <var_410:Iterator[String]>*/
}
} else {
goto BREAK_label459;
}
}
BREAK_label459: (void)0;
{
((void(*)(val* self))((((long)var_410&3)?class_info[((long)var_410&3)]:var_410->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_410); /* finish on <var_410:Iterator[String]>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_hfile); /* Direct call file#FileWriter#close on <var_hfile:nullable FileWriter(FileWriter)>*/
}
BREAK_label373: (void)0;
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_207); /* Direct call list#ListIterator#next on <var_207:ListIterator[CodeFile]>*/
}
} else {
goto BREAK_label460;
}
}
BREAK_label460: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_207) on <var_207:ListIterator[CodeFile]> */
RET_LABEL461:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var464 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var464 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
if (unlikely(varonce465==NULL)) {
var466 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "Total C source files to compile: ";
var470 = standard___standard__NativeString___to_s_with_length(var469, 33l);
var468 = var470;
varonce467 = var468;
}
((struct instance_standard__NativeArray*)var466)->values[0]=var468;
} else {
var466 = varonce465;
varonce465 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_cfiles) on <var_cfiles:Array[String]> */
var473 = var_cfiles->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_cfiles:Array[String]> */
var471 = var473;
RET_LABEL472:(void)0;
}
}
var474 = standard__string___Int___Object__to_s(var471);
((struct instance_standard__NativeArray*)var466)->values[1]=var474;
{
var475 = ((val*(*)(val* self))(var466->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var466); /* native_to_s on <var466:NativeArray[String]>*/
}
varonce465 = var466;
{
nit___nit__ToolContext___info(var462, var475, 2l); /* Direct call toolcontext#ToolContext#info on <var462:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#makefile_name for (self: MakefileToolchain): String */
val* nit___nit__MakefileToolchain___makefile_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : String */;
val* var13 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".mk";
var5 = standard___standard__NativeString___to_s_with_length(var4, 3l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var8 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__MModule___nit__model_base__MEntity__c_name(var9);
}
((struct instance_standard__NativeArray*)var1)->values[0]=var12;
{
var13 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#default_outname for (self: MakefileToolchain): String */
val* nit___nit__MakefileToolchain___default_outname(val* self) {
val* var /* : String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var8 /* : String */;
val* var10 /* : String */;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__MModule___first_real_mmodule(var4);
}
var_mainmodule = var7;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var10 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var = var8;
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
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionString */;
val* var21 /* : OptionString */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
val* var_dir /* var dir: nullable String */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : String */;
var_mainmodule = p0;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 30);
fatal_exit(1);
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
if (var_res == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
{
var15 = nit___nit__MakefileToolchain___default_outname(self);
}
var_res = var15;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var18 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 32);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionString> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionString> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_dir = var22;
if (var_dir == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dir,((val*)NULL)) on <var_dir:nullable String> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_dir->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_dir, var_other); /* == on <var_dir:nullable String(String)>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
var30 = standard__file___String___join_path(var_dir, var_res);
}
var = var30;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: MakefileToolchain, String, Array[String]) */
void nit___nit__MakefileToolchain___write_makefile(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : Platform */;
val* var11 /* : Platform */;
val* var_platform /* var platform: Platform */;
val* var12 /* : String */;
val* var_outname /* var outname: String */;
val* var13 /* : String */;
val* var_real_outpath /* var real_outpath: String */;
val* var14 /* : String */;
val* var_outpath /* var outpath: String */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var_makename /* var makename: String */;
val* var21 /* : NativeArray[String] */;
static val* varonce;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var_makepath /* var makepath: String */;
val* var27 /* : FileWriter */;
val* var_makefile /* var makefile: FileWriter */;
val* var28 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var29 /* : POSetElement[MModule] */;
val* var31 /* : POSetElement[MModule] */;
val* var32 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : Iterator[MModule] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var37 /* : nullable Array[String] */;
val* var_libs /* var libs: nullable Array[String] */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
short int var63 /* : Bool */;
val* var64 /* : ToolContext */;
val* var66 /* : ToolContext */;
val* var67 /* : OptionBool */;
val* var69 /* : OptionBool */;
val* var70 /* : nullable Object */;
val* var72 /* : nullable Object */;
short int var73 /* : Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
val* var113 /* : String */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var119 /* : NativeArray[String] */;
static val* varonce118;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
val* var128 /* : String */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
val* var138 /* : String */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
val* var144 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var145 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var_146 /* var : Array[String] */;
val* var147 /* : ArrayIterator[nullable Object] */;
val* var_148 /* var : ArrayIterator[String] */;
short int var149 /* : Bool */;
val* var150 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : FlatString */;
val* var160 /* : String */;
val* var_o /* var o: String */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
val* var179 /* : String */;
val* var181 /* : AbstractCompiler */;
val* var183 /* : AbstractCompiler */;
val* var184 /* : Array[String] */;
val* var186 /* : Array[String] */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
val* var190 /* : NativeArray[String] */;
static val* varonce189;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
val* var_linker_script_path /* var linker_script_path: String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : FlatString */;
val* var200 /* : FileWriter */;
val* var_f201 /* var f: FileWriter */;
val* var202 /* : AbstractCompiler */;
val* var204 /* : AbstractCompiler */;
val* var205 /* : Array[String] */;
val* var207 /* : Array[String] */;
val* var_208 /* var : Array[String] */;
val* var209 /* : ArrayIterator[nullable Object] */;
val* var_210 /* var : ArrayIterator[String] */;
short int var211 /* : Bool */;
val* var212 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
val* var216 /* : FlatString */;
val* var218 /* : Array[ExternFile] */;
val* var_java_files /* var java_files: Array[ExternFile] */;
val* var219 /* : Array[String] */;
val* var_pkgconfigs /* var pkgconfigs: Array[String] */;
val* var220 /* : AbstractCompiler */;
val* var222 /* : AbstractCompiler */;
val* var223 /* : Array[ExternFile] */;
val* var225 /* : Array[ExternFile] */;
val* var_226 /* var : Array[ExternFile] */;
val* var227 /* : ArrayIterator[nullable Object] */;
val* var_228 /* var : ArrayIterator[ExternFile] */;
short int var229 /* : Bool */;
val* var230 /* : nullable Object */;
val* var_f231 /* var f: ExternFile */;
val* var232 /* : Array[String] */;
val* var234 /* : Array[String] */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : FlatString */;
val* var_242 /* var : Array[String] */;
val* var243 /* : ArrayIterator[nullable Object] */;
val* var_244 /* var : ArrayIterator[String] */;
short int var245 /* : Bool */;
val* var246 /* : nullable Object */;
val* var_p /* var p: String */;
val* var248 /* : NativeArray[String] */;
static val* varonce247;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : NativeString */;
val* var252 /* : FlatString */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
val* var256 /* : FlatString */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
val* var260 /* : FlatString */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
val* var264 /* : FlatString */;
val* var265 /* : String */;
val* var267 /* : AbstractCompiler */;
val* var269 /* : AbstractCompiler */;
val* var270 /* : Array[ExternFile] */;
val* var272 /* : Array[ExternFile] */;
val* var_273 /* var : Array[ExternFile] */;
val* var274 /* : ArrayIterator[nullable Object] */;
val* var_275 /* var : ArrayIterator[ExternFile] */;
short int var276 /* : Bool */;
val* var277 /* : nullable Object */;
val* var_f278 /* var f: ExternFile */;
val* var279 /* : String */;
val* var_o280 /* var o: String */;
val* var281 /* : String */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
val* var287 /* : FlatString */;
val* var288 /* : String */;
val* var_ff /* var ff: String */;
val* var290 /* : NativeArray[String] */;
static val* varonce289;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : FlatString */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : FlatString */;
val* var299 /* : String */;
val* var301 /* : NativeArray[String] */;
static val* varonce300;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : FlatString */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : FlatString */;
val* var310 /* : String */;
val* var311 /* : String */;
val* var312 /* : String */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
val* var319 /* : NativeArray[String] */;
static val* varonce318;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
val* var323 /* : FlatString */;
val* var324 /* : String */;
val* var_jar_file /* var jar_file: String */;
val* var325 /* : Array[String] */;
val* var_class_files_array /* var class_files_array: Array[String] */;
val* var_326 /* var : Array[ExternFile] */;
val* var327 /* : ArrayIterator[nullable Object] */;
val* var_328 /* var : ArrayIterator[ExternFile] */;
short int var329 /* : Bool */;
val* var330 /* : nullable Object */;
val* var_f331 /* var f: ExternFile */;
val* var332 /* : String */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
val* var337 /* : FlatString */;
val* var338 /* : String */;
val* var_class_files /* var class_files: String */;
val* var340 /* : NativeArray[String] */;
static val* varonce339;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
val* var344 /* : FlatString */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : FlatString */;
val* var349 /* : String */;
val* var351 /* : NativeArray[String] */;
static val* varonce350;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
val* var359 /* : FlatString */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
val* var363 /* : FlatString */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
val* var368 /* : FlatString */;
val* var_pkg /* var pkg: String */;
short int var369 /* : Bool */;
short int var370 /* : Bool */;
val* var372 /* : NativeArray[String] */;
static val* varonce371;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
val* var376 /* : FlatString */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
val* var380 /* : FlatString */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
val* var384 /* : FlatString */;
val* var385 /* : String */;
val* var386 /* : String */;
val* var388 /* : NativeArray[String] */;
static val* varonce387;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
val* var392 /* : FlatString */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
val* var396 /* : FlatString */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
val* var400 /* : FlatString */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
val* var404 /* : FlatString */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : FlatString */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
val* var412 /* : FlatString */;
val* var413 /* : String */;
val* var414 /* : String */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
val* var418 /* : FlatString */;
val* var419 /* : String */;
val* var420 /* : String */;
val* var422 /* : NativeArray[String] */;
static val* varonce421;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
val* var426 /* : FlatString */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
val* var430 /* : FlatString */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : NativeString */;
val* var434 /* : FlatString */;
val* var435 /* : String */;
val* var436 /* : String */;
short int var437 /* : Bool */;
short int var439 /* : Bool */;
short int var440 /* : Bool */;
val* var442 /* : NativeArray[String] */;
static val* varonce441;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : FlatString */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
val* var450 /* : FlatString */;
val* var451 /* : String */;
val* var452 /* : String */;
val* var453 /* : ToolContext */;
val* var455 /* : ToolContext */;
val* var457 /* : NativeArray[String] */;
static val* varonce456;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
val* var461 /* : FlatString */;
val* var462 /* : String */;
val* var464 /* : NativeArray[String] */;
static val* varonce463;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : NativeString */;
val* var468 /* : FlatString */;
val* var469 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mainmodule = var3;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var8 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 533);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_platform = var9;
{
var12 = nit___nit__MakefileToolchain___outfile(self, var_mainmodule);
}
var_outname = var12;
{
var13 = standard__file___String___relpath(var_compile_dir, var_outname);
}
var_real_outpath = var13;
{
var14 = standard___standard__Text___escape_to_mk(var_real_outpath);
}
var_outpath = var14;
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var17 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var19 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mainmodule);
}
var_outpath = var19;
} else {
}
{
var20 = nit___nit__MakefileToolchain___makefile_name(self);
}
var_makename = var20;
if (unlikely(varonce==NULL)) {
var21 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "/";
var25 = standard___standard__NativeString___to_s_with_length(var24, 1l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var21)->values[0]=var_compile_dir;
((struct instance_standard__NativeArray*)var21)->values[2]=var_makename;
{
var26 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
var_makepath = var26;
var27 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var27, var_makepath); /* Direct call file#FileWriter#open on <var27:FileWriter>*/
}
var_makefile = var27;
var28 = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var28); /* Direct call hash_collection#HashSet#init on <var28:HashSet[String]>*/
}
var_linker_options = var28;
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var31 = var_mainmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement___greaters(var29);
}
var_ = var32;
{
var33 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:Iterator[MModule]>*/
}
if (var35){
{
var36 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:Iterator[MModule]>*/
}
var_m = var36;
{
var37 = nit__light___MModule___collect_linker_libs(var_m);
}
var_libs = var37;
if (var_libs == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_libs,((val*)NULL)) on <var_libs:nullable Array[String]> */
var_other = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_libs->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_libs, var_other); /* == on <var_libs:nullable Array[String](Array[String])>*/
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
standard___standard__SimpleCollection___add_all(var_linker_options, var_libs); /* Direct call abstract_collection#SimpleCollection#add_all on <var_linker_options:HashSet[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:Iterator[MModule]>*/
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "CC = ccache cc\nCXX = ccache c++\nCFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes\nCINCL =\nLDFLAGS ?= \nLDLIBS  ?= -lm ";
var48 = standard___standard__NativeString___to_s_with_length(var47, 129l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\n\n";
var52 = standard___standard__NativeString___to_s_with_length(var51, 2l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce43;
varonce43 = NULL;
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = " ";
var56 = standard___standard__NativeString___to_s_with_length(var55, 1l);
var54 = var56;
varonce53 = var54;
}
{
var57 = standard__string___Collection___join(var_linker_options, var54);
}
((struct instance_standard__NativeArray*)var44)->values[1]=var57;
{
var58 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var58); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "\n# SPECIAL CONFIGURATION FLAGS\n";
var62 = standard___standard__NativeString___to_s_with_length(var61, 31l);
var60 = var62;
varonce59 = var60;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var60); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
var63 = nit___nit__Platform___supports_libunwind(var_platform);
}
if (var63){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var66 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_stacktrace (var64) on <var64:ToolContext> */
var69 = var64->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <var64:ToolContext> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 66);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline opts#Option#value (var67) on <var67:OptionBool> */
var72 = var67->attrs[COLOR_opts__Option___value].val; /* _value on <var67:OptionBool> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var73 = (short int)((long)(var70)>>2);
if (var73){
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "NO_STACKTRACE=True";
var77 = standard___standard__NativeString___to_s_with_length(var76, 18l);
var75 = var77;
varonce74 = var75;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var75); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "NO_STACKTRACE= # Set to `True` to enable";
var81 = standard___standard__NativeString___to_s_with_length(var80, 40l);
var79 = var81;
varonce78 = var79;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var79); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
}
} else {
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "\n\n";
var85 = standard___standard__NativeString___to_s_with_length(var84, 2l);
var83 = var85;
varonce82 = var83;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var83); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "uname_S := $(shell sh -c \'uname -s 2>/dev/null || echo not\')\n";
var89 = standard___standard__NativeString___to_s_with_length(var88, 61l);
var87 = var89;
varonce86 = var87;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var87); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "clang_check := $(shell sh -c \'$(CC) -v 2>&1 | grep -q clang; echo $$?\')\nifeq ($(clang_check), 0)\n\tCFLAGS += -Qunused-arguments\nendif\n";
var93 = standard___standard__NativeString___to_s_with_length(var92, 133l);
var91 = var93;
varonce90 = var91;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var91); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
var94 = nit___nit__Platform___supports_libunwind(var_platform);
}
if (var94){
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "ifneq ($(NO_STACKTRACE), True)\n  # Check and include lib-unwind in a portable way\n  ifneq ($(uname_S),Darwin)\n    # already included on macosx, but need to get the correct flags in other supported platforms.\n    ifeq ($(shell pkg-config --exists \'libunwind\'; echo $$?), 0)\n      LDLIBS += `pkg-config --libs libunwind`\n      CFLAGS += `pkg-config --cflags libunwind`\n    else\n      $(warning \"[_] stack-traces disabled. Please install libunwind-dev.\")\n      CFLAGS += -D NO_STACKTRACE\n    endif\n  endif\nelse\n  # Stacktraces disabled\n  CFLAGS += -D NO_STACKTRACE\nendif\n\n";
var98 = standard___standard__NativeString___to_s_with_length(var97, 569l);
var96 = var98;
varonce95 = var96;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var96); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "CFLAGS += -D NO_STACKTRACE\n\n";
var102 = standard___standard__NativeString___to_s_with_length(var101, 28l);
var100 = var102;
varonce99 = var100;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var100); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
}
if (unlikely(varonce103==NULL)) {
var104 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "all: ";
var108 = standard___standard__NativeString___to_s_with_length(var107, 5l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var104)->values[0]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "\n";
var112 = standard___standard__NativeString___to_s_with_length(var111, 1l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var104)->values[2]=var110;
} else {
var104 = varonce103;
varonce103 = NULL;
}
((struct instance_standard__NativeArray*)var104)->values[1]=var_outpath;
{
var113 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var113); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var116 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var117 = !var116;
var114 = var117;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
if (var114){
if (unlikely(varonce118==NULL)) {
var119 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "\tcp -- ";
var123 = standard___standard__NativeString___to_s_with_length(var122, 7l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var119)->values[0]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = " ";
var127 = standard___standard__NativeString___to_s_with_length(var126, 1l);
var125 = var127;
varonce124 = var125;
}
((struct instance_standard__NativeArray*)var119)->values[2]=var125;
} else {
var119 = varonce118;
varonce118 = NULL;
}
{
var128 = standard___standard__Text___escape_to_sh(var_outpath);
}
((struct instance_standard__NativeArray*)var119)->values[1]=var128;
{
var129 = standard___standard__Text___escape_to_sh(var_real_outpath);
}
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "$";
var133 = standard___standard__NativeString___to_s_with_length(var132, 1l);
var131 = var133;
varonce130 = var131;
}
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "$$";
var137 = standard___standard__NativeString___to_s_with_length(var136, 2l);
var135 = var137;
varonce134 = var135;
}
{
var138 = standard__string_search___Text___replace(var129, var131, var135);
}
((struct instance_standard__NativeArray*)var119)->values[3]=var138;
{
var139 = ((val*(*)(val* self))(var119->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var119); /* native_to_s on <var119:NativeArray[String]>*/
}
varonce118 = var119;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var139); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
}
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "\n";
var143 = standard___standard__NativeString___to_s_with_length(var142, 1l);
var141 = var143;
varonce140 = var141;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var141); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
var144 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var144); /* Direct call array#Array#init on <var144:Array[String]>*/
}
var_ofiles = var144;
var145 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var145); /* Direct call array#Array#init on <var145:Array[String]>*/
}
var_dep_rules = var145;
var_146 = var_cfiles;
{
var147 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_146);
}
var_148 = var147;
for(;;) {
{
var149 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_148);
}
if (var149){
{
var150 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_148);
}
var_f = var150;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = ".c";
var154 = standard___standard__NativeString___to_s_with_length(var153, 2l);
var152 = var154;
varonce151 = var152;
}
{
var155 = standard__file___String___strip_extension(var_f, var152);
}
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = ".o";
var159 = standard___standard__NativeString___to_s_with_length(var158, 2l);
var157 = var159;
varonce156 = var157;
}
{
var160 = ((val*(*)(val* self, val* p0))(var155->class->vft[COLOR_standard__string__String___43d]))(var155, var157); /* + on <var155:String>*/
}
var_o = var160;
if (unlikely(varonce161==NULL)) {
var162 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = ": ";
var166 = standard___standard__NativeString___to_s_with_length(var165, 2l);
var164 = var166;
varonce163 = var164;
}
((struct instance_standard__NativeArray*)var162)->values[1]=var164;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "\n\t$(CC) $(CFLAGS) $(CINCL) -c -o ";
var170 = standard___standard__NativeString___to_s_with_length(var169, 33l);
var168 = var170;
varonce167 = var168;
}
((struct instance_standard__NativeArray*)var162)->values[3]=var168;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = " ";
var174 = standard___standard__NativeString___to_s_with_length(var173, 1l);
var172 = var174;
varonce171 = var172;
}
((struct instance_standard__NativeArray*)var162)->values[5]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "\n\n";
var178 = standard___standard__NativeString___to_s_with_length(var177, 2l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var162)->values[7]=var176;
} else {
var162 = varonce161;
varonce161 = NULL;
}
((struct instance_standard__NativeArray*)var162)->values[0]=var_o;
((struct instance_standard__NativeArray*)var162)->values[2]=var_f;
((struct instance_standard__NativeArray*)var162)->values[4]=var_o;
((struct instance_standard__NativeArray*)var162)->values[6]=var_f;
{
var179 = ((val*(*)(val* self))(var162->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var179); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ofiles, var_o); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_dep_rules, var_o); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_148); /* Direct call array#ArrayIterator#next on <var_148:ArrayIterator[String]>*/
}
} else {
goto BREAK_label180;
}
}
BREAK_label180: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_148); /* Direct call array#ArrayIterator#finish on <var_148:ArrayIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var183 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#linker_script (var181) on <var181:AbstractCompiler> */
var186 = var181->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var181:AbstractCompiler> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 572);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var184);
}
var188 = !var187;
if (var188){
if (unlikely(varonce189==NULL)) {
var190 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "/linker_script";
var194 = standard___standard__NativeString___to_s_with_length(var193, 14l);
var192 = var194;
varonce191 = var192;
}
((struct instance_standard__NativeArray*)var190)->values[1]=var192;
} else {
var190 = varonce189;
varonce189 = NULL;
}
((struct instance_standard__NativeArray*)var190)->values[0]=var_compile_dir;
{
var195 = ((val*(*)(val* self))(var190->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var190); /* native_to_s on <var190:NativeArray[String]>*/
}
varonce189 = var190;
var_linker_script_path = var195;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "linker_script";
var199 = standard___standard__NativeString___to_s_with_length(var198, 13l);
var197 = var199;
varonce196 = var197;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ofiles, var197); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
var200 = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var200, var_linker_script_path); /* Direct call file#FileWriter#open on <var200:FileWriter>*/
}
var_f201 = var200;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var204 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#linker_script (var202) on <var202:AbstractCompiler> */
var207 = var202->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var202:AbstractCompiler> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 572);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
var_208 = var205;
{
var209 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_208);
}
var_210 = var209;
for(;;) {
{
var211 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_210);
}
if (var211){
{
var212 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_210);
}
var_l = var212;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_f201, var_l); /* Direct call file#FileWriter#write on <var_f201:FileWriter>*/
}
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "\n";
var216 = standard___standard__NativeString___to_s_with_length(var215, 1l);
var214 = var216;
varonce213 = var214;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_f201, var214); /* Direct call file#FileWriter#write on <var_f201:FileWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_210); /* Direct call array#ArrayIterator#next on <var_210:ArrayIterator[String]>*/
}
} else {
goto BREAK_label217;
}
}
BREAK_label217: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_210); /* Direct call array#ArrayIterator#finish on <var_210:ArrayIterator[String]>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_f201); /* Direct call file#FileWriter#close on <var_f201:FileWriter>*/
}
} else {
}
var218 = NEW_standard__Array(&type_standard__Array__nit__ExternFile);
{
standard___standard__Array___standard__kernel__Object__init(var218); /* Direct call array#Array#init on <var218:Array[ExternFile]>*/
}
var_java_files = var218;
var219 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var219); /* Direct call array#Array#init on <var219:Array[String]>*/
}
var_pkgconfigs = var219;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var222 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var220) on <var220:AbstractCompiler> */
var225 = var220->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var220:AbstractCompiler> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
var_226 = var223;
{
var227 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_226);
}
var_228 = var227;
for(;;) {
{
var229 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_228);
}
if (var229){
{
var230 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_228);
}
var_f231 = var230;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_f231) on <var_f231:ExternFile> */
var234 = var_f231->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f231:ExternFile> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 123);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_pkgconfigs, var232); /* Direct call array#Array#add_all on <var_pkgconfigs:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_228); /* Direct call array#ArrayIterator#next on <var_228:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label235;
}
}
BREAK_label235: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_228); /* Direct call array#ArrayIterator#finish on <var_228:ArrayIterator[ExternFile]>*/
}
{
var236 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var237 = !var236;
if (var237){
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "# does pkg-config exists?\nifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)\n$(error \"Command `pkg-config` not found. Please install it\")\nendif\n";
var241 = standard___standard__NativeString___to_s_with_length(var240, 151l);
var239 = var241;
varonce238 = var239;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var239); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
var_242 = var_pkgconfigs;
{
var243 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_242);
}
var_244 = var243;
for(;;) {
{
var245 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_244);
}
if (var245){
{
var246 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_244);
}
var_p = var246;
if (unlikely(varonce247==NULL)) {
var248 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = "# Check for library ";
var252 = standard___standard__NativeString___to_s_with_length(var251, 20l);
var250 = var252;
varonce249 = var250;
}
((struct instance_standard__NativeArray*)var248)->values[0]=var250;
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "\nifneq ($(shell pkg-config --exists \'";
var256 = standard___standard__NativeString___to_s_with_length(var255, 37l);
var254 = var256;
varonce253 = var254;
}
((struct instance_standard__NativeArray*)var248)->values[2]=var254;
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "\'; echo $$?), 0)\n$(error \"pkg-config: package ";
var260 = standard___standard__NativeString___to_s_with_length(var259, 46l);
var258 = var260;
varonce257 = var258;
}
((struct instance_standard__NativeArray*)var248)->values[4]=var258;
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = " is not found.\")\nendif\n";
var264 = standard___standard__NativeString___to_s_with_length(var263, 23l);
var262 = var264;
varonce261 = var262;
}
((struct instance_standard__NativeArray*)var248)->values[6]=var262;
} else {
var248 = varonce247;
varonce247 = NULL;
}
((struct instance_standard__NativeArray*)var248)->values[1]=var_p;
((struct instance_standard__NativeArray*)var248)->values[3]=var_p;
((struct instance_standard__NativeArray*)var248)->values[5]=var_p;
{
var265 = ((val*(*)(val* self))(var248->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var248); /* native_to_s on <var248:NativeArray[String]>*/
}
varonce247 = var248;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var265); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_244); /* Direct call array#ArrayIterator#next on <var_244:ArrayIterator[String]>*/
}
} else {
goto BREAK_label266;
}
}
BREAK_label266: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_244); /* Direct call array#ArrayIterator#finish on <var_244:ArrayIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var269 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 131);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var267) on <var267:AbstractCompiler> */
var272 = var267->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var267:AbstractCompiler> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
var_273 = var270;
{
var274 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_273);
}
var_275 = var274;
for(;;) {
{
var276 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_275);
}
if (var276){
{
var277 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_275);
}
var_f278 = var277;
{
var279 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(var_f278);
}
var_o280 = var279;
{
{ /* Inline c_tools#ExternFile#filename (var_f278) on <var_f278:ExternFile> */
var283 = var_f278->attrs[COLOR_nit__c_tools__ExternFile___filename].val; /* _filename on <var_f278:ExternFile> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 108);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "";
var287 = standard___standard__NativeString___to_s_with_length(var286, 0l);
var285 = var287;
varonce284 = var285;
}
{
var288 = standard__file___String___basename(var281, var285);
}
var_ff = var288;
if (unlikely(varonce289==NULL)) {
var290 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = ": ";
var294 = standard___standard__NativeString___to_s_with_length(var293, 2l);
var292 = var294;
varonce291 = var292;
}
((struct instance_standard__NativeArray*)var290)->values[1]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "\n";
var298 = standard___standard__NativeString___to_s_with_length(var297, 1l);
var296 = var298;
varonce295 = var296;
}
((struct instance_standard__NativeArray*)var290)->values[3]=var296;
} else {
var290 = varonce289;
varonce289 = NULL;
}
((struct instance_standard__NativeArray*)var290)->values[0]=var_o280;
((struct instance_standard__NativeArray*)var290)->values[2]=var_ff;
{
var299 = ((val*(*)(val* self))(var290->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var299); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce300==NULL)) {
var301 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "\t";
var305 = standard___standard__NativeString___to_s_with_length(var304, 1l);
var303 = var305;
varonce302 = var303;
}
((struct instance_standard__NativeArray*)var301)->values[0]=var303;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "\n\n";
var309 = standard___standard__NativeString___to_s_with_length(var308, 2l);
var307 = var309;
varonce306 = var307;
}
((struct instance_standard__NativeArray*)var301)->values[2]=var307;
} else {
var301 = varonce300;
varonce300 = NULL;
}
{
var310 = nit___nit__ExternCFile___ExternFile__makefile_rule_content(var_f278);
}
((struct instance_standard__NativeArray*)var301)->values[1]=var310;
{
var311 = ((val*(*)(val* self))(var301->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var301); /* native_to_s on <var301:NativeArray[String]>*/
}
varonce300 = var301;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var311); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
var312 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(var_f278);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_dep_rules, var312); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
var313 = nit___nit__ExternCFile___ExternFile__compiles_to_o_file(var_f278);
}
if (var313){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ofiles, var_o280); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
} else {
}
{
var314 = nit___nit__ExternFile___add_to_jar(var_f278);
}
if (var314){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_java_files, var_f278); /* Direct call array#Array#add on <var_java_files:Array[ExternFile]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_275); /* Direct call array#ArrayIterator#next on <var_275:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label315;
}
}
BREAK_label315: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_275); /* Direct call array#ArrayIterator#finish on <var_275:ArrayIterator[ExternFile]>*/
}
{
var316 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_java_files);
}
var317 = !var316;
if (var317){
if (unlikely(varonce318==NULL)) {
var319 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = ".jar";
var323 = standard___standard__NativeString___to_s_with_length(var322, 4l);
var321 = var323;
varonce320 = var321;
}
((struct instance_standard__NativeArray*)var319)->values[1]=var321;
} else {
var319 = varonce318;
varonce318 = NULL;
}
((struct instance_standard__NativeArray*)var319)->values[0]=var_outpath;
{
var324 = ((val*(*)(val* self))(var319->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var319); /* native_to_s on <var319:NativeArray[String]>*/
}
varonce318 = var319;
var_jar_file = var324;
var325 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var325); /* Direct call array#Array#init on <var325:Array[String]>*/
}
var_class_files_array = var325;
var_326 = var_java_files;
{
var327 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_326);
}
var_328 = var327;
for(;;) {
{
var329 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_328);
}
if (var329){
{
var330 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_328);
}
var_f331 = var330;
{
var332 = nit___nit__ExternCFile___ExternFile__makefile_rule_name(var_f331);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_class_files_array, var332); /* Direct call array#Array#add on <var_class_files_array:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_328); /* Direct call array#ArrayIterator#next on <var_328:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label333;
}
}
BREAK_label333: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_328); /* Direct call array#ArrayIterator#finish on <var_328:ArrayIterator[ExternFile]>*/
}
if (likely(varonce334!=NULL)) {
var335 = varonce334;
} else {
var336 = " ";
var337 = standard___standard__NativeString___to_s_with_length(var336, 1l);
var335 = var337;
varonce334 = var335;
}
{
var338 = standard__string___Collection___join(var_class_files_array, var335);
}
var_class_files = var338;
if (unlikely(varonce339==NULL)) {
var340 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = ": ";
var344 = standard___standard__NativeString___to_s_with_length(var343, 2l);
var342 = var344;
varonce341 = var342;
}
((struct instance_standard__NativeArray*)var340)->values[1]=var342;
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "\n";
var348 = standard___standard__NativeString___to_s_with_length(var347, 1l);
var346 = var348;
varonce345 = var346;
}
((struct instance_standard__NativeArray*)var340)->values[3]=var346;
} else {
var340 = varonce339;
varonce339 = NULL;
}
((struct instance_standard__NativeArray*)var340)->values[0]=var_jar_file;
((struct instance_standard__NativeArray*)var340)->values[2]=var_class_files;
{
var349 = ((val*(*)(val* self))(var340->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var340); /* native_to_s on <var340:NativeArray[String]>*/
}
varonce339 = var340;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var349); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce350==NULL)) {
var351 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "\tjar cf ";
var355 = standard___standard__NativeString___to_s_with_length(var354, 8l);
var353 = var355;
varonce352 = var353;
}
((struct instance_standard__NativeArray*)var351)->values[0]=var353;
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = " ";
var359 = standard___standard__NativeString___to_s_with_length(var358, 1l);
var357 = var359;
varonce356 = var357;
}
((struct instance_standard__NativeArray*)var351)->values[2]=var357;
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "\n\n";
var363 = standard___standard__NativeString___to_s_with_length(var362, 2l);
var361 = var363;
varonce360 = var361;
}
((struct instance_standard__NativeArray*)var351)->values[4]=var361;
} else {
var351 = varonce350;
varonce350 = NULL;
}
((struct instance_standard__NativeArray*)var351)->values[1]=var_jar_file;
((struct instance_standard__NativeArray*)var351)->values[3]=var_class_files;
{
var364 = ((val*(*)(val* self))(var351->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var351); /* native_to_s on <var351:NativeArray[String]>*/
}
varonce350 = var351;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var364); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_dep_rules, var_jar_file); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
} else {
}
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "";
var368 = standard___standard__NativeString___to_s_with_length(var367, 0l);
var366 = var368;
varonce365 = var366;
}
var_pkg = var366;
{
var369 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var370 = !var369;
if (var370){
if (unlikely(varonce371==NULL)) {
var372 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = "`pkg-config --libs ";
var376 = standard___standard__NativeString___to_s_with_length(var375, 19l);
var374 = var376;
varonce373 = var374;
}
((struct instance_standard__NativeArray*)var372)->values[0]=var374;
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "`";
var380 = standard___standard__NativeString___to_s_with_length(var379, 1l);
var378 = var380;
varonce377 = var378;
}
((struct instance_standard__NativeArray*)var372)->values[2]=var378;
} else {
var372 = varonce371;
varonce371 = NULL;
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = " ";
var384 = standard___standard__NativeString___to_s_with_length(var383, 1l);
var382 = var384;
varonce381 = var382;
}
{
var385 = standard__string___Collection___join(var_pkgconfigs, var382);
}
((struct instance_standard__NativeArray*)var372)->values[1]=var385;
{
var386 = ((val*(*)(val* self))(var372->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var372); /* native_to_s on <var372:NativeArray[String]>*/
}
varonce371 = var372;
var_pkg = var386;
} else {
}
if (unlikely(varonce387==NULL)) {
var388 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = ": ";
var392 = standard___standard__NativeString___to_s_with_length(var391, 2l);
var390 = var392;
varonce389 = var390;
}
((struct instance_standard__NativeArray*)var388)->values[1]=var390;
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "\n\t$(CC) $(LDFLAGS) -o ";
var396 = standard___standard__NativeString___to_s_with_length(var395, 22l);
var394 = var396;
varonce393 = var394;
}
((struct instance_standard__NativeArray*)var388)->values[3]=var394;
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = " ";
var400 = standard___standard__NativeString___to_s_with_length(var399, 1l);
var398 = var400;
varonce397 = var398;
}
((struct instance_standard__NativeArray*)var388)->values[5]=var398;
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = " $(LDLIBS) ";
var404 = standard___standard__NativeString___to_s_with_length(var403, 11l);
var402 = var404;
varonce401 = var402;
}
((struct instance_standard__NativeArray*)var388)->values[7]=var402;
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "\n\n";
var408 = standard___standard__NativeString___to_s_with_length(var407, 2l);
var406 = var408;
varonce405 = var406;
}
((struct instance_standard__NativeArray*)var388)->values[9]=var406;
} else {
var388 = varonce387;
varonce387 = NULL;
}
((struct instance_standard__NativeArray*)var388)->values[0]=var_outpath;
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = " ";
var412 = standard___standard__NativeString___to_s_with_length(var411, 1l);
var410 = var412;
varonce409 = var410;
}
{
var413 = standard__string___Collection___join(var_dep_rules, var410);
}
((struct instance_standard__NativeArray*)var388)->values[2]=var413;
{
var414 = standard___standard__Text___escape_to_sh(var_outpath);
}
((struct instance_standard__NativeArray*)var388)->values[4]=var414;
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = " ";
var418 = standard___standard__NativeString___to_s_with_length(var417, 1l);
var416 = var418;
varonce415 = var416;
}
{
var419 = standard__string___Collection___join(var_ofiles, var416);
}
((struct instance_standard__NativeArray*)var388)->values[6]=var419;
((struct instance_standard__NativeArray*)var388)->values[8]=var_pkg;
{
var420 = ((val*(*)(val* self))(var388->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var388); /* native_to_s on <var388:NativeArray[String]>*/
}
varonce387 = var388;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var420); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce421==NULL)) {
var422 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce423!=NULL)) {
var424 = varonce423;
} else {
var425 = "clean:\n\trm ";
var426 = standard___standard__NativeString___to_s_with_length(var425, 11l);
var424 = var426;
varonce423 = var424;
}
((struct instance_standard__NativeArray*)var422)->values[0]=var424;
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = " 2>/dev/null\n";
var430 = standard___standard__NativeString___to_s_with_length(var429, 13l);
var428 = var430;
varonce427 = var428;
}
((struct instance_standard__NativeArray*)var422)->values[2]=var428;
} else {
var422 = varonce421;
varonce421 = NULL;
}
if (likely(varonce431!=NULL)) {
var432 = varonce431;
} else {
var433 = " ";
var434 = standard___standard__NativeString___to_s_with_length(var433, 1l);
var432 = var434;
varonce431 = var432;
}
{
var435 = standard__string___Collection___join(var_ofiles, var432);
}
((struct instance_standard__NativeArray*)var422)->values[1]=var435;
{
var436 = ((val*(*)(val* self))(var422->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var422); /* native_to_s on <var422:NativeArray[String]>*/
}
varonce421 = var422;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var436); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var439 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var440 = !var439;
var437 = var440;
goto RET_LABEL438;
RET_LABEL438:(void)0;
}
}
if (var437){
if (unlikely(varonce441==NULL)) {
var442 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "\trm -- ";
var446 = standard___standard__NativeString___to_s_with_length(var445, 7l);
var444 = var446;
varonce443 = var444;
}
((struct instance_standard__NativeArray*)var442)->values[0]=var444;
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = " 2>/dev/null\n";
var450 = standard___standard__NativeString___to_s_with_length(var449, 13l);
var448 = var450;
varonce447 = var448;
}
((struct instance_standard__NativeArray*)var442)->values[2]=var448;
} else {
var442 = varonce441;
varonce441 = NULL;
}
{
var451 = standard___standard__Text___escape_to_sh(var_outpath);
}
((struct instance_standard__NativeArray*)var442)->values[1]=var451;
{
var452 = ((val*(*)(val* self))(var442->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var442); /* native_to_s on <var442:NativeArray[String]>*/
}
varonce441 = var442;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_makefile, var452); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_makefile); /* Direct call file#FileWriter#close on <var_makefile:FileWriter>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var455 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var455 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var453 = var455;
RET_LABEL454:(void)0;
}
}
if (unlikely(varonce456==NULL)) {
var457 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = "Generated makefile: ";
var461 = standard___standard__NativeString___to_s_with_length(var460, 20l);
var459 = var461;
varonce458 = var459;
}
((struct instance_standard__NativeArray*)var457)->values[0]=var459;
} else {
var457 = varonce456;
varonce456 = NULL;
}
((struct instance_standard__NativeArray*)var457)->values[1]=var_makepath;
{
var462 = ((val*(*)(val* self))(var457->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var457); /* native_to_s on <var457:NativeArray[String]>*/
}
varonce456 = var457;
{
nit___nit__ToolContext___info(var453, var462, 2l); /* Direct call toolcontext#ToolContext#info on <var453:ToolContext>*/
}
if (unlikely(varonce463==NULL)) {
var464 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce465!=NULL)) {
var466 = varonce465;
} else {
var467 = "/Makefile";
var468 = standard___standard__NativeString___to_s_with_length(var467, 9l);
var466 = var468;
varonce465 = var466;
}
((struct instance_standard__NativeArray*)var464)->values[1]=var466;
} else {
var464 = varonce463;
varonce463 = NULL;
}
((struct instance_standard__NativeArray*)var464)->values[0]=var_compile_dir;
{
var469 = ((val*(*)(val* self))(var464->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var464); /* native_to_s on <var464:NativeArray[String]>*/
}
varonce463 = var464;
{
standard__file___String___file_copy_to(var_makepath, var469); /* Direct call file#String#file_copy_to on <var_makepath:String>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: MakefileToolchain, String) */
void nit___nit__MakefileToolchain___compile_c_code(val* self, val* p0) {
val* var_compile_dir /* var compile_dir: String */;
val* var /* : String */;
val* var_makename /* var makename: String */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_makeflags /* var makeflags: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var_command /* var command: String */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var42 /* : Bool */;
val* var43 /* : Sys */;
val* var45 /* : Sys */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
long var53 /* : Int */;
val* var54 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var55 /* : Sys */;
val* var57 /* : Sys */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
long var65 /* : Int */;
val* var66 /* : nullable Object */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
short int var71 /* : Bool */;
val* var72 /* : ToolContext */;
val* var74 /* : ToolContext */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : Message */;
var_compile_dir = p0;
{
var = nit___nit__MakefileToolchain___makefile_name(self);
}
var_makename = var;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 38);
fatal_exit(1);
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
var_makeflags = var7;
if (var_makeflags == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_makeflags->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_makeflags, ((val*)NULL)); /* == on <var_makeflags:nullable String>*/
var10 = var11;
}
if (var10){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "";
var14 = standard___standard__NativeString___to_s_with_length(var13, 0l);
var12 = var14;
varonce = var12;
}
var_makeflags = var12;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "make -B -C ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 11l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " -f ";
var24 = standard___standard__NativeString___to_s_with_length(var23, 4l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = " -j 4 ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 6l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var16)->values[4]=var26;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var_compile_dir;
((struct instance_standard__NativeArray*)var16)->values[3]=var_makename;
((struct instance_standard__NativeArray*)var16)->values[5]=var_makeflags;
{
var29 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_command = var29;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var32 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nit___nit__ToolContext___info(var30, var_command, 2l); /* Direct call toolcontext#ToolContext#info on <var30:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var35 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var33) on <var33:ToolContext> */
var38 = var33->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var33:ToolContext> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var36,3l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var41 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var42 = var36 >= 3l;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var45 = glob_sys;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = " 2>&1";
var51 = standard___standard__NativeString___to_s_with_length(var50, 5l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[1]=var49;
} else {
var47 = varonce46;
varonce46 = NULL;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var_command;
{
var52 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
var53 = standard__exec___Sys___system(var43, var52);
}
var54 = (val*)(var53<<2|1);
var_res = var54;
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var57 = glob_sys;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (unlikely(varonce58==NULL)) {
var59 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = " 2>&1 >/dev/null";
var63 = standard___standard__NativeString___to_s_with_length(var62, 16l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var59)->values[1]=var61;
} else {
var59 = varonce58;
varonce58 = NULL;
}
((struct instance_standard__NativeArray*)var59)->values[0]=var_command;
{
var64 = ((val*(*)(val* self))(var59->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
var65 = standard__exec___Sys___system(var55, var64);
}
var66 = (val*)(var65<<2|1);
var_res = var66;
}
{
{ /* Inline kernel#Int#!= (var_res,0l) on <var_res:nullable Object(Int)> */
var70 = (long)(var_res)>>2;
var69 = (var_res != NULL) && (var70 == 0l);
var71 = !var69;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var74 = self->attrs[COLOR_nit__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 128);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Compilation Error: `make` failed with error code: ";
var80 = standard___standard__NativeString___to_s_with_length(var79, 50l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ". The command was `";
var84 = standard___standard__NativeString___to_s_with_length(var83, 19l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var76)->values[2]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "`.";
var88 = standard___standard__NativeString___to_s_with_length(var87, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var76)->values[4]=var86;
} else {
var76 = varonce75;
varonce75 = NULL;
}
var90 = (long)(var_res)>>2;
var89 = standard__string___Int___Object__to_s(var90);
((struct instance_standard__NativeArray*)var76)->values[1]=var89;
((struct instance_standard__NativeArray*)var76)->values[3]=var_command;
{
var91 = ((val*(*)(val* self))(var76->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
var92 = nit___nit__ToolContext___error(var72, ((val*)NULL), var91);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 512);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 519);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
/* method abstract_compiler#AbstractCompiler#toolchain for (self: AbstractCompiler): Toolchain */
val* nit___nit__AbstractCompiler___toolchain(val* self) {
val* var /* : Toolchain */;
val* var1 /* : Toolchain */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 525);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#toolchain= for (self: AbstractCompiler, Toolchain) */
void nit___nit__AbstractCompiler___toolchain_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___toolchain].val = p0; /* _toolchain on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#target_platform for (self: AbstractCompiler): Platform */
val* nit___nit__AbstractCompiler___target_platform(val* self) {
val* var /* : Platform */;
val* var1 /* : Platform */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 533);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 42);
fatal_exit(1);
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
var13 = (short int)((long)(var10)>>2);
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__MModule___nit__model_base__MEntity__c_name(var19);
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__abstract_compiler__CodeFile__name_61d]))(var18, var22); /* name= on <var18:CodeFile>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:CodeFile>*/
}
var_f = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
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
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nit__abstract_compiler__CodeFile__name_61d]))(var30, var_name); /* name= on <var30:CodeFile>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_standard__kernel__Object__init]))(var30); /* init on <var30:CodeFile>*/
}
var_f31 = var30;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 562);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 572);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var, var_key);
}
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 585);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var4, var_key);
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var7, var_s); /* == on <var7:nullable Object(String)>*/
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 580);
fatal_exit(1);
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 585);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 585);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 587);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: AbstractCompiler) */
void nit___nit__AbstractCompiler___build_c_to_nit_bindings(val* self) {
val* var /* : Toolchain */;
val* var2 /* : Toolchain */;
val* var3 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var4 /* : FileWriter */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var_stream /* var stream: FileWriter */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : HashMap[String, String] */;
val* var55 /* : HashMap[String, String] */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : HashMap[String, String] */;
val* var61 /* : HashMap[String, String] */;
val* var62 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[String] */;
val* var63 /* : Iterator[nullable Object] */;
val* var_64 /* var : Iterator[String] */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_i /* var i: String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : HashMap[String, String] */;
val* var78 /* : HashMap[String, String] */;
val* var79 /* : nullable Object */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : HashMap[String, String] */;
val* var105 /* : HashMap[String, String] */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
val* var140 /* : FlatString */;
val* var141 /* : FileWriter */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : FlatString */;
val* var153 /* : Array[ExternFile] */;
val* var155 /* : Array[ExternFile] */;
val* var156 /* : ExternCFile */;
val* var158 /* : NativeArray[String] */;
static val* varonce157;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : FlatString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 525);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__Toolchain___compile_dir(var);
}
var_compile_dir = var3;
var4 = NEW_standard__FileWriter(&type_standard__FileWriter);
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/c_functions_hash.c";
var9 = standard___standard__NativeString___to_s_with_length(var8, 19l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var_compile_dir;
{
var10 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
standard___standard__FileWriter___open(var4, var10); /* Direct call file#FileWriter#open on <var4:FileWriter>*/
}
var_stream = var4;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "#include <string.h>\n";
var14 = standard___standard__NativeString___to_s_with_length(var13, 20l);
var12 = var14;
varonce11 = var12;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var12); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "#include <stdlib.h>\n";
var18 = standard___standard__NativeString___to_s_with_length(var17, 20l);
var16 = var18;
varonce15 = var16;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var16); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "#include \"c_functions_hash.h\"\n";
var22 = standard___standard__NativeString___to_s_with_length(var21, 30l);
var20 = var22;
varonce19 = var20;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var20); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var26 = standard___standard__NativeString___to_s_with_length(var25, 68l);
var24 = var26;
varonce23 = var24;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var24); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "const char* get_nit_name(register const char* procproc, register unsigned int len){\n";
var30 = standard___standard__NativeString___to_s_with_length(var29, 84l);
var28 = var30;
varonce27 = var28;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var28); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "char* procname = malloc(len+1);";
var34 = standard___standard__NativeString___to_s_with_length(var33, 31l);
var32 = var34;
varonce31 = var32;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var32); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "memcpy(procname, procproc, len);";
var38 = standard___standard__NativeString___to_s_with_length(var37, 32l);
var36 = var38;
varonce35 = var36;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var36); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "procname[len] = \'\\0\';";
var42 = standard___standard__NativeString___to_s_with_length(var41, 21l);
var40 = var42;
varonce39 = var40;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var40); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "static const C_Nit_Names map[";
var48 = standard___standard__NativeString___to_s_with_length(var47, 29l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "] = {\n";
var52 = standard___standard__NativeString___to_s_with_length(var51, 6l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var55 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 512);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var53);
}
var57 = standard__string___Int___Object__to_s(var56);
((struct instance_standard__NativeArray*)var44)->values[1]=var57;
{
var58 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var58); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 512);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var59);
}
var_ = var62;
{
var63 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[String]>*/
}
var_64 = var63;
for(;;) {
{
var65 = ((short int(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_64); /* is_ok on <var_64:Iterator[String]>*/
}
if (var65){
{
var66 = ((val*(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_64); /* item on <var_64:Iterator[String]>*/
}
var_i = var66;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "{\"";
var70 = standard___standard__NativeString___to_s_with_length(var69, 2l);
var68 = var70;
varonce67 = var68;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var68); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
var71 = standard___standard__Text___escape_to_c(var_i);
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var71); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\",\"";
var75 = standard___standard__NativeString___to_s_with_length(var74, 3l);
var73 = var75;
varonce72 = var73;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var73); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 512);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var76, var_i);
}
{
var80 = standard___standard__Text___escape_to_c(var79);
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var80); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "\"},\n";
var84 = standard___standard__NativeString___to_s_with_length(var83, 4l);
var82 = var84;
varonce81 = var82;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var82); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_64); /* next on <var_64:Iterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_64); /* finish on <var_64:Iterator[String]>*/
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "};\n";
var88 = standard___standard__NativeString___to_s_with_length(var87, 3l);
var86 = var88;
varonce85 = var86;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var86); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "int i;";
var92 = standard___standard__NativeString___to_s_with_length(var91, 6l);
var90 = var92;
varonce89 = var90;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var90); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "for(i = 0; i < ";
var98 = standard___standard__NativeString___to_s_with_length(var97, 15l);
var96 = var98;
varonce95 = var96;
}
((struct instance_standard__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "; i++){";
var102 = standard___standard__NativeString___to_s_with_length(var101, 7l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var94)->values[2]=var100;
} else {
var94 = varonce93;
varonce93 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var105 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 512);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = standard___standard__HashMap___standard__abstract_collection__MapRead__length(var103);
}
var107 = standard__string___Int___Object__to_s(var106);
((struct instance_standard__NativeArray*)var94)->values[1]=var107;
{
var108 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var108); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "if(strcmp(procname,map[i].name) == 0){";
var112 = standard___standard__NativeString___to_s_with_length(var111, 38l);
var110 = var112;
varonce109 = var110;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var110); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "free(procname);";
var116 = standard___standard__NativeString___to_s_with_length(var115, 15l);
var114 = var116;
varonce113 = var114;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var114); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "return map[i].nit_name;";
var120 = standard___standard__NativeString___to_s_with_length(var119, 23l);
var118 = var120;
varonce117 = var118;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var118); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "}";
var124 = standard___standard__NativeString___to_s_with_length(var123, 1l);
var122 = var124;
varonce121 = var122;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var122); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "}";
var128 = standard___standard__NativeString___to_s_with_length(var127, 1l);
var126 = var128;
varonce125 = var126;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var126); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "free(procname);";
var132 = standard___standard__NativeString___to_s_with_length(var131, 15l);
var130 = var132;
varonce129 = var130;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var130); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "return NULL;";
var136 = standard___standard__NativeString___to_s_with_length(var135, 12l);
var134 = var136;
varonce133 = var134;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var134); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "}\n";
var140 = standard___standard__NativeString___to_s_with_length(var139, 2l);
var138 = var140;
varonce137 = var138;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var138); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
var141 = NEW_standard__FileWriter(&type_standard__FileWriter);
if (unlikely(varonce142==NULL)) {
var143 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "/c_functions_hash.h";
var147 = standard___standard__NativeString___to_s_with_length(var146, 19l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var143)->values[1]=var145;
} else {
var143 = varonce142;
varonce142 = NULL;
}
((struct instance_standard__NativeArray*)var143)->values[0]=var_compile_dir;
{
var148 = ((val*(*)(val* self))(var143->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
standard___standard__FileWriter___open(var141, var148); /* Direct call file#FileWriter#open on <var141:FileWriter>*/
}
var_stream = var141;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "const char* get_nit_name(register const char* procname, register unsigned int len);\n";
var152 = standard___standard__NativeString___to_s_with_length(var151, 84l);
var150 = var152;
varonce149 = var150;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var150); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (self) on <self:AbstractCompiler> */
var155 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
var156 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
if (unlikely(varonce157==NULL)) {
var158 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "/c_functions_hash.c";
var162 = standard___standard__NativeString___to_s_with_length(var161, 19l);
var160 = var162;
varonce159 = var160;
}
((struct instance_standard__NativeArray*)var158)->values[1]=var160;
} else {
var158 = varonce157;
varonce157 = NULL;
}
((struct instance_standard__NativeArray*)var158)->values[0]=var_compile_dir;
{
var163 = ((val*(*)(val* self))(var158->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var158); /* native_to_s on <var158:NativeArray[String]>*/
}
varonce157 = var158;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "";
var167 = standard___standard__NativeString___to_s_with_length(var166, 0l);
var165 = var167;
varonce164 = var165;
}
{
((void(*)(val* self, val* p0))(var156->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var156, var163); /* filename= on <var156:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var156->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var156, var165); /* cflags= on <var156:ExternCFile>*/
}
{
((void(*)(val* self))(var156->class->vft[COLOR_standard__kernel__Object__init]))(var156); /* init on <var156:ExternCFile>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var153, var156); /* Direct call array#Array#add on <var153:Array[ExternFile]>*/
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
val* var5 /* : FlatString */;
val* var6 /* : CodeWriter */;
val* var8 /* : CodeWriter */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : CodeWriter */;
val* var15 /* : CodeWriter */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : CodeWriter */;
val* var22 /* : CodeWriter */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : CodeWriter */;
val* var29 /* : CodeWriter */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : CodeWriter */;
val* var36 /* : CodeWriter */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : CodeWriter */;
val* var43 /* : CodeWriter */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : CodeWriter */;
val* var50 /* : CodeWriter */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : CodeWriter */;
val* var57 /* : CodeWriter */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : CodeWriter */;
val* var64 /* : CodeWriter */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : CodeWriter */;
val* var71 /* : CodeWriter */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : CodeWriter */;
val* var78 /* : CodeWriter */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var83 /* : CodeWriter */;
val* var85 /* : CodeWriter */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : ModelBuilder */;
val* var92 /* : ModelBuilder */;
val* var93 /* : ToolContext */;
val* var95 /* : ToolContext */;
val* var96 /* : OptionArray */;
val* var98 /* : OptionArray */;
val* var99 /* : nullable Object */;
val* var101 /* : nullable Object */;
val* var_gccd_disable /* var gccd_disable: Array[String] */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
short int var107 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
short int var112 /* : Bool */;
val* var113 /* : CodeWriter */;
val* var115 /* : CodeWriter */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
val* var120 /* : CodeWriter */;
val* var122 /* : CodeWriter */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
short int var127 /* : Bool */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
short int var132 /* : Bool */;
short int var_133 /* var : Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
short int var138 /* : Bool */;
val* var139 /* : CodeWriter */;
val* var141 /* : CodeWriter */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
val* var146 /* : CodeWriter */;
val* var148 /* : CodeWriter */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
short int var157 /* : Bool */;
val* var158 /* : CodeWriter */;
val* var160 /* : CodeWriter */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
val* var165 /* : CodeWriter */;
val* var167 /* : CodeWriter */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : FlatString */;
val* var172 /* : CodeWriter */;
val* var174 /* : CodeWriter */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
val* var179 /* : CodeWriter */;
val* var181 /* : CodeWriter */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
val* var185 /* : FlatString */;
val* var186 /* : CodeWriter */;
val* var188 /* : CodeWriter */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
val* var192 /* : FlatString */;
val* var193 /* : CodeWriter */;
val* var195 /* : CodeWriter */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : FlatString */;
val* var200 /* : CodeWriter */;
val* var202 /* : CodeWriter */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "#include <stdlib.h>";
var5 = standard___standard__NativeString___to_s_with_length(var4, 19l);
var3 = var5;
varonce = var3;
}
{
nit___nit__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "#include <stdio.h>";
var12 = standard___standard__NativeString___to_s_with_length(var11, 18l);
var10 = var12;
varonce9 = var10;
}
{
nit___nit__CodeWriter___add_decl(var6, var10); /* Direct call abstract_compiler#CodeWriter#add_decl on <var6:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "#include <string.h>";
var19 = standard___standard__NativeString___to_s_with_length(var18, 19l);
var17 = var19;
varonce16 = var17;
}
{
nit___nit__CodeWriter___add_decl(var13, var17); /* Direct call abstract_compiler#CodeWriter#add_decl on <var13:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#include <sys/types.h>\n";
var26 = standard___standard__NativeString___to_s_with_length(var25, 23l);
var24 = var26;
varonce23 = var24;
}
{
nit___nit__CodeWriter___add_decl(var20, var24); /* Direct call abstract_compiler#CodeWriter#add_decl on <var20:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var29 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "#include <unistd.h>\n";
var33 = standard___standard__NativeString___to_s_with_length(var32, 20l);
var31 = var33;
varonce30 = var31;
}
{
nit___nit__CodeWriter___add_decl(var27, var31); /* Direct call abstract_compiler#CodeWriter#add_decl on <var27:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var36 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "#include <stdint.h>\n";
var40 = standard___standard__NativeString___to_s_with_length(var39, 20l);
var38 = var40;
varonce37 = var38;
}
{
nit___nit__CodeWriter___add_decl(var34, var38); /* Direct call abstract_compiler#CodeWriter#add_decl on <var34:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "#include \"gc_chooser.h\"";
var47 = standard___standard__NativeString___to_s_with_length(var46, 23l);
var45 = var47;
varonce44 = var45;
}
{
nit___nit__CodeWriter___add_decl(var41, var45); /* Direct call abstract_compiler#CodeWriter#add_decl on <var41:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var50 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "#ifdef ANDROID";
var54 = standard___standard__NativeString___to_s_with_length(var53, 14l);
var52 = var54;
varonce51 = var52;
}
{
nit___nit__CodeWriter___add_decl(var48, var52); /* Direct call abstract_compiler#CodeWriter#add_decl on <var48:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\t#include <android/log.h>";
var61 = standard___standard__NativeString___to_s_with_length(var60, 25l);
var59 = var61;
varonce58 = var59;
}
{
nit___nit__CodeWriter___add_decl(var55, var59); /* Direct call abstract_compiler#CodeWriter#add_decl on <var55:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var64 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "\t#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)";
var68 = standard___standard__NativeString___to_s_with_length(var67, 89l);
var66 = var68;
varonce65 = var66;
}
{
nit___nit__CodeWriter___add_decl(var62, var66); /* Direct call abstract_compiler#CodeWriter#add_decl on <var62:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var71 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "#else";
var75 = standard___standard__NativeString___to_s_with_length(var74, 5l);
var73 = var75;
varonce72 = var73;
}
{
nit___nit__CodeWriter___add_decl(var69, var73); /* Direct call abstract_compiler#CodeWriter#add_decl on <var69:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "\t#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)";
var82 = standard___standard__NativeString___to_s_with_length(var81, 54l);
var80 = var82;
varonce79 = var80;
}
{
nit___nit__CodeWriter___add_decl(var76, var80); /* Direct call abstract_compiler#CodeWriter#add_decl on <var76:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var85 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "#endif";
var89 = standard___standard__NativeString___to_s_with_length(var88, 6l);
var87 = var89;
varonce86 = var87;
}
{
nit___nit__CodeWriter___add_decl(var83, var87); /* Direct call abstract_compiler#CodeWriter#add_decl on <var83:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__compile_header_structs]))(self); /* compile_header_structs on <self:AbstractCompiler>*/
}
{
nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_nitni_structs on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var92 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var90) on <var90:ModelBuilder> */
var95 = var90->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var90:ModelBuilder> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (var93) on <var93:ToolContext> */
var98 = var93->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var93:ToolContext> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 68);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline opts#Option#value (var96) on <var96:OptionArray> */
var101 = var96->attrs[COLOR_opts__Option___value].val; /* _value on <var96:OptionArray> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
var_gccd_disable = var99;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "noreturn";
var106 = standard___standard__NativeString___to_s_with_length(var105, 8l);
var104 = var106;
varonce103 = var104;
}
{
var107 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var104);
}
var_ = var107;
if (var107){
var102 = var_;
} else {
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "all";
var111 = standard___standard__NativeString___to_s_with_length(var110, 3l);
var109 = var111;
varonce108 = var109;
}
{
var112 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var109);
}
var102 = var112;
}
if (var102){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var115 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "void fatal_exit(int);";
var119 = standard___standard__NativeString___to_s_with_length(var118, 21l);
var117 = var119;
varonce116 = var117;
}
{
nit___nit__CodeWriter___add_decl(var113, var117); /* Direct call abstract_compiler#CodeWriter#add_decl on <var113:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var122 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "void fatal_exit(int) __attribute__ ((noreturn));";
var126 = standard___standard__NativeString___to_s_with_length(var125, 48l);
var124 = var126;
varonce123 = var124;
}
{
nit___nit__CodeWriter___add_decl(var120, var124); /* Direct call abstract_compiler#CodeWriter#add_decl on <var120:CodeWriter>*/
}
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "likely";
var131 = standard___standard__NativeString___to_s_with_length(var130, 6l);
var129 = var131;
varonce128 = var129;
}
{
var132 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var129);
}
var_133 = var132;
if (var132){
var127 = var_133;
} else {
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "all";
var137 = standard___standard__NativeString___to_s_with_length(var136, 3l);
var135 = var137;
varonce134 = var135;
}
{
var138 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var135);
}
var127 = var138;
}
if (var127){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var141 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "#define likely(x)       (x)";
var145 = standard___standard__NativeString___to_s_with_length(var144, 27l);
var143 = var145;
varonce142 = var143;
}
{
nit___nit__CodeWriter___add_decl(var139, var143); /* Direct call abstract_compiler#CodeWriter#add_decl on <var139:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var148 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "#define unlikely(x)     (x)";
var152 = standard___standard__NativeString___to_s_with_length(var151, 27l);
var150 = var152;
varonce149 = var150;
}
{
nit___nit__CodeWriter___add_decl(var146, var150); /* Direct call abstract_compiler#CodeWriter#add_decl on <var146:CodeWriter>*/
}
} else {
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "correct-likely";
var156 = standard___standard__NativeString___to_s_with_length(var155, 14l);
var154 = var156;
varonce153 = var154;
}
{
var157 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_gccd_disable, var154);
}
if (var157){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var160 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "#define likely(x)       __builtin_expect((x),0)";
var164 = standard___standard__NativeString___to_s_with_length(var163, 47l);
var162 = var164;
varonce161 = var162;
}
{
nit___nit__CodeWriter___add_decl(var158, var162); /* Direct call abstract_compiler#CodeWriter#add_decl on <var158:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var167 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "#define unlikely(x)     __builtin_expect((x),1)";
var171 = standard___standard__NativeString___to_s_with_length(var170, 47l);
var169 = var171;
varonce168 = var169;
}
{
nit___nit__CodeWriter___add_decl(var165, var169); /* Direct call abstract_compiler#CodeWriter#add_decl on <var165:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var174 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "#define likely(x)       __builtin_expect((x),1)";
var178 = standard___standard__NativeString___to_s_with_length(var177, 47l);
var176 = var178;
varonce175 = var176;
}
{
nit___nit__CodeWriter___add_decl(var172, var176); /* Direct call abstract_compiler#CodeWriter#add_decl on <var172:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var181 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "#define unlikely(x)     __builtin_expect((x),0)";
var185 = standard___standard__NativeString___to_s_with_length(var184, 47l);
var183 = var185;
varonce182 = var183;
}
{
nit___nit__CodeWriter___add_decl(var179, var183); /* Direct call abstract_compiler#CodeWriter#add_decl on <var179:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var188 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "extern int glob_argc;";
var192 = standard___standard__NativeString___to_s_with_length(var191, 21l);
var190 = var192;
varonce189 = var190;
}
{
nit___nit__CodeWriter___add_decl(var186, var190); /* Direct call abstract_compiler#CodeWriter#add_decl on <var186:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var195 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "extern char **glob_argv;";
var199 = standard___standard__NativeString___to_s_with_length(var198, 24l);
var197 = var199;
varonce196 = var197;
}
{
nit___nit__CodeWriter___add_decl(var193, var197); /* Direct call abstract_compiler#CodeWriter#add_decl on <var193:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var202 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "extern val *glob_sys;";
var206 = standard___standard__NativeString___to_s_with_length(var205, 21l);
var204 = var206;
varonce203 = var204;
}
{
nit___nit__CodeWriter___add_decl(var200, var204); /* Direct call abstract_compiler#CodeWriter#add_decl on <var200:CodeWriter>*/
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
val* var5 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/* Native reference to Nit objects */\n/* This structure is used to represent every Nit type in extern methods and custom C code. */\nstruct nitni_ref {\n\tstruct nitni_ref *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n};\n\n/* List of global references from C code to Nit objects */\n/* Instanciated empty at init of Nit system and filled explicitly by user in C code */\nstruct nitni_global_ref_list_t {\n\tstruct nitni_ref *head, *tail;\n};\nextern struct nitni_global_ref_list_t *nitni_global_ref_list;\n\n/* Initializer of global reference list */\nextern void nitni_global_ref_list_init();\n\n/* Intern function to add a global reference to the list */\nextern void nitni_global_ref_add( struct nitni_ref *ref );\n\n/* Intern function to remove a global reference from the list */\nextern void nitni_global_ref_remove( struct nitni_ref *ref );\n\n/* Increase count on an existing global reference */\nextern void nitni_global_ref_incr( struct nitni_ref *ref );\n\n/* Decrease count on an existing global reference */\nextern void nitni_global_ref_decr( struct nitni_ref *ref );\n";
var5 = standard___standard__NativeString___to_s_with_length(var4, 1146l);
var3 = var5;
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : Message */;
val* var37 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var47 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var48 /* : nullable RuntimeVariable */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__model___MModule___finalizable_type(var);
}
var_finalizable_type = var3;
if (var_finalizable_type == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_finalizable_type,var_other) on <var_finalizable_type:nullable MClassType(MClassType)> */
var9 = var_finalizable_type == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "finalize";
var15 = standard___standard__NativeString___to_s_with_length(var14, 8l);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var18 = var_finalizable_type->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit__model___MModule___try_get_primitive_method(var10, var13, var16);
}
var_finalize_meth = var19;
if (var_finalize_meth == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_finalize_meth,var_other) on <var_finalize_meth:nullable MMethod(MMethod)> */
var25 = var_finalize_meth == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var28 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Error: the `Finalizable` class does not declare the `finalize` method.";
var35 = standard___standard__NativeString___to_s_with_length(var34, 70l);
var33 = var35;
varonce32 = var33;
}
{
var36 = nit___nit__ToolContext___error(var29, ((val*)NULL), var33);
}
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var37;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "void gc_finalize (void *obj, void *client_data) {";
var41 = standard___standard__NativeString___to_s_with_length(var40, 49l);
var39 = var41;
varonce38 = var39;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "obj";
var45 = standard___standard__NativeString___to_s_with_length(var44, 3l);
var43 = var45;
varonce42 = var43;
}
{
var46 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var43, var_finalizable_type);
}
var_recv = var46;
var47 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var47, 1l); /* Direct call array#Array#with_capacity on <var47:Array[RuntimeVariable]>*/
}
var_ = var47;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var48 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var_finalize_meth, var_);
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
