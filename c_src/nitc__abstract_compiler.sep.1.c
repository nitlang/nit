#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$ToolContext$opt_output for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_dir for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_cc for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_cc(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_main for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_main(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_make_flags for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_make_flags(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_max_c_lines for (self: ToolContext): OptionInt */
val* nitc__abstract_compiler___ToolContext___opt_max_c_lines(val* self) {
val* var /* : OptionInt */;
val* var1 /* : OptionInt */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_group_c_files for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_group_c_files(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 42);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_compile_dir for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_compile_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_hardening for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_hardening(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_check_covariance for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_covariance(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_check_attr_isset for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_attr_isset(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_check_assert for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_assert(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_check_autocast for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_autocast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_check_null for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_null(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_check_all for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_all(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_typing_test_metrics for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_typing_test_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_invocation_metrics for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_invocation_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_isset_checks_metrics for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_isset_checks_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_stacktrace for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_no_gcc_directive for (self: ToolContext): OptionArray */
val* nitc__abstract_compiler___ToolContext___opt_no_gcc_directive(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_release for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_release(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$opt_debug for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_debug(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$ToolContext$init for (self: ToolContext) */
void nitc__abstract_compiler___ToolContext___core__kernel__Object__init(val* self) {
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
val* var98 /* : OptionContext */;
val* var100 /* : OptionContext */;
val* var101 /* : OptionBool */;
val* var103 /* : OptionBool */;
val* var104 /* : Array[Option] */;
val* var105 /* : NativeArray[Option] */;
val* var106 /* : OptionBool */;
val* var108 /* : OptionBool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_output (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_dir (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_cc (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 34);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_main (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_make_flags (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_compile_dir (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_hardening (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var24 = array_instance Array[Option] */
var25 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var25)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var25)->values[1] = (val*) var6;
((struct instance_core__NativeArray*)var25)->values[2] = (val*) var9;
((struct instance_core__NativeArray*)var25)->values[3] = (val*) var12;
((struct instance_core__NativeArray*)var25)->values[4] = (val*) var15;
((struct instance_core__NativeArray*)var25)->values[5] = (val*) var18;
((struct instance_core__NativeArray*)var25)->values[6] = (val*) var21;
{
((void(*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_core__array__Array__with_native]))(var24, var25, 7l); /* with_native on <var24:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var24); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var28 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_covariance (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_attr_isset (self) on <self:ToolContext> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_assert (self) on <self:ToolContext> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_autocast (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_null (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_all (self) on <self:ToolContext> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var47 = array_instance Array[Option] */
var48 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var48)->values[0] = (val*) var29;
((struct instance_core__NativeArray*)var48)->values[1] = (val*) var32;
((struct instance_core__NativeArray*)var48)->values[2] = (val*) var35;
((struct instance_core__NativeArray*)var48)->values[3] = (val*) var38;
((struct instance_core__NativeArray*)var48)->values[4] = (val*) var41;
((struct instance_core__NativeArray*)var48)->values[5] = (val*) var44;
{
((void(*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_core__array__Array__with_native]))(var47, var48, 6l); /* with_native on <var47:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var26, var47); /* Direct call opts$OptionContext$add_option on <var26:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_typing_test_metrics (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_invocation_metrics (self) on <self:ToolContext> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var61 = array_instance Array[Option] */
var62 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var62)->values[0] = (val*) var52;
((struct instance_core__NativeArray*)var62)->values[1] = (val*) var55;
((struct instance_core__NativeArray*)var62)->values[2] = (val*) var58;
{
((void(*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_core__array__Array__with_native]))(var61, var62, 3l); /* with_native on <var61:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var49, var61); /* Direct call opts$OptionContext$add_option on <var49:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_stacktrace (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <self:ToolContext> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 66);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var69 = array_instance Array[Option] */
var70 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var70)->values[0] = (val*) var66;
{
((void(*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_core__array__Array__with_native]))(var69, var70, 1l); /* with_native on <var69:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var63, var69); /* Direct call opts$OptionContext$add_option on <var63:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var73 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_gcc_directive (self) on <self:ToolContext> */
var76 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var77 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var77 = array_instance Array[Option] */
var78 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var78)->values[0] = (val*) var74;
{
((void(*)(val* self, val* p0, long p1))(var77->class->vft[COLOR_core__array__Array__with_native]))(var77, var78, 1l); /* with_native on <var77:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var71, var77); /* Direct call opts$OptionContext$add_option on <var71:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var81 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_release (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
var85 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var85 = array_instance Array[Option] */
var86 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var86)->values[0] = (val*) var82;
{
((void(*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_core__array__Array__with_native]))(var85, var86, 1l); /* with_native on <var85:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var79, var85); /* Direct call opts$OptionContext$add_option on <var79:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var89 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_max_c_lines (self) on <self:ToolContext> */
var92 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 40);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_group_c_files (self) on <self:ToolContext> */
var95 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 42);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var96 = array_instance Array[Option] */
var97 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var97)->values[0] = (val*) var90;
((struct instance_core__NativeArray*)var97)->values[1] = (val*) var93;
{
((void(*)(val* self, val* p0, long p1))(var96->class->vft[COLOR_core__array__Array__with_native]))(var96, var97, 2l); /* with_native on <var96:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var87, var96); /* Direct call opts$OptionContext$add_option on <var87:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var100 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_debug (self) on <self:ToolContext> */
var103 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <self:ToolContext> */
if (unlikely(var103 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var104 = array_instance Array[Option] */
var105 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var105)->values[0] = (val*) var101;
{
((void(*)(val* self, val* p0, long p1))(var104->class->vft[COLOR_core__array__Array__with_native]))(var104, var105, 1l); /* with_native on <var104:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var98, var104); /* Direct call opts$OptionContext$add_option on <var98:OptionContext>*/
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_main (self) on <self:ToolContext> */
var108 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline opts$Option$hidden= (var106,1) on <var106:OptionBool> */
var106->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var106:OptionBool> */
RET_LABEL109:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler$ToolContext$process_options for (self: ToolContext, Sequence[String]) */
void nitc__abstract_compiler___ToolContext___process_options(val* self, val* p0) {
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : Sys */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : nullable Object */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
val* var40 /* : OptionBool */;
val* var42 /* : OptionBool */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var45 /* : nullable Object */;
val* var46 /* : OptionBool */;
val* var48 /* : OptionBool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const struct type* type_struct53;
const char* var_class_name54;
val* var55 /* : nullable Object */;
val* var56 /* : OptionBool */;
val* var58 /* : OptionBool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const struct type* type_struct63;
const char* var_class_name64;
val* var65 /* : nullable Object */;
val* var66 /* : OptionBool */;
val* var68 /* : OptionBool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const struct type* type_struct73;
const char* var_class_name74;
val* var75 /* : nullable Object */;
val* var76 /* : OptionBool */;
val* var78 /* : OptionBool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const struct type* type_struct83;
const char* var_class_name84;
val* var85 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline abstract_compiler$ToolContext$opt_output (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1) on <var1:OptionString> */
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
{ /* Inline kernel$Object$!= (var4,((val*)NULL)) on <var4:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var_other); /* == on <var4:nullable Object(String)>*/
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
{ /* Inline abstract_compiler$ToolContext$opt_dir (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline opts$Option$value (var12) on <var12:OptionString> */
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
{ /* Inline kernel$Object$!= (var15,((val*)NULL)) on <var15:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_core__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:nullable Object(String)>*/
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
var27 = (val*)(48l<<2|1);
var28 = (val*)(48l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
core__file___Sys___print(var23, var24); /* Direct call file$Sys$print on <var23:Sys>*/
}
var31 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var31,1l) on <var31:Sys> */
exit((int)1l);
RET_LABEL32:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_all (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline opts$Option$value (var33) on <var33:OptionBool> */
var38 = var33->attrs[COLOR_opts__Option___value].val; /* _value on <var33:OptionBool> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = (short int)((long)(var36)>>2);
if (var39){
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_covariance (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var40,1) on <var40:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var40->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_core__Bool)->table_size) {
var44 = 0;
} else {
var44 = (&type_core__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var44)) {
var_class_name = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var45 = (val*)((long)(1)<<2|3);
var40->attrs[COLOR_opts__Option___value].val = var45; /* _value on <var40:OptionBool> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_attr_isset (self) on <self:ToolContext> */
var48 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var46,1) on <var46:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct53 = var46->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype51 = type_struct53->color;
idtype52 = type_struct53->id;
if(cltype51 >= (&type_core__Bool)->table_size) {
var50 = 0;
} else {
var50 = (&type_core__Bool)->type_table[cltype51] == idtype52;
}
if (unlikely(!var50)) {
var_class_name54 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var55 = (val*)((long)(1)<<2|3);
var46->attrs[COLOR_opts__Option___value].val = var55; /* _value on <var46:OptionBool> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_assert (self) on <self:ToolContext> */
var58 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var56,1) on <var56:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct63 = var56->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype61 = type_struct63->color;
idtype62 = type_struct63->id;
if(cltype61 >= (&type_core__Bool)->table_size) {
var60 = 0;
} else {
var60 = (&type_core__Bool)->type_table[cltype61] == idtype62;
}
if (unlikely(!var60)) {
var_class_name64 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var65 = (val*)((long)(1)<<2|3);
var56->attrs[COLOR_opts__Option___value].val = var65; /* _value on <var56:OptionBool> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_autocast (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var66,1) on <var66:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct73 = var66->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype71 = type_struct73->color;
idtype72 = type_struct73->id;
if(cltype71 >= (&type_core__Bool)->table_size) {
var70 = 0;
} else {
var70 = (&type_core__Bool)->type_table[cltype71] == idtype72;
}
if (unlikely(!var70)) {
var_class_name74 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var75 = (val*)((long)(1)<<2|3);
var66->attrs[COLOR_opts__Option___value].val = var75; /* _value on <var66:OptionBool> */
RET_LABEL69:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_null (self) on <self:ToolContext> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var76,1) on <var76:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct83 = var76->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype81 = type_struct83->color;
idtype82 = type_struct83->id;
if(cltype81 >= (&type_core__Bool)->table_size) {
var80 = 0;
} else {
var80 = (&type_core__Bool)->type_table[cltype81] == idtype82;
}
if (unlikely(!var80)) {
var_class_name84 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var85 = (val*)((long)(1)<<2|3);
var76->attrs[COLOR_opts__Option___value].val = var85; /* _value on <var76:OptionBool> */
RET_LABEL79:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$ModelBuilder$write_and_make for (self: ModelBuilder, AbstractCompiler) */
void nitc__abstract_compiler___ModelBuilder___write_and_make(val* self, val* p0) {
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
{ /* Inline abstract_compiler$AbstractCompiler$target_platform (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 563);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_platform = var;
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__abstract_compiler___Platform___toolchain(var_platform, var3, var_compiler);
}
var_toolchain = var6;
{
{ /* Inline abstract_compiler$AbstractCompiler$toolchain= (var_compiler,var_toolchain) on <var_compiler:AbstractCompiler> */
var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val = var_toolchain; /* _toolchain on <var_compiler:AbstractCompiler> */
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__MakefileToolchain___Toolchain__write_and_make(var_toolchain); /* Direct call abstract_compiler$MakefileToolchain$write_and_make on <var_toolchain:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler$Platform$toolchain for (self: Platform, ToolContext, AbstractCompiler): Toolchain */
val* nitc__abstract_compiler___Platform___toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MakefileToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nitc__MakefileToolchain(&type_nitc__MakefileToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:MakefileToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:MakefileToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MakefileToolchain>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$Toolchain$toolcontext for (self: Toolchain): ToolContext */
val* nitc___nitc__Toolchain___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$Toolchain$toolcontext= for (self: Toolchain, ToolContext) */
void nitc___nitc__Toolchain___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler$Toolchain$compiler for (self: Toolchain): AbstractCompiler */
val* nitc___nitc__Toolchain___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$Toolchain$compiler= for (self: Toolchain, AbstractCompiler) */
void nitc___nitc__Toolchain___compiler_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val = p0; /* _compiler on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler$Toolchain$root_compile_dir for (self: Toolchain): String */
val* nitc___nitc__Toolchain___root_compile_dir(val* self) {
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
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:Toolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_compile_dir (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts$Option$value (var4) on <var4:OptionString> */
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
var11 = ((short int(*)(val* self, val* p0))(var_compile_dir->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_compile_dir, ((val*)NULL)); /* == on <var_compile_dir:nullable String>*/
var10 = var11;
}
if (var10){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "nit_compile";
var15 = (val*)(11l<<2|1);
var16 = (val*)(11l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
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
/* method abstract_compiler$Toolchain$compile_dir for (self: Toolchain): String */
val* nitc___nitc__Toolchain___compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = nitc___nitc__Toolchain___root_compile_dir(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$Toolchain$init for (self: Toolchain) */
void nitc___nitc__Toolchain___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Toolchain___core__kernel__Object__init]))(self); /* init on <self:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler$MakefileToolchain$write_and_make for (self: MakefileToolchain) */
void nitc___nitc__MakefileToolchain___Toolchain__write_and_make(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var_debug /* var debug: Bool */;
val* var10 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionString */;
val* var16 /* : OptionString */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_auto_remove /* var auto_remove: Bool */;
val* var22 /* : Sys */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_time0 /* var time0: Int */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : String */;
val* var37 /* : nullable Error */;
val* var38 /* : nullable Error */;
val* var39 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var40 /* : Sys */;
long var41 /* : Int */;
long var43 /* : Int */;
long var_time1 /* var time1: Int */;
val* var44 /* : ToolContext */;
val* var46 /* : ToolContext */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : ToolContext */;
val* var73 /* : ToolContext */;
val* var74 /* : OptionBool */;
val* var76 /* : OptionBool */;
val* var77 /* : nullable Object */;
val* var79 /* : nullable Object */;
short int var80 /* : Bool */;
val* var81 /* : ToolContext */;
val* var83 /* : ToolContext */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : Sys */;
val* var94 /* : Sys */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : String */;
long var116 /* : Int */;
val* var117 /* : Sys */;
long var118 /* : Int */;
long var120 /* : Int */;
val* var121 /* : ToolContext */;
val* var123 /* : ToolContext */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
long var142 /* : Int */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
const char* var_class_name147;
long var148 /* : Int */;
val* var149 /* : String */;
val* var150 /* : String */;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_debug (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts$Option$value (var3) on <var3:OptionBool> */
var8 = var3->attrs[COLOR_opts__Option___value].val; /* _value on <var3:OptionBool> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = (short int)((long)(var6)>>2);
var_debug = var9;
{
var10 = nitc___nitc__Toolchain___compile_dir(self);
}
var_compile_dir = var10;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var13 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_compile_dir (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts$Option$value (var14) on <var14:OptionString> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionString> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_core__kernel__Object___61d_61d]))(var17, ((val*)NULL)); /* == on <var17:nullable Object(nullable String)>*/
var20 = var21;
}
var_auto_remove = var20;
if (var_debug){
var_auto_remove = 0;
} else {
}
var22 = glob_sys;
{
{ /* Inline time$Sys$get_time (var22) on <var22:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var22;
var25 = core__time___Sys_get_time___impl(var_for_c_0);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_time0 = var23;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "*** WRITING C ***";
var32 = (val*)(17l<<2|1);
var33 = (val*)(17l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce = var29;
}
{
nitc___nitc__ToolContext___info(var26, var29, 1l); /* Direct call toolcontext$ToolContext$info on <var26:ToolContext>*/
}
{
var36 = nitc___nitc__Toolchain___root_compile_dir(self);
}
{
var37 = core__file___String___mkdir(var36, ((val*)NULL));
}
{
var38 = core__file___String___mkdir(var_compile_dir, ((val*)NULL));
}
var39 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var39); /* Direct call array$Array$init on <var39:Array[String]>*/
}
var_cfiles = var39;
{
nitc___nitc__MakefileToolchain___write_files(self, var_compile_dir, var_cfiles); /* Direct call abstract_compiler$MakefileToolchain$write_files on <self:MakefileToolchain>*/
}
{
nitc___nitc__MakefileToolchain___write_makefile(self, var_compile_dir, var_cfiles); /* Direct call abstract_compiler$MakefileToolchain$write_makefile on <self:MakefileToolchain>*/
}
var40 = glob_sys;
{
{ /* Inline time$Sys$get_time (var40) on <var40:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var40;
var43 = core__time___Sys_get_time___impl(var_for_c_0);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_time1 = var41;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "*** END WRITING C: ";
var53 = (val*)(19l<<2|1);
var54 = (val*)(19l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = " ***";
var61 = (val*)(4l<<2|1);
var62 = (val*)(4l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var48)->values[2]=var58;
} else {
var48 = varonce47;
varonce47 = NULL;
}
{
{ /* Inline kernel$Int$- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var67 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var68 = var_time1 - var_time0;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var69 = core__flat___Int___core__abstract_text__Object__to_s(var65);
((struct instance_core__NativeArray*)var48)->values[1]=var69;
{
var70 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
nitc___nitc__ToolContext___info(var44, var70, 2l); /* Direct call toolcontext$ToolContext$info on <var44:ToolContext>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var73 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var73 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_cc (var71) on <var71:ToolContext> */
var76 = var71->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <var71:ToolContext> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 34);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline opts$Option$value (var74) on <var74:OptionBool> */
var79 = var74->attrs[COLOR_opts__Option___value].val; /* _value on <var74:OptionBool> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var80 = (short int)((long)(var77)>>2);
if (var80){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var83 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "*** COMPILING C ***";
var88 = (val*)(19l<<2|1);
var89 = (val*)(19l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
{
nitc___nitc__ToolContext___info(var81, var85, 1l); /* Direct call toolcontext$ToolContext$info on <var81:ToolContext>*/
}
{
nitc___nitc__MakefileToolchain___compile_c_code(self, var_compile_dir); /* Direct call abstract_compiler$MakefileToolchain$compile_c_code on <self:MakefileToolchain>*/
}
if (var_auto_remove){
{
{ /* Inline kernel$Object$sys (self) on <self:MakefileToolchain> */
var94 = glob_sys;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "rm -r -- \'";
var101 = (val*)(10l<<2|1);
var102 = (val*)(10l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var96)->values[0]=var98;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "/\'";
var109 = (val*)(2l<<2|1);
var110 = (val*)(2l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var96)->values[2]=var106;
} else {
var96 = varonce95;
varonce95 = NULL;
}
{
var113 = nitc___nitc__Toolchain___root_compile_dir(self);
}
{
var114 = core___core__Text___escape_to_sh(var113);
}
((struct instance_core__NativeArray*)var96)->values[1]=var114;
{
var115 = ((val*(*)(val* self))(var96->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
var116 = core__exec___Sys___system(var92, var115);
}
} else {
}
var117 = glob_sys;
{
{ /* Inline time$Sys$get_time (var117) on <var117:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var117;
var120 = core__time___Sys_get_time___impl(var_for_c_0);
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var_time1 = var118;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var123 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (unlikely(varonce124==NULL)) {
var125 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "*** END COMPILING C: ";
var130 = (val*)(21l<<2|1);
var131 = (val*)(21l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var125)->values[0]=var127;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = " ***";
var138 = (val*)(4l<<2|1);
var139 = (val*)(4l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var125)->values[2]=var135;
} else {
var125 = varonce124;
varonce124 = NULL;
}
{
{ /* Inline kernel$Int$- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var144 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var144)) {
var_class_name147 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name147);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var148 = var_time1 - var_time0;
var142 = var148;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var149 = core__flat___Int___core__abstract_text__Object__to_s(var142);
((struct instance_core__NativeArray*)var125)->values[1]=var149;
{
var150 = ((val*(*)(val* self))(var125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
{
nitc___nitc__ToolContext___info(var121, var150, 2l); /* Direct call toolcontext$ToolContext$info on <var121:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler$MakefileToolchain$write_files for (self: MakefileToolchain, String, Array[String]) */
void nitc___nitc__MakefileToolchain___write_files(val* self, val* p0, val* p1) {
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
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var_cc_opt_with_libgc /* var cc_opt_with_libgc: String */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : ExternCFile */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : Array[String] */;
val* var50 /* : Array[String] */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : AbstractCompiler */;
val* var61 /* : AbstractCompiler */;
val* var62 /* : Array[ExternFile] */;
val* var64 /* : Array[ExternFile] */;
val* var65 /* : ToolContext */;
val* var67 /* : ToolContext */;
val* var68 /* : nullable String */;
val* var70 /* : nullable String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var79 /* : String */;
val* var_clib /* var clib: String */;
val* var80 /* : AbstractCompiler */;
val* var82 /* : AbstractCompiler */;
val* var83 /* : Array[String] */;
val* var85 /* : Array[String] */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
val* var96 /* : String */;
val* var97 /* : AbstractCompiler */;
val* var99 /* : AbstractCompiler */;
val* var100 /* : Array[String] */;
val* var102 /* : Array[String] */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : String */;
val* var114 /* : AbstractCompiler */;
val* var116 /* : AbstractCompiler */;
val* var117 /* : MModule */;
val* var119 /* : MModule */;
val* var120 /* : POSetElement[MModule] */;
val* var122 /* : POSetElement[MModule] */;
val* var123 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var124 /* : Iterator[nullable Object] */;
val* var_125 /* var : Iterator[MModule] */;
short int var126 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var128 /* : AbstractCompiler */;
val* var130 /* : AbstractCompiler */;
val* var131 /* : AbstractCompiler */;
val* var133 /* : AbstractCompiler */;
val* var134 /* : Array[String] */;
val* var136 /* : Array[String] */;
val* var_137 /* var : Array[String] */;
val* var138 /* : IndexedIterator[nullable Object] */;
val* var_139 /* var : IndexedIterator[String] */;
short int var140 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_src /* var src: String */;
val* var143 /* : String */;
val* var_basename /* var basename: String */;
val* var145 /* : NativeArray[String] */;
static val* varonce144;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
val* var154 /* : String */;
val* var_dst /* var dst: String */;
val* var155 /* : AbstractCompiler */;
val* var157 /* : AbstractCompiler */;
val* var158 /* : CodeWriter */;
val* var160 /* : CodeWriter */;
val* var161 /* : CodeFile */;
val* var163 /* : CodeFile */;
val* var164 /* : String */;
val* var166 /* : String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : Text */;
val* var_hfilename /* var hfilename: String */;
val* var177 /* : NativeArray[String] */;
static val* varonce176;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Bool */;
val* var185 /* : nullable Bool */;
val* var186 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var187 /* : FileWriter */;
val* var_h /* var h: FileWriter */;
val* var188 /* : AbstractCompiler */;
val* var190 /* : AbstractCompiler */;
val* var191 /* : CodeWriter */;
val* var193 /* : CodeWriter */;
val* var194 /* : Array[String] */;
val* var196 /* : Array[String] */;
val* var_197 /* var : Array[String] */;
val* var198 /* : IndexedIterator[nullable Object] */;
val* var_199 /* var : IndexedIterator[String] */;
short int var200 /* : Bool */;
val* var202 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Bool */;
val* var210 /* : nullable Bool */;
val* var211 /* : AbstractCompiler */;
val* var213 /* : AbstractCompiler */;
val* var214 /* : CodeWriter */;
val* var216 /* : CodeWriter */;
val* var217 /* : Array[String] */;
val* var219 /* : Array[String] */;
val* var_220 /* var : Array[String] */;
val* var221 /* : IndexedIterator[nullable Object] */;
val* var_222 /* var : IndexedIterator[String] */;
short int var223 /* : Bool */;
val* var225 /* : nullable Object */;
val* var_l226 /* var l: String */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : CString */;
val* var230 /* : String */;
val* var231 /* : nullable Int */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Bool */;
val* var234 /* : nullable Bool */;
val* var235 /* : ToolContext */;
val* var237 /* : ToolContext */;
val* var238 /* : OptionInt */;
val* var240 /* : OptionInt */;
val* var241 /* : nullable Object */;
val* var243 /* : nullable Object */;
long var244 /* : Int */;
long var_max_c_lines /* var max_c_lines: Int */;
val* var245 /* : AbstractCompiler */;
val* var247 /* : AbstractCompiler */;
val* var248 /* : Array[CodeFile] */;
val* var250 /* : Array[CodeFile] */;
val* var_251 /* var : Array[CodeFile] */;
val* var252 /* : IndexedIterator[nullable Object] */;
val* var_253 /* var : IndexedIterator[CodeFile] */;
short int var254 /* : Bool */;
val* var256 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var_i /* var i: Int */;
long var_count /* var count: Int */;
val* var_file /* var file: nullable FileWriter */;
val* var257 /* : Array[CodeWriter] */;
val* var259 /* : Array[CodeWriter] */;
val* var_260 /* var : Array[CodeWriter] */;
val* var261 /* : IndexedIterator[nullable Object] */;
val* var_262 /* var : IndexedIterator[CodeWriter] */;
short int var263 /* : Bool */;
val* var265 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var266 /* : AbstractCompiler */;
val* var268 /* : AbstractCompiler */;
val* var269 /* : CodeWriter */;
val* var271 /* : CodeWriter */;
short int var272 /* : Bool */;
val* var_other274 /* var other: nullable Object */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
val* var279 /* : Array[String] */;
val* var281 /* : Array[String] */;
long var282 /* : Int */;
long var284 /* : Int */;
val* var285 /* : Array[String] */;
val* var287 /* : Array[String] */;
long var288 /* : Int */;
long var290 /* : Int */;
long var291 /* : Int */;
short int var293 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var294 /* : Int */;
long var_total_lines /* var total_lines: Int */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
long var298 /* : Int */;
short int var300 /* : Bool */;
int cltype301;
int idtype302;
const char* var_class_name303;
long var304 /* : Int */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
short int var_312 /* var : Bool */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
short int var316 /* : Bool */;
int cltype317;
int idtype318;
const char* var_class_name319;
short int var320 /* : Bool */;
short int var_321 /* var : Bool */;
short int var322 /* : Bool */;
short int var324 /* : Bool */;
int cltype325;
int idtype326;
const char* var_class_name327;
short int var328 /* : Bool */;
long var329 /* : Int */;
short int var331 /* : Bool */;
int cltype332;
int idtype333;
const char* var_class_name334;
long var335 /* : Int */;
short int var336 /* : Bool */;
short int var337 /* : Bool */;
short int var339 /* : Bool */;
short int var340 /* : Bool */;
val* var342 /* : NativeArray[String] */;
static val* varonce341;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : CString */;
val* var346 /* : String */;
val* var347 /* : nullable Int */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Bool */;
val* var350 /* : nullable Bool */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
val* var359 /* : String */;
val* var361 /* : String */;
val* var362 /* : String */;
val* var363 /* : String */;
val* var_cfilename /* var cfilename: String */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : CString */;
val* var369 /* : String */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Int */;
val* var372 /* : nullable Bool */;
val* var373 /* : nullable Bool */;
val* var374 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var375 /* : ToolContext */;
val* var377 /* : ToolContext */;
val* var379 /* : NativeArray[String] */;
static val* varonce378;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : CString */;
val* var383 /* : String */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Int */;
val* var386 /* : nullable Bool */;
val* var387 /* : nullable Bool */;
val* var388 /* : String */;
val* var389 /* : FileWriter */;
val* var391 /* : NativeArray[String] */;
static val* varonce390;
static val* varonce392;
val* var393 /* : String */;
char* var394 /* : CString */;
val* var395 /* : String */;
val* var396 /* : nullable Int */;
val* var397 /* : nullable Int */;
val* var398 /* : nullable Bool */;
val* var399 /* : nullable Bool */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : CString */;
val* var403 /* : String */;
val* var404 /* : nullable Int */;
val* var405 /* : nullable Int */;
val* var406 /* : nullable Bool */;
val* var407 /* : nullable Bool */;
val* var408 /* : String */;
val* var410 /* : String */;
val* var411 /* : String */;
val* var412 /* : Array[String] */;
val* var414 /* : Array[String] */;
val* var_415 /* var : Array[String] */;
val* var416 /* : IndexedIterator[nullable Object] */;
val* var_417 /* var : IndexedIterator[String] */;
short int var418 /* : Bool */;
val* var420 /* : nullable Object */;
val* var_l421 /* var l: String */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : CString */;
val* var425 /* : String */;
val* var426 /* : nullable Int */;
val* var427 /* : nullable Int */;
val* var428 /* : nullable Bool */;
val* var429 /* : nullable Bool */;
val* var430 /* : Array[String] */;
val* var432 /* : Array[String] */;
val* var_433 /* var : Array[String] */;
val* var434 /* : IndexedIterator[nullable Object] */;
val* var_435 /* var : IndexedIterator[String] */;
short int var436 /* : Bool */;
val* var438 /* : nullable Object */;
val* var_l439 /* var l: String */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : CString */;
val* var443 /* : String */;
val* var444 /* : nullable Int */;
val* var445 /* : nullable Int */;
val* var446 /* : nullable Bool */;
val* var447 /* : nullable Bool */;
short int var448 /* : Bool */;
short int var449 /* : Bool */;
short int var451 /* : Bool */;
short int var453 /* : Bool */;
val* var456 /* : NativeArray[String] */;
static val* varonce455;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : CString */;
val* var460 /* : String */;
val* var461 /* : nullable Int */;
val* var462 /* : nullable Int */;
val* var463 /* : nullable Bool */;
val* var464 /* : nullable Bool */;
val* var465 /* : String */;
val* var467 /* : String */;
val* var468 /* : String */;
val* var_cfilename469 /* var cfilename: String */;
val* var471 /* : NativeArray[String] */;
static val* varonce470;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : CString */;
val* var475 /* : String */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Int */;
val* var478 /* : nullable Bool */;
val* var479 /* : nullable Bool */;
val* var480 /* : String */;
val* var_cfilepath481 /* var cfilepath: String */;
val* var_hfile /* var hfile: nullable FileWriter */;
val* var482 /* : FileWriter */;
val* var484 /* : NativeArray[String] */;
static val* varonce483;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : CString */;
val* var488 /* : String */;
val* var489 /* : nullable Int */;
val* var490 /* : nullable Int */;
val* var491 /* : nullable Bool */;
val* var492 /* : nullable Bool */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : CString */;
val* var496 /* : String */;
val* var497 /* : nullable Int */;
val* var498 /* : nullable Int */;
val* var499 /* : nullable Bool */;
val* var500 /* : nullable Bool */;
val* var501 /* : String */;
val* var502 /* : HashSet[String] */;
val* var504 /* : HashSet[String] */;
val* var_505 /* var : HashSet[String] */;
val* var506 /* : Iterator[nullable Object] */;
val* var_507 /* var : Iterator[String] */;
short int var508 /* : Bool */;
val* var510 /* : nullable Object */;
val* var_key /* var key: String */;
val* var511 /* : AbstractCompiler */;
val* var513 /* : AbstractCompiler */;
val* var514 /* : HashMap[String, String] */;
val* var516 /* : HashMap[String, String] */;
short int var517 /* : Bool */;
short int var518 /* : Bool */;
val* var519 /* : AbstractCompiler */;
val* var521 /* : AbstractCompiler */;
val* var522 /* : HashMap[String, ANode] */;
val* var524 /* : HashMap[String, ANode] */;
val* var525 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
short int var526 /* : Bool */;
short int var527 /* : Bool */;
short int var529 /* : Bool */;
short int var530 /* : Bool */;
val* var532 /* : NativeArray[String] */;
static val* varonce531;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : CString */;
val* var536 /* : String */;
val* var537 /* : nullable Int */;
val* var538 /* : nullable Int */;
val* var539 /* : nullable Bool */;
val* var540 /* : nullable Bool */;
val* var541 /* : String */;
val* var542 /* : Sys */;
val* var544 /* : NativeArray[String] */;
static val* varonce543;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : CString */;
val* var548 /* : String */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Bool */;
val* var552 /* : nullable Bool */;
val* var553 /* : String */;
val* var554 /* : AbstractCompiler */;
val* var556 /* : AbstractCompiler */;
val* var557 /* : HashMap[String, String] */;
val* var559 /* : HashMap[String, String] */;
val* var560 /* : nullable Object */;
static val* varonce561;
val* var562 /* : String */;
char* var563 /* : CString */;
val* var564 /* : String */;
val* var565 /* : nullable Int */;
val* var566 /* : nullable Int */;
val* var567 /* : nullable Bool */;
val* var568 /* : nullable Bool */;
val* var569 /* : ToolContext */;
val* var571 /* : ToolContext */;
val* var573 /* : NativeArray[String] */;
static val* varonce572;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : CString */;
val* var577 /* : String */;
val* var578 /* : nullable Int */;
val* var579 /* : nullable Int */;
val* var580 /* : nullable Bool */;
val* var581 /* : nullable Bool */;
long var582 /* : Int */;
long var584 /* : Int */;
val* var585 /* : String */;
val* var586 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$target_platform (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 563);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_platform = var3;
{
var6 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var6){
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var9 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__AbstractCompiler___build_c_to_nit_bindings(var7); /* Direct call abstract_compiler$AbstractCompiler$build_c_to_nit_bindings on <var7:AbstractCompiler>*/
}
} else {
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "-DWITH_LIBGC";
var13 = (val*)(12l<<2|1);
var14 = (val*)(12l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce = var10;
}
var_cc_opt_with_libgc = var10;
{
var17 = nitc___nitc__Platform___supports_libgc(var_platform);
}
var18 = !var17;
if (var18){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "";
var23 = (val*)(0l<<2|1);
var24 = (val*)(0l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
var_cc_opt_with_libgc = var20;
} else {
}
var27 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "gc_chooser.c";
var32 = (val*)(12l<<2|1);
var33 = (val*)(12l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var27, var29); /* filename= on <var27:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var27, var_cc_opt_with_libgc); /* cflags= on <var27:ExternCFile>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:ExternCFile>*/
}
var_gc_chooser = var27;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "";
var40 = (val*)(0l<<2|1);
var41 = (val*)(0l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
{ /* Inline kernel$Object$!= (var_cc_opt_with_libgc,var37) on <var_cc_opt_with_libgc:String> */
var_other = var37;
{
var46 = ((short int(*)(val* self, val* p0))(var_cc_opt_with_libgc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cc_opt_with_libgc, var_other); /* == on <var_cc_opt_with_libgc:String>*/
}
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline c_tools$ExternFile$pkgconfigs (var_gc_chooser) on <var_gc_chooser:ExternCFile> */
var50 = var_gc_chooser->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_gc_chooser:ExternCFile> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "bdw-gc";
var55 = (val*)(6l<<2|1);
var56 = (val*)(6l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var48, var52); /* Direct call array$Array$add on <var48:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var59) on <var59:AbstractCompiler> */
var64 = var59->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var59:AbstractCompiler> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var62, var_gc_chooser); /* Direct call array$Array$add on <var62:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var67 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$nit_dir (var65) on <var65:ToolContext> */
var70 = var65->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var65:ToolContext> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "clib";
var75 = (val*)(4l<<2|1);
var76 = (val*)(4l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
if (var68 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 218);
fatal_exit(1);
} else {
var79 = core__file___String____47d(var68, var72);
}
var_clib = var79;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var82 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var80) on <var80:AbstractCompiler> */
var85 = var80->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var80:AbstractCompiler> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (unlikely(varonce86==NULL)) {
var87 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "/gc_chooser.c";
var92 = (val*)(13l<<2|1);
var93 = (val*)(13l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var87)->values[1]=var89;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_core__NativeArray*)var87)->values[0]=var_clib;
{
var96 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var83, var96); /* Direct call array$Array$add on <var83:Array[String]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var99 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var97) on <var97:AbstractCompiler> */
var102 = var97->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var97:AbstractCompiler> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (unlikely(varonce103==NULL)) {
var104 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "/gc_chooser.h";
var109 = (val*)(13l<<2|1);
var110 = (val*)(13l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var104)->values[1]=var106;
} else {
var104 = varonce103;
varonce103 = NULL;
}
((struct instance_core__NativeArray*)var104)->values[0]=var_clib;
{
var113 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var100, var113); /* Direct call array$Array$add on <var100:Array[String]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var116 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var114) on <var114:AbstractCompiler> */
var119 = var114->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var114:AbstractCompiler> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline mmodule$MModule$in_importation (var117) on <var117:MModule> */
var122 = var117->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var117:MModule> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = poset___poset__POSetElement___greaters(var120);
}
var_ = var123;
{
var124 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_125 = var124;
for(;;) {
{
var126 = ((short int(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_125); /* is_ok on <var_125:Iterator[MModule]>*/
}
if (var126){
} else {
goto BREAK_label;
}
{
var127 = ((val*(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_125); /* item on <var_125:Iterator[MModule]>*/
}
var_m = var127;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var130 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var130 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(var128, var_m); /* Direct call separate_compiler$SeparateCompiler$finalize_ffi_for_module on <var128:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_125); /* next on <var_125:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_125); /* finish on <var_125:Iterator[MModule]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var133 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var131) on <var131:AbstractCompiler> */
var136 = var131->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var131:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
{
var138 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_137);
}
var_139 = var138;
for(;;) {
{
var140 = ((short int(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_139); /* is_ok on <var_139:IndexedIterator[String]>*/
}
if (var140){
} else {
goto BREAK_label141;
}
{
var142 = ((val*(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_139); /* item on <var_139:IndexedIterator[String]>*/
}
var_src = var142;
{
var143 = ((val*(*)(val* self, val* p0))(var_src->class->vft[COLOR_core__file__String__basename]))(var_src, ((val*)NULL)); /* basename on <var_src:String>*/
}
var_basename = var143;
if (unlikely(varonce144==NULL)) {
var145 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "/";
var150 = (val*)(1l<<2|1);
var151 = (val*)(1l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var145)->values[1]=var147;
} else {
var145 = varonce144;
varonce144 = NULL;
}
((struct instance_core__NativeArray*)var145)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var145)->values[2]=var_basename;
{
var154 = ((val*(*)(val* self))(var145->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var145); /* native_to_s on <var145:NativeArray[String]>*/
}
varonce144 = var145;
var_dst = var154;
{
core__file___String___file_copy_to(var_src, var_dst); /* Direct call file$String$file_copy_to on <var_src:String>*/
}
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_139); /* next on <var_139:IndexedIterator[String]>*/
}
}
BREAK_label141: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_139); /* finish on <var_139:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var157 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var157 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var155) on <var155:AbstractCompiler> */
var160 = var155->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var155:AbstractCompiler> */
if (unlikely(var160 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$file (var158) on <var158:CodeWriter> */
var163 = var158->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <var158:CodeWriter> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1186);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeFile$name (var161) on <var161:CodeFile> */
var166 = var161->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var161:CodeFile> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = ".h";
var171 = (val*)(2l<<2|1);
var172 = (val*)(2l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
var175 = ((val*(*)(val* self, val* p0))(var164->class->vft[COLOR_core__abstract_text__Text___43d]))(var164, var168); /* + on <var164:String>*/
}
var_hfilename = var175;
if (unlikely(varonce176==NULL)) {
var177 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "/";
var182 = (val*)(1l<<2|1);
var183 = (val*)(1l<<2|1);
var184 = (val*)((long)(0)<<2|3);
var185 = (val*)((long)(0)<<2|3);
var181 = core__flat___CString___to_s_unsafe(var180, var182, var183, var184, var185);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var177)->values[1]=var179;
} else {
var177 = varonce176;
varonce176 = NULL;
}
((struct instance_core__NativeArray*)var177)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var177)->values[2]=var_hfilename;
{
var186 = ((val*(*)(val* self))(var177->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var177); /* native_to_s on <var177:NativeArray[String]>*/
}
varonce176 = var177;
var_hfilepath = var186;
var187 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var187, var_hfilepath); /* Direct call file$FileWriter$open on <var187:FileWriter>*/
}
var_h = var187;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var190 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var190 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var188) on <var188:AbstractCompiler> */
var193 = var188->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var188:AbstractCompiler> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (var191) on <var191:CodeWriter> */
var196 = var191->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var191:CodeWriter> */
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1192);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_197 = var194;
{
var198 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_197);
}
var_199 = var198;
for(;;) {
{
var200 = ((short int(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_199); /* is_ok on <var_199:IndexedIterator[String]>*/
}
if (var200){
} else {
goto BREAK_label201;
}
{
var202 = ((val*(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_199); /* item on <var_199:IndexedIterator[String]>*/
}
var_l = var202;
{
core___core__FileWriter___core__stream__Writer__write(var_h, var_l); /* Direct call file$FileWriter$write on <var_h:FileWriter>*/
}
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "\n";
var207 = (val*)(1l<<2|1);
var208 = (val*)(1l<<2|1);
var209 = (val*)((long)(0)<<2|3);
var210 = (val*)((long)(0)<<2|3);
var206 = core__flat___CString___to_s_unsafe(var205, var207, var208, var209, var210);
var204 = var206;
varonce203 = var204;
}
{
core___core__FileWriter___core__stream__Writer__write(var_h, var204); /* Direct call file$FileWriter$write on <var_h:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_199); /* next on <var_199:IndexedIterator[String]>*/
}
}
BREAK_label201: (void)0;
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_199); /* finish on <var_199:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var213 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var213 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var211) on <var211:AbstractCompiler> */
var216 = var211->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var211:AbstractCompiler> */
if (unlikely(var216 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$lines (var214) on <var214:CodeWriter> */
var219 = var214->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var214:CodeWriter> */
if (unlikely(var219 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1189);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
var_220 = var217;
{
var221 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_220);
}
var_222 = var221;
for(;;) {
{
var223 = ((short int(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_222); /* is_ok on <var_222:IndexedIterator[String]>*/
}
if (var223){
} else {
goto BREAK_label224;
}
{
var225 = ((val*(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_222); /* item on <var_222:IndexedIterator[String]>*/
}
var_l226 = var225;
{
core___core__FileWriter___core__stream__Writer__write(var_h, var_l226); /* Direct call file$FileWriter$write on <var_h:FileWriter>*/
}
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = "\n";
var231 = (val*)(1l<<2|1);
var232 = (val*)(1l<<2|1);
var233 = (val*)((long)(0)<<2|3);
var234 = (val*)((long)(0)<<2|3);
var230 = core__flat___CString___to_s_unsafe(var229, var231, var232, var233, var234);
var228 = var230;
varonce227 = var228;
}
{
core___core__FileWriter___core__stream__Writer__write(var_h, var228); /* Direct call file$FileWriter$write on <var_h:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_222); /* next on <var_222:IndexedIterator[String]>*/
}
}
BREAK_label224: (void)0;
{
((void(*)(val* self))((((long)var_222&3)?class_info[((long)var_222&3)]:var_222->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_222); /* finish on <var_222:IndexedIterator[String]>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_h); /* Direct call file$FileWriter$close on <var_h:FileWriter>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var237 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var237 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_max_c_lines (var235) on <var235:ToolContext> */
var240 = var235->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <var235:ToolContext> */
if (unlikely(var240 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 40);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
{ /* Inline opts$Option$value (var238) on <var238:OptionInt> */
var243 = var238->attrs[COLOR_opts__Option___value].val; /* _value on <var238:OptionInt> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
var244 = (long)(var241)>>2;
var_max_c_lines = var244;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var247 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var247 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files (var245) on <var245:AbstractCompiler> */
var250 = var245->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var245:AbstractCompiler> */
if (unlikely(var250 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
var_251 = var248;
{
var252 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_251);
}
var_253 = var252;
for(;;) {
{
var254 = ((short int(*)(val* self))((((long)var_253&3)?class_info[((long)var_253&3)]:var_253->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_253); /* is_ok on <var_253:IndexedIterator[CodeFile]>*/
}
if (var254){
} else {
goto BREAK_label255;
}
{
var256 = ((val*(*)(val* self))((((long)var_253&3)?class_info[((long)var_253&3)]:var_253->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_253); /* item on <var_253:IndexedIterator[CodeFile]>*/
}
var_f = var256;
var_i = 0l;
var_count = 0l;
var_file = ((val*)NULL);
{
{ /* Inline abstract_compiler$CodeFile$writers (var_f) on <var_f:CodeFile> */
var259 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <var_f:CodeFile> */
if (unlikely(var259 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1173);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
var_260 = var257;
{
var261 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_260);
}
var_262 = var261;
for(;;) {
{
var263 = ((short int(*)(val* self))((((long)var_262&3)?class_info[((long)var_262&3)]:var_262->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_262); /* is_ok on <var_262:IndexedIterator[CodeWriter]>*/
}
if (var263){
} else {
goto BREAK_label264;
}
{
var265 = ((val*(*)(val* self))((((long)var_262&3)?class_info[((long)var_262&3)]:var_262->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_262); /* item on <var_262:IndexedIterator[CodeWriter]>*/
}
var_vis = var265;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var268 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var268 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$header (var266) on <var266:AbstractCompiler> */
var271 = var266->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var266:AbstractCompiler> */
if (unlikely(var271 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_vis,var269) on <var_vis:CodeWriter> */
var_other274 = var269;
{
{ /* Inline kernel$Object$is_same_instance (var_vis,var_other274) on <var_vis:CodeWriter> */
var277 = var_vis == var_other274;
var275 = var277;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
}
var272 = var275;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
if (var272){
goto BREAK_label278;
} else {
}
{
{ /* Inline abstract_compiler$CodeWriter$lines (var_vis) on <var_vis:CodeWriter> */
var281 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var281 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1189);
fatal_exit(1);
}
var279 = var281;
RET_LABEL280:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var279) on <var279:Array[String]> */
var284 = var279->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var279:Array[String]> */
var282 = var284;
RET_LABEL283:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (var_vis) on <var_vis:CodeWriter> */
var287 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var287 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1192);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var285) on <var285:Array[String]> */
var290 = var285->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var285:Array[String]> */
var288 = var290;
RET_LABEL289:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var282,var288) on <var282:Int> */
/* Covariant cast for argument 0 (i) <var288:Int> isa OTHER */
/* <var288:Int> isa OTHER */
var293 = 1; /* easy <var288:Int> isa OTHER*/
if (unlikely(!var293)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var294 = var282 + var288;
var291 = var294;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
}
var_total_lines = var291;
{
{ /* Inline kernel$Int$== (var_total_lines,0l) on <var_total_lines:Int> */
var297 = var_total_lines == 0l;
var295 = var297;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
}
if (var295){
goto BREAK_label278;
} else {
}
{
{ /* Inline kernel$Int$+ (var_count,var_total_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_total_lines:Int> isa OTHER */
/* <var_total_lines:Int> isa OTHER */
var300 = 1; /* easy <var_total_lines:Int> isa OTHER*/
if (unlikely(!var300)) {
var_class_name303 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name303);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var304 = var_count + var_total_lines;
var298 = var304;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
}
var_count = var298;
if (var_file == NULL) {
var306 = 1; /* is null */
} else {
var306 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other274 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_file,var_other274) on <var_file:nullable FileWriter(FileWriter)> */
var311 = var_file == var_other274;
var309 = var311;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
}
var307 = var309;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
var306 = var307;
}
var_312 = var306;
if (var306){
var305 = var_312;
} else {
{
{ /* Inline kernel$Int$> (var_count,var_max_c_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_max_c_lines:Int> isa OTHER */
/* <var_max_c_lines:Int> isa OTHER */
var316 = 1; /* easy <var_max_c_lines:Int> isa OTHER*/
if (unlikely(!var316)) {
var_class_name319 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name319);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var320 = var_count > var_max_c_lines;
var314 = var320;
goto RET_LABEL315;
RET_LABEL315:(void)0;
}
}
var_321 = var314;
if (var314){
{
{ /* Inline kernel$Int$> (var_max_c_lines,0l) on <var_max_c_lines:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var324 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var324)) {
var_class_name327 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name327);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var328 = var_max_c_lines > 0l;
var322 = var328;
goto RET_LABEL323;
RET_LABEL323:(void)0;
}
}
var313 = var322;
} else {
var313 = var_321;
}
var305 = var313;
}
if (var305){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var331 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var331)) {
var_class_name334 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name334);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var335 = var_i + 1l;
var329 = var335;
goto RET_LABEL330;
RET_LABEL330:(void)0;
}
}
var_i = var329;
if (var_file == NULL) {
var336 = 0; /* is null */
} else {
var336 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other = ((val*)NULL);
{
var339 = ((short int(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_file, var_other); /* == on <var_file:nullable FileWriter(FileWriter)>*/
}
var340 = !var339;
var337 = var340;
goto RET_LABEL338;
RET_LABEL338:(void)0;
}
var336 = var337;
}
if (var336){
{
core___core__FileWriter___core__stream__Stream__close(var_file); /* Direct call file$FileWriter$close on <var_file:nullable FileWriter(FileWriter)>*/
}
} else {
}
if (unlikely(varonce341==NULL)) {
var342 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = ".";
var347 = (val*)(1l<<2|1);
var348 = (val*)(1l<<2|1);
var349 = (val*)((long)(0)<<2|3);
var350 = (val*)((long)(0)<<2|3);
var346 = core__flat___CString___to_s_unsafe(var345, var347, var348, var349, var350);
var344 = var346;
varonce343 = var344;
}
((struct instance_core__NativeArray*)var342)->values[1]=var344;
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = ".c";
var355 = (val*)(2l<<2|1);
var356 = (val*)(2l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var342)->values[3]=var352;
} else {
var342 = varonce341;
varonce341 = NULL;
}
{
{ /* Inline abstract_compiler$CodeFile$name (var_f) on <var_f:CodeFile> */
var361 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var361 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
((struct instance_core__NativeArray*)var342)->values[0]=var359;
var362 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var342)->values[2]=var362;
{
var363 = ((val*(*)(val* self))(var342->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var342); /* native_to_s on <var342:NativeArray[String]>*/
}
varonce341 = var342;
var_cfilename = var363;
if (unlikely(varonce364==NULL)) {
var365 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "/";
var370 = (val*)(1l<<2|1);
var371 = (val*)(1l<<2|1);
var372 = (val*)((long)(0)<<2|3);
var373 = (val*)((long)(0)<<2|3);
var369 = core__flat___CString___to_s_unsafe(var368, var370, var371, var372, var373);
var367 = var369;
varonce366 = var367;
}
((struct instance_core__NativeArray*)var365)->values[1]=var367;
} else {
var365 = varonce364;
varonce364 = NULL;
}
((struct instance_core__NativeArray*)var365)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var365)->values[2]=var_cfilename;
{
var374 = ((val*(*)(val* self))(var365->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
var_cfilepath = var374;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var377 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var377 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
if (unlikely(varonce378==NULL)) {
var379 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "new C source files to compile: ";
var384 = (val*)(31l<<2|1);
var385 = (val*)(31l<<2|1);
var386 = (val*)((long)(0)<<2|3);
var387 = (val*)((long)(0)<<2|3);
var383 = core__flat___CString___to_s_unsafe(var382, var384, var385, var386, var387);
var381 = var383;
varonce380 = var381;
}
((struct instance_core__NativeArray*)var379)->values[0]=var381;
} else {
var379 = varonce378;
varonce378 = NULL;
}
((struct instance_core__NativeArray*)var379)->values[1]=var_cfilepath;
{
var388 = ((val*(*)(val* self))(var379->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var379); /* native_to_s on <var379:NativeArray[String]>*/
}
varonce378 = var379;
{
nitc___nitc__ToolContext___info(var375, var388, 3l); /* Direct call toolcontext$ToolContext$info on <var375:ToolContext>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_cfiles, var_cfilename); /* Direct call array$Array$add on <var_cfiles:Array[String]>*/
}
var389 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var389, var_cfilepath); /* Direct call file$FileWriter$open on <var389:FileWriter>*/
}
var_file = var389;
if (unlikely(varonce390==NULL)) {
var391 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce392!=NULL)) {
var393 = varonce392;
} else {
var394 = "#include \"";
var396 = (val*)(10l<<2|1);
var397 = (val*)(10l<<2|1);
var398 = (val*)((long)(0)<<2|3);
var399 = (val*)((long)(0)<<2|3);
var395 = core__flat___CString___to_s_unsafe(var394, var396, var397, var398, var399);
var393 = var395;
varonce392 = var393;
}
((struct instance_core__NativeArray*)var391)->values[0]=var393;
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = ".0.h\"\n";
var404 = (val*)(6l<<2|1);
var405 = (val*)(6l<<2|1);
var406 = (val*)((long)(0)<<2|3);
var407 = (val*)((long)(0)<<2|3);
var403 = core__flat___CString___to_s_unsafe(var402, var404, var405, var406, var407);
var401 = var403;
varonce400 = var401;
}
((struct instance_core__NativeArray*)var391)->values[2]=var401;
} else {
var391 = varonce390;
varonce390 = NULL;
}
{
{ /* Inline abstract_compiler$CodeFile$name (var_f) on <var_f:CodeFile> */
var410 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var410 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var408 = var410;
RET_LABEL409:(void)0;
}
}
((struct instance_core__NativeArray*)var391)->values[1]=var408;
{
var411 = ((val*(*)(val* self))(var391->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var391); /* native_to_s on <var391:NativeArray[String]>*/
}
varonce390 = var391;
{
core___core__FileWriter___core__stream__Writer__write(var_file, var411); /* Direct call file$FileWriter$write on <var_file:nullable FileWriter(FileWriter)>*/
}
var_count = var_total_lines;
} else {
}
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (var_vis) on <var_vis:CodeWriter> */
var414 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var414 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1192);
fatal_exit(1);
}
var412 = var414;
RET_LABEL413:(void)0;
}
}
var_415 = var412;
{
var416 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_415);
}
var_417 = var416;
for(;;) {
{
var418 = ((short int(*)(val* self))((((long)var_417&3)?class_info[((long)var_417&3)]:var_417->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_417); /* is_ok on <var_417:IndexedIterator[String]>*/
}
if (var418){
} else {
goto BREAK_label419;
}
{
var420 = ((val*(*)(val* self))((((long)var_417&3)?class_info[((long)var_417&3)]:var_417->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_417); /* item on <var_417:IndexedIterator[String]>*/
}
var_l421 = var420;
{
core___core__FileWriter___core__stream__Writer__write(var_file, var_l421); /* Direct call file$FileWriter$write on <var_file:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce422!=NULL)) {
var423 = varonce422;
} else {
var424 = "\n";
var426 = (val*)(1l<<2|1);
var427 = (val*)(1l<<2|1);
var428 = (val*)((long)(0)<<2|3);
var429 = (val*)((long)(0)<<2|3);
var425 = core__flat___CString___to_s_unsafe(var424, var426, var427, var428, var429);
var423 = var425;
varonce422 = var423;
}
{
core___core__FileWriter___core__stream__Writer__write(var_file, var423); /* Direct call file$FileWriter$write on <var_file:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_417&3)?class_info[((long)var_417&3)]:var_417->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_417); /* next on <var_417:IndexedIterator[String]>*/
}
}
BREAK_label419: (void)0;
{
((void(*)(val* self))((((long)var_417&3)?class_info[((long)var_417&3)]:var_417->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_417); /* finish on <var_417:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler$CodeWriter$lines (var_vis) on <var_vis:CodeWriter> */
var432 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var432 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1189);
fatal_exit(1);
}
var430 = var432;
RET_LABEL431:(void)0;
}
}
var_433 = var430;
{
var434 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_433);
}
var_435 = var434;
for(;;) {
{
var436 = ((short int(*)(val* self))((((long)var_435&3)?class_info[((long)var_435&3)]:var_435->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_435); /* is_ok on <var_435:IndexedIterator[String]>*/
}
if (var436){
} else {
goto BREAK_label437;
}
{
var438 = ((val*(*)(val* self))((((long)var_435&3)?class_info[((long)var_435&3)]:var_435->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_435); /* item on <var_435:IndexedIterator[String]>*/
}
var_l439 = var438;
{
core___core__FileWriter___core__stream__Writer__write(var_file, var_l439); /* Direct call file$FileWriter$write on <var_file:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce440!=NULL)) {
var441 = varonce440;
} else {
var442 = "\n";
var444 = (val*)(1l<<2|1);
var445 = (val*)(1l<<2|1);
var446 = (val*)((long)(0)<<2|3);
var447 = (val*)((long)(0)<<2|3);
var443 = core__flat___CString___to_s_unsafe(var442, var444, var445, var446, var447);
var441 = var443;
varonce440 = var441;
}
{
core___core__FileWriter___core__stream__Writer__write(var_file, var441); /* Direct call file$FileWriter$write on <var_file:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_435&3)?class_info[((long)var_435&3)]:var_435->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_435); /* next on <var_435:IndexedIterator[String]>*/
}
}
BREAK_label437: (void)0;
{
((void(*)(val* self))((((long)var_435&3)?class_info[((long)var_435&3)]:var_435->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_435); /* finish on <var_435:IndexedIterator[String]>*/
}
BREAK_label278: (void)0;
{
((void(*)(val* self))((((long)var_262&3)?class_info[((long)var_262&3)]:var_262->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_262); /* next on <var_262:IndexedIterator[CodeWriter]>*/
}
}
BREAK_label264: (void)0;
{
((void(*)(val* self))((((long)var_262&3)?class_info[((long)var_262&3)]:var_262->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_262); /* finish on <var_262:IndexedIterator[CodeWriter]>*/
}
if (var_file == NULL) {
var448 = 1; /* is null */
} else {
var448 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other274 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_file,var_other274) on <var_file:nullable FileWriter(FileWriter)> */
var453 = var_file == var_other274;
var451 = var453;
goto RET_LABEL452;
RET_LABEL452:(void)0;
}
}
var449 = var451;
goto RET_LABEL450;
RET_LABEL450:(void)0;
}
var448 = var449;
}
if (var448){
goto BREAK_label454;
} else {
}
{
core___core__FileWriter___core__stream__Stream__close(var_file); /* Direct call file$FileWriter$close on <var_file:nullable FileWriter(FileWriter)>*/
}
if (unlikely(varonce455==NULL)) {
var456 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = ".0.h";
var461 = (val*)(4l<<2|1);
var462 = (val*)(4l<<2|1);
var463 = (val*)((long)(0)<<2|3);
var464 = (val*)((long)(0)<<2|3);
var460 = core__flat___CString___to_s_unsafe(var459, var461, var462, var463, var464);
var458 = var460;
varonce457 = var458;
}
((struct instance_core__NativeArray*)var456)->values[1]=var458;
} else {
var456 = varonce455;
varonce455 = NULL;
}
{
{ /* Inline abstract_compiler$CodeFile$name (var_f) on <var_f:CodeFile> */
var467 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var467 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1170);
fatal_exit(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
((struct instance_core__NativeArray*)var456)->values[0]=var465;
{
var468 = ((val*(*)(val* self))(var456->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var456); /* native_to_s on <var456:NativeArray[String]>*/
}
varonce455 = var456;
var_cfilename469 = var468;
if (unlikely(varonce470==NULL)) {
var471 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "/";
var476 = (val*)(1l<<2|1);
var477 = (val*)(1l<<2|1);
var478 = (val*)((long)(0)<<2|3);
var479 = (val*)((long)(0)<<2|3);
var475 = core__flat___CString___to_s_unsafe(var474, var476, var477, var478, var479);
var473 = var475;
varonce472 = var473;
}
((struct instance_core__NativeArray*)var471)->values[1]=var473;
} else {
var471 = varonce470;
varonce470 = NULL;
}
((struct instance_core__NativeArray*)var471)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var471)->values[2]=var_cfilename469;
{
var480 = ((val*(*)(val* self))(var471->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var471); /* native_to_s on <var471:NativeArray[String]>*/
}
varonce470 = var471;
var_cfilepath481 = var480;
var_hfile = ((val*)NULL);
var482 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var482, var_cfilepath481); /* Direct call file$FileWriter$open on <var482:FileWriter>*/
}
var_hfile = var482;
if (unlikely(varonce483==NULL)) {
var484 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce485!=NULL)) {
var486 = varonce485;
} else {
var487 = "#include \"";
var489 = (val*)(10l<<2|1);
var490 = (val*)(10l<<2|1);
var491 = (val*)((long)(0)<<2|3);
var492 = (val*)((long)(0)<<2|3);
var488 = core__flat___CString___to_s_unsafe(var487, var489, var490, var491, var492);
var486 = var488;
varonce485 = var486;
}
((struct instance_core__NativeArray*)var484)->values[0]=var486;
if (likely(varonce493!=NULL)) {
var494 = varonce493;
} else {
var495 = "\"\n";
var497 = (val*)(2l<<2|1);
var498 = (val*)(2l<<2|1);
var499 = (val*)((long)(0)<<2|3);
var500 = (val*)((long)(0)<<2|3);
var496 = core__flat___CString___to_s_unsafe(var495, var497, var498, var499, var500);
var494 = var496;
varonce493 = var494;
}
((struct instance_core__NativeArray*)var484)->values[2]=var494;
} else {
var484 = varonce483;
varonce483 = NULL;
}
((struct instance_core__NativeArray*)var484)->values[1]=var_hfilename;
{
var501 = ((val*(*)(val* self))(var484->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var484); /* native_to_s on <var484:NativeArray[String]>*/
}
varonce483 = var484;
{
core___core__FileWriter___core__stream__Writer__write(var_hfile, var501); /* Direct call file$FileWriter$write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
{
{ /* Inline abstract_compiler$CodeFile$required_declarations (var_f) on <var_f:CodeFile> */
var504 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var_f:CodeFile> */
if (unlikely(var504 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1176);
fatal_exit(1);
}
var502 = var504;
RET_LABEL503:(void)0;
}
}
var_505 = var502;
{
var506 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_505);
}
var_507 = var506;
for(;;) {
{
var508 = ((short int(*)(val* self))((((long)var_507&3)?class_info[((long)var_507&3)]:var_507->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_507); /* is_ok on <var_507:Iterator[String]>*/
}
if (var508){
} else {
goto BREAK_label509;
}
{
var510 = ((val*(*)(val* self))((((long)var_507&3)?class_info[((long)var_507&3)]:var_507->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_507); /* item on <var_507:Iterator[String]>*/
}
var_key = var510;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var513 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var513 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var511 = var513;
RET_LABEL512:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$provided_declarations (var511) on <var511:AbstractCompiler> */
var516 = var511->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var511:AbstractCompiler> */
if (unlikely(var516 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 615);
fatal_exit(1);
}
var514 = var516;
RET_LABEL515:(void)0;
}
}
{
var517 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var514, var_key);
}
var518 = !var517;
if (var518){
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var521 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var521 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var519 = var521;
RET_LABEL520:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$requirers_of_declarations (var519) on <var519:AbstractCompiler> */
var524 = var519->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var519:AbstractCompiler> */
if (unlikely(var524 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 617);
fatal_exit(1);
}
var522 = var524;
RET_LABEL523:(void)0;
}
}
{
var525 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var522, var_key);
}
var_node = var525;
if (var_node == NULL) {
var526 = 0; /* is null */
} else {
var526 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
var529 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ANode(ANode)>*/
}
var530 = !var529;
var527 = var530;
goto RET_LABEL528;
RET_LABEL528:(void)0;
}
var526 = var527;
}
if (var526){
if (unlikely(varonce531==NULL)) {
var532 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = "No provided declaration for ";
var537 = (val*)(28l<<2|1);
var538 = (val*)(28l<<2|1);
var539 = (val*)((long)(0)<<2|3);
var540 = (val*)((long)(0)<<2|3);
var536 = core__flat___CString___to_s_unsafe(var535, var537, var538, var539, var540);
var534 = var536;
varonce533 = var534;
}
((struct instance_core__NativeArray*)var532)->values[0]=var534;
} else {
var532 = varonce531;
varonce531 = NULL;
}
((struct instance_core__NativeArray*)var532)->values[1]=var_key;
{
var541 = ((val*(*)(val* self))(var532->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var532); /* native_to_s on <var532:NativeArray[String]>*/
}
varonce531 = var532;
{
nitc___nitc__ANode___debug(var_node, var541); /* Direct call parser_nodes$ANode$debug on <var_node:nullable ANode(ANode)>*/
}
} else {
var542 = glob_sys;
if (unlikely(varonce543==NULL)) {
var544 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = "No provided declaration for ";
var549 = (val*)(28l<<2|1);
var550 = (val*)(28l<<2|1);
var551 = (val*)((long)(0)<<2|3);
var552 = (val*)((long)(0)<<2|3);
var548 = core__flat___CString___to_s_unsafe(var547, var549, var550, var551, var552);
var546 = var548;
varonce545 = var546;
}
((struct instance_core__NativeArray*)var544)->values[0]=var546;
} else {
var544 = varonce543;
varonce543 = NULL;
}
((struct instance_core__NativeArray*)var544)->values[1]=var_key;
{
var553 = ((val*(*)(val* self))(var544->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var544); /* native_to_s on <var544:NativeArray[String]>*/
}
varonce543 = var544;
{
core__file___Sys___print(var542, var553); /* Direct call file$Sys$print on <var542:Sys>*/
}
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 293);
fatal_exit(1);
} else {
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var556 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var556 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var554 = var556;
RET_LABEL555:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$provided_declarations (var554) on <var554:AbstractCompiler> */
var559 = var554->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var554:AbstractCompiler> */
if (unlikely(var559 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 615);
fatal_exit(1);
}
var557 = var559;
RET_LABEL558:(void)0;
}
}
{
var560 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var557, var_key);
}
{
core___core__FileWriter___core__stream__Writer__write(var_hfile, var560); /* Direct call file$FileWriter$write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce561!=NULL)) {
var562 = varonce561;
} else {
var563 = "\n";
var565 = (val*)(1l<<2|1);
var566 = (val*)(1l<<2|1);
var567 = (val*)((long)(0)<<2|3);
var568 = (val*)((long)(0)<<2|3);
var564 = core__flat___CString___to_s_unsafe(var563, var565, var566, var567, var568);
var562 = var564;
varonce561 = var562;
}
{
core___core__FileWriter___core__stream__Writer__write(var_hfile, var562); /* Direct call file$FileWriter$write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_507&3)?class_info[((long)var_507&3)]:var_507->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_507); /* next on <var_507:Iterator[String]>*/
}
}
BREAK_label509: (void)0;
{
((void(*)(val* self))((((long)var_507&3)?class_info[((long)var_507&3)]:var_507->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_507); /* finish on <var_507:Iterator[String]>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_hfile); /* Direct call file$FileWriter$close on <var_hfile:nullable FileWriter(FileWriter)>*/
}
BREAK_label454: (void)0;
{
((void(*)(val* self))((((long)var_253&3)?class_info[((long)var_253&3)]:var_253->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_253); /* next on <var_253:IndexedIterator[CodeFile]>*/
}
}
BREAK_label255: (void)0;
{
((void(*)(val* self))((((long)var_253&3)?class_info[((long)var_253&3)]:var_253->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_253); /* finish on <var_253:IndexedIterator[CodeFile]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var571 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var571 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var569 = var571;
RET_LABEL570:(void)0;
}
}
if (unlikely(varonce572==NULL)) {
var573 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce574!=NULL)) {
var575 = varonce574;
} else {
var576 = "Total C source files to compile: ";
var578 = (val*)(33l<<2|1);
var579 = (val*)(33l<<2|1);
var580 = (val*)((long)(0)<<2|3);
var581 = (val*)((long)(0)<<2|3);
var577 = core__flat___CString___to_s_unsafe(var576, var578, var579, var580, var581);
var575 = var577;
varonce574 = var575;
}
((struct instance_core__NativeArray*)var573)->values[0]=var575;
} else {
var573 = varonce572;
varonce572 = NULL;
}
{
{ /* Inline array$AbstractArrayRead$length (var_cfiles) on <var_cfiles:Array[String]> */
var584 = var_cfiles->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_cfiles:Array[String]> */
var582 = var584;
RET_LABEL583:(void)0;
}
}
var585 = core__flat___Int___core__abstract_text__Object__to_s(var582);
((struct instance_core__NativeArray*)var573)->values[1]=var585;
{
var586 = ((val*(*)(val* self))(var573->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var573); /* native_to_s on <var573:NativeArray[String]>*/
}
varonce572 = var573;
{
nitc___nitc__ToolContext___info(var569, var586, 2l); /* Direct call toolcontext$ToolContext$info on <var569:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler$MakefileToolchain$makefile_name for (self: MakefileToolchain): String */
val* nitc___nitc__MakefileToolchain___makefile_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : AbstractCompiler */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : String */;
val* var17 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".mk";
var6 = (val*)(3l<<2|1);
var7 = (val*)(3l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var10) on <var10:AbstractCompiler> */
var15 = var10->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var10:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var13);
}
((struct instance_core__NativeArray*)var1)->values[0]=var16;
{
var17 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MakefileToolchain$default_outname for (self: MakefileToolchain): String */
val* nitc___nitc__MakefileToolchain___default_outname(val* self) {
val* var /* : String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var10 /* : String */;
val* var12 /* : String */;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule$MModule$first_real_mmodule (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <var4:MModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 260);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mainmodule = var7;
{
{ /* Inline mmodule$MModule$name (var_mainmodule) on <var_mainmodule:MModule> */
var12 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MakefileToolchain$outfile for (self: MakefileToolchain, MModule): String */
val* nitc___nitc__MakefileToolchain___outfile(val* self, val* p0) {
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
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_output (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts$Option$value (var4) on <var4:OptionString> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
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
var15 = nitc___nitc__MakefileToolchain___default_outname(self);
}
var_res = var15;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var18 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_dir (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts$Option$value (var19) on <var19:OptionString> */
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
{ /* Inline kernel$Object$!= (var_dir,((val*)NULL)) on <var_dir:nullable String> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_dir->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_dir, var_other); /* == on <var_dir:nullable String(String)>*/
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
var30 = core__file___String___join_path(var_dir, var_res);
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
/* method abstract_compiler$MakefileToolchain$write_makefile for (self: MakefileToolchain, String, Array[String]) */
void nitc___nitc__MakefileToolchain___write_makefile(val* self, val* p0, val* p1) {
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
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
val* var30 /* : String */;
val* var_makepath /* var makepath: String */;
val* var31 /* : FileWriter */;
val* var_makefile /* var makefile: FileWriter */;
val* var32 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var33 /* : POSetElement[MModule] */;
val* var35 /* : POSetElement[MModule] */;
val* var36 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var37 /* : Iterator[nullable Object] */;
val* var_38 /* var : Iterator[MModule] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var41 /* : nullable Array[String] */;
val* var_libs /* var libs: nullable Array[String] */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : ToolContext */;
val* var49 /* : ToolContext */;
val* var50 /* : OptionBool */;
val* var52 /* : OptionBool */;
val* var53 /* : nullable Object */;
val* var55 /* : nullable Object */;
short int var56 /* : Bool */;
short int var_debug /* var debug: Bool */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : String */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Bool */;
val* var108 /* : nullable Bool */;
val* var109 /* : String */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
short int var119 /* : Bool */;
val* var120 /* : ToolContext */;
val* var122 /* : ToolContext */;
val* var123 /* : OptionBool */;
val* var125 /* : OptionBool */;
val* var126 /* : nullable Object */;
val* var128 /* : nullable Object */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Bool */;
val* var169 /* : nullable Bool */;
short int var170 /* : Bool */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Bool */;
val* var186 /* : nullable Bool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : CString */;
val* var190 /* : String */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Bool */;
val* var194 /* : nullable Bool */;
val* var196 /* : NativeArray[String] */;
static val* varonce195;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Bool */;
val* var204 /* : nullable Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Bool */;
val* var212 /* : nullable Bool */;
val* var213 /* : String */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
val* var219 /* : NativeArray[String] */;
static val* varonce218;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : CString */;
val* var223 /* : String */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Bool */;
val* var227 /* : nullable Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Bool */;
val* var235 /* : nullable Bool */;
val* var236 /* : String */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : CString */;
val* var241 /* : String */;
val* var242 /* : nullable Int */;
val* var243 /* : nullable Int */;
val* var244 /* : nullable Bool */;
val* var245 /* : nullable Bool */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : CString */;
val* var249 /* : String */;
val* var250 /* : nullable Int */;
val* var251 /* : nullable Int */;
val* var252 /* : nullable Bool */;
val* var253 /* : nullable Bool */;
val* var254 /* : String */;
val* var255 /* : String */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Bool */;
val* var263 /* : nullable Bool */;
val* var264 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var265 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var_266 /* var : Array[String] */;
val* var267 /* : IndexedIterator[nullable Object] */;
val* var_268 /* var : IndexedIterator[String] */;
short int var269 /* : Bool */;
val* var271 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Bool */;
val* var279 /* : nullable Bool */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
val* var285 /* : nullable Int */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Bool */;
val* var288 /* : nullable Bool */;
val* var289 /* : Text */;
val* var_o /* var o: String */;
val* var291 /* : NativeArray[String] */;
static val* varonce290;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Bool */;
val* var307 /* : nullable Bool */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Bool */;
val* var315 /* : nullable Bool */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Bool */;
val* var323 /* : nullable Bool */;
val* var324 /* : String */;
val* var325 /* : AbstractCompiler */;
val* var327 /* : AbstractCompiler */;
val* var328 /* : Array[String] */;
val* var330 /* : Array[String] */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
val* var334 /* : NativeArray[String] */;
static val* varonce333;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : CString */;
val* var338 /* : String */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Int */;
val* var341 /* : nullable Bool */;
val* var342 /* : nullable Bool */;
val* var343 /* : String */;
val* var_linker_script_path /* var linker_script_path: String */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : CString */;
val* var347 /* : String */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Int */;
val* var350 /* : nullable Bool */;
val* var351 /* : nullable Bool */;
val* var352 /* : FileWriter */;
val* var_f353 /* var f: FileWriter */;
val* var354 /* : AbstractCompiler */;
val* var356 /* : AbstractCompiler */;
val* var357 /* : Array[String] */;
val* var359 /* : Array[String] */;
val* var_360 /* var : Array[String] */;
val* var361 /* : IndexedIterator[nullable Object] */;
val* var_362 /* var : IndexedIterator[String] */;
short int var363 /* : Bool */;
val* var365 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : CString */;
val* var369 /* : String */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Int */;
val* var372 /* : nullable Bool */;
val* var373 /* : nullable Bool */;
val* var374 /* : Array[ExternFile] */;
val* var_java_files /* var java_files: Array[ExternFile] */;
val* var375 /* : Array[String] */;
val* var_pkgconfigs /* var pkgconfigs: Array[String] */;
val* var376 /* : AbstractCompiler */;
val* var378 /* : AbstractCompiler */;
val* var379 /* : Array[ExternFile] */;
val* var381 /* : Array[ExternFile] */;
val* var_382 /* var : Array[ExternFile] */;
val* var383 /* : IndexedIterator[nullable Object] */;
val* var_384 /* var : IndexedIterator[ExternFile] */;
short int var385 /* : Bool */;
val* var387 /* : nullable Object */;
val* var_f388 /* var f: ExternFile */;
val* var389 /* : Array[String] */;
val* var391 /* : Array[String] */;
short int var392 /* : Bool */;
short int var393 /* : Bool */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : CString */;
val* var397 /* : String */;
val* var398 /* : nullable Int */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Bool */;
val* var401 /* : nullable Bool */;
val* var_402 /* var : Array[String] */;
val* var403 /* : IndexedIterator[nullable Object] */;
val* var_404 /* var : IndexedIterator[String] */;
short int var405 /* : Bool */;
val* var407 /* : nullable Object */;
val* var_p /* var p: String */;
val* var409 /* : NativeArray[String] */;
static val* varonce408;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : CString */;
val* var413 /* : String */;
val* var414 /* : nullable Int */;
val* var415 /* : nullable Int */;
val* var416 /* : nullable Bool */;
val* var417 /* : nullable Bool */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : CString */;
val* var421 /* : String */;
val* var422 /* : nullable Int */;
val* var423 /* : nullable Int */;
val* var424 /* : nullable Bool */;
val* var425 /* : nullable Bool */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : CString */;
val* var429 /* : String */;
val* var430 /* : nullable Int */;
val* var431 /* : nullable Int */;
val* var432 /* : nullable Bool */;
val* var433 /* : nullable Bool */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : CString */;
val* var437 /* : String */;
val* var438 /* : nullable Int */;
val* var439 /* : nullable Int */;
val* var440 /* : nullable Bool */;
val* var441 /* : nullable Bool */;
val* var442 /* : String */;
val* var443 /* : AbstractCompiler */;
val* var445 /* : AbstractCompiler */;
val* var446 /* : Array[ExternFile] */;
val* var448 /* : Array[ExternFile] */;
val* var_449 /* var : Array[ExternFile] */;
val* var450 /* : IndexedIterator[nullable Object] */;
val* var_451 /* var : IndexedIterator[ExternFile] */;
short int var452 /* : Bool */;
val* var454 /* : nullable Object */;
val* var_f455 /* var f: ExternFile */;
val* var456 /* : String */;
val* var_o457 /* var o: String */;
val* var458 /* : String */;
val* var460 /* : String */;
val* var461 /* : String */;
val* var_ff /* var ff: String */;
val* var463 /* : NativeArray[String] */;
static val* varonce462;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : CString */;
val* var467 /* : String */;
val* var468 /* : nullable Int */;
val* var469 /* : nullable Int */;
val* var470 /* : nullable Bool */;
val* var471 /* : nullable Bool */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : CString */;
val* var475 /* : String */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Int */;
val* var478 /* : nullable Bool */;
val* var479 /* : nullable Bool */;
val* var480 /* : String */;
val* var482 /* : NativeArray[String] */;
static val* varonce481;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : CString */;
val* var486 /* : String */;
val* var487 /* : nullable Int */;
val* var488 /* : nullable Int */;
val* var489 /* : nullable Bool */;
val* var490 /* : nullable Bool */;
static val* varonce491;
val* var492 /* : String */;
char* var493 /* : CString */;
val* var494 /* : String */;
val* var495 /* : nullable Int */;
val* var496 /* : nullable Int */;
val* var497 /* : nullable Bool */;
val* var498 /* : nullable Bool */;
val* var499 /* : String */;
val* var500 /* : String */;
val* var501 /* : String */;
short int var502 /* : Bool */;
short int var503 /* : Bool */;
short int var504 /* : Bool */;
short int var505 /* : Bool */;
val* var507 /* : NativeArray[String] */;
static val* varonce506;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : CString */;
val* var511 /* : String */;
val* var512 /* : nullable Int */;
val* var513 /* : nullable Int */;
val* var514 /* : nullable Bool */;
val* var515 /* : nullable Bool */;
val* var516 /* : String */;
val* var_jar_file /* var jar_file: String */;
val* var517 /* : Array[String] */;
val* var_class_files_array /* var class_files_array: Array[String] */;
val* var_518 /* var : Array[ExternFile] */;
val* var519 /* : IndexedIterator[nullable Object] */;
val* var_520 /* var : IndexedIterator[ExternFile] */;
short int var521 /* : Bool */;
val* var523 /* : nullable Object */;
val* var_f524 /* var f: ExternFile */;
val* var525 /* : String */;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : CString */;
val* var529 /* : String */;
val* var530 /* : nullable Int */;
val* var531 /* : nullable Int */;
val* var532 /* : nullable Bool */;
val* var533 /* : nullable Bool */;
val* var534 /* : String */;
val* var_class_files /* var class_files: String */;
val* var536 /* : NativeArray[String] */;
static val* varonce535;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : CString */;
val* var540 /* : String */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Int */;
val* var543 /* : nullable Bool */;
val* var544 /* : nullable Bool */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : CString */;
val* var548 /* : String */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Int */;
val* var551 /* : nullable Bool */;
val* var552 /* : nullable Bool */;
val* var553 /* : String */;
val* var555 /* : NativeArray[String] */;
static val* varonce554;
static val* varonce556;
val* var557 /* : String */;
char* var558 /* : CString */;
val* var559 /* : String */;
val* var560 /* : nullable Int */;
val* var561 /* : nullable Int */;
val* var562 /* : nullable Bool */;
val* var563 /* : nullable Bool */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : CString */;
val* var567 /* : String */;
val* var568 /* : nullable Int */;
val* var569 /* : nullable Int */;
val* var570 /* : nullable Bool */;
val* var571 /* : nullable Bool */;
static val* varonce572;
val* var573 /* : String */;
char* var574 /* : CString */;
val* var575 /* : String */;
val* var576 /* : nullable Int */;
val* var577 /* : nullable Int */;
val* var578 /* : nullable Bool */;
val* var579 /* : nullable Bool */;
val* var580 /* : String */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : CString */;
val* var584 /* : String */;
val* var585 /* : nullable Int */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Bool */;
val* var588 /* : nullable Bool */;
val* var_pkg /* var pkg: String */;
short int var589 /* : Bool */;
short int var590 /* : Bool */;
val* var592 /* : NativeArray[String] */;
static val* varonce591;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : CString */;
val* var596 /* : String */;
val* var597 /* : nullable Int */;
val* var598 /* : nullable Int */;
val* var599 /* : nullable Bool */;
val* var600 /* : nullable Bool */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : CString */;
val* var604 /* : String */;
val* var605 /* : nullable Int */;
val* var606 /* : nullable Int */;
val* var607 /* : nullable Bool */;
val* var608 /* : nullable Bool */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : CString */;
val* var612 /* : String */;
val* var613 /* : nullable Int */;
val* var614 /* : nullable Int */;
val* var615 /* : nullable Bool */;
val* var616 /* : nullable Bool */;
val* var617 /* : String */;
val* var618 /* : String */;
val* var620 /* : NativeArray[String] */;
static val* varonce619;
static val* varonce621;
val* var622 /* : String */;
char* var623 /* : CString */;
val* var624 /* : String */;
val* var625 /* : nullable Int */;
val* var626 /* : nullable Int */;
val* var627 /* : nullable Bool */;
val* var628 /* : nullable Bool */;
static val* varonce629;
val* var630 /* : String */;
char* var631 /* : CString */;
val* var632 /* : String */;
val* var633 /* : nullable Int */;
val* var634 /* : nullable Int */;
val* var635 /* : nullable Bool */;
val* var636 /* : nullable Bool */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : CString */;
val* var640 /* : String */;
val* var641 /* : nullable Int */;
val* var642 /* : nullable Int */;
val* var643 /* : nullable Bool */;
val* var644 /* : nullable Bool */;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : CString */;
val* var648 /* : String */;
val* var649 /* : nullable Int */;
val* var650 /* : nullable Int */;
val* var651 /* : nullable Bool */;
val* var652 /* : nullable Bool */;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : CString */;
val* var656 /* : String */;
val* var657 /* : nullable Int */;
val* var658 /* : nullable Int */;
val* var659 /* : nullable Bool */;
val* var660 /* : nullable Bool */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : CString */;
val* var664 /* : String */;
val* var665 /* : nullable Int */;
val* var666 /* : nullable Int */;
val* var667 /* : nullable Bool */;
val* var668 /* : nullable Bool */;
val* var669 /* : String */;
val* var670 /* : String */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : CString */;
val* var674 /* : String */;
val* var675 /* : nullable Int */;
val* var676 /* : nullable Int */;
val* var677 /* : nullable Bool */;
val* var678 /* : nullable Bool */;
val* var679 /* : String */;
val* var680 /* : String */;
val* var682 /* : NativeArray[String] */;
static val* varonce681;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : CString */;
val* var686 /* : String */;
val* var687 /* : nullable Int */;
val* var688 /* : nullable Int */;
val* var689 /* : nullable Bool */;
val* var690 /* : nullable Bool */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : CString */;
val* var694 /* : String */;
val* var695 /* : nullable Int */;
val* var696 /* : nullable Int */;
val* var697 /* : nullable Bool */;
val* var698 /* : nullable Bool */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : CString */;
val* var702 /* : String */;
val* var703 /* : nullable Int */;
val* var704 /* : nullable Int */;
val* var705 /* : nullable Bool */;
val* var706 /* : nullable Bool */;
val* var707 /* : String */;
val* var708 /* : String */;
short int var709 /* : Bool */;
short int var711 /* : Bool */;
short int var712 /* : Bool */;
val* var714 /* : NativeArray[String] */;
static val* varonce713;
static val* varonce715;
val* var716 /* : String */;
char* var717 /* : CString */;
val* var718 /* : String */;
val* var719 /* : nullable Int */;
val* var720 /* : nullable Int */;
val* var721 /* : nullable Bool */;
val* var722 /* : nullable Bool */;
static val* varonce723;
val* var724 /* : String */;
char* var725 /* : CString */;
val* var726 /* : String */;
val* var727 /* : nullable Int */;
val* var728 /* : nullable Int */;
val* var729 /* : nullable Bool */;
val* var730 /* : nullable Bool */;
val* var731 /* : String */;
val* var732 /* : String */;
val* var733 /* : ToolContext */;
val* var735 /* : ToolContext */;
val* var737 /* : NativeArray[String] */;
static val* varonce736;
static val* varonce738;
val* var739 /* : String */;
char* var740 /* : CString */;
val* var741 /* : String */;
val* var742 /* : nullable Int */;
val* var743 /* : nullable Int */;
val* var744 /* : nullable Bool */;
val* var745 /* : nullable Bool */;
val* var746 /* : String */;
val* var748 /* : NativeArray[String] */;
static val* varonce747;
static val* varonce749;
val* var750 /* : String */;
char* var751 /* : CString */;
val* var752 /* : String */;
val* var753 /* : nullable Int */;
val* var754 /* : nullable Int */;
val* var755 /* : nullable Bool */;
val* var756 /* : nullable Bool */;
val* var757 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mainmodule = var3;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$target_platform (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 563);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_platform = var9;
{
var12 = nitc___nitc__MakefileToolchain___outfile(self, var_mainmodule);
}
var_outname = var12;
{
var13 = core__file___String___relpath(var_compile_dir, var_outname);
}
var_real_outpath = var13;
{
var14 = core___core__Text___escape_to_mk(var_real_outpath);
}
var_outpath = var14;
{
{ /* Inline kernel$Object$!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var17 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var19 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mainmodule);
}
var_outpath = var19;
} else {
}
{
var20 = nitc___nitc__MakefileToolchain___makefile_name(self);
}
var_makename = var20;
if (unlikely(varonce==NULL)) {
var21 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "/";
var26 = (val*)(1l<<2|1);
var27 = (val*)(1l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var21)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var21)->values[2]=var_makename;
{
var30 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
var_makepath = var30;
var31 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var31, var_makepath); /* Direct call file$FileWriter$open on <var31:FileWriter>*/
}
var_makefile = var31;
var32 = NEW_core__HashSet(&type_core__HashSet__core__String);
{
core___core__HashSet___core__kernel__Object__init(var32); /* Direct call hash_collection$HashSet$init on <var32:HashSet[String]>*/
}
var_linker_options = var32;
{
{ /* Inline mmodule$MModule$in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var35 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = poset___poset__POSetElement___greaters(var33);
}
var_ = var36;
{
var37 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_38 = var37;
for(;;) {
{
var39 = ((short int(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_38); /* is_ok on <var_38:Iterator[MModule]>*/
}
if (var39){
} else {
goto BREAK_label;
}
{
var40 = ((val*(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_38); /* item on <var_38:Iterator[MModule]>*/
}
var_m = var40;
{
var41 = nitc__light___MModule___collect_linker_libs(var_m);
}
var_libs = var41;
if (var_libs == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_libs,((val*)NULL)) on <var_libs:nullable Array[String]> */
var_other = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_libs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_libs, var_other); /* == on <var_libs:nullable Array[String](Array[String])>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
{
core___core__SimpleCollection___add_all(var_linker_options, var_libs); /* Direct call abstract_collection$SimpleCollection$add_all on <var_linker_options:HashSet[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_38); /* next on <var_38:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_38); /* finish on <var_38:Iterator[MModule]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var49 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_debug (var47) on <var47:ToolContext> */
var52 = var47->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <var47:ToolContext> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline opts$Option$value (var50) on <var50:OptionBool> */
var55 = var50->attrs[COLOR_opts__Option___value].val; /* _value on <var50:OptionBool> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = (short int)((long)(var53)>>2);
var_debug = var56;
if (unlikely(varonce57==NULL)) {
var58 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "CC = ccache cc\nCXX = ccache c++\nCFLAGS = -g";
var63 = (val*)(43l<<2|1);
var64 = (val*)(43l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var58)->values[0]=var60;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "-Wno-unused-value -Wno-switch -Wno-attributes -Wno-trigraphs\nCINCL =\nLDFLAGS \?= \nLDLIBS  \?= -lm ";
var71 = (val*)(96l<<2|1);
var72 = (val*)(96l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var58)->values[2]=var68;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "\n\n";
var79 = (val*)(2l<<2|1);
var80 = (val*)(2l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var58)->values[4]=var76;
} else {
var58 = varonce57;
varonce57 = NULL;
}
var84 = !var_debug;
if (var84){
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " -O2 ";
var89 = (val*)(5l<<2|1);
var90 = (val*)(5l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
var83 = var86;
} else {
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = " ";
var97 = (val*)(1l<<2|1);
var98 = (val*)(1l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
var83 = var94;
}
((struct instance_core__NativeArray*)var58)->values[1]=var83;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = " ";
var105 = (val*)(1l<<2|1);
var106 = (val*)(1l<<2|1);
var107 = (val*)((long)(0)<<2|3);
var108 = (val*)((long)(0)<<2|3);
var104 = core__flat___CString___to_s_unsafe(var103, var105, var106, var107, var108);
var102 = var104;
varonce101 = var102;
}
{
var109 = core__abstract_text___Collection___join(var_linker_options, var102, ((val*)NULL));
}
((struct instance_core__NativeArray*)var58)->values[3]=var109;
{
var110 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var110); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "\n# SPECIAL CONFIGURATION FLAGS\n";
var115 = (val*)(31l<<2|1);
var116 = (val*)(31l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var112); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
var119 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var119){
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_stacktrace (var120) on <var120:ToolContext> */
var125 = var120->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <var120:ToolContext> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 66);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline opts$Option$value (var123) on <var123:OptionBool> */
var128 = var123->attrs[COLOR_opts__Option___value].val; /* _value on <var123:OptionBool> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
var129 = (short int)((long)(var126)>>2);
if (var129){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "NO_STACKTRACE=True";
var134 = (val*)(18l<<2|1);
var135 = (val*)(18l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var131); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
} else {
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "NO_STACKTRACE= # Set to `True` to enable";
var142 = (val*)(40l<<2|1);
var143 = (val*)(40l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var139); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
}
} else {
}
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "\n\n";
var150 = (val*)(2l<<2|1);
var151 = (val*)(2l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var147); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "uname_S := $(shell sh -c \'uname -s 2>/dev/null || echo not\')\n";
var158 = (val*)(61l<<2|1);
var159 = (val*)(61l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var155); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "clang_check := $(shell sh -c \'$(CC) -v 2>&1 | grep -q clang; echo $$?\')\nifeq ($(clang_check), 0)\n\tCFLAGS += -Qunused-arguments\nendif\n";
var166 = (val*)(133l<<2|1);
var167 = (val*)(133l<<2|1);
var168 = (val*)((long)(0)<<2|3);
var169 = (val*)((long)(0)<<2|3);
var165 = core__flat___CString___to_s_unsafe(var164, var166, var167, var168, var169);
var163 = var165;
varonce162 = var163;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var163); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
var170 = nitc___nitc__Platform___supports_libunwind(var_platform);
}
if (var170){
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "ifneq ($(NO_STACKTRACE), True)\n  # Check and include lib-unwind in a portable way\n  ifneq ($(uname_S),Darwin)\n    # already included on macosx, but need to get the correct flags in other supported platforms.\n    ifeq ($(shell pkg-config --exists \'libunwind\'; echo $$\?), 0)\n      LDLIBS += `pkg-config --libs libunwind`\n      CFLAGS += `pkg-config --cflags libunwind`\n    else\n      $(warning \"[_] stack-traces disabled. Please install libunwind-dev.\")\n      CFLAGS += -D NO_STACKTRACE\n    endif\n  endif\nelse\n  # Stacktraces disabled\n  CFLAGS += -D NO_STACKTRACE\nendif\n\n";
var175 = (val*)(569l<<2|1);
var176 = (val*)(569l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var172); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
} else {
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "CFLAGS += -D NO_STACKTRACE\n\n";
var183 = (val*)(28l<<2|1);
var184 = (val*)(28l<<2|1);
var185 = (val*)((long)(0)<<2|3);
var186 = (val*)((long)(0)<<2|3);
var182 = core__flat___CString___to_s_unsafe(var181, var183, var184, var185, var186);
var180 = var182;
varonce179 = var180;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var180); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
}
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "# Special configuration for Darwin\nifeq ($(uname_S),Darwin)\n\t# Remove POSIX flag -lrt\n\tLDLIBS := $(filter-out -lrt,$(LDLIBS))\nendif\n\n# Special configuration for Windows under mingw64\nifneq ($(findstring MINGW64,$(uname_S)),)\n\t# Use the pcreposix regex library\n\tLDLIBS += -lpcreposix\n\n\t# Remove POSIX flag -lrt\n\tLDLIBS := $(filter-out -lrt,$(LDLIBS))\n\n\t# Silence warnings when storing Int, Char and Bool as pointer address\n\tCFLAGS += -Wno-pointer-to-int-cast -Wno-int-to-pointer-cast\nendif\n\n";
var191 = (val*)(490l<<2|1);
var192 = (val*)(490l<<2|1);
var193 = (val*)((long)(0)<<2|3);
var194 = (val*)((long)(0)<<2|3);
var190 = core__flat___CString___to_s_unsafe(var189, var191, var192, var193, var194);
var188 = var190;
varonce187 = var188;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var188); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce195==NULL)) {
var196 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "all: ";
var201 = (val*)(5l<<2|1);
var202 = (val*)(5l<<2|1);
var203 = (val*)((long)(0)<<2|3);
var204 = (val*)((long)(0)<<2|3);
var200 = core__flat___CString___to_s_unsafe(var199, var201, var202, var203, var204);
var198 = var200;
varonce197 = var198;
}
((struct instance_core__NativeArray*)var196)->values[0]=var198;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "\n";
var209 = (val*)(1l<<2|1);
var210 = (val*)(1l<<2|1);
var211 = (val*)((long)(0)<<2|3);
var212 = (val*)((long)(0)<<2|3);
var208 = core__flat___CString___to_s_unsafe(var207, var209, var210, var211, var212);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var196)->values[2]=var206;
} else {
var196 = varonce195;
varonce195 = NULL;
}
((struct instance_core__NativeArray*)var196)->values[1]=var_outpath;
{
var213 = ((val*(*)(val* self))(var196->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var196); /* native_to_s on <var196:NativeArray[String]>*/
}
varonce195 = var196;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var213); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
{ /* Inline kernel$Object$!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var216 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var217 = !var216;
var214 = var217;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
if (var214){
if (unlikely(varonce218==NULL)) {
var219 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "\tcp -- ";
var224 = (val*)(7l<<2|1);
var225 = (val*)(7l<<2|1);
var226 = (val*)((long)(0)<<2|3);
var227 = (val*)((long)(0)<<2|3);
var223 = core__flat___CString___to_s_unsafe(var222, var224, var225, var226, var227);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var219)->values[0]=var221;
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = " ";
var232 = (val*)(1l<<2|1);
var233 = (val*)(1l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var219)->values[2]=var229;
} else {
var219 = varonce218;
varonce218 = NULL;
}
{
var236 = core___core__Text___escape_to_sh(var_outpath);
}
((struct instance_core__NativeArray*)var219)->values[1]=var236;
{
var237 = core___core__Text___escape_to_sh(var_real_outpath);
}
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "$";
var242 = (val*)(1l<<2|1);
var243 = (val*)(1l<<2|1);
var244 = (val*)((long)(0)<<2|3);
var245 = (val*)((long)(0)<<2|3);
var241 = core__flat___CString___to_s_unsafe(var240, var242, var243, var244, var245);
var239 = var241;
varonce238 = var239;
}
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = "$$";
var250 = (val*)(2l<<2|1);
var251 = (val*)(2l<<2|1);
var252 = (val*)((long)(0)<<2|3);
var253 = (val*)((long)(0)<<2|3);
var249 = core__flat___CString___to_s_unsafe(var248, var250, var251, var252, var253);
var247 = var249;
varonce246 = var247;
}
{
var254 = core__string_search___Text___replace(var237, var239, var247);
}
((struct instance_core__NativeArray*)var219)->values[3]=var254;
{
var255 = ((val*(*)(val* self))(var219->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var219); /* native_to_s on <var219:NativeArray[String]>*/
}
varonce218 = var219;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var255); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
} else {
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "\n";
var260 = (val*)(1l<<2|1);
var261 = (val*)(1l<<2|1);
var262 = (val*)((long)(0)<<2|3);
var263 = (val*)((long)(0)<<2|3);
var259 = core__flat___CString___to_s_unsafe(var258, var260, var261, var262, var263);
var257 = var259;
varonce256 = var257;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var257); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
var264 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var264); /* Direct call array$Array$init on <var264:Array[String]>*/
}
var_ofiles = var264;
var265 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var265); /* Direct call array$Array$init on <var265:Array[String]>*/
}
var_dep_rules = var265;
var_266 = var_cfiles;
{
var267 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_266);
}
var_268 = var267;
for(;;) {
{
var269 = ((short int(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_268); /* is_ok on <var_268:IndexedIterator[String]>*/
}
if (var269){
} else {
goto BREAK_label270;
}
{
var271 = ((val*(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_268); /* item on <var_268:IndexedIterator[String]>*/
}
var_f = var271;
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = ".c";
var276 = (val*)(2l<<2|1);
var277 = (val*)(2l<<2|1);
var278 = (val*)((long)(0)<<2|3);
var279 = (val*)((long)(0)<<2|3);
var275 = core__flat___CString___to_s_unsafe(var274, var276, var277, var278, var279);
var273 = var275;
varonce272 = var273;
}
{
var280 = core__file___String___strip_extension(var_f, var273);
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = ".o";
var285 = (val*)(2l<<2|1);
var286 = (val*)(2l<<2|1);
var287 = (val*)((long)(0)<<2|3);
var288 = (val*)((long)(0)<<2|3);
var284 = core__flat___CString___to_s_unsafe(var283, var285, var286, var287, var288);
var282 = var284;
varonce281 = var282;
}
{
var289 = ((val*(*)(val* self, val* p0))(var280->class->vft[COLOR_core__abstract_text__Text___43d]))(var280, var282); /* + on <var280:String>*/
}
var_o = var289;
if (unlikely(varonce290==NULL)) {
var291 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = ": ";
var296 = (val*)(2l<<2|1);
var297 = (val*)(2l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
((struct instance_core__NativeArray*)var291)->values[1]=var293;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "\n\t$(CC) $(CFLAGS) $(CINCL) -c -o ";
var304 = (val*)(33l<<2|1);
var305 = (val*)(33l<<2|1);
var306 = (val*)((long)(0)<<2|3);
var307 = (val*)((long)(0)<<2|3);
var303 = core__flat___CString___to_s_unsafe(var302, var304, var305, var306, var307);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var291)->values[3]=var301;
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = " ";
var312 = (val*)(1l<<2|1);
var313 = (val*)(1l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
((struct instance_core__NativeArray*)var291)->values[5]=var309;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "\n\n";
var320 = (val*)(2l<<2|1);
var321 = (val*)(2l<<2|1);
var322 = (val*)((long)(0)<<2|3);
var323 = (val*)((long)(0)<<2|3);
var319 = core__flat___CString___to_s_unsafe(var318, var320, var321, var322, var323);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var291)->values[7]=var317;
} else {
var291 = varonce290;
varonce290 = NULL;
}
((struct instance_core__NativeArray*)var291)->values[0]=var_o;
((struct instance_core__NativeArray*)var291)->values[2]=var_f;
((struct instance_core__NativeArray*)var291)->values[4]=var_o;
((struct instance_core__NativeArray*)var291)->values[6]=var_f;
{
var324 = ((val*(*)(val* self))(var291->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var291); /* native_to_s on <var291:NativeArray[String]>*/
}
varonce290 = var291;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var324); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var_o); /* Direct call array$Array$add on <var_ofiles:Array[String]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_dep_rules, var_o); /* Direct call array$Array$add on <var_dep_rules:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_268); /* next on <var_268:IndexedIterator[String]>*/
}
}
BREAK_label270: (void)0;
{
((void(*)(val* self))((((long)var_268&3)?class_info[((long)var_268&3)]:var_268->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_268); /* finish on <var_268:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var327 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var327 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$linker_script (var325) on <var325:AbstractCompiler> */
var330 = var325->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var325:AbstractCompiler> */
if (unlikely(var330 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 602);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
var331 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var328);
}
var332 = !var331;
if (var332){
if (unlikely(varonce333==NULL)) {
var334 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "/linker_script";
var339 = (val*)(14l<<2|1);
var340 = (val*)(14l<<2|1);
var341 = (val*)((long)(0)<<2|3);
var342 = (val*)((long)(0)<<2|3);
var338 = core__flat___CString___to_s_unsafe(var337, var339, var340, var341, var342);
var336 = var338;
varonce335 = var336;
}
((struct instance_core__NativeArray*)var334)->values[1]=var336;
} else {
var334 = varonce333;
varonce333 = NULL;
}
((struct instance_core__NativeArray*)var334)->values[0]=var_compile_dir;
{
var343 = ((val*(*)(val* self))(var334->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var334); /* native_to_s on <var334:NativeArray[String]>*/
}
varonce333 = var334;
var_linker_script_path = var343;
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "linker_script";
var348 = (val*)(13l<<2|1);
var349 = (val*)(13l<<2|1);
var350 = (val*)((long)(0)<<2|3);
var351 = (val*)((long)(0)<<2|3);
var347 = core__flat___CString___to_s_unsafe(var346, var348, var349, var350, var351);
var345 = var347;
varonce344 = var345;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var345); /* Direct call array$Array$add on <var_ofiles:Array[String]>*/
}
var352 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var352, var_linker_script_path); /* Direct call file$FileWriter$open on <var352:FileWriter>*/
}
var_f353 = var352;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var356 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var356 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$linker_script (var354) on <var354:AbstractCompiler> */
var359 = var354->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var354:AbstractCompiler> */
if (unlikely(var359 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 602);
fatal_exit(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
var_360 = var357;
{
var361 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_360);
}
var_362 = var361;
for(;;) {
{
var363 = ((short int(*)(val* self))((((long)var_362&3)?class_info[((long)var_362&3)]:var_362->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_362); /* is_ok on <var_362:IndexedIterator[String]>*/
}
if (var363){
} else {
goto BREAK_label364;
}
{
var365 = ((val*(*)(val* self))((((long)var_362&3)?class_info[((long)var_362&3)]:var_362->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_362); /* item on <var_362:IndexedIterator[String]>*/
}
var_l = var365;
{
core___core__FileWriter___core__stream__Writer__write(var_f353, var_l); /* Direct call file$FileWriter$write on <var_f353:FileWriter>*/
}
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "\n";
var370 = (val*)(1l<<2|1);
var371 = (val*)(1l<<2|1);
var372 = (val*)((long)(0)<<2|3);
var373 = (val*)((long)(0)<<2|3);
var369 = core__flat___CString___to_s_unsafe(var368, var370, var371, var372, var373);
var367 = var369;
varonce366 = var367;
}
{
core___core__FileWriter___core__stream__Writer__write(var_f353, var367); /* Direct call file$FileWriter$write on <var_f353:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_362&3)?class_info[((long)var_362&3)]:var_362->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_362); /* next on <var_362:IndexedIterator[String]>*/
}
}
BREAK_label364: (void)0;
{
((void(*)(val* self))((((long)var_362&3)?class_info[((long)var_362&3)]:var_362->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_362); /* finish on <var_362:IndexedIterator[String]>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_f353); /* Direct call file$FileWriter$close on <var_f353:FileWriter>*/
}
} else {
}
var374 = NEW_core__Array(&type_core__Array__nitc__ExternFile);
{
core___core__Array___core__kernel__Object__init(var374); /* Direct call array$Array$init on <var374:Array[ExternFile]>*/
}
var_java_files = var374;
var375 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var375); /* Direct call array$Array$init on <var375:Array[String]>*/
}
var_pkgconfigs = var375;
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var378 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var378 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var376) on <var376:AbstractCompiler> */
var381 = var376->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var376:AbstractCompiler> */
if (unlikely(var381 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var379 = var381;
RET_LABEL380:(void)0;
}
}
var_382 = var379;
{
var383 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_382);
}
var_384 = var383;
for(;;) {
{
var385 = ((short int(*)(val* self))((((long)var_384&3)?class_info[((long)var_384&3)]:var_384->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_384); /* is_ok on <var_384:IndexedIterator[ExternFile]>*/
}
if (var385){
} else {
goto BREAK_label386;
}
{
var387 = ((val*(*)(val* self))((((long)var_384&3)?class_info[((long)var_384&3)]:var_384->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_384); /* item on <var_384:IndexedIterator[ExternFile]>*/
}
var_f388 = var387;
{
{ /* Inline c_tools$ExternFile$pkgconfigs (var_f388) on <var_f388:ExternFile> */
var391 = var_f388->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f388:ExternFile> */
if (unlikely(var391 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_pkgconfigs, var389); /* Direct call array$Array$add_all on <var_pkgconfigs:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_384&3)?class_info[((long)var_384&3)]:var_384->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_384); /* next on <var_384:IndexedIterator[ExternFile]>*/
}
}
BREAK_label386: (void)0;
{
((void(*)(val* self))((((long)var_384&3)?class_info[((long)var_384&3)]:var_384->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_384); /* finish on <var_384:IndexedIterator[ExternFile]>*/
}
{
var392 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var393 = !var392;
if (var393){
if (likely(varonce394!=NULL)) {
var395 = varonce394;
} else {
var396 = "# does pkg-config exists?\nifneq ($(shell which pkg-config >/dev/null; echo $$\?), 0)\n$(error \"Command `pkg-config` not found. Please install it\")\nendif\n";
var398 = (val*)(151l<<2|1);
var399 = (val*)(151l<<2|1);
var400 = (val*)((long)(0)<<2|3);
var401 = (val*)((long)(0)<<2|3);
var397 = core__flat___CString___to_s_unsafe(var396, var398, var399, var400, var401);
var395 = var397;
varonce394 = var395;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var395); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
var_402 = var_pkgconfigs;
{
var403 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_402);
}
var_404 = var403;
for(;;) {
{
var405 = ((short int(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_404); /* is_ok on <var_404:IndexedIterator[String]>*/
}
if (var405){
} else {
goto BREAK_label406;
}
{
var407 = ((val*(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_404); /* item on <var_404:IndexedIterator[String]>*/
}
var_p = var407;
if (unlikely(varonce408==NULL)) {
var409 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = "# Check for library ";
var414 = (val*)(20l<<2|1);
var415 = (val*)(20l<<2|1);
var416 = (val*)((long)(0)<<2|3);
var417 = (val*)((long)(0)<<2|3);
var413 = core__flat___CString___to_s_unsafe(var412, var414, var415, var416, var417);
var411 = var413;
varonce410 = var411;
}
((struct instance_core__NativeArray*)var409)->values[0]=var411;
if (likely(varonce418!=NULL)) {
var419 = varonce418;
} else {
var420 = "\nifneq ($(shell pkg-config --exists \'";
var422 = (val*)(37l<<2|1);
var423 = (val*)(37l<<2|1);
var424 = (val*)((long)(0)<<2|3);
var425 = (val*)((long)(0)<<2|3);
var421 = core__flat___CString___to_s_unsafe(var420, var422, var423, var424, var425);
var419 = var421;
varonce418 = var419;
}
((struct instance_core__NativeArray*)var409)->values[2]=var419;
if (likely(varonce426!=NULL)) {
var427 = varonce426;
} else {
var428 = "\'; echo $$\?), 0)\n$(error \"pkg-config: package ";
var430 = (val*)(46l<<2|1);
var431 = (val*)(46l<<2|1);
var432 = (val*)((long)(0)<<2|3);
var433 = (val*)((long)(0)<<2|3);
var429 = core__flat___CString___to_s_unsafe(var428, var430, var431, var432, var433);
var427 = var429;
varonce426 = var427;
}
((struct instance_core__NativeArray*)var409)->values[4]=var427;
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = " is not found.\")\nendif\n";
var438 = (val*)(23l<<2|1);
var439 = (val*)(23l<<2|1);
var440 = (val*)((long)(0)<<2|3);
var441 = (val*)((long)(0)<<2|3);
var437 = core__flat___CString___to_s_unsafe(var436, var438, var439, var440, var441);
var435 = var437;
varonce434 = var435;
}
((struct instance_core__NativeArray*)var409)->values[6]=var435;
} else {
var409 = varonce408;
varonce408 = NULL;
}
((struct instance_core__NativeArray*)var409)->values[1]=var_p;
((struct instance_core__NativeArray*)var409)->values[3]=var_p;
((struct instance_core__NativeArray*)var409)->values[5]=var_p;
{
var442 = ((val*(*)(val* self))(var409->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var409); /* native_to_s on <var409:NativeArray[String]>*/
}
varonce408 = var409;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var442); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_404); /* next on <var_404:IndexedIterator[String]>*/
}
}
BREAK_label406: (void)0;
{
((void(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_404); /* finish on <var_404:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$Toolchain$compiler (self) on <self:MakefileToolchain> */
var445 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var445 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var443 = var445;
RET_LABEL444:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var443) on <var443:AbstractCompiler> */
var448 = var443->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var443:AbstractCompiler> */
if (unlikely(var448 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
var_449 = var446;
{
var450 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_449);
}
var_451 = var450;
for(;;) {
{
var452 = ((short int(*)(val* self))((((long)var_451&3)?class_info[((long)var_451&3)]:var_451->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_451); /* is_ok on <var_451:IndexedIterator[ExternFile]>*/
}
if (var452){
} else {
goto BREAK_label453;
}
{
var454 = ((val*(*)(val* self))((((long)var_451&3)?class_info[((long)var_451&3)]:var_451->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_451); /* item on <var_451:IndexedIterator[ExternFile]>*/
}
var_f455 = var454;
{
var456 = nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(var_f455);
}
var_o457 = var456;
{
{ /* Inline c_tools$ExternFile$filename (var_f455) on <var_f455:ExternFile> */
var460 = var_f455->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_f455:ExternFile> */
if (unlikely(var460 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var458 = var460;
RET_LABEL459:(void)0;
}
}
{
var461 = ((val*(*)(val* self, val* p0))(var458->class->vft[COLOR_core__file__String__basename]))(var458, ((val*)NULL)); /* basename on <var458:String>*/
}
var_ff = var461;
if (unlikely(varonce462==NULL)) {
var463 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce464!=NULL)) {
var465 = varonce464;
} else {
var466 = ": ";
var468 = (val*)(2l<<2|1);
var469 = (val*)(2l<<2|1);
var470 = (val*)((long)(0)<<2|3);
var471 = (val*)((long)(0)<<2|3);
var467 = core__flat___CString___to_s_unsafe(var466, var468, var469, var470, var471);
var465 = var467;
varonce464 = var465;
}
((struct instance_core__NativeArray*)var463)->values[1]=var465;
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "\n";
var476 = (val*)(1l<<2|1);
var477 = (val*)(1l<<2|1);
var478 = (val*)((long)(0)<<2|3);
var479 = (val*)((long)(0)<<2|3);
var475 = core__flat___CString___to_s_unsafe(var474, var476, var477, var478, var479);
var473 = var475;
varonce472 = var473;
}
((struct instance_core__NativeArray*)var463)->values[3]=var473;
} else {
var463 = varonce462;
varonce462 = NULL;
}
((struct instance_core__NativeArray*)var463)->values[0]=var_o457;
((struct instance_core__NativeArray*)var463)->values[2]=var_ff;
{
var480 = ((val*(*)(val* self))(var463->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var463); /* native_to_s on <var463:NativeArray[String]>*/
}
varonce462 = var463;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var480); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce481==NULL)) {
var482 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce483!=NULL)) {
var484 = varonce483;
} else {
var485 = "\t";
var487 = (val*)(1l<<2|1);
var488 = (val*)(1l<<2|1);
var489 = (val*)((long)(0)<<2|3);
var490 = (val*)((long)(0)<<2|3);
var486 = core__flat___CString___to_s_unsafe(var485, var487, var488, var489, var490);
var484 = var486;
varonce483 = var484;
}
((struct instance_core__NativeArray*)var482)->values[0]=var484;
if (likely(varonce491!=NULL)) {
var492 = varonce491;
} else {
var493 = "\n\n";
var495 = (val*)(2l<<2|1);
var496 = (val*)(2l<<2|1);
var497 = (val*)((long)(0)<<2|3);
var498 = (val*)((long)(0)<<2|3);
var494 = core__flat___CString___to_s_unsafe(var493, var495, var496, var497, var498);
var492 = var494;
varonce491 = var492;
}
((struct instance_core__NativeArray*)var482)->values[2]=var492;
} else {
var482 = varonce481;
varonce481 = NULL;
}
{
var499 = nitc___nitc__ExternCFile___ExternFile__makefile_rule_content(var_f455);
}
((struct instance_core__NativeArray*)var482)->values[1]=var499;
{
var500 = ((val*(*)(val* self))(var482->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var482); /* native_to_s on <var482:NativeArray[String]>*/
}
varonce481 = var482;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var500); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
var501 = nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(var_f455);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_dep_rules, var501); /* Direct call array$Array$add on <var_dep_rules:Array[String]>*/
}
{
var502 = nitc___nitc__ExternCFile___ExternFile__compiles_to_o_file(var_f455);
}
if (var502){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var_o457); /* Direct call array$Array$add on <var_ofiles:Array[String]>*/
}
} else {
}
{
var503 = nitc___nitc__ExternFile___add_to_jar(var_f455);
}
if (var503){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_java_files, var_f455); /* Direct call array$Array$add on <var_java_files:Array[ExternFile]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_451&3)?class_info[((long)var_451&3)]:var_451->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_451); /* next on <var_451:IndexedIterator[ExternFile]>*/
}
}
BREAK_label453: (void)0;
{
((void(*)(val* self))((((long)var_451&3)?class_info[((long)var_451&3)]:var_451->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_451); /* finish on <var_451:IndexedIterator[ExternFile]>*/
}
{
var504 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_java_files);
}
var505 = !var504;
if (var505){
if (unlikely(varonce506==NULL)) {
var507 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce508!=NULL)) {
var509 = varonce508;
} else {
var510 = ".jar";
var512 = (val*)(4l<<2|1);
var513 = (val*)(4l<<2|1);
var514 = (val*)((long)(0)<<2|3);
var515 = (val*)((long)(0)<<2|3);
var511 = core__flat___CString___to_s_unsafe(var510, var512, var513, var514, var515);
var509 = var511;
varonce508 = var509;
}
((struct instance_core__NativeArray*)var507)->values[1]=var509;
} else {
var507 = varonce506;
varonce506 = NULL;
}
((struct instance_core__NativeArray*)var507)->values[0]=var_outpath;
{
var516 = ((val*(*)(val* self))(var507->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var507); /* native_to_s on <var507:NativeArray[String]>*/
}
varonce506 = var507;
var_jar_file = var516;
var517 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var517); /* Direct call array$Array$init on <var517:Array[String]>*/
}
var_class_files_array = var517;
var_518 = var_java_files;
{
var519 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_518);
}
var_520 = var519;
for(;;) {
{
var521 = ((short int(*)(val* self))((((long)var_520&3)?class_info[((long)var_520&3)]:var_520->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_520); /* is_ok on <var_520:IndexedIterator[ExternFile]>*/
}
if (var521){
} else {
goto BREAK_label522;
}
{
var523 = ((val*(*)(val* self))((((long)var_520&3)?class_info[((long)var_520&3)]:var_520->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_520); /* item on <var_520:IndexedIterator[ExternFile]>*/
}
var_f524 = var523;
{
var525 = nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(var_f524);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_class_files_array, var525); /* Direct call array$Array$add on <var_class_files_array:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_520&3)?class_info[((long)var_520&3)]:var_520->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_520); /* next on <var_520:IndexedIterator[ExternFile]>*/
}
}
BREAK_label522: (void)0;
{
((void(*)(val* self))((((long)var_520&3)?class_info[((long)var_520&3)]:var_520->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_520); /* finish on <var_520:IndexedIterator[ExternFile]>*/
}
if (likely(varonce526!=NULL)) {
var527 = varonce526;
} else {
var528 = " ";
var530 = (val*)(1l<<2|1);
var531 = (val*)(1l<<2|1);
var532 = (val*)((long)(0)<<2|3);
var533 = (val*)((long)(0)<<2|3);
var529 = core__flat___CString___to_s_unsafe(var528, var530, var531, var532, var533);
var527 = var529;
varonce526 = var527;
}
{
var534 = core__abstract_text___Collection___join(var_class_files_array, var527, ((val*)NULL));
}
var_class_files = var534;
if (unlikely(varonce535==NULL)) {
var536 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce537!=NULL)) {
var538 = varonce537;
} else {
var539 = ": ";
var541 = (val*)(2l<<2|1);
var542 = (val*)(2l<<2|1);
var543 = (val*)((long)(0)<<2|3);
var544 = (val*)((long)(0)<<2|3);
var540 = core__flat___CString___to_s_unsafe(var539, var541, var542, var543, var544);
var538 = var540;
varonce537 = var538;
}
((struct instance_core__NativeArray*)var536)->values[1]=var538;
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = "\n";
var549 = (val*)(1l<<2|1);
var550 = (val*)(1l<<2|1);
var551 = (val*)((long)(0)<<2|3);
var552 = (val*)((long)(0)<<2|3);
var548 = core__flat___CString___to_s_unsafe(var547, var549, var550, var551, var552);
var546 = var548;
varonce545 = var546;
}
((struct instance_core__NativeArray*)var536)->values[3]=var546;
} else {
var536 = varonce535;
varonce535 = NULL;
}
((struct instance_core__NativeArray*)var536)->values[0]=var_jar_file;
((struct instance_core__NativeArray*)var536)->values[2]=var_class_files;
{
var553 = ((val*(*)(val* self))(var536->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var536); /* native_to_s on <var536:NativeArray[String]>*/
}
varonce535 = var536;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var553); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce554==NULL)) {
var555 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce556!=NULL)) {
var557 = varonce556;
} else {
var558 = "\tjar cf ";
var560 = (val*)(8l<<2|1);
var561 = (val*)(8l<<2|1);
var562 = (val*)((long)(0)<<2|3);
var563 = (val*)((long)(0)<<2|3);
var559 = core__flat___CString___to_s_unsafe(var558, var560, var561, var562, var563);
var557 = var559;
varonce556 = var557;
}
((struct instance_core__NativeArray*)var555)->values[0]=var557;
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = " ";
var568 = (val*)(1l<<2|1);
var569 = (val*)(1l<<2|1);
var570 = (val*)((long)(0)<<2|3);
var571 = (val*)((long)(0)<<2|3);
var567 = core__flat___CString___to_s_unsafe(var566, var568, var569, var570, var571);
var565 = var567;
varonce564 = var565;
}
((struct instance_core__NativeArray*)var555)->values[2]=var565;
if (likely(varonce572!=NULL)) {
var573 = varonce572;
} else {
var574 = "\n\n";
var576 = (val*)(2l<<2|1);
var577 = (val*)(2l<<2|1);
var578 = (val*)((long)(0)<<2|3);
var579 = (val*)((long)(0)<<2|3);
var575 = core__flat___CString___to_s_unsafe(var574, var576, var577, var578, var579);
var573 = var575;
varonce572 = var573;
}
((struct instance_core__NativeArray*)var555)->values[4]=var573;
} else {
var555 = varonce554;
varonce554 = NULL;
}
((struct instance_core__NativeArray*)var555)->values[1]=var_jar_file;
((struct instance_core__NativeArray*)var555)->values[3]=var_class_files;
{
var580 = ((val*(*)(val* self))(var555->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var555); /* native_to_s on <var555:NativeArray[String]>*/
}
varonce554 = var555;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var580); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_dep_rules, var_jar_file); /* Direct call array$Array$add on <var_dep_rules:Array[String]>*/
}
} else {
}
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = "";
var585 = (val*)(0l<<2|1);
var586 = (val*)(0l<<2|1);
var587 = (val*)((long)(0)<<2|3);
var588 = (val*)((long)(0)<<2|3);
var584 = core__flat___CString___to_s_unsafe(var583, var585, var586, var587, var588);
var582 = var584;
varonce581 = var582;
}
var_pkg = var582;
{
var589 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var590 = !var589;
if (var590){
if (unlikely(varonce591==NULL)) {
var592 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = "`pkg-config --libs ";
var597 = (val*)(19l<<2|1);
var598 = (val*)(19l<<2|1);
var599 = (val*)((long)(0)<<2|3);
var600 = (val*)((long)(0)<<2|3);
var596 = core__flat___CString___to_s_unsafe(var595, var597, var598, var599, var600);
var594 = var596;
varonce593 = var594;
}
((struct instance_core__NativeArray*)var592)->values[0]=var594;
if (likely(varonce601!=NULL)) {
var602 = varonce601;
} else {
var603 = "`";
var605 = (val*)(1l<<2|1);
var606 = (val*)(1l<<2|1);
var607 = (val*)((long)(0)<<2|3);
var608 = (val*)((long)(0)<<2|3);
var604 = core__flat___CString___to_s_unsafe(var603, var605, var606, var607, var608);
var602 = var604;
varonce601 = var602;
}
((struct instance_core__NativeArray*)var592)->values[2]=var602;
} else {
var592 = varonce591;
varonce591 = NULL;
}
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = " ";
var613 = (val*)(1l<<2|1);
var614 = (val*)(1l<<2|1);
var615 = (val*)((long)(0)<<2|3);
var616 = (val*)((long)(0)<<2|3);
var612 = core__flat___CString___to_s_unsafe(var611, var613, var614, var615, var616);
var610 = var612;
varonce609 = var610;
}
{
var617 = core__abstract_text___Collection___join(var_pkgconfigs, var610, ((val*)NULL));
}
((struct instance_core__NativeArray*)var592)->values[1]=var617;
{
var618 = ((val*(*)(val* self))(var592->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var592); /* native_to_s on <var592:NativeArray[String]>*/
}
varonce591 = var592;
var_pkg = var618;
} else {
}
if (unlikely(varonce619==NULL)) {
var620 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce621!=NULL)) {
var622 = varonce621;
} else {
var623 = ": ";
var625 = (val*)(2l<<2|1);
var626 = (val*)(2l<<2|1);
var627 = (val*)((long)(0)<<2|3);
var628 = (val*)((long)(0)<<2|3);
var624 = core__flat___CString___to_s_unsafe(var623, var625, var626, var627, var628);
var622 = var624;
varonce621 = var622;
}
((struct instance_core__NativeArray*)var620)->values[1]=var622;
if (likely(varonce629!=NULL)) {
var630 = varonce629;
} else {
var631 = "\n\t$(CC) $(LDFLAGS) -o ";
var633 = (val*)(22l<<2|1);
var634 = (val*)(22l<<2|1);
var635 = (val*)((long)(0)<<2|3);
var636 = (val*)((long)(0)<<2|3);
var632 = core__flat___CString___to_s_unsafe(var631, var633, var634, var635, var636);
var630 = var632;
varonce629 = var630;
}
((struct instance_core__NativeArray*)var620)->values[3]=var630;
if (likely(varonce637!=NULL)) {
var638 = varonce637;
} else {
var639 = " ";
var641 = (val*)(1l<<2|1);
var642 = (val*)(1l<<2|1);
var643 = (val*)((long)(0)<<2|3);
var644 = (val*)((long)(0)<<2|3);
var640 = core__flat___CString___to_s_unsafe(var639, var641, var642, var643, var644);
var638 = var640;
varonce637 = var638;
}
((struct instance_core__NativeArray*)var620)->values[5]=var638;
if (likely(varonce645!=NULL)) {
var646 = varonce645;
} else {
var647 = " $(LDLIBS) ";
var649 = (val*)(11l<<2|1);
var650 = (val*)(11l<<2|1);
var651 = (val*)((long)(0)<<2|3);
var652 = (val*)((long)(0)<<2|3);
var648 = core__flat___CString___to_s_unsafe(var647, var649, var650, var651, var652);
var646 = var648;
varonce645 = var646;
}
((struct instance_core__NativeArray*)var620)->values[7]=var646;
if (likely(varonce653!=NULL)) {
var654 = varonce653;
} else {
var655 = "\n\n";
var657 = (val*)(2l<<2|1);
var658 = (val*)(2l<<2|1);
var659 = (val*)((long)(0)<<2|3);
var660 = (val*)((long)(0)<<2|3);
var656 = core__flat___CString___to_s_unsafe(var655, var657, var658, var659, var660);
var654 = var656;
varonce653 = var654;
}
((struct instance_core__NativeArray*)var620)->values[9]=var654;
} else {
var620 = varonce619;
varonce619 = NULL;
}
((struct instance_core__NativeArray*)var620)->values[0]=var_outpath;
if (likely(varonce661!=NULL)) {
var662 = varonce661;
} else {
var663 = " ";
var665 = (val*)(1l<<2|1);
var666 = (val*)(1l<<2|1);
var667 = (val*)((long)(0)<<2|3);
var668 = (val*)((long)(0)<<2|3);
var664 = core__flat___CString___to_s_unsafe(var663, var665, var666, var667, var668);
var662 = var664;
varonce661 = var662;
}
{
var669 = core__abstract_text___Collection___join(var_dep_rules, var662, ((val*)NULL));
}
((struct instance_core__NativeArray*)var620)->values[2]=var669;
{
var670 = core___core__Text___escape_to_sh(var_outpath);
}
((struct instance_core__NativeArray*)var620)->values[4]=var670;
if (likely(varonce671!=NULL)) {
var672 = varonce671;
} else {
var673 = " ";
var675 = (val*)(1l<<2|1);
var676 = (val*)(1l<<2|1);
var677 = (val*)((long)(0)<<2|3);
var678 = (val*)((long)(0)<<2|3);
var674 = core__flat___CString___to_s_unsafe(var673, var675, var676, var677, var678);
var672 = var674;
varonce671 = var672;
}
{
var679 = core__abstract_text___Collection___join(var_ofiles, var672, ((val*)NULL));
}
((struct instance_core__NativeArray*)var620)->values[6]=var679;
((struct instance_core__NativeArray*)var620)->values[8]=var_pkg;
{
var680 = ((val*(*)(val* self))(var620->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var620); /* native_to_s on <var620:NativeArray[String]>*/
}
varonce619 = var620;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var680); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce681==NULL)) {
var682 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce683!=NULL)) {
var684 = varonce683;
} else {
var685 = "clean:\n\trm ";
var687 = (val*)(11l<<2|1);
var688 = (val*)(11l<<2|1);
var689 = (val*)((long)(0)<<2|3);
var690 = (val*)((long)(0)<<2|3);
var686 = core__flat___CString___to_s_unsafe(var685, var687, var688, var689, var690);
var684 = var686;
varonce683 = var684;
}
((struct instance_core__NativeArray*)var682)->values[0]=var684;
if (likely(varonce691!=NULL)) {
var692 = varonce691;
} else {
var693 = " 2>/dev/null\n";
var695 = (val*)(13l<<2|1);
var696 = (val*)(13l<<2|1);
var697 = (val*)((long)(0)<<2|3);
var698 = (val*)((long)(0)<<2|3);
var694 = core__flat___CString___to_s_unsafe(var693, var695, var696, var697, var698);
var692 = var694;
varonce691 = var692;
}
((struct instance_core__NativeArray*)var682)->values[2]=var692;
} else {
var682 = varonce681;
varonce681 = NULL;
}
if (likely(varonce699!=NULL)) {
var700 = varonce699;
} else {
var701 = " ";
var703 = (val*)(1l<<2|1);
var704 = (val*)(1l<<2|1);
var705 = (val*)((long)(0)<<2|3);
var706 = (val*)((long)(0)<<2|3);
var702 = core__flat___CString___to_s_unsafe(var701, var703, var704, var705, var706);
var700 = var702;
varonce699 = var700;
}
{
var707 = core__abstract_text___Collection___join(var_ofiles, var700, ((val*)NULL));
}
((struct instance_core__NativeArray*)var682)->values[1]=var707;
{
var708 = ((val*(*)(val* self))(var682->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var682); /* native_to_s on <var682:NativeArray[String]>*/
}
varonce681 = var682;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var708); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
{
{ /* Inline kernel$Object$!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var711 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var712 = !var711;
var709 = var712;
goto RET_LABEL710;
RET_LABEL710:(void)0;
}
}
if (var709){
if (unlikely(varonce713==NULL)) {
var714 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce715!=NULL)) {
var716 = varonce715;
} else {
var717 = "\trm -- ";
var719 = (val*)(7l<<2|1);
var720 = (val*)(7l<<2|1);
var721 = (val*)((long)(0)<<2|3);
var722 = (val*)((long)(0)<<2|3);
var718 = core__flat___CString___to_s_unsafe(var717, var719, var720, var721, var722);
var716 = var718;
varonce715 = var716;
}
((struct instance_core__NativeArray*)var714)->values[0]=var716;
if (likely(varonce723!=NULL)) {
var724 = varonce723;
} else {
var725 = " 2>/dev/null\n";
var727 = (val*)(13l<<2|1);
var728 = (val*)(13l<<2|1);
var729 = (val*)((long)(0)<<2|3);
var730 = (val*)((long)(0)<<2|3);
var726 = core__flat___CString___to_s_unsafe(var725, var727, var728, var729, var730);
var724 = var726;
varonce723 = var724;
}
((struct instance_core__NativeArray*)var714)->values[2]=var724;
} else {
var714 = varonce713;
varonce713 = NULL;
}
{
var731 = core___core__Text___escape_to_sh(var_outpath);
}
((struct instance_core__NativeArray*)var714)->values[1]=var731;
{
var732 = ((val*(*)(val* self))(var714->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var714); /* native_to_s on <var714:NativeArray[String]>*/
}
varonce713 = var714;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var732); /* Direct call file$FileWriter$write on <var_makefile:FileWriter>*/
}
} else {
}
{
core___core__FileWriter___core__stream__Stream__close(var_makefile); /* Direct call file$FileWriter$close on <var_makefile:FileWriter>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var735 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var735 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var733 = var735;
RET_LABEL734:(void)0;
}
}
if (unlikely(varonce736==NULL)) {
var737 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce738!=NULL)) {
var739 = varonce738;
} else {
var740 = "Generated makefile: ";
var742 = (val*)(20l<<2|1);
var743 = (val*)(20l<<2|1);
var744 = (val*)((long)(0)<<2|3);
var745 = (val*)((long)(0)<<2|3);
var741 = core__flat___CString___to_s_unsafe(var740, var742, var743, var744, var745);
var739 = var741;
varonce738 = var739;
}
((struct instance_core__NativeArray*)var737)->values[0]=var739;
} else {
var737 = varonce736;
varonce736 = NULL;
}
((struct instance_core__NativeArray*)var737)->values[1]=var_makepath;
{
var746 = ((val*(*)(val* self))(var737->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var737); /* native_to_s on <var737:NativeArray[String]>*/
}
varonce736 = var737;
{
nitc___nitc__ToolContext___info(var733, var746, 2l); /* Direct call toolcontext$ToolContext$info on <var733:ToolContext>*/
}
if (unlikely(varonce747==NULL)) {
var748 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce749!=NULL)) {
var750 = varonce749;
} else {
var751 = "/Makefile";
var753 = (val*)(9l<<2|1);
var754 = (val*)(9l<<2|1);
var755 = (val*)((long)(0)<<2|3);
var756 = (val*)((long)(0)<<2|3);
var752 = core__flat___CString___to_s_unsafe(var751, var753, var754, var755, var756);
var750 = var752;
varonce749 = var750;
}
((struct instance_core__NativeArray*)var748)->values[1]=var750;
} else {
var748 = varonce747;
varonce747 = NULL;
}
((struct instance_core__NativeArray*)var748)->values[0]=var_compile_dir;
{
var757 = ((val*(*)(val* self))(var748->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var748); /* native_to_s on <var748:NativeArray[String]>*/
}
varonce747 = var748;
{
core__file___String___file_copy_to(var_makepath, var757); /* Direct call file$String$file_copy_to on <var_makepath:String>*/
}
RET_LABEL:;
}
/* method abstract_compiler$MakefileToolchain$compile_c_code for (self: MakefileToolchain, String) */
void nitc___nitc__MakefileToolchain___compile_c_code(val* self, val* p0) {
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
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var45 /* : String */;
val* var_command /* var command: String */;
val* var46 /* : ToolContext */;
val* var48 /* : ToolContext */;
val* var49 /* : ToolContext */;
val* var51 /* : ToolContext */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var58 /* : Bool */;
val* var59 /* : Sys */;
val* var61 /* : Sys */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var72 /* : String */;
long var73 /* : Int */;
val* var74 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var75 /* : Sys */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : Sys */;
val* var81 /* : Sys */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : String */;
long var93 /* : Int */;
val* var94 /* : nullable Object */;
val* var95 /* : Sys */;
val* var97 /* : Sys */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
val* var108 /* : String */;
long var109 /* : Int */;
val* var110 /* : nullable Object */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
long var114 /* : Int */;
short int var115 /* : Bool */;
val* var116 /* : ToolContext */;
val* var118 /* : ToolContext */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Bool */;
val* var144 /* : nullable Bool */;
val* var145 /* : String */;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : Message */;
var_compile_dir = p0;
{
var = nitc___nitc__MakefileToolchain___makefile_name(self);
}
var_makename = var;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_make_flags (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts$Option$value (var4) on <var4:OptionString> */
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
var11 = ((short int(*)(val* self, val* p0))(var_makeflags->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_makeflags, ((val*)NULL)); /* == on <var_makeflags:nullable String>*/
var10 = var11;
}
if (var10){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "";
var15 = (val*)(0l<<2|1);
var16 = (val*)(0l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce = var12;
}
var_makeflags = var12;
} else {
}
if (unlikely(varonce19==NULL)) {
var20 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "make -B -C ";
var25 = (val*)(11l<<2|1);
var26 = (val*)(11l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " -f ";
var33 = (val*)(4l<<2|1);
var34 = (val*)(4l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var20)->values[2]=var30;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " -j 4 ";
var41 = (val*)(6l<<2|1);
var42 = (val*)(6l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var20)->values[4]=var38;
} else {
var20 = varonce19;
varonce19 = NULL;
}
((struct instance_core__NativeArray*)var20)->values[1]=var_compile_dir;
((struct instance_core__NativeArray*)var20)->values[3]=var_makename;
((struct instance_core__NativeArray*)var20)->values[5]=var_makeflags;
{
var45 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
var_command = var45;
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var48 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
nitc___nitc__ToolContext___info(var46, var_command, 2l); /* Direct call toolcontext$ToolContext$info on <var46:ToolContext>*/
}
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var51 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$verbose_level (var49) on <var49:ToolContext> */
var54 = var49->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var49:ToolContext> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var52,3l) on <var52:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var57 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var58 = var52 >= 3l;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline kernel$Object$sys (self) on <self:MakefileToolchain> */
var61 = glob_sys;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " 2>&1";
var68 = (val*)(5l<<2|1);
var69 = (val*)(5l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[1]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
((struct instance_core__NativeArray*)var63)->values[0]=var_command;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
var73 = core__exec___Sys___system(var59, var72);
}
var74 = (val*)(var73<<2|1);
var_res = var74;
} else {
var75 = glob_sys;
{
{ /* Inline kernel$Sys$is_windows (var75) on <var75:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var75;
var78 = core__kernel___Sys_is_windows___impl(var_for_c_0);
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
{
{ /* Inline kernel$Object$sys (self) on <self:MakefileToolchain> */
var81 = glob_sys;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (unlikely(varonce82==NULL)) {
var83 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = " 2>&1 >nul";
var88 = (val*)(10l<<2|1);
var89 = (val*)(10l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var83)->values[1]=var85;
} else {
var83 = varonce82;
varonce82 = NULL;
}
((struct instance_core__NativeArray*)var83)->values[0]=var_command;
{
var92 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
var93 = core__exec___Sys___system(var79, var92);
}
var94 = (val*)(var93<<2|1);
var_res = var94;
} else {
{
{ /* Inline kernel$Object$sys (self) on <self:MakefileToolchain> */
var97 = glob_sys;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = " 2>&1 >/dev/null";
var104 = (val*)(16l<<2|1);
var105 = (val*)(16l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[1]=var101;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[0]=var_command;
{
var108 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
var109 = core__exec___Sys___system(var95, var108);
}
var110 = (val*)(var109<<2|1);
var_res = var110;
}
}
{
{ /* Inline kernel$Int$!= (var_res,0l) on <var_res:nullable Object(Int)> */
var114 = (long)(var_res)>>2;
var113 = var114 == 0l;
var115 = !var113;
var111 = var115;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
if (var111){
{
{ /* Inline abstract_compiler$Toolchain$toolcontext (self) on <self:MakefileToolchain> */
var118 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var118 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "Compilation Error: `make` failed with error code: ";
var125 = (val*)(50l<<2|1);
var126 = (val*)(50l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[0]=var122;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = ". The command was `";
var133 = (val*)(19l<<2|1);
var134 = (val*)(19l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var120)->values[2]=var130;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "`.";
var141 = (val*)(2l<<2|1);
var142 = (val*)(2l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var120)->values[4]=var138;
} else {
var120 = varonce119;
varonce119 = NULL;
}
var146 = (long)(var_res)>>2;
var145 = core__flat___Int___core__abstract_text__Object__to_s(var146);
((struct instance_core__NativeArray*)var120)->values[1]=var145;
((struct instance_core__NativeArray*)var120)->values[3]=var_command;
{
var147 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
var148 = nitc___nitc__ToolContext___error(var116, ((val*)NULL), var147);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$names for (self: AbstractCompiler): HashMap[String, String] */
val* nitc___nitc__AbstractCompiler___names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 542);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$mainmodule for (self: AbstractCompiler): MModule */
val* nitc___nitc__AbstractCompiler___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$mainmodule= for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = p0; /* _mainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$realmainmodule for (self: AbstractCompiler): MModule */
val* nitc___nitc__AbstractCompiler___realmainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$realmainmodule= for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___realmainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val = p0; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$modelbuilder for (self: AbstractCompiler): ModelBuilder */
val* nitc___nitc__AbstractCompiler___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$modelbuilder= for (self: AbstractCompiler, ModelBuilder) */
void nitc___nitc__AbstractCompiler___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val = p0; /* _modelbuilder on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$toolchain for (self: AbstractCompiler): Toolchain */
val* nitc___nitc__AbstractCompiler___toolchain(val* self) {
val* var /* : Toolchain */;
val* var1 /* : Toolchain */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 555);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$toolchain= for (self: AbstractCompiler, Toolchain) */
void nitc___nitc__AbstractCompiler___toolchain_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val = p0; /* _toolchain on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$target_platform for (self: AbstractCompiler): Platform */
val* nitc___nitc__AbstractCompiler___target_platform(val* self) {
val* var /* : Platform */;
val* var1 /* : Platform */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 563);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$target_platform= for (self: AbstractCompiler, Platform) */
void nitc___nitc__AbstractCompiler___target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val = p0; /* _target_platform on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$init for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___core__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var4 /* : Platform */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : nullable Platform */;
val* var9 /* : Platform */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractCompiler___core__kernel__Object__init]))(self); /* init on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$realmainmodule= (self,var) on <self:AbstractCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val = var; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc__platform___MModule___target_platform(var5);
}
if (var8!=NULL) {
var4 = var8;
} else {
var9 = NEW_nitc__Platform(&type_nitc__Platform);
{
{ /* Inline kernel$Object$init (var9) on <var9:Platform> */
RET_LABEL10:(void)0;
}
}
var4 = var9;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$target_platform= (self,var4) on <self:AbstractCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val = var4; /* _target_platform on <self:AbstractCompiler> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$new_file for (self: AbstractCompiler, String): CodeFile */
val* nitc___nitc__AbstractCompiler___new_file(val* self, val* p0) {
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
val* var14 /* : Array[CodeFile] */;
val* var16 /* : Array[CodeFile] */;
short int var17 /* : Bool */;
val* var18 /* : CodeFile */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : String */;
val* var_f /* var f: CodeFile */;
val* var23 /* : Array[CodeFile] */;
val* var25 /* : Array[CodeFile] */;
val* var26 /* : Array[CodeFile] */;
val* var28 /* : Array[CodeFile] */;
val* var29 /* : nullable Object */;
val* var30 /* : CodeFile */;
val* var_f31 /* var f: CodeFile */;
val* var32 /* : Array[CodeFile] */;
val* var34 /* : Array[CodeFile] */;
var_name = p0;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_group_c_files (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 42);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts$Option$value (var7) on <var7:OptionBool> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionBool> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = (short int)((long)(var10)>>2);
if (var13){
{
{ /* Inline abstract_compiler$AbstractCompiler$files (self) on <self:AbstractCompiler> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var14);
}
if (var17){
var18 = NEW_nitc__CodeFile(&type_nitc__CodeFile);
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:AbstractCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var19);
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nitc__abstract_compiler__CodeFile__name_61d]))(var18, var22); /* name= on <var18:CodeFile>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:CodeFile>*/
}
var_f = var18;
{
{ /* Inline abstract_compiler$AbstractCompiler$files (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var23, var_f); /* Direct call array$Array$add on <var23:Array[CodeFile]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files (self) on <self:AbstractCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__SequenceRead___Collection__first(var26);
}
var = var29;
goto RET_LABEL;
} else {
}
var30 = NEW_nitc__CodeFile(&type_nitc__CodeFile);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitc__abstract_compiler__CodeFile__name_61d]))(var30, var_name); /* name= on <var30:CodeFile>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:CodeFile>*/
}
var_f31 = var30;
{
{ /* Inline abstract_compiler$AbstractCompiler$files (self) on <self:AbstractCompiler> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var32, var_f31); /* Direct call array$Array$add on <var32:Array[CodeFile]>*/
}
var = var_f31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$files for (self: AbstractCompiler): Array[CodeFile] */
val* nitc___nitc__AbstractCompiler___files(val* self) {
val* var /* : Array[CodeFile] */;
val* var1 /* : Array[CodeFile] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 592);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$header for (self: AbstractCompiler): CodeWriter */
val* nitc___nitc__AbstractCompiler___header(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$header= for (self: AbstractCompiler, CodeWriter) */
void nitc___nitc__AbstractCompiler___header_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val = p0; /* _header on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$linker_script for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___linker_script(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 602);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$provide_declaration for (self: AbstractCompiler, String, String) */
void nitc___nitc__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1) {
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
{ /* Inline abstract_compiler$AbstractCompiler$provided_declarations (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 615);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var, var_key);
}
if (var3){
{
{ /* Inline abstract_compiler$AbstractCompiler$provided_declarations (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 615);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var4, var_key);
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var_s); /* == on <var7:nullable Object(String)>*/
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 610);
fatal_exit(1);
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$provided_declarations (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 615);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var9, var_key, var_s); /* Direct call hash_collection$HashMap$[]= on <var9:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompiler$provided_declarations for (self: AbstractCompiler): HashMap[String, String] */
val* nitc___nitc__AbstractCompiler___provided_declarations(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 615);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$requirers_of_declarations for (self: AbstractCompiler): HashMap[String, ANode] */
val* nitc___nitc__AbstractCompiler___requirers_of_declarations(val* self) {
val* var /* : HashMap[String, ANode] */;
val* var1 /* : HashMap[String, ANode] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 617);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompiler$build_c_to_nit_bindings for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___build_c_to_nit_bindings(val* self) {
val* var /* : Toolchain */;
val* var2 /* : Toolchain */;
val* var3 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var4 /* : FileWriter */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : String */;
val* var_stream /* var stream: FileWriter */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
val* var97 /* : HashMap[String, String] */;
val* var99 /* : HashMap[String, String] */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : HashMap[String, String] */;
val* var105 /* : HashMap[String, String] */;
val* var106 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[String] */;
val* var107 /* : Iterator[nullable Object] */;
val* var_108 /* var : Iterator[String] */;
short int var109 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_i /* var i: String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Bool */;
val* var127 /* : nullable Bool */;
val* var128 /* : HashMap[String, String] */;
val* var130 /* : HashMap[String, String] */;
val* var131 /* : nullable Object */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Bool */;
val* var140 /* : nullable Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Bool */;
val* var156 /* : nullable Bool */;
val* var158 /* : NativeArray[String] */;
static val* varonce157;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : HashMap[String, String] */;
val* var177 /* : HashMap[String, String] */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Bool */;
val* var188 /* : nullable Bool */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Bool */;
val* var196 /* : nullable Bool */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Bool */;
val* var204 /* : nullable Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Bool */;
val* var212 /* : nullable Bool */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : CString */;
val* var216 /* : String */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Bool */;
val* var220 /* : nullable Bool */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : CString */;
val* var232 /* : String */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Int */;
val* var235 /* : nullable Bool */;
val* var236 /* : nullable Bool */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Int */;
val* var243 /* : nullable Bool */;
val* var244 /* : nullable Bool */;
val* var245 /* : FileWriter */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Bool */;
val* var255 /* : nullable Bool */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : CString */;
val* var260 /* : String */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Int */;
val* var263 /* : nullable Bool */;
val* var264 /* : nullable Bool */;
val* var265 /* : Array[ExternFile] */;
val* var267 /* : Array[ExternFile] */;
val* var268 /* : ExternCFile */;
val* var270 /* : NativeArray[String] */;
static val* varonce269;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : CString */;
val* var274 /* : String */;
val* var275 /* : nullable Int */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Bool */;
val* var278 /* : nullable Bool */;
val* var279 /* : String */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : CString */;
val* var283 /* : String */;
val* var284 /* : nullable Int */;
val* var285 /* : nullable Int */;
val* var286 /* : nullable Bool */;
val* var287 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$toolchain (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 555);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__Toolchain___compile_dir(var);
}
var_compile_dir = var3;
var4 = NEW_core__FileWriter(&type_core__FileWriter);
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/c_functions_hash.c";
var10 = (val*)(19l<<2|1);
var11 = (val*)(19l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var5)->values[0]=var_compile_dir;
{
var14 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
core___core__FileWriter___open(var4, var14); /* Direct call file$FileWriter$open on <var4:FileWriter>*/
}
var_stream = var4;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "#include <string.h>\n";
var19 = (val*)(20l<<2|1);
var20 = (val*)(20l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var16); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#include <stdlib.h>\n";
var27 = (val*)(20l<<2|1);
var28 = (val*)(20l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var24); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "#include \"c_functions_hash.h\"\n";
var35 = (val*)(30l<<2|1);
var36 = (val*)(30l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var32); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var43 = (val*)(68l<<2|1);
var44 = (val*)(68l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var40); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "const char* get_nit_name(register const char* procproc, register unsigned int len){\n";
var51 = (val*)(84l<<2|1);
var52 = (val*)(84l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var48); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "char* procname = malloc(len+1);";
var59 = (val*)(31l<<2|1);
var60 = (val*)(31l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var56); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "memcpy(procname, procproc, len);";
var67 = (val*)(32l<<2|1);
var68 = (val*)(32l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var64); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "procname[len] = \'\\0\';";
var75 = (val*)(21l<<2|1);
var76 = (val*)(21l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var72); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "static const C_Nit_Names map[";
var85 = (val*)(29l<<2|1);
var86 = (val*)(29l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "] = {\n";
var93 = (val*)(6l<<2|1);
var94 = (val*)(6l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var80)->values[2]=var90;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$names (self) on <self:AbstractCompiler> */
var99 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 542);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = core___core__HashMap___core__abstract_collection__MapRead__length(var97);
}
var101 = core__flat___Int___core__abstract_text__Object__to_s(var100);
((struct instance_core__NativeArray*)var80)->values[1]=var101;
{
var102 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var102); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$names (self) on <self:AbstractCompiler> */
var105 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var105 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 542);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = core___core__HashMap___core__abstract_collection__MapRead__keys(var103);
}
var_ = var106;
{
var107 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[String]>*/
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:Iterator[String]>*/
}
if (var109){
} else {
goto BREAK_label;
}
{
var110 = ((val*(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:Iterator[String]>*/
}
var_i = var110;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "{\"";
var115 = (val*)(2l<<2|1);
var116 = (val*)(2l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var112); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
var119 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_i); /* escape_to_c on <var_i:String>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var119); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "\",\"";
var124 = (val*)(3l<<2|1);
var125 = (val*)(3l<<2|1);
var126 = (val*)((long)(0)<<2|3);
var127 = (val*)((long)(0)<<2|3);
var123 = core__flat___CString___to_s_unsafe(var122, var124, var125, var126, var127);
var121 = var123;
varonce120 = var121;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var121); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$names (self) on <self:AbstractCompiler> */
var130 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var130 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 542);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var128, var_i);
}
{
var132 = ((val*(*)(val* self))(var131->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var131); /* escape_to_c on <var131:nullable Object(String)>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var132); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "\"},\n";
var137 = (val*)(4l<<2|1);
var138 = (val*)(4l<<2|1);
var139 = (val*)((long)(0)<<2|3);
var140 = (val*)((long)(0)<<2|3);
var136 = core__flat___CString___to_s_unsafe(var135, var137, var138, var139, var140);
var134 = var136;
varonce133 = var134;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var134); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:Iterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:Iterator[String]>*/
}
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "};\n";
var145 = (val*)(3l<<2|1);
var146 = (val*)(3l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var142); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "int i;";
var153 = (val*)(6l<<2|1);
var154 = (val*)(6l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var150); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (unlikely(varonce157==NULL)) {
var158 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "for(i = 0; i < ";
var163 = (val*)(15l<<2|1);
var164 = (val*)(15l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var158)->values[0]=var160;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "; i++){";
var171 = (val*)(7l<<2|1);
var172 = (val*)(7l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var158)->values[2]=var168;
} else {
var158 = varonce157;
varonce157 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$names (self) on <self:AbstractCompiler> */
var177 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 542);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = core___core__HashMap___core__abstract_collection__MapRead__length(var175);
}
var179 = core__flat___Int___core__abstract_text__Object__to_s(var178);
((struct instance_core__NativeArray*)var158)->values[1]=var179;
{
var180 = ((val*(*)(val* self))(var158->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var158); /* native_to_s on <var158:NativeArray[String]>*/
}
varonce157 = var158;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var180); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "if(strcmp(procname,map[i].name) == 0){";
var185 = (val*)(38l<<2|1);
var186 = (val*)(38l<<2|1);
var187 = (val*)((long)(0)<<2|3);
var188 = (val*)((long)(0)<<2|3);
var184 = core__flat___CString___to_s_unsafe(var183, var185, var186, var187, var188);
var182 = var184;
varonce181 = var182;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var182); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "free(procname);";
var193 = (val*)(15l<<2|1);
var194 = (val*)(15l<<2|1);
var195 = (val*)((long)(0)<<2|3);
var196 = (val*)((long)(0)<<2|3);
var192 = core__flat___CString___to_s_unsafe(var191, var193, var194, var195, var196);
var190 = var192;
varonce189 = var190;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var190); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "return map[i].nit_name;";
var201 = (val*)(23l<<2|1);
var202 = (val*)(23l<<2|1);
var203 = (val*)((long)(0)<<2|3);
var204 = (val*)((long)(0)<<2|3);
var200 = core__flat___CString___to_s_unsafe(var199, var201, var202, var203, var204);
var198 = var200;
varonce197 = var198;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var198); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "}";
var209 = (val*)(1l<<2|1);
var210 = (val*)(1l<<2|1);
var211 = (val*)((long)(0)<<2|3);
var212 = (val*)((long)(0)<<2|3);
var208 = core__flat___CString___to_s_unsafe(var207, var209, var210, var211, var212);
var206 = var208;
varonce205 = var206;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var206); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "}";
var217 = (val*)(1l<<2|1);
var218 = (val*)(1l<<2|1);
var219 = (val*)((long)(0)<<2|3);
var220 = (val*)((long)(0)<<2|3);
var216 = core__flat___CString___to_s_unsafe(var215, var217, var218, var219, var220);
var214 = var216;
varonce213 = var214;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var214); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "free(procname);";
var225 = (val*)(15l<<2|1);
var226 = (val*)(15l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var222); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "return NULL;";
var233 = (val*)(12l<<2|1);
var234 = (val*)(12l<<2|1);
var235 = (val*)((long)(0)<<2|3);
var236 = (val*)((long)(0)<<2|3);
var232 = core__flat___CString___to_s_unsafe(var231, var233, var234, var235, var236);
var230 = var232;
varonce229 = var230;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var230); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "}\n";
var241 = (val*)(2l<<2|1);
var242 = (val*)(2l<<2|1);
var243 = (val*)((long)(0)<<2|3);
var244 = (val*)((long)(0)<<2|3);
var240 = core__flat___CString___to_s_unsafe(var239, var241, var242, var243, var244);
var238 = var240;
varonce237 = var238;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var238); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file$FileWriter$close on <var_stream:FileWriter>*/
}
var245 = NEW_core__FileWriter(&type_core__FileWriter);
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "/c_functions_hash.h";
var252 = (val*)(19l<<2|1);
var253 = (val*)(19l<<2|1);
var254 = (val*)((long)(0)<<2|3);
var255 = (val*)((long)(0)<<2|3);
var251 = core__flat___CString___to_s_unsafe(var250, var252, var253, var254, var255);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[1]=var249;
} else {
var247 = varonce246;
varonce246 = NULL;
}
((struct instance_core__NativeArray*)var247)->values[0]=var_compile_dir;
{
var256 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
core___core__FileWriter___open(var245, var256); /* Direct call file$FileWriter$open on <var245:FileWriter>*/
}
var_stream = var245;
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "const char* get_nit_name(register const char* procname, register unsigned int len);\n";
var261 = (val*)(84l<<2|1);
var262 = (val*)(84l<<2|1);
var263 = (val*)((long)(0)<<2|3);
var264 = (val*)((long)(0)<<2|3);
var260 = core__flat___CString___to_s_unsafe(var259, var261, var262, var263, var264);
var258 = var260;
varonce257 = var258;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var258); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file$FileWriter$close on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (self) on <self:AbstractCompiler> */
var267 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var267 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
var268 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
if (unlikely(varonce269==NULL)) {
var270 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "/c_functions_hash.c";
var275 = (val*)(19l<<2|1);
var276 = (val*)(19l<<2|1);
var277 = (val*)((long)(0)<<2|3);
var278 = (val*)((long)(0)<<2|3);
var274 = core__flat___CString___to_s_unsafe(var273, var275, var276, var277, var278);
var272 = var274;
varonce271 = var272;
}
((struct instance_core__NativeArray*)var270)->values[1]=var272;
} else {
var270 = varonce269;
varonce269 = NULL;
}
((struct instance_core__NativeArray*)var270)->values[0]=var_compile_dir;
{
var279 = ((val*(*)(val* self))(var270->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var270); /* native_to_s on <var270:NativeArray[String]>*/
}
varonce269 = var270;
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "";
var284 = (val*)(0l<<2|1);
var285 = (val*)(0l<<2|1);
var286 = (val*)((long)(0)<<2|3);
var287 = (val*)((long)(0)<<2|3);
var283 = core__flat___CString___to_s_unsafe(var282, var284, var285, var286, var287);
var281 = var283;
varonce280 = var281;
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var268, var279); /* filename= on <var268:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var268->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var268, var281); /* cflags= on <var268:ExternCFile>*/
}
{
((void(*)(val* self))(var268->class->vft[COLOR_core__kernel__Object__init]))(var268); /* init on <var268:ExternCFile>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var265, var268); /* Direct call array$Array$add on <var265:Array[ExternFile]>*/
}
RET_LABEL:;
}
