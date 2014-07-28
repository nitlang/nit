#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_output for (self: Object): OptionString */
val* VIRTUAL_abstract_compiler__ToolContext__opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 28);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_dir for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 30);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_dir for (self: Object): OptionString */
val* VIRTUAL_abstract_compiler__ToolContext__opt_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 30);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_cc for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_cc(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 32);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_cc for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_cc(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 32);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_main for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_main(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_main for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_main(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_cc_path for (self: ToolContext): OptionArray */
val* abstract_compiler__ToolContext__opt_cc_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_cc_path].val; /* _opt_cc_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_cc_path");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 36);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_cc_path for (self: Object): OptionArray */
val* VIRTUAL_abstract_compiler__ToolContext__opt_cc_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
{ /* Inline abstract_compiler#ToolContext#opt_cc_path (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_cc_path].val; /* _opt_cc_path on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_cc_path");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_make_flags for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_make_flags(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 38);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_make_flags for (self: Object): OptionString */
val* VIRTUAL_abstract_compiler__ToolContext__opt_make_flags(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 38);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_compile_dir for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_compile_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_compile_dir for (self: Object): OptionString */
val* VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_hardening for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_hardening(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 42);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_hardening for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_hardening(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_hardening (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 42);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_shortcut_range for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 44);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_shortcut_range for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_shortcut_range (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 44);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_covariance(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 46);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_attr_isset for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_attr_isset(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_attr_isset for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_attr_isset(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 48);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_assert(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 50);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 50);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_autocast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 52);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 52);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_other for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_other(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_other].val; /* _opt_no_check_other on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_other");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 54);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_other for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_other (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_other].val; /* _opt_no_check_other on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_other");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 54);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_typing_test_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_invocation_metrics for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_invocation_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_invocation_metrics for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_invocation_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_isset_checks_metrics for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_isset_checks_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_isset_checks_metrics for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_isset_checks_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_stacktrace for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_stacktrace(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_stacktrace for (self: Object): OptionString */
val* VIRTUAL_abstract_compiler__ToolContext__opt_stacktrace(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_gcc_directive for (self: ToolContext): OptionArray */
val* abstract_compiler__ToolContext__opt_no_gcc_directive(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 64);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_gcc_directive for (self: Object): OptionArray */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_gcc_directive(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 64);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_release for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_release(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 66);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_release for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_release(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_release (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 66);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#init for (self: ToolContext) */
void abstract_compiler__ToolContext__init(val* self) {
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
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : Array[Option] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Option] */;
val* var30 /* : OptionContext */;
val* var32 /* : OptionContext */;
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
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
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
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 28);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 30);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 32);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 34);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 38);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 40);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 42);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_shortcut_range (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 44);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var27 = array_instance Array[Option] */
var28 = 8;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var9;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var12;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var15;
((struct instance_array__NativeArray*)var29)->values[5] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[6] = (val*) var21;
((struct instance_array__NativeArray*)var29)->values[7] = (val*) var24;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var27); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 46);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 48);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 50);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 52);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_other (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_other].val; /* _opt_no_check_other on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_other");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 54);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var48 = array_instance Array[Option] */
var49 = 5;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var36;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var39;
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var42;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var45;
{
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var30, var48); /* Direct call opts#OptionContext#add_option on <var30:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var53 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (self) on <self:ToolContext> */
var56 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (self) on <self:ToolContext> */
var59 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (self) on <self:ToolContext> */
var62 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var63 = array_instance Array[Option] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var60;
{
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var51, var63); /* Direct call opts#OptionContext#add_option on <var51:OptionContext>*/
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
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var71 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
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
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var77 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (self) on <self:ToolContext> */
var80 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 64);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var81 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var81 = array_instance Array[Option] */
var82 = 1;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var78;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var75, var81); /* Direct call opts#OptionContext#add_option on <var75:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var86 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (self) on <self:ToolContext> */
var89 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 66);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var90 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var90 = array_instance Array[Option] */
var91 = 1;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var87;
{
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var84, var90); /* Direct call opts#OptionContext#add_option on <var84:OptionContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#init for (self: Object) */
void VIRTUAL_abstract_compiler__ToolContext__init(val* self) {
abstract_compiler__ToolContext__init(self); /* Direct call abstract_compiler#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void abstract_compiler__ToolContext__process_options(val* self, val* p0) {
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
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
val* var82 /* : OptionString */;
val* var84 /* : OptionString */;
val* var85 /* : nullable Object */;
val* var87 /* : nullable Object */;
val* var88 /* : null */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
long var100 /* : Int */;
var_args = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
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
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (var_st == NULL) {
var12 = 0; /* <var8:String> cannot be null */
} else {
var13 = string__FlatString___61d_61d(var_st, var8);
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
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (var_st == NULL) {
var19 = 0; /* <var15:String> cannot be null */
} else {
var20 = string__FlatString___61d_61d(var_st, var15);
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
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (var_st == NULL) {
var27 = 0; /* <var23:String> cannot be null */
} else {
var28 = string__FlatString___61d_61d(var_st, var23);
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
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (var_st == NULL) {
var35 = 0; /* <var31:String> cannot be null */
} else {
var36 = string__FlatString___61d_61d(var_st, var31);
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
var40 = string__FlatString___61d_61d(var_st, var38);
var39 = var40;
}
var29 = var39;
}
if (var29){
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
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
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
{ /* Inline opts#Option#value= (var41,var45) on <var41:OptionString> */
/* Covariant cast for argument 0 (value) <var45:String> isa VALUE */
/* <var45:String> isa VALUE */
type_struct = var41->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "` for --stacktrace. Use `none`, `libunwind`, `nitstack` or `auto`.";
var59 = 66;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var_st;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
file__Object__print(self, var64); /* Direct call file#Object#print on <self:ToolContext>*/
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
var70 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 28);
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
var79 = ((short int (*)(val*, val*))(var71->class->vft[COLOR_kernel__Object___61d_61d]))(var71, var_other) /* == on <var71:nullable String(String)>*/;
var78 = var79;
}
var80 = !var78;
var76 = var80;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
var_81 = var75;
if (var75){
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 30);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline opts#Option#value (var82) on <var82:OptionString> */
var87 = var82->attrs[COLOR_opts__Option___value].val; /* _value on <var82:OptionString> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var88 = NULL;
if (var85 == NULL) {
var89 = 0; /* is null */
} else {
var89 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var85,var88) on <var85:nullable Object(nullable String)> */
var_other = var88;
{
var93 = ((short int (*)(val*, val*))(var85->class->vft[COLOR_kernel__Object___61d_61d]))(var85, var_other) /* == on <var85:nullable String(String)>*/;
var92 = var93;
}
var94 = !var92;
var90 = var94;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
var67 = var89;
} else {
var67 = var_81;
}
if (var67){
if (varonce95) {
var96 = varonce95;
} else {
var97 = "Error: cannot use both --dir and --output";
var98 = 41;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
file__Object__print(self, var96); /* Direct call file#Object#print on <self:ToolContext>*/
}
var100 = 1;
{
{ /* Inline kernel#Object#exit (self,var100) on <self:ToolContext> */
exit(var100);
RET_LABEL101:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#process_options for (self: Object, Sequence[String]) */
void VIRTUAL_abstract_compiler__ToolContext__process_options(val* self, val* p0) {
abstract_compiler__ToolContext__process_options(self, p0); /* Direct call abstract_compiler#ToolContext#process_options on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#compile_dir for (self: ModelBuilder): String */
val* abstract_compiler__ModelBuilder__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val; /* _compile_dir on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 103);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ModelBuilder#compile_dir for (self: Object): String */
val* VIRTUAL_abstract_compiler__ModelBuilder__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline abstract_compiler#ModelBuilder#compile_dir (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val; /* _compile_dir on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 103);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ModelBuilder#compile_dir= for (self: ModelBuilder, String) */
void abstract_compiler__ModelBuilder__compile_dir_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val = p0; /* _compile_dir on <self:ModelBuilder> */
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#compile_dir= for (self: Object, String) */
void VIRTUAL_abstract_compiler__ModelBuilder__compile_dir_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#ModelBuilder#compile_dir= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val = p0; /* _compile_dir on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: ModelBuilder, AbstractCompiler) */
void abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MakefileToolchain */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
val* var_toolchain /* var toolchain: nullable Object */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : Toolchain */;
val* var16 /* : String */;
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = platform__MModule__target_platform(var);
}
var_platform = var3;
var4 = NULL;
if (var_platform == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___61d_61d]))(var_platform, var4) /* == on <var_platform:nullable Platform>*/;
var5 = var6;
}
if (var5){
var7 = NEW_abstract_compiler__MakefileToolchain(&type_abstract_compiler__MakefileToolchain);
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var10 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
{ /* Inline abstract_compiler#Toolchain#init (var7,var8) on <var7:MakefileToolchain> */
var7->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val = var8; /* _toolcontext on <var7:MakefileToolchain> */
RET_LABEL11:(void)0;
}
}
var_toolchain = var7;
} else {
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
{
var15 = ((val* (*)(val*, val*))(var_platform->class->vft[COLOR_abstract_compiler__Platform__toolchain]))(var_platform, var12) /* toolchain on <var_platform:nullable Platform(Platform)>*/;
}
var_toolchain = var15;
}
{
var16 = abstract_compiler__Toolchain__compile_dir(var_toolchain);
}
{
{ /* Inline abstract_compiler#ModelBuilder#compile_dir= (self,var16) on <self:ModelBuilder> */
self->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val = var16; /* _compile_dir on <self:ModelBuilder> */
RET_LABEL17:(void)0;
}
}
{
abstract_compiler__MakefileToolchain__write_and_make(var_toolchain, var_compiler); /* Direct call abstract_compiler#MakefileToolchain#write_and_make on <var_toolchain:nullable Object(Toolchain)>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
abstract_compiler__ModelBuilder__write_and_make(self, p0); /* Direct call abstract_compiler#ModelBuilder#write_and_make on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method abstract_compiler#Platform#toolchain for (self: Platform, ToolContext): Toolchain */
val* abstract_compiler__Platform__toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "toolchain", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 122);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#Platform#toolchain for (self: Object, ToolContext): Toolchain */
val* VIRTUAL_abstract_compiler__Platform__toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
val* var1 /* : Toolchain */;
const char* var_class_name;
{ /* Inline abstract_compiler#Platform#toolchain (self,p0) on <self:Object(Platform)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "toolchain", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 122);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext for (self: Toolchain): ToolContext */
val* abstract_compiler__Toolchain__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_abstract_compiler__Toolchain__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:Object(Toolchain)> */
var3 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Object(Toolchain)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#compile_dir for (self: Toolchain): String */
val* abstract_compiler__Toolchain__compile_dir(val* self) {
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
var3 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 40);
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
var12 = string__FlatString___61d_61d(var_compile_dir, var10);
var11 = var12;
}
if (var11){
if (varonce) {
var13 = varonce;
} else {
var14 = ".nit_compile";
var15 = 12;
var16 = string__NativeString__to_s_with_length(var14, var15);
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
/* method abstract_compiler#Toolchain#compile_dir for (self: Object): String */
val* VIRTUAL_abstract_compiler__Toolchain__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__Toolchain__compile_dir(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#init for (self: Toolchain, ToolContext) */
void abstract_compiler__Toolchain__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#init for (self: Object, ToolContext) */
void VIRTUAL_abstract_compiler__Toolchain__init(val* self, val* p0) {
{ /* Inline abstract_compiler#Toolchain#init (self,p0) on <self:Object(Toolchain)> */
self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Object(Toolchain)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#cc_paths for (self: MakefileToolchain): Array[String] */
val* abstract_compiler__MakefileToolchain__cc_paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#cc_paths for (self: Object): Array[String] */
val* VIRTUAL_abstract_compiler__MakefileToolchain__cc_paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:Object(MakefileToolchain)> */
var3 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:Object(MakefileToolchain)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#gather_cc_paths for (self: MakefileToolchain) */
void abstract_compiler__MakefileToolchain__gather_cc_paths(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : nullable String */;
val* var5 /* : nullable String */;
val* var_path_env /* var path_env: nullable String */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
val* var_libname /* var libname: String */;
short int var21 /* : Bool */;
val* var22 /* : Array[String] */;
val* var24 /* : Array[String] */;
val* var25 /* : Array[String] */;
val* var27 /* : Array[String] */;
short int var28 /* : Bool */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var32 /* : null */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[String] */;
val* var40 /* : Array[String] */;
val* var41 /* : ToolContext */;
val* var43 /* : ToolContext */;
val* var44 /* : OptionArray */;
val* var46 /* : OptionArray */;
val* var47 /* : nullable Object */;
val* var49 /* : nullable Object */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : Array[String] */;
val* var60 /* : Array[String] */;
char var61 /* : Char */;
val* var62 /* : Array[Text] */;
val* var63 /* : Pattern */;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var:ToolContext> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_path_env = var3;
var6 = NULL;
if (var_path_env == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_path_env,var6) on <var_path_env:nullable String> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_path_env->class->vft[COLOR_kernel__Object___61d_61d]))(var_path_env, var_other) /* == on <var_path_env:nullable String(String)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
if (varonce) {
var13 = varonce;
} else {
var14 = "/clib";
var15 = 5;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 2;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var_path_env;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var13;
{
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
}
{
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
}
var_libname = var20;
{
var21 = file__String__file_exists(var_libname);
}
if (var21){
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var24 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
array__Array__add(var22, var_libname); /* Direct call array#Array#add on <var22:Array[String]>*/
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var27 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = array__AbstractArrayRead__is_empty(var25);
}
if (var28){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var31 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = NULL;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "Cannot determine the nit clib path. define envvar NIT_DIR.";
var36 = 58;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
toolcontext__ToolContext__error(var29, var32, var34); /* Direct call toolcontext#ToolContext#error on <var29:ToolContext>*/
}
} else {
}
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var40 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var43 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_cc_path (var41) on <var41:ToolContext> */
var46 = var41->attrs[COLOR_abstract_compiler__ToolContext___opt_cc_path].val; /* _opt_cc_path on <var41:ToolContext> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_cc_path");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 36);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline opts#Option#value (var44) on <var44:OptionArray> */
var49 = var44->attrs[COLOR_opts__Option___value].val; /* _value on <var44:OptionArray> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
abstract_collection__Sequence__append(var38, var47); /* Direct call abstract_collection#Sequence#append on <var38:Array[String]>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "NIT_CC_PATH";
var53 = 11;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = environ__String__environ(var51);
}
var_path_env = var55;
{
var56 = string__Text__is_empty(var_path_env);
}
var57 = !var56;
if (var57){
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var60 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = ':';
{
var63 = BOX_kernel__Char(var61); /* autobox from Char to Pattern */
var62 = string_search__Text__split_with(var_path_env, var63);
}
{
abstract_collection__Sequence__append(var58, var62); /* Direct call abstract_collection#Sequence#append on <var58:Array[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#gather_cc_paths for (self: Object) */
void VIRTUAL_abstract_compiler__MakefileToolchain__gather_cc_paths(val* self) {
abstract_compiler__MakefileToolchain__gather_cc_paths(self); /* Direct call abstract_compiler#MakefileToolchain#gather_cc_paths on <self:Object(MakefileToolchain)>*/
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: MakefileToolchain, AbstractCompiler) */
void abstract_compiler__MakefileToolchain__write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var3 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_time0 /* var time0: Int */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
long var14 /* : Int */;
val* var15 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
long var16 /* : Int */;
long var18 /* : Int */;
long var_time1 /* var time1: Int */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var30 /* : Int */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : Object */;
val* var40 /* : String */;
long var41 /* : Int */;
val* var42 /* : ToolContext */;
val* var44 /* : ToolContext */;
val* var45 /* : OptionBool */;
val* var47 /* : OptionBool */;
val* var48 /* : nullable Object */;
val* var50 /* : nullable Object */;
short int var51 /* : Bool */;
val* var52 /* : ToolContext */;
val* var54 /* : ToolContext */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
long var60 /* : Int */;
long var61 /* : Int */;
long var63 /* : Int */;
val* var64 /* : ToolContext */;
val* var66 /* : ToolContext */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : Object */;
val* var88 /* : String */;
long var89 /* : Int */;
var_compiler = p0;
{
abstract_compiler__MakefileToolchain__gather_cc_paths(self); /* Direct call abstract_compiler#MakefileToolchain#gather_cc_paths on <self:MakefileToolchain>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mainmodule = var;
{
var3 = abstract_compiler__Toolchain__compile_dir(self);
}
var_compile_dir = var3;
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var6 = kernel_Any_Any_get_time_0(self);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_time0 = var4;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var9 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (varonce) {
var10 = varonce;
} else {
var11 = "*** WRITING C ***";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = 1;
{
toolcontext__ToolContext__info(var7, var10, var14); /* Direct call toolcontext#ToolContext#info on <var7:ToolContext>*/
}
{
file__String__mkdir(var_compile_dir); /* Direct call file#String#mkdir on <var_compile_dir:String>*/
}
var15 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[String]>*/
}
var_cfiles = var15;
{
abstract_compiler__MakefileToolchain__write_files(self, var_compiler, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_files on <self:MakefileToolchain>*/
}
{
abstract_compiler__MakefileToolchain__write_makefile(self, var_compiler, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_makefile on <self:MakefileToolchain>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var18 = kernel_Any_Any_get_time_0(self);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_time1 = var16;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var21 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "*** END WRITING C: ";
var25 = 19;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var29 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var30 = var_time1 - var_time0;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " ***";
var34 = 4;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var23;
var39 = BOX_kernel__Int(var27); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var39;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var32;
{
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
var41 = 2;
{
toolcontext__ToolContext__info(var19, var40, var41); /* Direct call toolcontext#ToolContext#info on <var19:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var44 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (var42) on <var42:ToolContext> */
var47 = var42->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <var42:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 32);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline opts#Option#value (var45) on <var45:OptionBool> */
var50 = var45->attrs[COLOR_opts__Option___value].val; /* _value on <var45:OptionBool> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = ((struct instance_kernel__Bool*)var48)->value; /* autounbox from nullable Object to Bool */;
if (var51){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var54 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "*** COMPILING C ***";
var58 = 19;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = 1;
{
toolcontext__ToolContext__info(var52, var56, var60); /* Direct call toolcontext#ToolContext#info on <var52:ToolContext>*/
}
{
abstract_compiler__MakefileToolchain__compile_c_code(self, var_compiler, var_compile_dir); /* Direct call abstract_compiler#MakefileToolchain#compile_c_code on <self:MakefileToolchain>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:MakefileToolchain> */
var63 = kernel_Any_Any_get_time_0(self);
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_time1 = var61;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var66 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "*** END COMPILING C: ";
var70 = 21;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var74 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var78 = var_time1 - var_time0;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " ***";
var82 = 4;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 3;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var68;
var87 = BOX_kernel__Int(var72); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var80;
{
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
var89 = 2;
{
toolcontext__ToolContext__info(var64, var88, var89); /* Direct call toolcontext#ToolContext#info on <var64:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__MakefileToolchain__write_and_make(val* self, val* p0) {
abstract_compiler__MakefileToolchain__write_and_make(self, p0); /* Direct call abstract_compiler#MakefileToolchain#write_and_make on <self:Object(MakefileToolchain)>*/
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: MakefileToolchain, AbstractCompiler, String, Array[String]) */
void abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
short int var4 /* : Bool */;
val* var5 /* : ToolContext */;
val* var7 /* : ToolContext */;
val* var8 /* : OptionString */;
val* var10 /* : OptionString */;
val* var11 /* : nullable Object */;
val* var13 /* : nullable Object */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var_cc_opt_with_libgc /* var cc_opt_with_libgc: String */;
short int var31 /* : Bool */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : ExternCFile */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
val* var49 /* : Array[ExternFile] */;
val* var51 /* : Array[ExternFile] */;
val* var52 /* : Array[String] */;
val* var54 /* : Array[String] */;
val* var55 /* : Array[String] */;
val* var57 /* : Array[String] */;
val* var58 /* : nullable Object */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
val* var68 /* : Array[String] */;
val* var70 /* : Array[String] */;
val* var71 /* : Array[String] */;
val* var73 /* : Array[String] */;
val* var74 /* : nullable Object */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : Array[Object] */;
long var81 /* : Int */;
val* var82 /* : NativeArray[Object] */;
val* var83 /* : String */;
val* var84 /* : ToolContext */;
val* var86 /* : ToolContext */;
val* var87 /* : ModelBuilder */;
val* var88 /* : HashMap[MModule, AModule] */;
val* var90 /* : HashMap[MModule, AModule] */;
val* var_m2m /* var m2m: HashMap[MModule, AModule] */;
val* var91 /* : MModule */;
val* var93 /* : MModule */;
val* var94 /* : POSetElement[MModule] */;
val* var96 /* : POSetElement[MModule] */;
val* var97 /* : Collection[Object] */;
val* var98 /* : Iterator[nullable Object] */;
short int var99 /* : Bool */;
val* var100 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var101 /* : Array[String] */;
val* var103 /* : Array[String] */;
val* var104 /* : ArrayIterator[nullable Object] */;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_src /* var src: String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : String */;
val* var_basename /* var basename: String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
val* var_dst /* var dst: String */;
val* var123 /* : CodeWriter */;
val* var125 /* : CodeWriter */;
val* var126 /* : CodeFile */;
val* var128 /* : CodeFile */;
val* var129 /* : String */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
val* var137 /* : String */;
val* var_hfilename /* var hfilename: String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var147 /* : OFStream */;
val* var_h /* var h: OFStream */;
val* var148 /* : CodeWriter */;
val* var150 /* : CodeWriter */;
val* var151 /* : List[String] */;
val* var153 /* : List[String] */;
val* var154 /* : ListIterator[nullable Object] */;
short int var155 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var163 /* : CodeWriter */;
val* var165 /* : CodeWriter */;
val* var166 /* : List[String] */;
val* var168 /* : List[String] */;
val* var169 /* : ListIterator[nullable Object] */;
short int var170 /* : Bool */;
val* var171 /* : nullable Object */;
val* var_l172 /* var l: String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
val* var179 /* : List[CodeFile] */;
val* var181 /* : List[CodeFile] */;
val* var182 /* : ListIterator[nullable Object] */;
short int var183 /* : Bool */;
val* var184 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var185 /* : Int */;
long var_i /* var i: Int */;
val* var186 /* : null */;
val* var_hfile /* var hfile: nullable OFStream */;
long var187 /* : Int */;
long var_count /* var count: Int */;
val* var188 /* : String */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : String */;
val* var_cfilename /* var cfilename: String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var205 /* : Array[Object] */;
long var206 /* : Int */;
val* var207 /* : NativeArray[Object] */;
val* var208 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var209 /* : OFStream */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : FlatString */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
val* var220 /* : Array[Object] */;
long var221 /* : Int */;
val* var222 /* : NativeArray[Object] */;
val* var223 /* : String */;
val* var224 /* : HashSet[String] */;
val* var226 /* : HashSet[String] */;
val* var227 /* : Iterator[Object] */;
short int var228 /* : Bool */;
val* var229 /* : nullable Object */;
val* var_key /* var key: String */;
val* var230 /* : HashMap[String, String] */;
val* var232 /* : HashMap[String, String] */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
val* var235 /* : HashMap[String, ANode] */;
val* var237 /* : HashMap[String, ANode] */;
val* var238 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
val* var239 /* : null */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
val* var251 /* : Array[Object] */;
long var252 /* : Int */;
val* var253 /* : NativeArray[Object] */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
val* var260 /* : Array[Object] */;
long var261 /* : Int */;
val* var262 /* : NativeArray[Object] */;
val* var263 /* : String */;
val* var264 /* : HashMap[String, String] */;
val* var266 /* : HashMap[String, String] */;
val* var267 /* : nullable Object */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
val* var274 /* : null */;
val* var_file /* var file: nullable OFStream */;
val* var275 /* : Array[CodeWriter] */;
val* var277 /* : Array[CodeWriter] */;
val* var278 /* : ArrayIterator[nullable Object] */;
short int var279 /* : Bool */;
val* var280 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var281 /* : CodeWriter */;
val* var283 /* : CodeWriter */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
val* var_other287 /* var other: nullable Object */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
val* var292 /* : List[String] */;
val* var294 /* : List[String] */;
long var295 /* : Int */;
val* var296 /* : List[String] */;
val* var298 /* : List[String] */;
long var299 /* : Int */;
long var300 /* : Int */;
short int var302 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var303 /* : Int */;
long var_total_lines /* var total_lines: Int */;
long var304 /* : Int */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var308 /* : Bool */;
long var309 /* : Int */;
short int var311 /* : Bool */;
int cltype312;
int idtype313;
const char* var_class_name314;
long var315 /* : Int */;
short int var316 /* : Bool */;
val* var317 /* : null */;
short int var318 /* : Bool */;
short int var319 /* : Bool */;
short int var321 /* : Bool */;
short int var323 /* : Bool */;
short int var_324 /* var : Bool */;
long var325 /* : Int */;
short int var326 /* : Bool */;
short int var328 /* : Bool */;
int cltype329;
int idtype330;
const char* var_class_name331;
short int var332 /* : Bool */;
long var333 /* : Int */;
long var334 /* : Int */;
short int var336 /* : Bool */;
int cltype337;
int idtype338;
const char* var_class_name339;
long var340 /* : Int */;
val* var341 /* : null */;
short int var342 /* : Bool */;
short int var343 /* : Bool */;
short int var345 /* : Bool */;
short int var346 /* : Bool */;
short int var347 /* : Bool */;
val* var348 /* : String */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : FlatString */;
val* var361 /* : Array[Object] */;
long var362 /* : Int */;
val* var363 /* : NativeArray[Object] */;
val* var364 /* : Object */;
val* var365 /* : String */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : FlatString */;
val* var371 /* : Array[Object] */;
long var372 /* : Int */;
val* var373 /* : NativeArray[Object] */;
val* var374 /* : String */;
val* var375 /* : ToolContext */;
val* var377 /* : ToolContext */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
long var381 /* : Int */;
val* var382 /* : FlatString */;
val* var383 /* : Array[Object] */;
long var384 /* : Int */;
val* var385 /* : NativeArray[Object] */;
val* var386 /* : String */;
long var387 /* : Int */;
val* var388 /* : OFStream */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : FlatString */;
val* var394 /* : String */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : FlatString */;
val* var402 /* : Array[Object] */;
long var403 /* : Int */;
val* var404 /* : NativeArray[Object] */;
val* var405 /* : String */;
val* var406 /* : List[String] */;
val* var408 /* : List[String] */;
val* var409 /* : ListIterator[nullable Object] */;
short int var410 /* : Bool */;
val* var411 /* : nullable Object */;
val* var_l412 /* var l: String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : FlatString */;
val* var419 /* : List[String] */;
val* var421 /* : List[String] */;
val* var422 /* : ListIterator[nullable Object] */;
short int var423 /* : Bool */;
val* var424 /* : nullable Object */;
val* var_l425 /* var l: String */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
long var429 /* : Int */;
val* var430 /* : FlatString */;
val* var432 /* : null */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
short int var436 /* : Bool */;
short int var437 /* : Bool */;
short int var438 /* : Bool */;
val* var440 /* : ToolContext */;
val* var442 /* : ToolContext */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : FlatString */;
long var448 /* : Int */;
val* var449 /* : Array[Object] */;
long var450 /* : Int */;
val* var451 /* : NativeArray[Object] */;
val* var452 /* : Object */;
val* var453 /* : String */;
long var454 /* : Int */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = platform__MModule__target_platform(var);
}
var_platform = var3;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var7 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var5) on <var5:ToolContext> */
var10 = var5->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var5:ToolContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline opts#Option#value (var8) on <var8:OptionString> */
var13 = var8->attrs[COLOR_opts__Option___value].val; /* _value on <var8:OptionString> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (varonce) {
var14 = varonce;
} else {
var15 = "nitstack";
var16 = 8;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
if (var11 == NULL) {
var18 = 0; /* <var14:String> cannot be null */
} else {
var19 = string__FlatString___61d_61d(var11, var14);
var18 = var19;
}
var_ = var18;
if (var18){
var21 = NULL;
if (var_platform == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
var23 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___61d_61d]))(var_platform, var21) /* == on <var_platform:nullable Platform>*/;
var22 = var23;
}
var_24 = var22;
if (var22){
var20 = var_24;
} else {
{
var25 = ((short int (*)(val*))(var_platform->class->vft[COLOR_platform__Platform__supports_libunwind]))(var_platform) /* supports_libunwind on <var_platform:nullable Platform(Platform)>*/;
}
var20 = var25;
}
var4 = var20;
} else {
var4 = var_;
}
if (var4){
{
abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#build_c_to_nit_bindings on <var_compiler:AbstractCompiler>*/
}
} else {
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "-DWITH_LIBGC";
var29 = 12;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var_cc_opt_with_libgc = var27;
var32 = NULL;
if (var_platform == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
var34 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_platform, var32) /* != on <var_platform:nullable Platform>*/;
var33 = var34;
}
var_35 = var33;
if (var33){
{
var36 = ((short int (*)(val*))(var_platform->class->vft[COLOR_platform__Platform__supports_libgc]))(var_platform) /* supports_libgc on <var_platform:nullable Platform(Platform)>*/;
}
var37 = !var36;
var31 = var37;
} else {
var31 = var_35;
}
if (var31){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "";
var41 = 0;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var_cc_opt_with_libgc = var39;
} else {
}
var43 = NEW_c_tools__ExternCFile(&type_c_tools__ExternCFile);
if (varonce44) {
var45 = varonce44;
} else {
var46 = "gc_chooser.c";
var47 = 12;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
c_tools__ExternCFile__init(var43, var45, var_cc_opt_with_libgc); /* Direct call c_tools#ExternCFile#init on <var43:ExternCFile>*/
}
var_gc_chooser = var43;
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var_compiler) on <var_compiler:AbstractCompiler> */
var51 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var_compiler:AbstractCompiler> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 847);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
array__Array__add(var49, var_gc_chooser); /* Direct call array#Array#add on <var49:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var54 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var57 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = abstract_collection__SequenceRead__first(var55);
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "/gc_chooser.c";
var62 = 13;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 2;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var58;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var60;
{
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
array__Array__add(var52, var67); /* Direct call array#Array#add on <var52:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var70 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var73 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = abstract_collection__SequenceRead__first(var71);
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "/gc_chooser.h";
var78 = 13;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var80 = array_instance Array[Object] */
var81 = 2;
var82 = NEW_array__NativeArray(var81, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var82)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var82)->values[1] = (val*) var76;
{
((void (*)(val*, val*, long))(var80->class->vft[COLOR_array__Array__with_native]))(var80, var82, var81) /* with_native on <var80:Array[Object]>*/;
}
}
{
var83 = ((val* (*)(val*))(var80->class->vft[COLOR_string__Object__to_s]))(var80) /* to_s on <var80:Array[Object]>*/;
}
{
array__Array__add(var68, var83); /* Direct call array#Array#add on <var68:Array[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var86 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = modelbuilder__ToolContext__modelbuilder(var84);
}
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (var87) on <var87:ModelBuilder> */
var90 = var87->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <var87:ModelBuilder> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_m2m = var88;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var93 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var91) on <var91:MModule> */
var96 = var91->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var91:MModule> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = poset__POSetElement__greaters(var94);
}
{
var98 = ((val* (*)(val*))(var97->class->vft[COLOR_abstract_collection__Collection__iterator]))(var97) /* iterator on <var97:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var99 = ((short int (*)(val*))(var98->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var98) /* is_ok on <var98:Iterator[nullable Object]>*/;
}
if(!var99) break;
{
var100 = ((val* (*)(val*))(var98->class->vft[COLOR_abstract_collection__Iterator__item]))(var98) /* item on <var98:Iterator[nullable Object]>*/;
}
var_m = var100;
{
separate_compiler__SeparateCompiler__finalize_ffi_for_module(var_compiler, var_m); /* Direct call separate_compiler#SeparateCompiler#finalize_ffi_for_module on <var_compiler:AbstractCompiler>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var98->class->vft[COLOR_abstract_collection__Iterator__next]))(var98) /* next on <var98:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var103 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = array__AbstractArrayRead__iterator(var101);
}
for(;;) {
{
var105 = array__ArrayIterator__is_ok(var104);
}
if(!var105) break;
{
var106 = array__ArrayIterator__item(var104);
}
var_src = var106;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "";
var110 = 0;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
var112 = file__String__basename(var_src, var108);
}
var_basename = var112;
if (varonce113) {
var114 = varonce113;
} else {
var115 = "/";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 3;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var114;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var_basename;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
var_dst = var121;
{
file__String__file_copy_to(var_src, var_dst); /* Direct call file#String#file_copy_to on <var_src:String>*/
}
CONTINUE_label122: (void)0;
{
array__ArrayIterator__next(var104); /* Direct call array#ArrayIterator#next on <var104:ArrayIterator[nullable Object]>*/
}
}
BREAK_label122: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var125 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var123) on <var123:CodeWriter> */
var128 = var123->attrs[COLOR_abstract_compiler__CodeWriter___file].val; /* _file on <var123:CodeWriter> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 961);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#name (var126) on <var126:CodeFile> */
var131 = var126->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var126:CodeFile> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 954);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = ".h";
var135 = 2;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
var137 = string__FlatString___43d(var129, var133);
}
var_hfilename = var137;
if (varonce138) {
var139 = varonce138;
} else {
var140 = "/";
var141 = 1;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 3;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var139;
((struct instance_array__NativeArray*)var145)->values[2] = (val*) var_hfilename;
{
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val*))(var143->class->vft[COLOR_string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
var_hfilepath = var146;
var147 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var147, var_hfilepath); /* Direct call file#OFStream#open on <var147:OFStream>*/
}
var_h = var147;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var150 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var148) on <var148:CodeWriter> */
var153 = var148->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var148:CodeWriter> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
var154 = list__List__iterator(var151);
}
for(;;) {
{
var155 = list__ListIterator__is_ok(var154);
}
if(!var155) break;
{
var156 = list__ListIterator__item(var154);
}
var_l = var156;
{
file__OFStream__write(var_h, var_l); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "\n";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
file__OFStream__write(var_h, var158); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
CONTINUE_label162: (void)0;
{
list__ListIterator__next(var154); /* Direct call list#ListIterator#next on <var154:ListIterator[nullable Object]>*/
}
}
BREAK_label162: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var165 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var163) on <var163:CodeWriter> */
var168 = var163->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var163:CodeWriter> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 962);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
var169 = list__List__iterator(var166);
}
for(;;) {
{
var170 = list__ListIterator__is_ok(var169);
}
if(!var170) break;
{
var171 = list__ListIterator__item(var169);
}
var_l172 = var171;
{
file__OFStream__write(var_h, var_l172); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "\n";
var176 = 1;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
{
file__OFStream__write(var_h, var174); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
CONTINUE_label178: (void)0;
{
list__ListIterator__next(var169); /* Direct call list#ListIterator#next on <var169:ListIterator[nullable Object]>*/
}
}
BREAK_label178: (void)0;
{
file__OFStream__close(var_h); /* Direct call file#OFStream#close on <var_h:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var_compiler) on <var_compiler:AbstractCompiler> */
var181 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <var_compiler:AbstractCompiler> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 465);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
var182 = list__List__iterator(var179);
}
for(;;) {
{
var183 = list__ListIterator__is_ok(var182);
}
if(!var183) break;
{
var184 = list__ListIterator__item(var182);
}
var_f = var184;
var185 = 0;
var_i = var185;
var186 = NULL;
var_hfile = var186;
var187 = 0;
var_count = var187;
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var190 = var_f->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 954);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = ".0.h";
var194 = 4;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 2;
var198 = NEW_array__NativeArray(var197, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var198)->values[0] = (val*) var188;
((struct instance_array__NativeArray*)var198)->values[1] = (val*) var192;
{
((void (*)(val*, val*, long))(var196->class->vft[COLOR_array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
}
{
var199 = ((val* (*)(val*))(var196->class->vft[COLOR_string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
}
var_cfilename = var199;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "/";
var203 = 1;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 3;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var207)->values[1] = (val*) var201;
((struct instance_array__NativeArray*)var207)->values[2] = (val*) var_cfilename;
{
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
}
}
{
var208 = ((val* (*)(val*))(var205->class->vft[COLOR_string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
}
var_cfilepath = var208;
var209 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var209, var_cfilepath); /* Direct call file#OFStream#open on <var209:OFStream>*/
}
var_hfile = var209;
if (varonce210) {
var211 = varonce210;
} else {
var212 = "#include \"";
var213 = 10;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "\"\n";
var218 = 2;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 3;
var222 = NEW_array__NativeArray(var221, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var222)->values[0] = (val*) var211;
((struct instance_array__NativeArray*)var222)->values[1] = (val*) var_hfilename;
((struct instance_array__NativeArray*)var222)->values[2] = (val*) var216;
{
((void (*)(val*, val*, long))(var220->class->vft[COLOR_array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val*))(var220->class->vft[COLOR_string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
}
{
file__OFStream__write(var_hfile, var223); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var_f) on <var_f:CodeFile> */
var226 = var_f->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var_f:CodeFile> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 956);
show_backtrace(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
var227 = hash_collection__HashSet__iterator(var224);
}
for(;;) {
{
var228 = ((short int (*)(val*))(var227->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var227) /* is_ok on <var227:Iterator[Object]>*/;
}
if(!var228) break;
{
var229 = ((val* (*)(val*))(var227->class->vft[COLOR_abstract_collection__Iterator__item]))(var227) /* item on <var227:Iterator[Object]>*/;
}
var_key = var229;
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var232 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
var233 = abstract_collection__MapRead__has_key(var230, var_key);
}
var234 = !var233;
if (var234){
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var237 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 486);
show_backtrace(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
var238 = abstract_collection__MapRead__get_or_null(var235, var_key);
}
var_node = var238;
var239 = NULL;
if (var_node == NULL) {
var240 = 0; /* is null */
} else {
var240 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var239) on <var_node:nullable ANode> */
var_other = var239;
{
var244 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ANode(ANode)>*/;
var243 = var244;
}
var245 = !var243;
var241 = var245;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
if (var240){
if (varonce246) {
var247 = varonce246;
} else {
var248 = "No provided declaration for ";
var249 = 28;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
var251 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var251 = array_instance Array[Object] */
var252 = 2;
var253 = NEW_array__NativeArray(var252, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var253)->values[0] = (val*) var247;
((struct instance_array__NativeArray*)var253)->values[1] = (val*) var_key;
{
((void (*)(val*, val*, long))(var251->class->vft[COLOR_array__Array__with_native]))(var251, var253, var252) /* with_native on <var251:Array[Object]>*/;
}
}
{
var254 = ((val* (*)(val*))(var251->class->vft[COLOR_string__Object__to_s]))(var251) /* to_s on <var251:Array[Object]>*/;
}
{
parser_nodes__ANode__debug(var_node, var254); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
} else {
if (varonce255) {
var256 = varonce255;
} else {
var257 = "No provided declaration for ";
var258 = 28;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
var260 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var260 = array_instance Array[Object] */
var261 = 2;
var262 = NEW_array__NativeArray(var261, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var262)->values[0] = (val*) var256;
((struct instance_array__NativeArray*)var262)->values[1] = (val*) var_key;
{
((void (*)(val*, val*, long))(var260->class->vft[COLOR_array__Array__with_native]))(var260, var262, var261) /* with_native on <var260:Array[Object]>*/;
}
}
{
var263 = ((val* (*)(val*))(var260->class->vft[COLOR_string__Object__to_s]))(var260) /* to_s on <var260:Array[Object]>*/;
}
{
file__Object__print(self, var263); /* Direct call file#Object#print on <self:MakefileToolchain>*/
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 263);
show_backtrace(1);
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var266 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
var267 = hash_collection__HashMap___91d_93d(var264, var_key);
}
{
file__OFStream__write(var_hfile, var267); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "\n";
var271 = 1;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
{
file__OFStream__write(var_hfile, var269); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
CONTINUE_label273: (void)0;
{
((void (*)(val*))(var227->class->vft[COLOR_abstract_collection__Iterator__next]))(var227) /* next on <var227:Iterator[Object]>*/;
}
}
BREAK_label273: (void)0;
{
file__OFStream__close(var_hfile); /* Direct call file#OFStream#close on <var_hfile:nullable OFStream(OFStream)>*/
}
var274 = NULL;
var_file = var274;
{
{ /* Inline abstract_compiler#CodeFile#writers (var_f) on <var_f:CodeFile> */
var277 = var_f->attrs[COLOR_abstract_compiler__CodeFile___writers].val; /* _writers on <var_f:CodeFile> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 955);
show_backtrace(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
var278 = array__AbstractArrayRead__iterator(var275);
}
for(;;) {
{
var279 = array__ArrayIterator__is_ok(var278);
}
if(!var279) break;
{
var280 = array__ArrayIterator__item(var278);
}
var_vis = var280;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var283 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_vis,var281) on <var_vis:CodeWriter> */
var_other287 = var281;
{
{ /* Inline kernel#Object#is_same_instance (var_vis,var_other287) on <var_vis:CodeWriter> */
var290 = var_vis == var_other287;
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
var285 = var288;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
goto CONTINUE_label291;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var294 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 962);
show_backtrace(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
var295 = list__List__length(var292);
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var298 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
show_backtrace(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
var299 = list__List__length(var296);
}
{
{ /* Inline kernel#Int#+ (var295,var299) on <var295:Int> */
/* Covariant cast for argument 0 (i) <var299:Int> isa OTHER */
/* <var299:Int> isa OTHER */
var302 = 1; /* easy <var299:Int> isa OTHER*/
if (unlikely(!var302)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var303 = var295 + var299;
var300 = var303;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var_total_lines = var300;
var304 = 0;
{
{ /* Inline kernel#Int#== (var_total_lines,var304) on <var_total_lines:Int> */
var308 = var_total_lines == var304;
var306 = var308;
goto RET_LABEL307;
RET_LABEL307:(void)0;
}
var305 = var306;
}
if (var305){
goto CONTINUE_label291;
} else {
}
{
{ /* Inline kernel#Int#+ (var_count,var_total_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_total_lines:Int> isa OTHER */
/* <var_total_lines:Int> isa OTHER */
var311 = 1; /* easy <var_total_lines:Int> isa OTHER*/
if (unlikely(!var311)) {
var_class_name314 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name314);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var315 = var_count + var_total_lines;
var309 = var315;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
}
var_count = var309;
var317 = NULL;
if (var_file == NULL) {
var318 = 1; /* is null */
} else {
var318 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var317) on <var_file:nullable OFStream> */
var_other287 = var317;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other287) on <var_file:nullable OFStream(OFStream)> */
var323 = var_file == var_other287;
var321 = var323;
goto RET_LABEL322;
RET_LABEL322:(void)0;
}
}
var319 = var321;
goto RET_LABEL320;
RET_LABEL320:(void)0;
}
var318 = var319;
}
var_324 = var318;
if (var318){
var316 = var_324;
} else {
var325 = 10000;
{
{ /* Inline kernel#Int#> (var_count,var325) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var325:Int> isa OTHER */
/* <var325:Int> isa OTHER */
var328 = 1; /* easy <var325:Int> isa OTHER*/
if (unlikely(!var328)) {
var_class_name331 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name331);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var332 = var_count > var325;
var326 = var332;
goto RET_LABEL327;
RET_LABEL327:(void)0;
}
}
var316 = var326;
}
if (var316){
var333 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var333) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var333:Int> isa OTHER */
/* <var333:Int> isa OTHER */
var336 = 1; /* easy <var333:Int> isa OTHER*/
if (unlikely(!var336)) {
var_class_name339 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name339);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var340 = var_i + var333;
var334 = var340;
goto RET_LABEL335;
RET_LABEL335:(void)0;
}
}
var_i = var334;
var341 = NULL;
if (var_file == NULL) {
var342 = 0; /* is null */
} else {
var342 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_file,var341) on <var_file:nullable OFStream> */
var_other = var341;
{
var346 = ((short int (*)(val*, val*))(var_file->class->vft[COLOR_kernel__Object___61d_61d]))(var_file, var_other) /* == on <var_file:nullable OFStream(OFStream)>*/;
var345 = var346;
}
var347 = !var345;
var343 = var347;
goto RET_LABEL344;
RET_LABEL344:(void)0;
}
var342 = var343;
}
if (var342){
{
file__OFStream__close(var_file); /* Direct call file#OFStream#close on <var_file:nullable OFStream(OFStream)>*/
}
} else {
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var350 = var_f->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var350 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 954);
show_backtrace(1);
}
var348 = var350;
RET_LABEL349:(void)0;
}
}
if (varonce351) {
var352 = varonce351;
} else {
var353 = ".";
var354 = 1;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
if (varonce356) {
var357 = varonce356;
} else {
var358 = ".c";
var359 = 2;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
var361 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var361 = array_instance Array[Object] */
var362 = 4;
var363 = NEW_array__NativeArray(var362, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var363)->values[0] = (val*) var348;
((struct instance_array__NativeArray*)var363)->values[1] = (val*) var352;
var364 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var363)->values[2] = (val*) var364;
((struct instance_array__NativeArray*)var363)->values[3] = (val*) var357;
{
((void (*)(val*, val*, long))(var361->class->vft[COLOR_array__Array__with_native]))(var361, var363, var362) /* with_native on <var361:Array[Object]>*/;
}
}
{
var365 = ((val* (*)(val*))(var361->class->vft[COLOR_string__Object__to_s]))(var361) /* to_s on <var361:Array[Object]>*/;
}
var_cfilename = var365;
if (varonce366) {
var367 = varonce366;
} else {
var368 = "/";
var369 = 1;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
var371 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var371 = array_instance Array[Object] */
var372 = 3;
var373 = NEW_array__NativeArray(var372, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var373)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var373)->values[1] = (val*) var367;
((struct instance_array__NativeArray*)var373)->values[2] = (val*) var_cfilename;
{
((void (*)(val*, val*, long))(var371->class->vft[COLOR_array__Array__with_native]))(var371, var373, var372) /* with_native on <var371:Array[Object]>*/;
}
}
{
var374 = ((val* (*)(val*))(var371->class->vft[COLOR_string__Object__to_s]))(var371) /* to_s on <var371:Array[Object]>*/;
}
var_cfilepath = var374;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var377 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var377 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
if (varonce378) {
var379 = varonce378;
} else {
var380 = "new C source files to compile: ";
var381 = 31;
var382 = string__NativeString__to_s_with_length(var380, var381);
var379 = var382;
varonce378 = var379;
}
var383 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var383 = array_instance Array[Object] */
var384 = 2;
var385 = NEW_array__NativeArray(var384, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var385)->values[0] = (val*) var379;
((struct instance_array__NativeArray*)var385)->values[1] = (val*) var_cfilepath;
{
((void (*)(val*, val*, long))(var383->class->vft[COLOR_array__Array__with_native]))(var383, var385, var384) /* with_native on <var383:Array[Object]>*/;
}
}
{
var386 = ((val* (*)(val*))(var383->class->vft[COLOR_string__Object__to_s]))(var383) /* to_s on <var383:Array[Object]>*/;
}
var387 = 3;
{
toolcontext__ToolContext__info(var375, var386, var387); /* Direct call toolcontext#ToolContext#info on <var375:ToolContext>*/
}
{
array__Array__add(var_cfiles, var_cfilename); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
var388 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var388, var_cfilepath); /* Direct call file#OFStream#open on <var388:OFStream>*/
}
var_file = var388;
if (varonce389) {
var390 = varonce389;
} else {
var391 = "#include \"";
var392 = 10;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var396 = var_f->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var396 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 954);
show_backtrace(1);
}
var394 = var396;
RET_LABEL395:(void)0;
}
}
if (varonce397) {
var398 = varonce397;
} else {
var399 = ".0.h\"\n";
var400 = 6;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
var402 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var402 = array_instance Array[Object] */
var403 = 3;
var404 = NEW_array__NativeArray(var403, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var404)->values[0] = (val*) var390;
((struct instance_array__NativeArray*)var404)->values[1] = (val*) var394;
((struct instance_array__NativeArray*)var404)->values[2] = (val*) var398;
{
((void (*)(val*, val*, long))(var402->class->vft[COLOR_array__Array__with_native]))(var402, var404, var403) /* with_native on <var402:Array[Object]>*/;
}
}
{
var405 = ((val* (*)(val*))(var402->class->vft[COLOR_string__Object__to_s]))(var402) /* to_s on <var402:Array[Object]>*/;
}
{
file__OFStream__write(var_file, var405); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
var_count = var_total_lines;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var408 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 963);
show_backtrace(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
{
var409 = list__List__iterator(var406);
}
for(;;) {
{
var410 = list__ListIterator__is_ok(var409);
}
if(!var410) break;
{
var411 = list__ListIterator__item(var409);
}
var_l412 = var411;
{
file__OFStream__write(var_file, var_l412); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = "\n";
var416 = 1;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
{
file__OFStream__write(var_file, var414); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
CONTINUE_label418: (void)0;
{
list__ListIterator__next(var409); /* Direct call list#ListIterator#next on <var409:ListIterator[nullable Object]>*/
}
}
BREAK_label418: (void)0;
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var421 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 962);
show_backtrace(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
var422 = list__List__iterator(var419);
}
for(;;) {
{
var423 = list__ListIterator__is_ok(var422);
}
if(!var423) break;
{
var424 = list__ListIterator__item(var422);
}
var_l425 = var424;
{
file__OFStream__write(var_file, var_l425); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
if (varonce426) {
var427 = varonce426;
} else {
var428 = "\n";
var429 = 1;
var430 = string__NativeString__to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
{
file__OFStream__write(var_file, var427); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
CONTINUE_label431: (void)0;
{
list__ListIterator__next(var422); /* Direct call list#ListIterator#next on <var422:ListIterator[nullable Object]>*/
}
}
BREAK_label431: (void)0;
CONTINUE_label291: (void)0;
{
array__ArrayIterator__next(var278); /* Direct call array#ArrayIterator#next on <var278:ArrayIterator[nullable Object]>*/
}
}
BREAK_label291: (void)0;
var432 = NULL;
if (var_file == NULL) {
var433 = 0; /* is null */
} else {
var433 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_file,var432) on <var_file:nullable OFStream> */
var_other = var432;
{
var437 = ((short int (*)(val*, val*))(var_file->class->vft[COLOR_kernel__Object___61d_61d]))(var_file, var_other) /* == on <var_file:nullable OFStream(OFStream)>*/;
var436 = var437;
}
var438 = !var436;
var434 = var438;
goto RET_LABEL435;
RET_LABEL435:(void)0;
}
var433 = var434;
}
if (var433){
{
file__OFStream__close(var_file); /* Direct call file#OFStream#close on <var_file:nullable OFStream(OFStream)>*/
}
} else {
}
CONTINUE_label439: (void)0;
{
list__ListIterator__next(var182); /* Direct call list#ListIterator#next on <var182:ListIterator[nullable Object]>*/
}
}
BREAK_label439: (void)0;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var442 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var442 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var440 = var442;
RET_LABEL441:(void)0;
}
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = "Total C source files to compile: ";
var446 = 33;
var447 = string__NativeString__to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
{
var448 = array__AbstractArrayRead__length(var_cfiles);
}
var449 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var449 = array_instance Array[Object] */
var450 = 2;
var451 = NEW_array__NativeArray(var450, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var451)->values[0] = (val*) var444;
var452 = BOX_kernel__Int(var448); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var451)->values[1] = (val*) var452;
{
((void (*)(val*, val*, long))(var449->class->vft[COLOR_array__Array__with_native]))(var449, var451, var450) /* with_native on <var449:Array[Object]>*/;
}
}
{
var453 = ((val* (*)(val*))(var449->class->vft[COLOR_string__Object__to_s]))(var449) /* to_s on <var449:Array[Object]>*/;
}
var454 = 2;
{
toolcontext__ToolContext__info(var440, var453, var454); /* Direct call toolcontext#ToolContext#info on <var440:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: Object, AbstractCompiler, String, Array[String]) */
void VIRTUAL_abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__MakefileToolchain__write_files(self, p0, p1, p2); /* Direct call abstract_compiler#MakefileToolchain#write_files on <self:Object(MakefileToolchain)>*/
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#makefile_name for (self: MakefileToolchain, MModule): String */
val* abstract_compiler__MakefileToolchain__makefile_name(val* self, val* p0) {
val* var /* : String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var10 /* : NativeArray[Object] */;
val* var11 /* : String */;
var_mainmodule = p0;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var3 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (varonce) {
var4 = varonce;
} else {
var5 = ".mk";
var6 = 3;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var8 = array_instance Array[Object] */
var9 = 2;
var10 = NEW_array__NativeArray(var9, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var10)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var10)->values[1] = (val*) var4;
{
((void (*)(val*, val*, long))(var8->class->vft[COLOR_array__Array__with_native]))(var8, var10, var9) /* with_native on <var8:Array[Object]>*/;
}
}
{
var11 = ((val* (*)(val*))(var8->class->vft[COLOR_string__Object__to_s]))(var8) /* to_s on <var8:Array[Object]>*/;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#makefile_name for (self: Object, MModule): String */
val* VIRTUAL_abstract_compiler__MakefileToolchain__makefile_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MakefileToolchain__makefile_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#default_outname for (self: MakefileToolchain, MModule): String */
val* abstract_compiler__MakefileToolchain__default_outname(val* self, val* p0) {
val* var /* : String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : String */;
val* var3 /* : String */;
var_mainmodule = p0;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var3 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#default_outname for (self: Object, MModule): String */
val* VIRTUAL_abstract_compiler__MakefileToolchain__default_outname(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MakefileToolchain__default_outname(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#outfile for (self: MakefileToolchain, MModule): String */
val* abstract_compiler__MakefileToolchain__outfile(val* self, val* p0) {
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
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : ToolContext */;
val* var20 /* : ToolContext */;
val* var21 /* : OptionString */;
val* var23 /* : OptionString */;
val* var24 /* : nullable Object */;
val* var26 /* : nullable Object */;
val* var_dir /* var dir: nullable String */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : String */;
var_mainmodule = p0;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 28);
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
var15 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
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
var17 = abstract_compiler__MakefileToolchain__default_outname(self, var_mainmodule);
}
var_res = var17;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var20 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (var18) on <var18:ToolContext> */
var23 = var18->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <var18:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 30);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline opts#Option#value (var21) on <var21:OptionString> */
var26 = var21->attrs[COLOR_opts__Option___value].val; /* _value on <var21:OptionString> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_dir = var24;
var27 = NULL;
if (var_dir == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dir,var27) on <var_dir:nullable String> */
var_other = var27;
{
var32 = ((short int (*)(val*, val*))(var_dir->class->vft[COLOR_kernel__Object___61d_61d]))(var_dir, var_other) /* == on <var_dir:nullable String(String)>*/;
var31 = var32;
}
var33 = !var31;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
var34 = file__String__join_path(var_dir, var_res);
}
var = var34;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#outfile for (self: Object, MModule): String */
val* VIRTUAL_abstract_compiler__MakefileToolchain__outfile(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MakefileToolchain__outfile(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: MakefileToolchain, AbstractCompiler, String, Array[String]) */
void abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var7 /* : String */;
val* var_outname /* var outname: String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var_orig_dir /* var orig_dir: String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_outpath /* var outpath: String */;
val* var14 /* : String */;
val* var_makename /* var makename: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
val* var_makepath /* var makepath: String */;
val* var24 /* : OFStream */;
val* var_makefile /* var makefile: OFStream */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var_cc_includes /* var cc_includes: String */;
val* var30 /* : Array[String] */;
val* var32 /* : Array[String] */;
val* var33 /* : ArrayIterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var50 /* : ToolContext */;
val* var52 /* : ToolContext */;
val* var53 /* : ModelBuilder */;
val* var54 /* : HashMap[MModule, AModule] */;
val* var56 /* : HashMap[MModule, AModule] */;
val* var_m2m /* var m2m: HashMap[MModule, AModule] */;
val* var57 /* : POSetElement[MModule] */;
val* var59 /* : POSetElement[MModule] */;
val* var60 /* : Collection[Object] */;
val* var61 /* : Iterator[nullable Object] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var64 /* : nullable Set[String] */;
val* var_libs /* var libs: nullable Set[String] */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
val* var98 /* : ToolContext */;
val* var100 /* : ToolContext */;
val* var101 /* : OptionString */;
val* var103 /* : OptionString */;
val* var104 /* : nullable Object */;
val* var106 /* : nullable Object */;
val* var_ost /* var ost: nullable String */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var_123 /* var : Bool */;
short int var124 /* : Bool */;
val* var125 /* : null */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var_128 /* var : Bool */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
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
val* var175 /* : Array[Object] */;
long var176 /* : Int */;
val* var177 /* : NativeArray[Object] */;
val* var178 /* : String */;
val* var179 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var180 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var181 /* : ArrayIterator[nullable Object] */;
short int var182 /* : Bool */;
val* var183 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
val* var_o /* var o: String */;
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
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
val* var216 /* : Array[Object] */;
long var217 /* : Int */;
val* var218 /* : NativeArray[Object] */;
val* var219 /* : String */;
val* var221 /* : Array[ExternFile] */;
val* var_java_files /* var java_files: Array[ExternFile] */;
val* var222 /* : Array[ExternFile] */;
val* var224 /* : Array[ExternFile] */;
val* var225 /* : ArrayIterator[nullable Object] */;
short int var226 /* : Bool */;
val* var227 /* : nullable Object */;
val* var_f228 /* var f: ExternFile */;
val* var229 /* : String */;
val* var_o230 /* var o: String */;
val* var231 /* : String */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
val* var239 /* : String */;
val* var_ff /* var ff: String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
val* var250 /* : Array[Object] */;
long var251 /* : Int */;
val* var252 /* : NativeArray[Object] */;
val* var253 /* : String */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
val* var259 /* : String */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : NativeString */;
long var263 /* : Int */;
val* var264 /* : FlatString */;
val* var265 /* : Array[Object] */;
long var266 /* : Int */;
val* var267 /* : NativeArray[Object] */;
val* var268 /* : String */;
val* var269 /* : String */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
val* var_jar_file /* var jar_file: String */;
val* var284 /* : Array[String] */;
val* var_class_files_array /* var class_files_array: Array[String] */;
val* var285 /* : ArrayIterator[nullable Object] */;
short int var286 /* : Bool */;
val* var287 /* : nullable Object */;
val* var_f288 /* var f: ExternFile */;
val* var289 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
val* var296 /* : String */;
val* var_class_files /* var class_files: String */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
long var300 /* : Int */;
val* var301 /* : FlatString */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : FlatString */;
val* var307 /* : Array[Object] */;
long var308 /* : Int */;
val* var309 /* : NativeArray[Object] */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
long var319 /* : Int */;
val* var320 /* : FlatString */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : FlatString */;
val* var326 /* : Array[Object] */;
long var327 /* : Int */;
val* var328 /* : NativeArray[Object] */;
val* var329 /* : String */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : FlatString */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
long var338 /* : Int */;
val* var339 /* : FlatString */;
val* var340 /* : String */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
long var344 /* : Int */;
val* var345 /* : FlatString */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : FlatString */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : FlatString */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : FlatString */;
val* var362 /* : Array[Object] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[Object] */;
val* var365 /* : String */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : FlatString */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : FlatString */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : FlatString */;
val* var382 /* : Array[Object] */;
long var383 /* : Int */;
val* var384 /* : NativeArray[Object] */;
val* var385 /* : String */;
val* var386 /* : ToolContext */;
val* var388 /* : ToolContext */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : FlatString */;
val* var394 /* : Array[Object] */;
long var395 /* : Int */;
val* var396 /* : NativeArray[Object] */;
val* var397 /* : String */;
long var398 /* : Int */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mainmodule = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var5 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
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
var6 = platform__MModule__target_platform(var3);
}
var_platform = var6;
{
var7 = abstract_compiler__MakefileToolchain__outfile(self, var_mainmodule);
}
var_outname = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "..";
var10 = 2;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var_orig_dir = var8;
{
var12 = file__String__join_path(var_orig_dir, var_outname);
}
{
var13 = file__String__simplify_path(var12);
}
var_outpath = var13;
{
var14 = abstract_compiler__MakefileToolchain__makefile_name(self, var_mainmodule);
}
var_makename = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "/";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var16;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var_makename;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
var_makepath = var23;
var24 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var24, var_makepath); /* Direct call file#OFStream#open on <var24:OFStream>*/
}
var_makefile = var24;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "";
var28 = 0;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var_cc_includes = var26;
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var32 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 140);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = array__AbstractArrayRead__iterator(var30);
}
for(;;) {
{
var34 = array__ArrayIterator__is_ok(var33);
}
if(!var34) break;
{
var35 = array__ArrayIterator__item(var33);
}
var_p = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = " -I \"";
var39 = 5;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
var41 = string__FlatString___43d(var37, var_p);
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "\"";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = string__FlatString___43d(var41, var43);
}
{
var48 = string__FlatString___43d(var_cc_includes, var47);
}
var_cc_includes = var48;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var33); /* Direct call array#ArrayIterator#next on <var33:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var49 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
{
hash_collection__HashSet__init(var49); /* Direct call hash_collection#HashSet#init on <var49:HashSet[String]>*/
}
var_linker_options = var49;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var52 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = modelbuilder__ToolContext__modelbuilder(var50);
}
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (var53) on <var53:ModelBuilder> */
var56 = var53->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <var53:ModelBuilder> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_m2m = var54;
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var59 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = poset__POSetElement__greaters(var57);
}
{
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__Collection__iterator]))(var60) /* iterator on <var60:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var62 = ((short int (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var61) /* is_ok on <var61:Iterator[nullable Object]>*/;
}
if(!var62) break;
{
var63 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__item]))(var61) /* item on <var61:Iterator[nullable Object]>*/;
}
var_m = var63;
{
var64 = abstract_compiler__MModule__collect_linker_libs(var_m);
}
var_libs = var64;
var65 = NULL;
if (var_libs == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_libs,var65) on <var_libs:nullable Set[String]> */
var_other = var65;
{
var70 = ((short int (*)(val*, val*))(var_libs->class->vft[COLOR_kernel__Object___61d_61d]))(var_libs, var_other) /* == on <var_libs:nullable Set[String](Set[String])>*/;
var69 = var70;
}
var71 = !var69;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
{
abstract_collection__SimpleCollection__add_all(var_linker_options, var_libs); /* Direct call abstract_collection#SimpleCollection#add_all on <var_linker_options:HashSet[String]>*/
}
} else {
}
CONTINUE_label72: (void)0;
{
((void (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__next]))(var61) /* next on <var61:Iterator[nullable Object]>*/;
}
}
BREAK_label72: (void)0;
if (varonce73) {
var74 = varonce73;
} else {
var75 = "CC = ccache cc\nCXX = ccache c++\nCFLAGS = -g -O2 -Wno-unused-value -Wno-switch\nCINCL = ";
var76 = 86;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc ";
var81 = 33;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = " ";
var86 = 1;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
var88 = string__Collection__join(var_linker_options, var84);
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "\n\n";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 5;
var96 = NEW_array__NativeArray(var95, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var96)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var96)->values[1] = (val*) var_cc_includes;
((struct instance_array__NativeArray*)var96)->values[2] = (val*) var79;
((struct instance_array__NativeArray*)var96)->values[3] = (val*) var88;
((struct instance_array__NativeArray*)var96)->values[4] = (val*) var90;
{
((void (*)(val*, val*, long))(var94->class->vft[COLOR_array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
}
}
{
var97 = ((val* (*)(val*))(var94->class->vft[COLOR_string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var97); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var100 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var98) on <var98:ToolContext> */
var103 = var98->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var98:ToolContext> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 62);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline opts#Option#value (var101) on <var101:OptionString> */
var106 = var101->attrs[COLOR_opts__Option___value].val; /* _value on <var101:OptionString> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_ost = var104;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "libunwind";
var112 = 9;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
if (var_ost == NULL) {
var114 = 0; /* <var110:String> cannot be null */
} else {
var115 = string__FlatString___61d_61d(var_ost, var110);
var114 = var115;
}
var_ = var114;
if (var114){
var108 = var_;
} else {
if (varonce116) {
var117 = varonce116;
} else {
var118 = "nitstack";
var119 = 8;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (var_ost == NULL) {
var121 = 0; /* <var117:String> cannot be null */
} else {
var122 = string__FlatString___61d_61d(var_ost, var117);
var121 = var122;
}
var108 = var121;
}
var_123 = var108;
if (var108){
var125 = NULL;
if (var_platform == NULL) {
var126 = 1; /* is null */
} else {
var126 = 0; /* arg is null but recv is not */
}
if (0) {
var127 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___61d_61d]))(var_platform, var125) /* == on <var_platform:nullable Platform>*/;
var126 = var127;
}
var_128 = var126;
if (var126){
var124 = var_128;
} else {
{
var129 = ((short int (*)(val*))(var_platform->class->vft[COLOR_platform__Platform__supports_libunwind]))(var_platform) /* supports_libunwind on <var_platform:nullable Platform(Platform)>*/;
}
var124 = var129;
}
var107 = var124;
} else {
var107 = var_123;
}
if (var107){
if (varonce130) {
var131 = varonce130;
} else {
var132 = "NEED_LIBUNWIND := YesPlease\n";
var133 = 28;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
{
file__OFStream__write(var_makefile, var131); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
} else {
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "uname_S := $(shell sh -c \'uname -s 2>/dev/null || echo not\')\n";
var138 = 61;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
file__OFStream__write(var_makefile, var136); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "ifeq ($(uname_S),Darwin)\n";
var143 = 25;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
file__OFStream__write(var_makefile, var141); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "\11NEED_LIBUNWIND :=\n";
var148 = 19;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
file__OFStream__write(var_makefile, var146); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = "endif\n\n";
var153 = 7;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
file__OFStream__write(var_makefile, var151); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "clang_check := $(shell sh -c \'$(CC) -v 2>&1 | grep -q clang; echo $$?\')\nifeq ($(clang_check), 0)\n\11CFLAGS += -Qunused-arguments\nendif\n";
var158 = 133;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
{
file__OFStream__write(var_makefile, var156); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = "ifdef NEED_LIBUNWIND\n\11LDLIBS += -lunwind\nendif\n";
var163 = 47;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
file__OFStream__write(var_makefile, var161); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "all: ";
var168 = 5;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "\n\n";
var173 = 2;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var175 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var175 = array_instance Array[Object] */
var176 = 3;
var177 = NEW_array__NativeArray(var176, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var177)->values[0] = (val*) var166;
((struct instance_array__NativeArray*)var177)->values[1] = (val*) var_outpath;
((struct instance_array__NativeArray*)var177)->values[2] = (val*) var171;
{
((void (*)(val*, val*, long))(var175->class->vft[COLOR_array__Array__with_native]))(var175, var177, var176) /* with_native on <var175:Array[Object]>*/;
}
}
{
var178 = ((val* (*)(val*))(var175->class->vft[COLOR_string__Object__to_s]))(var175) /* to_s on <var175:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var178); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
var179 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var179); /* Direct call array#Array#init on <var179:Array[String]>*/
}
var_ofiles = var179;
var180 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var180); /* Direct call array#Array#init on <var180:Array[String]>*/
}
var_dep_rules = var180;
{
var181 = array__AbstractArrayRead__iterator(var_cfiles);
}
for(;;) {
{
var182 = array__ArrayIterator__is_ok(var181);
}
if(!var182) break;
{
var183 = array__ArrayIterator__item(var181);
}
var_f = var183;
if (varonce184) {
var185 = varonce184;
} else {
var186 = ".c";
var187 = 2;
var188 = string__NativeString__to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
var189 = file__String__strip_extension(var_f, var185);
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = ".o";
var193 = 2;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
var195 = string__FlatString___43d(var189, var191);
}
var_o = var195;
if (varonce196) {
var197 = varonce196;
} else {
var198 = ": ";
var199 = 2;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = "\n\11$(CC) $(CFLAGS) $(CINCL) -c -o ";
var204 = 33;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = " ";
var209 = 1;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = "\n\n";
var214 = 2;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var216 = array_instance Array[Object] */
var217 = 8;
var218 = NEW_array__NativeArray(var217, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var218)->values[0] = (val*) var_o;
((struct instance_array__NativeArray*)var218)->values[1] = (val*) var197;
((struct instance_array__NativeArray*)var218)->values[2] = (val*) var_f;
((struct instance_array__NativeArray*)var218)->values[3] = (val*) var202;
((struct instance_array__NativeArray*)var218)->values[4] = (val*) var_o;
((struct instance_array__NativeArray*)var218)->values[5] = (val*) var207;
((struct instance_array__NativeArray*)var218)->values[6] = (val*) var_f;
((struct instance_array__NativeArray*)var218)->values[7] = (val*) var212;
{
((void (*)(val*, val*, long))(var216->class->vft[COLOR_array__Array__with_native]))(var216, var218, var217) /* with_native on <var216:Array[Object]>*/;
}
}
{
var219 = ((val* (*)(val*))(var216->class->vft[COLOR_string__Object__to_s]))(var216) /* to_s on <var216:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var219); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
array__Array__add(var_ofiles, var_o); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
{
array__Array__add(var_dep_rules, var_o); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
CONTINUE_label220: (void)0;
{
array__ArrayIterator__next(var181); /* Direct call array#ArrayIterator#next on <var181:ArrayIterator[nullable Object]>*/
}
}
BREAK_label220: (void)0;
var221 = NEW_array__Array(&type_array__Arrayc_tools__ExternFile);
{
array__Array__init(var221); /* Direct call array#Array#init on <var221:Array[ExternFile]>*/
}
var_java_files = var221;
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var_compiler) on <var_compiler:AbstractCompiler> */
var224 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var_compiler:AbstractCompiler> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 847);
show_backtrace(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
var225 = array__AbstractArrayRead__iterator(var222);
}
for(;;) {
{
var226 = array__ArrayIterator__is_ok(var225);
}
if(!var226) break;
{
var227 = array__ArrayIterator__item(var225);
}
var_f228 = var227;
{
var229 = c_tools__ExternCFile__makefile_rule_name(var_f228);
}
var_o230 = var229;
{
{ /* Inline c_tools#ExternFile#filename (var_f228) on <var_f228:ExternFile> */
var233 = var_f228->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <var_f228:ExternFile> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/c_tools.nit", 104);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = "";
var237 = 0;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
{
var239 = file__String__basename(var231, var235);
}
var_ff = var239;
if (varonce240) {
var241 = varonce240;
} else {
var242 = ": ";
var243 = 2;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = "\n";
var248 = 1;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
var250 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var250 = array_instance Array[Object] */
var251 = 4;
var252 = NEW_array__NativeArray(var251, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var252)->values[0] = (val*) var_o230;
((struct instance_array__NativeArray*)var252)->values[1] = (val*) var241;
((struct instance_array__NativeArray*)var252)->values[2] = (val*) var_ff;
((struct instance_array__NativeArray*)var252)->values[3] = (val*) var246;
{
((void (*)(val*, val*, long))(var250->class->vft[COLOR_array__Array__with_native]))(var250, var252, var251) /* with_native on <var250:Array[Object]>*/;
}
}
{
var253 = ((val* (*)(val*))(var250->class->vft[COLOR_string__Object__to_s]))(var250) /* to_s on <var250:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var253); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = "\11";
var257 = 1;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
var259 = c_tools__ExternCFile__makefile_rule_content(var_f228);
}
if (varonce260) {
var261 = varonce260;
} else {
var262 = "\n\n";
var263 = 2;
var264 = string__NativeString__to_s_with_length(var262, var263);
var261 = var264;
varonce260 = var261;
}
var265 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var265 = array_instance Array[Object] */
var266 = 3;
var267 = NEW_array__NativeArray(var266, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var267)->values[0] = (val*) var255;
((struct instance_array__NativeArray*)var267)->values[1] = (val*) var259;
((struct instance_array__NativeArray*)var267)->values[2] = (val*) var261;
{
((void (*)(val*, val*, long))(var265->class->vft[COLOR_array__Array__with_native]))(var265, var267, var266) /* with_native on <var265:Array[Object]>*/;
}
}
{
var268 = ((val* (*)(val*))(var265->class->vft[COLOR_string__Object__to_s]))(var265) /* to_s on <var265:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var268); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
var269 = c_tools__ExternCFile__makefile_rule_name(var_f228);
}
{
array__Array__add(var_dep_rules, var269); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
var270 = c_tools__ExternCFile__compiles_to_o_file(var_f228);
}
if (var270){
{
array__Array__add(var_ofiles, var_o230); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
} else {
}
{
var271 = c_tools__ExternFile__add_to_jar(var_f228);
}
if (var271){
{
array__Array__add(var_java_files, var_f228); /* Direct call array#Array#add on <var_java_files:Array[ExternFile]>*/
}
} else {
}
CONTINUE_label272: (void)0;
{
array__ArrayIterator__next(var225); /* Direct call array#ArrayIterator#next on <var225:ArrayIterator[nullable Object]>*/
}
}
BREAK_label272: (void)0;
{
var273 = array__AbstractArrayRead__is_empty(var_java_files);
}
var274 = !var273;
if (var274){
if (varonce275) {
var276 = varonce275;
} else {
var277 = ".jar";
var278 = 4;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 2;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var276;
{
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
}
{
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
}
var_jar_file = var283;
var284 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var284); /* Direct call array#Array#init on <var284:Array[String]>*/
}
var_class_files_array = var284;
{
var285 = array__AbstractArrayRead__iterator(var_java_files);
}
for(;;) {
{
var286 = array__ArrayIterator__is_ok(var285);
}
if(!var286) break;
{
var287 = array__ArrayIterator__item(var285);
}
var_f288 = var287;
{
var289 = c_tools__ExternCFile__makefile_rule_name(var_f288);
}
{
array__Array__add(var_class_files_array, var289); /* Direct call array#Array#add on <var_class_files_array:Array[String]>*/
}
CONTINUE_label290: (void)0;
{
array__ArrayIterator__next(var285); /* Direct call array#ArrayIterator#next on <var285:ArrayIterator[nullable Object]>*/
}
}
BREAK_label290: (void)0;
if (varonce291) {
var292 = varonce291;
} else {
var293 = " ";
var294 = 1;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
{
var296 = string__Collection__join(var_class_files_array, var292);
}
var_class_files = var296;
if (varonce297) {
var298 = varonce297;
} else {
var299 = ": ";
var300 = 2;
var301 = string__NativeString__to_s_with_length(var299, var300);
var298 = var301;
varonce297 = var298;
}
if (varonce302) {
var303 = varonce302;
} else {
var304 = "\n";
var305 = 1;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
var307 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var307 = array_instance Array[Object] */
var308 = 4;
var309 = NEW_array__NativeArray(var308, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var309)->values[0] = (val*) var_jar_file;
((struct instance_array__NativeArray*)var309)->values[1] = (val*) var298;
((struct instance_array__NativeArray*)var309)->values[2] = (val*) var_class_files;
((struct instance_array__NativeArray*)var309)->values[3] = (val*) var303;
{
((void (*)(val*, val*, long))(var307->class->vft[COLOR_array__Array__with_native]))(var307, var309, var308) /* with_native on <var307:Array[Object]>*/;
}
}
{
var310 = ((val* (*)(val*))(var307->class->vft[COLOR_string__Object__to_s]))(var307) /* to_s on <var307:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var310); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = "\11jar cf ";
var314 = 8;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
if (varonce316) {
var317 = varonce316;
} else {
var318 = " ";
var319 = 1;
var320 = string__NativeString__to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
if (varonce321) {
var322 = varonce321;
} else {
var323 = "\n\n";
var324 = 2;
var325 = string__NativeString__to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
var326 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var326 = array_instance Array[Object] */
var327 = 5;
var328 = NEW_array__NativeArray(var327, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var328)->values[0] = (val*) var312;
((struct instance_array__NativeArray*)var328)->values[1] = (val*) var_jar_file;
((struct instance_array__NativeArray*)var328)->values[2] = (val*) var317;
((struct instance_array__NativeArray*)var328)->values[3] = (val*) var_class_files;
((struct instance_array__NativeArray*)var328)->values[4] = (val*) var322;
{
((void (*)(val*, val*, long))(var326->class->vft[COLOR_array__Array__with_native]))(var326, var328, var327) /* with_native on <var326:Array[Object]>*/;
}
}
{
var329 = ((val* (*)(val*))(var326->class->vft[COLOR_string__Object__to_s]))(var326) /* to_s on <var326:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var329); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
array__Array__add(var_dep_rules, var_jar_file); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
} else {
}
if (varonce330) {
var331 = varonce330;
} else {
var332 = ": ";
var333 = 2;
var334 = string__NativeString__to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
if (varonce335) {
var336 = varonce335;
} else {
var337 = " ";
var338 = 1;
var339 = string__NativeString__to_s_with_length(var337, var338);
var336 = var339;
varonce335 = var336;
}
{
var340 = string__Collection__join(var_dep_rules, var336);
}
if (varonce341) {
var342 = varonce341;
} else {
var343 = "\n\11$(CC) $(LDFLAGS) -o ";
var344 = 22;
var345 = string__NativeString__to_s_with_length(var343, var344);
var342 = var345;
varonce341 = var342;
}
if (varonce346) {
var347 = varonce346;
} else {
var348 = " ";
var349 = 1;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
if (varonce351) {
var352 = varonce351;
} else {
var353 = " ";
var354 = 1;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
{
var356 = string__Collection__join(var_ofiles, var352);
}
if (varonce357) {
var358 = varonce357;
} else {
var359 = " $(LDLIBS)\n\n";
var360 = 12;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var362 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var362 = array_instance Array[Object] */
var363 = 8;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var364)->values[1] = (val*) var331;
((struct instance_array__NativeArray*)var364)->values[2] = (val*) var340;
((struct instance_array__NativeArray*)var364)->values[3] = (val*) var342;
((struct instance_array__NativeArray*)var364)->values[4] = (val*) var_outpath;
((struct instance_array__NativeArray*)var364)->values[5] = (val*) var347;
((struct instance_array__NativeArray*)var364)->values[6] = (val*) var356;
((struct instance_array__NativeArray*)var364)->values[7] = (val*) var358;
{
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[Object]>*/;
}
}
{
var365 = ((val* (*)(val*))(var362->class->vft[COLOR_string__Object__to_s]))(var362) /* to_s on <var362:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var365); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce366) {
var367 = varonce366;
} else {
var368 = "clean:\n\11rm ";
var369 = 11;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = " ";
var374 = 1;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
{
var376 = string__Collection__join(var_ofiles, var372);
}
if (varonce377) {
var378 = varonce377;
} else {
var379 = " 2>/dev/null\n\n";
var380 = 14;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
var382 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var382 = array_instance Array[Object] */
var383 = 3;
var384 = NEW_array__NativeArray(var383, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var384)->values[0] = (val*) var367;
((struct instance_array__NativeArray*)var384)->values[1] = (val*) var376;
((struct instance_array__NativeArray*)var384)->values[2] = (val*) var378;
{
((void (*)(val*, val*, long))(var382->class->vft[COLOR_array__Array__with_native]))(var382, var384, var383) /* with_native on <var382:Array[Object]>*/;
}
}
{
var385 = ((val* (*)(val*))(var382->class->vft[COLOR_string__Object__to_s]))(var382) /* to_s on <var382:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var385); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
file__OFStream__close(var_makefile); /* Direct call file#OFStream#close on <var_makefile:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var388 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var388 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var386 = var388;
RET_LABEL387:(void)0;
}
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = "Generated makefile: ";
var392 = 20;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
var394 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var394 = array_instance Array[Object] */
var395 = 2;
var396 = NEW_array__NativeArray(var395, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var396)->values[0] = (val*) var390;
((struct instance_array__NativeArray*)var396)->values[1] = (val*) var_makepath;
{
((void (*)(val*, val*, long))(var394->class->vft[COLOR_array__Array__with_native]))(var394, var396, var395) /* with_native on <var394:Array[Object]>*/;
}
}
{
var397 = ((val* (*)(val*))(var394->class->vft[COLOR_string__Object__to_s]))(var394) /* to_s on <var394:Array[Object]>*/;
}
var398 = 2;
{
toolcontext__ToolContext__info(var386, var397, var398); /* Direct call toolcontext#ToolContext#info on <var386:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: Object, AbstractCompiler, String, Array[String]) */
void VIRTUAL_abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__MakefileToolchain__write_makefile(self, p0, p1, p2); /* Direct call abstract_compiler#MakefileToolchain#write_makefile on <self:Object(MakefileToolchain)>*/
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: MakefileToolchain, AbstractCompiler, String) */
void abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0, val* p1) {
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
short int var114 /* : Bool */;
short int var116 /* : Bool */;
long var117 /* : Int */;
short int var118 /* : Bool */;
val* var119 /* : ToolContext */;
val* var121 /* : ToolContext */;
val* var122 /* : null */;
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
val* var133 /* : Array[Object] */;
long var134 /* : Int */;
val* var135 /* : NativeArray[Object] */;
val* var136 /* : String */;
var_compiler = p0;
var_compile_dir = p1;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = abstract_compiler__MakefileToolchain__makefile_name(self, var);
}
var_makename = var3;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var6 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 38);
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
var15 = string__FlatString___61d_61d(var_makeflags, var13);
var14 = var15;
}
if (var14){
if (varonce) {
var16 = varonce;
} else {
var17 = "";
var18 = 0;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
var_makeflags = var16;
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var22 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
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
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " -f ";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " -j 4 ";
var36 = 6;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 6;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var40)->values[4] = (val*) var34;
((struct instance_array__NativeArray*)var40)->values[5] = (val*) var_makeflags;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
var42 = 2;
{
toolcontext__ToolContext__info(var20, var41, var42); /* Direct call toolcontext#ToolContext#info on <var20:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var45 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var43) on <var43:ToolContext> */
var48 = var43->attrs[COLOR_toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var43:ToolContext> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
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
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = " -f ";
var65 = 4;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = " -j 4 ";
var70 = 6;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = " 2>&1";
var75 = 5;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 7;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var58;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var63;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var79)->values[4] = (val*) var68;
((struct instance_array__NativeArray*)var79)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var79)->values[6] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
var81 = exec__Sys__system(var54, var80);
}
var82 = BOX_kernel__Int(var81); /* autobox from Int to nullable Object */
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
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = " -f ";
var94 = 4;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = " -j 4 ";
var99 = 6;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = " 2>&1 >/dev/null";
var104 = 16;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 7;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var87;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var92;
((struct instance_array__NativeArray*)var108)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var108)->values[4] = (val*) var97;
((struct instance_array__NativeArray*)var108)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var108)->values[6] = (val*) var102;
{
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
}
{
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
}
{
var110 = exec__Sys__system(var83, var109);
}
var111 = BOX_kernel__Int(var110); /* autobox from Int to nullable Object */
var_res = var111;
}
var112 = 0;
{
{ /* Inline kernel#Int#!= (var_res,var112) on <var_res:nullable Object(Int)> */
var116 = (var_res != NULL) && (var_res->class == &class_kernel__Int);
if (var116) {
var117 = ((struct instance_kernel__Int*)var_res)->value; /* autounbox from nullable Object to Int */;
var116 = (var117 == var112);
}
var118 = !var116;
var114 = var118;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var121 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 126);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var122 = NULL;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "make failed! Error code: ";
var126 = 25;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = ".";
var131 = 1;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 3;
var135 = NEW_array__NativeArray(var134, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var135)->values[0] = (val*) var124;
((struct instance_array__NativeArray*)var135)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var135)->values[2] = (val*) var129;
{
((void (*)(val*, val*, long))(var133->class->vft[COLOR_array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
}
{
var136 = ((val* (*)(val*))(var133->class->vft[COLOR_string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var119, var122, var136); /* Direct call toolcontext#ToolContext#error on <var119:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: Object, AbstractCompiler, String) */
void VIRTUAL_abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0, val* p1) {
abstract_compiler__MakefileToolchain__compile_c_code(self, p0, p1); /* Direct call abstract_compiler#MakefileToolchain#compile_c_code on <self:Object(MakefileToolchain)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#names for (self: AbstractCompiler): HashMap[String, String] */
val* abstract_compiler__AbstractCompiler__names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#names for (self: Object): HashMap[String, String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, String] */;
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule for (self: AbstractCompiler): MModule */
val* abstract_compiler__AbstractCompiler__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule for (self: Object): MModule */
val* VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule= for (self: AbstractCompiler, MModule) */
void abstract_compiler__AbstractCompiler__mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = p0; /* _mainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#mainmodule= for (self: Object, MModule) */
void VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,p0) on <self:Object(AbstractCompiler)> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = p0; /* _mainmodule on <self:Object(AbstractCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule for (self: AbstractCompiler): MModule */
val* abstract_compiler__AbstractCompiler__realmainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 440);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule for (self: Object): MModule */
val* VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 440);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule= for (self: AbstractCompiler, MModule) */
void abstract_compiler__AbstractCompiler__realmainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val = p0; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule= for (self: Object, MModule) */
void VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule= (self,p0) on <self:Object(AbstractCompiler)> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val = p0; /* _realmainmodule on <self:Object(AbstractCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder for (self: AbstractCompiler): ModelBuilder */
val* abstract_compiler__AbstractCompiler__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder for (self: Object): ModelBuilder */
val* VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder= for (self: AbstractCompiler, ModelBuilder) */
void abstract_compiler__AbstractCompiler__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val = p0; /* _modelbuilder on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder= (self,p0) on <self:Object(AbstractCompiler)> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val = p0; /* _modelbuilder on <self:Object(AbstractCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#init for (self: AbstractCompiler, MModule, ModelBuilder) */
void abstract_compiler__AbstractCompiler__init(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_mainmodule = p0;
var_modelbuilder = p1;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mainmodule) on <self:AbstractCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_mainmodule; /* _mainmodule on <self:AbstractCompiler> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule= (self,var_mainmodule) on <self:AbstractCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val = var_mainmodule; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder= (self,var_modelbuilder) on <self:AbstractCompiler> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val = var_modelbuilder; /* _modelbuilder on <self:AbstractCompiler> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#init for (self: Object, MModule, ModelBuilder) */
void VIRTUAL_abstract_compiler__AbstractCompiler__init(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompiler__init(self, p0, p1); /* Direct call abstract_compiler#AbstractCompiler#init on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#new_file for (self: AbstractCompiler, String): CodeFile */
val* abstract_compiler__AbstractCompiler__new_file(val* self, val* p0) {
val* var /* : CodeFile */;
val* var_name /* var name: String */;
val* var1 /* : CodeFile */;
val* var_f /* var f: CodeFile */;
val* var3 /* : List[CodeFile] */;
val* var5 /* : List[CodeFile] */;
var_name = p0;
var1 = NEW_abstract_compiler__CodeFile(&type_abstract_compiler__CodeFile);
{
{ /* Inline abstract_compiler#CodeFile#init (var1,var_name) on <var1:CodeFile> */
var1->attrs[COLOR_abstract_compiler__CodeFile___name].val = var_name; /* _name on <var1:CodeFile> */
RET_LABEL2:(void)0;
}
}
var_f = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var5 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 465);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
abstract_collection__Sequence__add(var3, var_f); /* Direct call abstract_collection#Sequence#add on <var3:List[CodeFile]>*/
}
var = var_f;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#new_file for (self: Object, String): CodeFile */
val* VIRTUAL_abstract_compiler__AbstractCompiler__new_file(val* self, val* p0) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = abstract_compiler__AbstractCompiler__new_file(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files for (self: AbstractCompiler): List[CodeFile] */
val* abstract_compiler__AbstractCompiler__files(val* self) {
val* var /* : List[CodeFile] */;
val* var1 /* : List[CodeFile] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 465);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files for (self: Object): List[CodeFile] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__files(val* self) {
val* var /* : List[CodeFile] */;
val* var1 /* : List[CodeFile] */;
val* var3 /* : List[CodeFile] */;
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 465);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header for (self: AbstractCompiler): CodeWriter */
val* abstract_compiler__AbstractCompiler__header(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header for (self: Object): CodeWriter */
val* VIRTUAL_abstract_compiler__AbstractCompiler__header(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
val* var3 /* : CodeWriter */;
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header= for (self: AbstractCompiler, CodeWriter) */
void abstract_compiler__AbstractCompiler__header_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val = p0; /* _header on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#header= for (self: Object, CodeWriter) */
void VIRTUAL_abstract_compiler__AbstractCompiler__header_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractCompiler#header= (self,p0) on <self:Object(AbstractCompiler)> */
self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val = p0; /* _header on <self:Object(AbstractCompiler)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provide_declaration for (self: AbstractCompiler, String, String) */
void abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_s /* var s: String */;
val* var /* : HashMap[String, String] */;
val* var2 /* : HashMap[String, String] */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[String, String] */;
val* var6 /* : HashMap[String, String] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : HashMap[String, String] */;
val* var12 /* : HashMap[String, String] */;
var_key = p0;
var_s = p1;
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = abstract_collection__MapRead__has_key(var, var_key);
}
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = hash_collection__HashMap___91d_93d(var4, var_key);
}
{
var9 = string__FlatString___61d_61d(var7, var_s);
var8 = var9;
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 479);
show_backtrace(1);
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var10, var_key, var_s); /* Direct call hash_collection#HashMap#[]= on <var10:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provide_declaration for (self: Object, String, String) */
void VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompiler__provide_declaration(self, p0, p1); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations for (self: AbstractCompiler): HashMap[String, String] */
val* abstract_compiler__AbstractCompiler__provided_declarations(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations for (self: Object): HashMap[String, String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, String] */;
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 484);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations for (self: AbstractCompiler): HashMap[String, ANode] */
val* abstract_compiler__AbstractCompiler__requirers_of_declarations(val* self) {
val* var /* : HashMap[String, ANode] */;
val* var1 /* : HashMap[String, ANode] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 486);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations for (self: Object): HashMap[String, ANode] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations(val* self) {
val* var /* : HashMap[String, ANode] */;
val* var1 /* : HashMap[String, ANode] */;
val* var3 /* : HashMap[String, ANode] */;
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (self) on <self:Object(AbstractCompiler)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <self:Object(AbstractCompiler)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 486);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(val* self) {
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
val* var77 /* : RemovableCollection[Object] */;
val* var79 /* : RemovableCollection[Object] */;
val* var80 /* : Iterator[nullable Object] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_i /* var i: String */;
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
val* var93 /* : HashMap[String, String] */;
val* var95 /* : HashMap[String, String] */;
val* var96 /* : nullable Object */;
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
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : HashMap[String, String] */;
val* var119 /* : HashMap[String, String] */;
long var120 /* : Int */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : Object */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
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
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
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
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : OFStream */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : FlatString */;
val* var177 /* : Array[Object] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[Object] */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : Array[ExternFile] */;
val* var188 /* : Array[ExternFile] */;
val* var189 /* : ExternCFile */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{ /* Inline abstract_compiler#ModelBuilder#compile_dir (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val; /* _compile_dir on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compile_dir");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 103);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_compile_dir = var3;
var6 = NEW_file__OFStream(&type_file__OFStream);
if (varonce) {
var7 = varonce;
} else {
var8 = "/c_functions_hash.c";
var9 = 19;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 2;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
{
file__OFStream__open(var6, var14); /* Direct call file#OFStream#open on <var6:OFStream>*/
}
var_stream = var6;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "#include <string.h>\n";
var18 = 20;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
file__OFStream__write(var_stream, var16); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "#include <stdlib.h>\n";
var23 = 20;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
file__OFStream__write(var_stream, var21); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "#include \"c_functions_hash.h\"\n";
var28 = 30;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
{
file__OFStream__write(var_stream, var26); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var33 = 68;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
file__OFStream__write(var_stream, var31); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "const char* get_nit_name(register const char* procproc, register unsigned int len){\n";
var38 = 84;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
file__OFStream__write(var_stream, var36); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "char* procname = malloc(len+1);";
var43 = 31;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
file__OFStream__write(var_stream, var41); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "memcpy(procname, procproc, len);";
var48 = 32;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
file__OFStream__write(var_stream, var46); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "procname[len] = \'\\0\';";
var53 = 21;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
file__OFStream__write(var_stream, var51); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "static const C_Nit_Names map[";
var58 = 29;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var62 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = hash_collection__HashMap__length(var60);
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "] = {\n";
var67 = 6;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var56;
var72 = BOX_kernel__Int(var63); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var72;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
file__OFStream__write(var_stream, var73); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var76 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var74) on <var74:HashMap[String, String]> */
var79 = var74->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var74:HashMap[String, String]> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_abstract_collection__Collection__iterator]))(var77) /* iterator on <var77:RemovableCollection[Object](RemovableCollection[String])>*/;
}
for(;;) {
{
var81 = ((short int (*)(val*))(var80->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var80) /* is_ok on <var80:Iterator[nullable Object]>*/;
}
if(!var81) break;
{
var82 = ((val* (*)(val*))(var80->class->vft[COLOR_abstract_collection__Iterator__item]))(var80) /* item on <var80:Iterator[nullable Object]>*/;
}
var_i = var82;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "{\"";
var86 = 2;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
file__OFStream__write(var_stream, var84); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
file__OFStream__write(var_stream, var_i); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "\",\"";
var91 = 3;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
file__OFStream__write(var_stream, var89); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var95 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = hash_collection__HashMap___91d_93d(var93, var_i);
}
{
file__OFStream__write(var_stream, var96); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "\"},\n";
var100 = 4;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
{
file__OFStream__write(var_stream, var98); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var80->class->vft[COLOR_abstract_collection__Iterator__next]))(var80) /* next on <var80:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "};\n";
var105 = 3;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
file__OFStream__write(var_stream, var103); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "int i;";
var110 = 6;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
file__OFStream__write(var_stream, var108); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "for(i = 0; i < ";
var115 = 15;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var119 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = hash_collection__HashMap__length(var117);
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "; i++){";
var124 = 7;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 3;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var113;
var129 = BOX_kernel__Int(var120); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var129;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var122;
{
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var130 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
file__OFStream__write(var_stream, var130); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "if(strcmp(procname,map[i].name) == 0){";
var134 = 38;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
{
file__OFStream__write(var_stream, var132); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "free(procname);";
var139 = 15;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
file__OFStream__write(var_stream, var137); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = "return map[i].nit_name;";
var144 = 23;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
file__OFStream__write(var_stream, var142); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = "}";
var149 = 1;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
{
file__OFStream__write(var_stream, var147); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = "}";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
{
file__OFStream__write(var_stream, var152); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = "free(procname);";
var159 = 15;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
file__OFStream__write(var_stream, var157); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = "return NULL;";
var164 = 12;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
{
file__OFStream__write(var_stream, var162); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = "}\n";
var169 = 2;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
{
file__OFStream__write(var_stream, var167); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
file__OFStream__close(var_stream); /* Direct call file#OFStream#close on <var_stream:OFStream>*/
}
var171 = NEW_file__OFStream(&type_file__OFStream);
if (varonce172) {
var173 = varonce172;
} else {
var174 = "/c_functions_hash.h";
var175 = 19;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
var177 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var177 = array_instance Array[Object] */
var178 = 2;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var179)->values[1] = (val*) var173;
{
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[Object]>*/;
}
}
{
var180 = ((val* (*)(val*))(var177->class->vft[COLOR_string__Object__to_s]))(var177) /* to_s on <var177:Array[Object]>*/;
}
{
file__OFStream__open(var171, var180); /* Direct call file#OFStream#open on <var171:OFStream>*/
}
var_stream = var171;
if (varonce181) {
var182 = varonce181;
} else {
var183 = "const char* get_nit_name(register const char* procname, register unsigned int len);\n";
var184 = 84;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
file__OFStream__write(var_stream, var182); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
file__OFStream__close(var_stream); /* Direct call file#OFStream#close on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (self) on <self:AbstractCompiler> */
var188 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 847);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
var189 = NEW_c_tools__ExternCFile(&type_c_tools__ExternCFile);
if (varonce190) {
var191 = varonce190;
} else {
var192 = "/c_functions_hash.c";
var193 = 19;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 2;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var191;
{
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
}
{
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
}
if (varonce199) {
var200 = varonce199;
} else {
var201 = "";
var202 = 0;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
{
c_tools__ExternCFile__init(var189, var198, var200); /* Direct call c_tools#ExternCFile#init on <var189:ExternCFile>*/
}
{
array__Array__add(var186, var189); /* Direct call array#Array#add on <var186:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(val* self) {
abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(self); /* Direct call abstract_compiler#AbstractCompiler#build_c_to_nit_bindings on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_header(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var_v /* var v: CodeWriter */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var_toolctx /* var toolctx: ToolContext */;
val* var9 /* : CodeWriter */;
val* var11 /* : CodeWriter */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : CodeWriter */;
val* var18 /* : CodeWriter */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : CodeWriter */;
val* var26 /* : CodeWriter */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : CodeWriter */;
val* var34 /* : CodeWriter */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : CodeWriter */;
val* var42 /* : CodeWriter */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : CodeWriter */;
val* var50 /* : CodeWriter */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : CodeWriter */;
val* var58 /* : CodeWriter */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : CodeWriter */;
val* var66 /* : CodeWriter */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : CodeWriter */;
val* var74 /* : CodeWriter */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : CodeWriter */;
val* var82 /* : CodeWriter */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : ModelBuilder */;
val* var90 /* : ModelBuilder */;
val* var91 /* : ToolContext */;
val* var93 /* : ToolContext */;
val* var94 /* : OptionArray */;
val* var96 /* : OptionArray */;
val* var97 /* : nullable Object */;
val* var99 /* : nullable Object */;
val* var_gccd_disable /* var gccd_disable: Array[String] */;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
short int var106 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
short int var112 /* : Bool */;
val* var113 /* : CodeWriter */;
val* var115 /* : CodeWriter */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : CodeWriter */;
val* var123 /* : CodeWriter */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
short int var135 /* : Bool */;
short int var_136 /* var : Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
short int var142 /* : Bool */;
val* var143 /* : CodeWriter */;
val* var145 /* : CodeWriter */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var151 /* : CodeWriter */;
val* var153 /* : CodeWriter */;
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
short int var164 /* : Bool */;
val* var165 /* : CodeWriter */;
val* var167 /* : CodeWriter */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : CodeWriter */;
val* var175 /* : CodeWriter */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : CodeWriter */;
val* var183 /* : CodeWriter */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
val* var189 /* : CodeWriter */;
val* var191 /* : CodeWriter */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : CodeWriter */;
val* var199 /* : CodeWriter */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var205 /* : CodeWriter */;
val* var207 /* : CodeWriter */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
val* var213 /* : CodeWriter */;
val* var215 /* : CodeWriter */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_v = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var5 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_toolctx = var6;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (varonce) {
var12 = varonce;
} else {
var13 = "#include <stdlib.h>";
var14 = 19;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
abstract_compiler__CodeWriter__add_decl(var9, var12); /* Direct call abstract_compiler#CodeWriter#add_decl on <var9:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var18 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "#include <stdio.h>";
var22 = 18;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
abstract_compiler__CodeWriter__add_decl(var16, var20); /* Direct call abstract_compiler#CodeWriter#add_decl on <var16:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var26 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "#include <string.h>";
var30 = 19;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
abstract_compiler__CodeWriter__add_decl(var24, var28); /* Direct call abstract_compiler#CodeWriter#add_decl on <var24:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var34 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "#include \"gc_chooser.h\"";
var38 = 23;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
abstract_compiler__CodeWriter__add_decl(var32, var36); /* Direct call abstract_compiler#CodeWriter#add_decl on <var32:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var42 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "#ifdef ANDROID";
var46 = 14;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
abstract_compiler__CodeWriter__add_decl(var40, var44); /* Direct call abstract_compiler#CodeWriter#add_decl on <var40:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var50 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\11#include <android/log.h>";
var54 = 25;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
abstract_compiler__CodeWriter__add_decl(var48, var52); /* Direct call abstract_compiler#CodeWriter#add_decl on <var48:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var58 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "\11#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)";
var62 = 89;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
abstract_compiler__CodeWriter__add_decl(var56, var60); /* Direct call abstract_compiler#CodeWriter#add_decl on <var56:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var66 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "#else";
var70 = 5;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
abstract_compiler__CodeWriter__add_decl(var64, var68); /* Direct call abstract_compiler#CodeWriter#add_decl on <var64:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var74 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "\11#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)";
var78 = 54;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
abstract_compiler__CodeWriter__add_decl(var72, var76); /* Direct call abstract_compiler#CodeWriter#add_decl on <var72:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var82 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = "#endif";
var86 = 6;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
abstract_compiler__CodeWriter__add_decl(var80, var84); /* Direct call abstract_compiler#CodeWriter#add_decl on <var80:CodeWriter>*/
}
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header_structs]))(self) /* compile_header_structs on <self:AbstractCompiler>*/;
}
{
separate_compiler__SeparateCompiler__compile_nitni_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_nitni_structs on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var90 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var88) on <var88:ModelBuilder> */
var93 = var88->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var88:ModelBuilder> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (var91) on <var91:ToolContext> */
var96 = var91->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var91:ToolContext> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 64);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline opts#Option#value (var94) on <var94:OptionArray> */
var99 = var94->attrs[COLOR_opts__Option___value].val; /* _value on <var94:OptionArray> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_gccd_disable = var97;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "noreturn";
var104 = 8;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = array__AbstractArrayRead__has(var_gccd_disable, var102);
}
var_ = var106;
if (var106){
var100 = var_;
} else {
if (varonce107) {
var108 = varonce107;
} else {
var109 = "all";
var110 = 3;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
var112 = array__AbstractArrayRead__has(var_gccd_disable, var108);
}
var100 = var112;
}
if (var100){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var115 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "void show_backtrace(int);";
var119 = 25;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
abstract_compiler__CodeWriter__add_decl(var113, var117); /* Direct call abstract_compiler#CodeWriter#add_decl on <var113:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var123 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "void show_backtrace(int) __attribute__ ((noreturn));";
var127 = 52;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
{
abstract_compiler__CodeWriter__add_decl(var121, var125); /* Direct call abstract_compiler#CodeWriter#add_decl on <var121:CodeWriter>*/
}
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "likely";
var133 = 6;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
{
var135 = array__AbstractArrayRead__has(var_gccd_disable, var131);
}
var_136 = var135;
if (var135){
var129 = var_136;
} else {
if (varonce137) {
var138 = varonce137;
} else {
var139 = "all";
var140 = 3;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
{
var142 = array__AbstractArrayRead__has(var_gccd_disable, var138);
}
var129 = var142;
}
if (var129){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var145 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = "#define likely(x)       (x)";
var149 = 27;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
{
abstract_compiler__CodeWriter__add_decl(var143, var147); /* Direct call abstract_compiler#CodeWriter#add_decl on <var143:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var153 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = "#define unlikely(x)     (x)";
var157 = 27;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
{
abstract_compiler__CodeWriter__add_decl(var151, var155); /* Direct call abstract_compiler#CodeWriter#add_decl on <var151:CodeWriter>*/
}
} else {
if (varonce159) {
var160 = varonce159;
} else {
var161 = "correct-likely";
var162 = 14;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
var164 = array__AbstractArrayRead__has(var_gccd_disable, var160);
}
if (var164){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var167 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "#define likely(x)       __builtin_expect((x),0)";
var171 = 47;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
{
abstract_compiler__CodeWriter__add_decl(var165, var169); /* Direct call abstract_compiler#CodeWriter#add_decl on <var165:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var175 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
if (varonce176) {
var177 = varonce176;
} else {
var178 = "#define unlikely(x)     __builtin_expect((x),1)";
var179 = 47;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
{
abstract_compiler__CodeWriter__add_decl(var173, var177); /* Direct call abstract_compiler#CodeWriter#add_decl on <var173:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var183 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = "#define likely(x)       __builtin_expect((x),1)";
var187 = 47;
var188 = string__NativeString__to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
abstract_compiler__CodeWriter__add_decl(var181, var185); /* Direct call abstract_compiler#CodeWriter#add_decl on <var181:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var191 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "#define unlikely(x)     __builtin_expect((x),0)";
var195 = 47;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
{
abstract_compiler__CodeWriter__add_decl(var189, var193); /* Direct call abstract_compiler#CodeWriter#add_decl on <var189:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var199 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = "extern int glob_argc;";
var203 = 21;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
abstract_compiler__CodeWriter__add_decl(var197, var201); /* Direct call abstract_compiler#CodeWriter#add_decl on <var197:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var207 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
if (varonce208) {
var209 = varonce208;
} else {
var210 = "extern char **glob_argv;";
var211 = 24;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
{
abstract_compiler__CodeWriter__add_decl(var205, var209); /* Direct call abstract_compiler#CodeWriter#add_decl on <var205:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var215 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 472);
show_backtrace(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "extern val *glob_sys;";
var219 = 21;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
abstract_compiler__CodeWriter__add_decl(var213, var217); /* Direct call abstract_compiler#CodeWriter#add_decl on <var213:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_header(val* self) {
abstract_compiler__AbstractCompiler__compile_header(self); /* Direct call abstract_compiler#AbstractCompiler#compile_header on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_structs for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var4 = "/* Native reference to Nit objects */\n/* This structure is used to represent every Nit type in extern methods and custom C code. */\nstruct nitni_ref {\n\11struct nitni_ref *next,\n\11\11*prev; /* adjacent global references in global list */\n\11int count; /* number of time this global reference has been marked */\n};\n\n/* List of global references from C code to Nit objects */\n/* Instanciated empty at init of Nit system and filled explicitly by user in C code */\nstruct nitni_global_ref_list_t {\n\11struct nitni_ref *head, *tail;\n};\nextern struct nitni_global_ref_list_t *nitni_global_ref_list;\n\n/* Initializer of global reference list */\nextern void nitni_global_ref_list_init();\n\n/* Intern function to add a global reference to the list */\nextern void nitni_global_ref_add( struct nitni_ref *ref );\n\n/* Intern function to remove a global reference from the list */\nextern void nitni_global_ref_remove( struct nitni_ref *ref );\n\n/* Increase count on an existing global reference */\nextern void nitni_global_ref_incr( struct nitni_ref *ref );\n\n/* Decrease count on an existing global reference */\nextern void nitni_global_ref_decr( struct nitni_ref *ref );\n";
var5 = 1146;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
abstract_compiler__CodeWriter__add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_structs for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
abstract_compiler__AbstractCompiler__compile_nitni_structs(self); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_structs on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
