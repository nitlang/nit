#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 29);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 29);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 35);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 35);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 37);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 37);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 39);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_max_c_lines for (self: ToolContext): OptionInt */
val* abstract_compiler__ToolContext__opt_max_c_lines(val* self) {
val* var /* : OptionInt */;
val* var1 /* : OptionInt */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 41);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_max_c_lines for (self: Object): OptionInt */
val* VIRTUAL_abstract_compiler__ToolContext__opt_max_c_lines(val* self) {
val* var /* : OptionInt */;
val* var1 /* : OptionInt */;
val* var3 /* : OptionInt */;
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 41);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_group_c_files for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_group_c_files(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 43);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_group_c_files for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_group_c_files(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 43);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 45);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 45);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 47);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 47);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 49);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 51);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 51);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 55);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 55);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_null for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_null(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_null for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_null(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 57);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_all for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_all(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 59);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_all for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_all(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 59);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 69);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 69);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 71);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 71);
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
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
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
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 29);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 31);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 35);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 45);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 47);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var24 = array_instance Array[Option] */
var25 = 7;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var9;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var12;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[5] = (val*) var18;
((struct instance_array__NativeArray*)var26)->values[6] = (val*) var21;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var24); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
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
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 49);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 51);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 55);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 57);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 59);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var48 = array_instance Array[Option] */
var49 = 6;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var33;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var36;
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var39;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var42;
((struct instance_array__NativeArray*)var50)->values[5] = (val*) var45;
{
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var27, var48); /* Direct call opts#OptionContext#add_option on <var27:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var53 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 61);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
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
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 69);
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
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 71);
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
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var95 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (self) on <self:ToolContext> */
var98 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 41);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (self) on <self:ToolContext> */
var101 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 43);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
var102 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var102 = array_instance Array[Option] */
var103 = 2;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var96;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var99;
{
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var93, var102); /* Direct call opts#OptionContext#add_option on <var93:OptionContext>*/
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
val* var102 /* : OptionBool */;
val* var104 /* : OptionBool */;
val* var105 /* : nullable Object */;
val* var107 /* : nullable Object */;
short int var108 /* : Bool */;
val* var109 /* : OptionBool */;
val* var111 /* : OptionBool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const struct type* type_struct117;
const char* var_class_name118;
val* var119 /* : nullable Object */;
val* var120 /* : OptionBool */;
val* var122 /* : OptionBool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const struct type* type_struct128;
const char* var_class_name129;
val* var130 /* : nullable Object */;
val* var131 /* : OptionBool */;
val* var133 /* : OptionBool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const struct type* type_struct139;
const char* var_class_name140;
val* var141 /* : nullable Object */;
val* var142 /* : OptionBool */;
val* var144 /* : OptionBool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const struct type* type_struct150;
const char* var_class_name151;
val* var152 /* : nullable Object */;
val* var153 /* : OptionBool */;
val* var155 /* : OptionBool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
const struct type* type_struct161;
const char* var_class_name162;
val* var163 /* : nullable Object */;
var_args = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 29);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 31);
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
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var104 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 59);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline opts#Option#value (var102) on <var102:OptionBool> */
var107 = var102->attrs[COLOR_opts__Option___value].val; /* _value on <var102:OptionBool> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
var108 = ((struct instance_kernel__Bool*)var105)->value; /* autounbox from nullable Object to Bool */;
if (var108){
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var111 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 49);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var112 = 1;
{
{ /* Inline opts#Option#value= (var109,var112) on <var109:OptionBool> */
/* Covariant cast for argument 0 (value) <var112:Bool> isa VALUE */
/* <var112:Bool> isa VALUE */
type_struct117 = var109->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype115 = type_struct117->color;
idtype116 = type_struct117->id;
if(cltype115 >= (&type_kernel__Bool)->table_size) {
var114 = 0;
} else {
var114 = (&type_kernel__Bool)->type_table[cltype115] == idtype116;
}
if (unlikely(!var114)) {
var_class_name118 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name118);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var119 = BOX_kernel__Bool(var112); /* autobox from Bool to nullable Object */
var109->attrs[COLOR_opts__Option___value].val = var119; /* _value on <var109:OptionBool> */
RET_LABEL113:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var122 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 51);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
var123 = 1;
{
{ /* Inline opts#Option#value= (var120,var123) on <var120:OptionBool> */
/* Covariant cast for argument 0 (value) <var123:Bool> isa VALUE */
/* <var123:Bool> isa VALUE */
type_struct128 = var120->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype126 = type_struct128->color;
idtype127 = type_struct128->id;
if(cltype126 >= (&type_kernel__Bool)->table_size) {
var125 = 0;
} else {
var125 = (&type_kernel__Bool)->type_table[cltype126] == idtype127;
}
if (unlikely(!var125)) {
var_class_name129 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var130 = BOX_kernel__Bool(var123); /* autobox from Bool to nullable Object */
var120->attrs[COLOR_opts__Option___value].val = var130; /* _value on <var120:OptionBool> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var133 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
var134 = 1;
{
{ /* Inline opts#Option#value= (var131,var134) on <var131:OptionBool> */
/* Covariant cast for argument 0 (value) <var134:Bool> isa VALUE */
/* <var134:Bool> isa VALUE */
type_struct139 = var131->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype137 = type_struct139->color;
idtype138 = type_struct139->id;
if(cltype137 >= (&type_kernel__Bool)->table_size) {
var136 = 0;
} else {
var136 = (&type_kernel__Bool)->type_table[cltype137] == idtype138;
}
if (unlikely(!var136)) {
var_class_name140 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var141 = BOX_kernel__Bool(var134); /* autobox from Bool to nullable Object */
var131->attrs[COLOR_opts__Option___value].val = var141; /* _value on <var131:OptionBool> */
RET_LABEL135:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var144 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 55);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
var145 = 1;
{
{ /* Inline opts#Option#value= (var142,var145) on <var142:OptionBool> */
/* Covariant cast for argument 0 (value) <var145:Bool> isa VALUE */
/* <var145:Bool> isa VALUE */
type_struct150 = var142->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype148 = type_struct150->color;
idtype149 = type_struct150->id;
if(cltype148 >= (&type_kernel__Bool)->table_size) {
var147 = 0;
} else {
var147 = (&type_kernel__Bool)->type_table[cltype148] == idtype149;
}
if (unlikely(!var147)) {
var_class_name151 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var152 = BOX_kernel__Bool(var145); /* autobox from Bool to nullable Object */
var142->attrs[COLOR_opts__Option___value].val = var152; /* _value on <var142:OptionBool> */
RET_LABEL146:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var155 = self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 57);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
var156 = 1;
{
{ /* Inline opts#Option#value= (var153,var156) on <var153:OptionBool> */
/* Covariant cast for argument 0 (value) <var156:Bool> isa VALUE */
/* <var156:Bool> isa VALUE */
type_struct161 = var153->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype159 = type_struct161->color;
idtype160 = type_struct161->id;
if(cltype159 >= (&type_kernel__Bool)->table_size) {
var158 = 0;
} else {
var158 = (&type_kernel__Bool)->type_table[cltype159] == idtype160;
}
if (unlikely(!var158)) {
var_class_name162 = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var163 = BOX_kernel__Bool(var156); /* autobox from Bool to nullable Object */
var153->attrs[COLOR_opts__Option___value].val = var163; /* _value on <var153:OptionBool> */
RET_LABEL157:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 117);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 117);
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
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : Toolchain */;
val* var15 /* : String */;
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext_61d]))(var7, var8) /* toolcontext= on <var7:MakefileToolchain>*/;
}
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:MakefileToolchain>*/;
}
var_toolchain = var7;
} else {
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var13 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = ((val* (*)(val*, val*))(var_platform->class->vft[COLOR_abstract_compiler__Platform__toolchain]))(var_platform, var11) /* toolchain on <var_platform:nullable Platform(Platform)>*/;
}
var_toolchain = var14;
}
{
var15 = abstract_compiler__Toolchain__compile_dir(var_toolchain);
}
{
{ /* Inline abstract_compiler#ModelBuilder#compile_dir= (self,var15) on <self:ModelBuilder> */
self->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val = var15; /* _compile_dir on <self:ModelBuilder> */
RET_LABEL16:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 136);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 136);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext= for (self: Toolchain, ToolContext) */
void abstract_compiler__Toolchain__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_abstract_compiler__Toolchain__toolcontext_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Toolchain#toolcontext= (self,p0) on <self:Object(Toolchain)> */
self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Object(Toolchain)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 45);
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
/* method abstract_compiler#Toolchain#init for (self: Toolchain) */
void abstract_compiler__Toolchain__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__init]))(self) /* init on <self:Toolchain>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#init for (self: Object) */
void VIRTUAL_abstract_compiler__Toolchain__init(val* self) {
{ /* Inline abstract_compiler#Toolchain#init (self) on <self:Object(Toolchain)> */
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__init]))(self) /* init on <self:Object(Toolchain)>*/;
}
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 154);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 154);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#clib for (self: MakefileToolchain): String */
val* abstract_compiler__MakefileToolchain__clib(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val; /* _clib on <self:MakefileToolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _clib");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 162);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#clib for (self: Object): String */
val* VIRTUAL_abstract_compiler__MakefileToolchain__clib(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline abstract_compiler#MakefileToolchain#clib (self) on <self:Object(MakefileToolchain)> */
var3 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val; /* _clib on <self:Object(MakefileToolchain)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _clib");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 162);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#clib= for (self: MakefileToolchain, String) */
void abstract_compiler__MakefileToolchain__clib_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val = p0; /* _clib on <self:MakefileToolchain> */
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#clib= for (self: Object, String) */
void VIRTUAL_abstract_compiler__MakefileToolchain__clib_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MakefileToolchain#clib= (self,p0) on <self:Object(MakefileToolchain)> */
self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val = p0; /* _clib on <self:Object(MakefileToolchain)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
short int var22 /* : Bool */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : null */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var33 /* : Array[String] */;
val* var35 /* : Array[String] */;
val* var36 /* : ToolContext */;
val* var38 /* : ToolContext */;
val* var39 /* : OptionArray */;
val* var41 /* : OptionArray */;
val* var42 /* : nullable Object */;
val* var44 /* : nullable Object */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : Array[String] */;
val* var55 /* : Array[String] */;
char var56 /* : Char */;
val* var57 /* : Array[Text] */;
val* var58 /* : Pattern */;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
var22 = !var21;
if (var22){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var25 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var26 = NULL;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "Cannot determine the nit clib path. define envvar NIT_DIR.";
var30 = 58;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
toolcontext__ToolContext__fatal_error(var23, var26, var28); /* Direct call toolcontext#ToolContext#fatal_error on <var23:ToolContext>*/
}
} else {
}
{
{ /* Inline abstract_compiler#MakefileToolchain#clib= (self,var_libname) on <self:MakefileToolchain> */
self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val = var_libname; /* _clib on <self:MakefileToolchain> */
RET_LABEL32:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var35 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 154);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var38 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_cc_path (var36) on <var36:ToolContext> */
var41 = var36->attrs[COLOR_abstract_compiler__ToolContext___opt_cc_path].val; /* _opt_cc_path on <var36:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_cc_path");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 37);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline opts#Option#value (var39) on <var39:OptionArray> */
var44 = var39->attrs[COLOR_opts__Option___value].val; /* _value on <var39:OptionArray> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
abstract_collection__Sequence__append(var33, var42); /* Direct call abstract_collection#Sequence#append on <var33:Array[String]>*/
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "NIT_CC_PATH";
var48 = 11;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = environ__String__environ(var46);
}
var_path_env = var50;
{
var51 = string__Text__is_empty(var_path_env);
}
var52 = !var51;
if (var52){
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var55 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 154);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = ':';
{
var58 = BOX_kernel__Char(var56); /* autobox from Char to Pattern */
var57 = string_search__Text__split_with(var_path_env, var58);
}
{
abstract_collection__Sequence__append(var53, var57); /* Direct call abstract_collection#Sequence#append on <var53:Array[String]>*/
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
abstract_compiler__MakefileToolchain__gather_cc_paths(self); /* Direct call abstract_compiler#MakefileToolchain#gather_cc_paths on <self:MakefileToolchain>*/
}
{
var = abstract_compiler__Toolchain__compile_dir(self);
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
var6 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = 1;
{
toolcontext__ToolContext__info(var4, var7, var11); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
{
file__String__mkdir(var_compile_dir); /* Direct call file#String#mkdir on <var_compile_dir:String>*/
}
var12 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var12->class->vft[COLOR_kernel__Object__init]))(var12) /* init on <var12:Array[String]>*/;
}
var_cfiles = var12;
{
abstract_compiler__MakefileToolchain__write_files(self, var_compiler, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_files on <self:MakefileToolchain>*/
}
{
abstract_compiler__MakefileToolchain__write_makefile(self, var_compiler, var_compile_dir, var_cfiles); /* Direct call abstract_compiler#MakefileToolchain#write_makefile on <self:MakefileToolchain>*/
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
var18 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var26 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var20;
var36 = BOX_kernel__Int(var24); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var36;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var29;
{
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
}
var38 = 2;
{
toolcontext__ToolContext__info(var16, var37, var38); /* Direct call toolcontext#ToolContext#info on <var16:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var41 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (var39) on <var39:ToolContext> */
var44 = var39->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <var39:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 33);
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
var48 = ((struct instance_kernel__Bool*)var45)->value; /* autounbox from nullable Object to Bool */;
if (var48){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var51 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = 1;
{
toolcontext__ToolContext__info(var49, var53, var57); /* Direct call toolcontext#ToolContext#info on <var49:ToolContext>*/
}
{
abstract_compiler__MakefileToolchain__compile_c_code(self, var_compiler, var_compile_dir); /* Direct call abstract_compiler#MakefileToolchain#compile_c_code on <self:MakefileToolchain>*/
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
var63 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var71 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 3;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var65;
var84 = BOX_kernel__Int(var69); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var84;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var77;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var85 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
var86 = 2;
{
toolcontext__ToolContext__info(var61, var85, var86); /* Direct call toolcontext#ToolContext#info on <var61:ToolContext>*/
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
val* var55 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : Array[String] */;
val* var69 /* : Array[String] */;
val* var70 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
val* var82 /* : MModule */;
val* var84 /* : MModule */;
val* var85 /* : POSetElement[MModule] */;
val* var87 /* : POSetElement[MModule] */;
val* var88 /* : Collection[Object] */;
val* var_89 /* var : Collection[MModule] */;
val* var90 /* : Iterator[nullable Object] */;
val* var_91 /* var : Iterator[MModule] */;
short int var92 /* : Bool */;
val* var93 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var95 /* : Array[String] */;
val* var97 /* : Array[String] */;
val* var_98 /* var : Array[String] */;
val* var99 /* : ArrayIterator[nullable Object] */;
val* var_100 /* var : ArrayIterator[String] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_src /* var src: String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
val* var_basename /* var basename: String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
val* var_dst /* var dst: String */;
val* var120 /* : CodeWriter */;
val* var122 /* : CodeWriter */;
val* var123 /* : CodeFile */;
val* var125 /* : CodeFile */;
val* var126 /* : String */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : String */;
val* var_hfilename /* var hfilename: String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var144 /* : OFStream */;
val* var_h /* var h: OFStream */;
val* var145 /* : CodeWriter */;
val* var147 /* : CodeWriter */;
val* var148 /* : List[String] */;
val* var150 /* : List[String] */;
val* var_151 /* var : List[String] */;
val* var152 /* : ListIterator[nullable Object] */;
val* var_153 /* var : ListIterator[String] */;
short int var154 /* : Bool */;
val* var155 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var163 /* : CodeWriter */;
val* var165 /* : CodeWriter */;
val* var166 /* : List[String] */;
val* var168 /* : List[String] */;
val* var_169 /* var : List[String] */;
val* var170 /* : ListIterator[nullable Object] */;
val* var_171 /* var : ListIterator[String] */;
short int var172 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_l174 /* var l: String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var182 /* : ToolContext */;
val* var184 /* : ToolContext */;
val* var185 /* : OptionInt */;
val* var187 /* : OptionInt */;
val* var188 /* : nullable Object */;
val* var190 /* : nullable Object */;
long var191 /* : Int */;
long var_max_c_lines /* var max_c_lines: Int */;
val* var192 /* : List[CodeFile] */;
val* var194 /* : List[CodeFile] */;
val* var_195 /* var : List[CodeFile] */;
val* var196 /* : ListIterator[nullable Object] */;
val* var_197 /* var : ListIterator[CodeFile] */;
short int var198 /* : Bool */;
val* var199 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var200 /* : Int */;
long var_i /* var i: Int */;
long var201 /* : Int */;
long var_count /* var count: Int */;
val* var202 /* : null */;
val* var_file /* var file: nullable OFStream */;
val* var203 /* : Array[CodeWriter] */;
val* var205 /* : Array[CodeWriter] */;
val* var_206 /* var : Array[CodeWriter] */;
val* var207 /* : ArrayIterator[nullable Object] */;
val* var_208 /* var : ArrayIterator[CodeWriter] */;
short int var209 /* : Bool */;
val* var210 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var211 /* : CodeWriter */;
val* var213 /* : CodeWriter */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
val* var221 /* : List[String] */;
val* var223 /* : List[String] */;
long var224 /* : Int */;
val* var225 /* : List[String] */;
val* var227 /* : List[String] */;
long var228 /* : Int */;
long var229 /* : Int */;
short int var231 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var232 /* : Int */;
long var_total_lines /* var total_lines: Int */;
long var233 /* : Int */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
long var238 /* : Int */;
short int var240 /* : Bool */;
int cltype241;
int idtype242;
const char* var_class_name243;
long var244 /* : Int */;
short int var245 /* : Bool */;
val* var246 /* : null */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
short int var_253 /* var : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
const char* var_class_name260;
short int var261 /* : Bool */;
short int var_262 /* var : Bool */;
long var263 /* : Int */;
short int var264 /* : Bool */;
short int var266 /* : Bool */;
int cltype267;
int idtype268;
const char* var_class_name269;
short int var270 /* : Bool */;
long var271 /* : Int */;
long var272 /* : Int */;
short int var274 /* : Bool */;
int cltype275;
int idtype276;
const char* var_class_name277;
long var278 /* : Int */;
val* var279 /* : null */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
val* var_other283 /* var other: nullable Object */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
val* var287 /* : String */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : FlatString */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : FlatString */;
val* var300 /* : Array[Object] */;
long var301 /* : Int */;
val* var302 /* : NativeArray[Object] */;
val* var303 /* : Object */;
val* var304 /* : String */;
val* var_cfilename /* var cfilename: String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : FlatString */;
val* var310 /* : Array[Object] */;
long var311 /* : Int */;
val* var312 /* : NativeArray[Object] */;
val* var313 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var314 /* : ToolContext */;
val* var316 /* : ToolContext */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
val* var322 /* : Array[Object] */;
long var323 /* : Int */;
val* var324 /* : NativeArray[Object] */;
val* var325 /* : String */;
long var326 /* : Int */;
val* var327 /* : OFStream */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : NativeString */;
long var331 /* : Int */;
val* var332 /* : FlatString */;
val* var333 /* : String */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : FlatString */;
val* var341 /* : Array[Object] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[Object] */;
val* var344 /* : String */;
val* var345 /* : List[String] */;
val* var347 /* : List[String] */;
val* var_348 /* var : List[String] */;
val* var349 /* : ListIterator[nullable Object] */;
val* var_350 /* var : ListIterator[String] */;
short int var351 /* : Bool */;
val* var352 /* : nullable Object */;
val* var_l353 /* var l: String */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
long var357 /* : Int */;
val* var358 /* : FlatString */;
val* var361 /* : List[String] */;
val* var363 /* : List[String] */;
val* var_364 /* var : List[String] */;
val* var365 /* : ListIterator[nullable Object] */;
val* var_366 /* var : ListIterator[String] */;
short int var367 /* : Bool */;
val* var368 /* : nullable Object */;
val* var_l369 /* var l: String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
val* var379 /* : null */;
short int var380 /* : Bool */;
short int var381 /* : Bool */;
short int var383 /* : Bool */;
short int var385 /* : Bool */;
val* var387 /* : String */;
val* var389 /* : String */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
val* var395 /* : Array[Object] */;
long var396 /* : Int */;
val* var397 /* : NativeArray[Object] */;
val* var398 /* : String */;
val* var_cfilename399 /* var cfilename: String */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : FlatString */;
val* var405 /* : Array[Object] */;
long var406 /* : Int */;
val* var407 /* : NativeArray[Object] */;
val* var408 /* : String */;
val* var_cfilepath409 /* var cfilepath: String */;
val* var410 /* : null */;
val* var_hfile /* var hfile: nullable OFStream */;
val* var411 /* : OFStream */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : FlatString */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
long var420 /* : Int */;
val* var421 /* : FlatString */;
val* var422 /* : Array[Object] */;
long var423 /* : Int */;
val* var424 /* : NativeArray[Object] */;
val* var425 /* : String */;
val* var426 /* : HashSet[String] */;
val* var428 /* : HashSet[String] */;
val* var_429 /* var : HashSet[String] */;
val* var430 /* : Iterator[Object] */;
val* var_431 /* var : Iterator[String] */;
short int var432 /* : Bool */;
val* var433 /* : nullable Object */;
val* var_key /* var key: String */;
val* var434 /* : HashMap[String, String] */;
val* var436 /* : HashMap[String, String] */;
short int var437 /* : Bool */;
short int var438 /* : Bool */;
val* var439 /* : HashMap[String, ANode] */;
val* var441 /* : HashMap[String, ANode] */;
val* var442 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
val* var443 /* : null */;
short int var444 /* : Bool */;
short int var445 /* : Bool */;
short int var447 /* : Bool */;
short int var448 /* : Bool */;
short int var449 /* : Bool */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : FlatString */;
val* var455 /* : Array[Object] */;
long var456 /* : Int */;
val* var457 /* : NativeArray[Object] */;
val* var458 /* : String */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : FlatString */;
val* var464 /* : Array[Object] */;
long var465 /* : Int */;
val* var466 /* : NativeArray[Object] */;
val* var467 /* : String */;
val* var468 /* : HashMap[String, String] */;
val* var470 /* : HashMap[String, String] */;
val* var471 /* : nullable Object */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
long var475 /* : Int */;
val* var476 /* : FlatString */;
val* var481 /* : ToolContext */;
val* var483 /* : ToolContext */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
long var487 /* : Int */;
val* var488 /* : FlatString */;
long var489 /* : Int */;
long var491 /* : Int */;
val* var492 /* : Array[Object] */;
long var493 /* : Int */;
val* var494 /* : NativeArray[Object] */;
val* var495 /* : Object */;
val* var496 /* : String */;
long var497 /* : Int */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 901);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline abstract_compiler#MakefileToolchain#clib (self) on <self:MakefileToolchain> */
var57 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val; /* _clib on <self:MakefileToolchain> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _clib");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 162);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "/gc_chooser.c";
var61 = 13;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 2;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var55;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var59;
{
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
}
{
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
}
{
array__Array__add(var52, var66); /* Direct call array#Array#add on <var52:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var69 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline abstract_compiler#MakefileToolchain#clib (self) on <self:MakefileToolchain> */
var72 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___clib].val; /* _clib on <self:MakefileToolchain> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _clib");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 162);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "/gc_chooser.h";
var76 = 13;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 2;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var70;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var74;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
array__Array__add(var67, var81); /* Direct call array#Array#add on <var67:Array[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var84 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var82) on <var82:MModule> */
var87 = var82->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var82:MModule> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = poset__POSetElement__greaters(var85);
}
var_89 = var88;
{
var90 = ((val* (*)(val*))(var_89->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_89) /* iterator on <var_89:Collection[MModule]>*/;
}
var_91 = var90;
for(;;) {
{
var92 = ((short int (*)(val*))(var_91->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_91) /* is_ok on <var_91:Iterator[MModule]>*/;
}
if (var92){
{
var93 = ((val* (*)(val*))(var_91->class->vft[COLOR_abstract_collection__Iterator__item]))(var_91) /* item on <var_91:Iterator[MModule]>*/;
}
var_m = var93;
{
separate_compiler__SeparateCompiler__finalize_ffi_for_module(var_compiler, var_m); /* Direct call separate_compiler#SeparateCompiler#finalize_ffi_for_module on <var_compiler:AbstractCompiler>*/
}
{
((void (*)(val*))(var_91->class->vft[COLOR_abstract_collection__Iterator__next]))(var_91) /* next on <var_91:Iterator[MModule]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_91) on <var_91:Iterator[MModule]> */
RET_LABEL94:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var_compiler) on <var_compiler:AbstractCompiler> */
var97 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var_compiler:AbstractCompiler> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_98 = var95;
{
var99 = array__AbstractArrayRead__iterator(var_98);
}
var_100 = var99;
for(;;) {
{
var101 = array__ArrayIterator__is_ok(var_100);
}
if (var101){
{
var102 = array__ArrayIterator__item(var_100);
}
var_src = var102;
if (varonce103) {
var104 = varonce103;
} else {
var105 = "";
var106 = 0;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = file__String__basename(var_src, var104);
}
var_basename = var108;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "/";
var112 = 1;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 3;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var110;
((struct instance_array__NativeArray*)var116)->values[2] = (val*) var_basename;
{
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
}
{
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
}
var_dst = var117;
{
file__String__file_copy_to(var_src, var_dst); /* Direct call file#String#file_copy_to on <var_src:String>*/
}
{
array__ArrayIterator__next(var_100); /* Direct call array#ArrayIterator#next on <var_100:ArrayIterator[String]>*/
}
} else {
goto BREAK_label118;
}
}
BREAK_label118: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_100) on <var_100:ArrayIterator[String]> */
RET_LABEL119:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var122 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var120) on <var120:CodeWriter> */
var125 = var120->attrs[COLOR_abstract_compiler__CodeWriter___file].val; /* _file on <var120:CodeWriter> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1018);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#name (var123) on <var123:CodeFile> */
var128 = var123->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var123:CodeFile> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1011);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = ".h";
var132 = 2;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
var134 = string__FlatString___43d(var126, var130);
}
var_hfilename = var134;
if (varonce135) {
var136 = varonce135;
} else {
var137 = "/";
var138 = 1;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 3;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var136;
((struct instance_array__NativeArray*)var142)->values[2] = (val*) var_hfilename;
{
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
var_hfilepath = var143;
var144 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var144, var_hfilepath); /* Direct call file#OFStream#open on <var144:OFStream>*/
}
var_h = var144;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var147 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var145) on <var145:CodeWriter> */
var150 = var145->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var145:CodeWriter> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
var_151 = var148;
{
var152 = list__List__iterator(var_151);
}
var_153 = var152;
for(;;) {
{
var154 = list__ListIterator__is_ok(var_153);
}
if (var154){
{
var155 = list__ListIterator__item(var_153);
}
var_l = var155;
{
file__OFStream__write(var_h, var_l); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = "\n";
var159 = 1;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
file__OFStream__write(var_h, var157); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
{
list__ListIterator__next(var_153); /* Direct call list#ListIterator#next on <var_153:ListIterator[String]>*/
}
} else {
goto BREAK_label161;
}
}
BREAK_label161: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_153) on <var_153:ListIterator[String]> */
RET_LABEL162:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var165 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1019);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
var_169 = var166;
{
var170 = list__List__iterator(var_169);
}
var_171 = var170;
for(;;) {
{
var172 = list__ListIterator__is_ok(var_171);
}
if (var172){
{
var173 = list__ListIterator__item(var_171);
}
var_l174 = var173;
{
file__OFStream__write(var_h, var_l174); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = "\n";
var178 = 1;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
file__OFStream__write(var_h, var176); /* Direct call file#OFStream#write on <var_h:OFStream>*/
}
{
list__ListIterator__next(var_171); /* Direct call list#ListIterator#next on <var_171:ListIterator[String]>*/
}
} else {
goto BREAK_label180;
}
}
BREAK_label180: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_171) on <var_171:ListIterator[String]> */
RET_LABEL181:(void)0;
}
}
{
file__OFStream__close(var_h); /* Direct call file#OFStream#close on <var_h:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var184 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (var182) on <var182:ToolContext> */
var187 = var182->attrs[COLOR_abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <var182:ToolContext> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 41);
show_backtrace(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline opts#Option#value (var185) on <var185:OptionInt> */
var190 = var185->attrs[COLOR_opts__Option___value].val; /* _value on <var185:OptionInt> */
var188 = var190;
RET_LABEL189:(void)0;
}
}
var191 = ((struct instance_kernel__Int*)var188)->value; /* autounbox from nullable Object to Int */;
var_max_c_lines = var191;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var_compiler) on <var_compiler:AbstractCompiler> */
var194 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <var_compiler:AbstractCompiler> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
show_backtrace(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
var_195 = var192;
{
var196 = list__List__iterator(var_195);
}
var_197 = var196;
for(;;) {
{
var198 = list__ListIterator__is_ok(var_197);
}
if (var198){
{
var199 = list__ListIterator__item(var_197);
}
var_f = var199;
var200 = 0;
var_i = var200;
var201 = 0;
var_count = var201;
var202 = NULL;
var_file = var202;
{
{ /* Inline abstract_compiler#CodeFile#writers (var_f) on <var_f:CodeFile> */
var205 = var_f->attrs[COLOR_abstract_compiler__CodeFile___writers].val; /* _writers on <var_f:CodeFile> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1012);
show_backtrace(1);
}
var203 = var205;
RET_LABEL204:(void)0;
}
}
var_206 = var203;
{
var207 = array__AbstractArrayRead__iterator(var_206);
}
var_208 = var207;
for(;;) {
{
var209 = array__ArrayIterator__is_ok(var_208);
}
if (var209){
{
var210 = array__ArrayIterator__item(var_208);
}
var_vis = var210;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:AbstractCompiler> */
var213 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:AbstractCompiler> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_vis,var211) on <var_vis:CodeWriter> */
var_other = var211;
{
{ /* Inline kernel#Object#is_same_instance (var_vis,var_other) on <var_vis:CodeWriter> */
var219 = var_vis == var_other;
var217 = var219;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
var215 = var217;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
if (var214){
goto BREAK_label220;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var223 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1019);
show_backtrace(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = list__List__length(var221);
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var227 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
var228 = list__List__length(var225);
}
{
{ /* Inline kernel#Int#+ (var224,var228) on <var224:Int> */
/* Covariant cast for argument 0 (i) <var228:Int> isa OTHER */
/* <var228:Int> isa OTHER */
var231 = 1; /* easy <var228:Int> isa OTHER*/
if (unlikely(!var231)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var232 = var224 + var228;
var229 = var232;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
}
var_total_lines = var229;
var233 = 0;
{
{ /* Inline kernel#Int#== (var_total_lines,var233) on <var_total_lines:Int> */
var237 = var_total_lines == var233;
var235 = var237;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
var234 = var235;
}
if (var234){
goto BREAK_label220;
} else {
}
{
{ /* Inline kernel#Int#+ (var_count,var_total_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_total_lines:Int> isa OTHER */
/* <var_total_lines:Int> isa OTHER */
var240 = 1; /* easy <var_total_lines:Int> isa OTHER*/
if (unlikely(!var240)) {
var_class_name243 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name243);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var244 = var_count + var_total_lines;
var238 = var244;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
}
var_count = var238;
var246 = NULL;
if (var_file == NULL) {
var247 = 1; /* is null */
} else {
var247 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var246) on <var_file:nullable OFStream> */
var_other = var246;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable OFStream(OFStream)> */
var252 = var_file == var_other;
var250 = var252;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
}
var248 = var250;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var247 = var248;
}
var_253 = var247;
if (var247){
var245 = var_253;
} else {
{
{ /* Inline kernel#Int#> (var_count,var_max_c_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_max_c_lines:Int> isa OTHER */
/* <var_max_c_lines:Int> isa OTHER */
var257 = 1; /* easy <var_max_c_lines:Int> isa OTHER*/
if (unlikely(!var257)) {
var_class_name260 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name260);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var261 = var_count > var_max_c_lines;
var255 = var261;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
var_262 = var255;
if (var255){
var263 = 0;
{
{ /* Inline kernel#Int#> (var_max_c_lines,var263) on <var_max_c_lines:Int> */
/* Covariant cast for argument 0 (i) <var263:Int> isa OTHER */
/* <var263:Int> isa OTHER */
var266 = 1; /* easy <var263:Int> isa OTHER*/
if (unlikely(!var266)) {
var_class_name269 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name269);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var270 = var_max_c_lines > var263;
var264 = var270;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var254 = var264;
} else {
var254 = var_262;
}
var245 = var254;
}
if (var245){
var271 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var271) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var271:Int> isa OTHER */
/* <var271:Int> isa OTHER */
var274 = 1; /* easy <var271:Int> isa OTHER*/
if (unlikely(!var274)) {
var_class_name277 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name277);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var278 = var_i + var271;
var272 = var278;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var_i = var272;
var279 = NULL;
if (var_file == NULL) {
var280 = 0; /* is null */
} else {
var280 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_file,var279) on <var_file:nullable OFStream> */
var_other283 = var279;
{
var285 = ((short int (*)(val*, val*))(var_file->class->vft[COLOR_kernel__Object___61d_61d]))(var_file, var_other283) /* == on <var_file:nullable OFStream(OFStream)>*/;
var284 = var285;
}
var286 = !var284;
var281 = var286;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
var280 = var281;
}
if (var280){
{
file__OFStream__close(var_file); /* Direct call file#OFStream#close on <var_file:nullable OFStream(OFStream)>*/
}
} else {
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var289 = var_f->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1011);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
if (varonce290) {
var291 = varonce290;
} else {
var292 = ".";
var293 = 1;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
if (varonce295) {
var296 = varonce295;
} else {
var297 = ".c";
var298 = 2;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
var300 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var300 = array_instance Array[Object] */
var301 = 4;
var302 = NEW_array__NativeArray(var301, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var302)->values[0] = (val*) var287;
((struct instance_array__NativeArray*)var302)->values[1] = (val*) var291;
var303 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var302)->values[2] = (val*) var303;
((struct instance_array__NativeArray*)var302)->values[3] = (val*) var296;
{
((void (*)(val*, val*, long))(var300->class->vft[COLOR_array__Array__with_native]))(var300, var302, var301) /* with_native on <var300:Array[Object]>*/;
}
}
{
var304 = ((val* (*)(val*))(var300->class->vft[COLOR_string__Object__to_s]))(var300) /* to_s on <var300:Array[Object]>*/;
}
var_cfilename = var304;
if (varonce305) {
var306 = varonce305;
} else {
var307 = "/";
var308 = 1;
var309 = string__NativeString__to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
var310 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var310 = array_instance Array[Object] */
var311 = 3;
var312 = NEW_array__NativeArray(var311, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var312)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var312)->values[1] = (val*) var306;
((struct instance_array__NativeArray*)var312)->values[2] = (val*) var_cfilename;
{
((void (*)(val*, val*, long))(var310->class->vft[COLOR_array__Array__with_native]))(var310, var312, var311) /* with_native on <var310:Array[Object]>*/;
}
}
{
var313 = ((val* (*)(val*))(var310->class->vft[COLOR_string__Object__to_s]))(var310) /* to_s on <var310:Array[Object]>*/;
}
var_cfilepath = var313;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var316 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
if (varonce317) {
var318 = varonce317;
} else {
var319 = "new C source files to compile: ";
var320 = 31;
var321 = string__NativeString__to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
var322 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var322 = array_instance Array[Object] */
var323 = 2;
var324 = NEW_array__NativeArray(var323, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var324)->values[0] = (val*) var318;
((struct instance_array__NativeArray*)var324)->values[1] = (val*) var_cfilepath;
{
((void (*)(val*, val*, long))(var322->class->vft[COLOR_array__Array__with_native]))(var322, var324, var323) /* with_native on <var322:Array[Object]>*/;
}
}
{
var325 = ((val* (*)(val*))(var322->class->vft[COLOR_string__Object__to_s]))(var322) /* to_s on <var322:Array[Object]>*/;
}
var326 = 3;
{
toolcontext__ToolContext__info(var314, var325, var326); /* Direct call toolcontext#ToolContext#info on <var314:ToolContext>*/
}
{
array__Array__add(var_cfiles, var_cfilename); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
var327 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var327, var_cfilepath); /* Direct call file#OFStream#open on <var327:OFStream>*/
}
var_file = var327;
if (varonce328) {
var329 = varonce328;
} else {
var330 = "#include \"";
var331 = 10;
var332 = string__NativeString__to_s_with_length(var330, var331);
var329 = var332;
varonce328 = var329;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var335 = var_f->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var335 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1011);
show_backtrace(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = ".0.h\"\n";
var339 = 6;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
var341 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var341 = array_instance Array[Object] */
var342 = 3;
var343 = NEW_array__NativeArray(var342, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var343)->values[0] = (val*) var329;
((struct instance_array__NativeArray*)var343)->values[1] = (val*) var333;
((struct instance_array__NativeArray*)var343)->values[2] = (val*) var337;
{
((void (*)(val*, val*, long))(var341->class->vft[COLOR_array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[Object]>*/;
}
}
{
var344 = ((val* (*)(val*))(var341->class->vft[COLOR_string__Object__to_s]))(var341) /* to_s on <var341:Array[Object]>*/;
}
{
file__OFStream__write(var_file, var344); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
var_count = var_total_lines;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var347 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var347 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
var_348 = var345;
{
var349 = list__List__iterator(var_348);
}
var_350 = var349;
for(;;) {
{
var351 = list__ListIterator__is_ok(var_350);
}
if (var351){
{
var352 = list__ListIterator__item(var_350);
}
var_l353 = var352;
{
file__OFStream__write(var_file, var_l353); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
if (varonce354) {
var355 = varonce354;
} else {
var356 = "\n";
var357 = 1;
var358 = string__NativeString__to_s_with_length(var356, var357);
var355 = var358;
varonce354 = var355;
}
{
file__OFStream__write(var_file, var355); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
{
list__ListIterator__next(var_350); /* Direct call list#ListIterator#next on <var_350:ListIterator[String]>*/
}
} else {
goto BREAK_label359;
}
}
BREAK_label359: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_350) on <var_350:ListIterator[String]> */
RET_LABEL360:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var363 = var_vis->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var363 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1019);
show_backtrace(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
var_364 = var361;
{
var365 = list__List__iterator(var_364);
}
var_366 = var365;
for(;;) {
{
var367 = list__ListIterator__is_ok(var_366);
}
if (var367){
{
var368 = list__ListIterator__item(var_366);
}
var_l369 = var368;
{
file__OFStream__write(var_file, var_l369); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = "\n";
var373 = 1;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
{
file__OFStream__write(var_file, var371); /* Direct call file#OFStream#write on <var_file:nullable OFStream(OFStream)>*/
}
{
list__ListIterator__next(var_366); /* Direct call list#ListIterator#next on <var_366:ListIterator[String]>*/
}
} else {
goto BREAK_label375;
}
}
BREAK_label375: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_366) on <var_366:ListIterator[String]> */
RET_LABEL376:(void)0;
}
}
BREAK_label220: (void)0;
{
array__ArrayIterator__next(var_208); /* Direct call array#ArrayIterator#next on <var_208:ArrayIterator[CodeWriter]>*/
}
} else {
goto BREAK_label377;
}
}
BREAK_label377: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_208) on <var_208:ArrayIterator[CodeWriter]> */
RET_LABEL378:(void)0;
}
}
var379 = NULL;
if (var_file == NULL) {
var380 = 1; /* is null */
} else {
var380 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var379) on <var_file:nullable OFStream> */
var_other = var379;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable OFStream(OFStream)> */
var385 = var_file == var_other;
var383 = var385;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
}
var381 = var383;
goto RET_LABEL382;
RET_LABEL382:(void)0;
}
var380 = var381;
}
if (var380){
goto BREAK_label386;
} else {
}
{
file__OFStream__close(var_file); /* Direct call file#OFStream#close on <var_file:nullable OFStream(OFStream)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var389 = var_f->attrs[COLOR_abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var389 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1011);
show_backtrace(1);
}
var387 = var389;
RET_LABEL388:(void)0;
}
}
if (varonce390) {
var391 = varonce390;
} else {
var392 = ".0.h";
var393 = 4;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
var395 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var395 = array_instance Array[Object] */
var396 = 2;
var397 = NEW_array__NativeArray(var396, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var397)->values[0] = (val*) var387;
((struct instance_array__NativeArray*)var397)->values[1] = (val*) var391;
{
((void (*)(val*, val*, long))(var395->class->vft[COLOR_array__Array__with_native]))(var395, var397, var396) /* with_native on <var395:Array[Object]>*/;
}
}
{
var398 = ((val* (*)(val*))(var395->class->vft[COLOR_string__Object__to_s]))(var395) /* to_s on <var395:Array[Object]>*/;
}
var_cfilename399 = var398;
if (varonce400) {
var401 = varonce400;
} else {
var402 = "/";
var403 = 1;
var404 = string__NativeString__to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
var405 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var405 = array_instance Array[Object] */
var406 = 3;
var407 = NEW_array__NativeArray(var406, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var407)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var407)->values[1] = (val*) var401;
((struct instance_array__NativeArray*)var407)->values[2] = (val*) var_cfilename399;
{
((void (*)(val*, val*, long))(var405->class->vft[COLOR_array__Array__with_native]))(var405, var407, var406) /* with_native on <var405:Array[Object]>*/;
}
}
{
var408 = ((val* (*)(val*))(var405->class->vft[COLOR_string__Object__to_s]))(var405) /* to_s on <var405:Array[Object]>*/;
}
var_cfilepath409 = var408;
var410 = NULL;
var_hfile = var410;
var411 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var411, var_cfilepath409); /* Direct call file#OFStream#open on <var411:OFStream>*/
}
var_hfile = var411;
if (varonce412) {
var413 = varonce412;
} else {
var414 = "#include \"";
var415 = 10;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
if (varonce417) {
var418 = varonce417;
} else {
var419 = "\"\n";
var420 = 2;
var421 = string__NativeString__to_s_with_length(var419, var420);
var418 = var421;
varonce417 = var418;
}
var422 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var422 = array_instance Array[Object] */
var423 = 3;
var424 = NEW_array__NativeArray(var423, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var424)->values[0] = (val*) var413;
((struct instance_array__NativeArray*)var424)->values[1] = (val*) var_hfilename;
((struct instance_array__NativeArray*)var424)->values[2] = (val*) var418;
{
((void (*)(val*, val*, long))(var422->class->vft[COLOR_array__Array__with_native]))(var422, var424, var423) /* with_native on <var422:Array[Object]>*/;
}
}
{
var425 = ((val* (*)(val*))(var422->class->vft[COLOR_string__Object__to_s]))(var422) /* to_s on <var422:Array[Object]>*/;
}
{
file__OFStream__write(var_hfile, var425); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var_f) on <var_f:CodeFile> */
var428 = var_f->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var_f:CodeFile> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1013);
show_backtrace(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
var_429 = var426;
{
var430 = hash_collection__HashSet__iterator(var_429);
}
var_431 = var430;
for(;;) {
{
var432 = ((short int (*)(val*))(var_431->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_431) /* is_ok on <var_431:Iterator[String]>*/;
}
if (var432){
{
var433 = ((val* (*)(val*))(var_431->class->vft[COLOR_abstract_collection__Iterator__item]))(var_431) /* item on <var_431:Iterator[String]>*/;
}
var_key = var433;
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var436 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var436 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
show_backtrace(1);
}
var434 = var436;
RET_LABEL435:(void)0;
}
}
{
var437 = abstract_collection__MapRead__has_key(var434, var_key);
}
var438 = !var437;
if (var438){
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var441 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var441 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 520);
show_backtrace(1);
}
var439 = var441;
RET_LABEL440:(void)0;
}
}
{
var442 = abstract_collection__MapRead__get_or_null(var439, var_key);
}
var_node = var442;
var443 = NULL;
if (var_node == NULL) {
var444 = 0; /* is null */
} else {
var444 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var443) on <var_node:nullable ANode> */
var_other283 = var443;
{
var448 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other283) /* == on <var_node:nullable ANode(ANode)>*/;
var447 = var448;
}
var449 = !var447;
var445 = var449;
goto RET_LABEL446;
RET_LABEL446:(void)0;
}
var444 = var445;
}
if (var444){
if (varonce450) {
var451 = varonce450;
} else {
var452 = "No provided declaration for ";
var453 = 28;
var454 = string__NativeString__to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
var455 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var455 = array_instance Array[Object] */
var456 = 2;
var457 = NEW_array__NativeArray(var456, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var457)->values[0] = (val*) var451;
((struct instance_array__NativeArray*)var457)->values[1] = (val*) var_key;
{
((void (*)(val*, val*, long))(var455->class->vft[COLOR_array__Array__with_native]))(var455, var457, var456) /* with_native on <var455:Array[Object]>*/;
}
}
{
var458 = ((val* (*)(val*))(var455->class->vft[COLOR_string__Object__to_s]))(var455) /* to_s on <var455:Array[Object]>*/;
}
{
parser_nodes__ANode__debug(var_node, var458); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
} else {
if (varonce459) {
var460 = varonce459;
} else {
var461 = "No provided declaration for ";
var462 = 28;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
var464 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var464 = array_instance Array[Object] */
var465 = 2;
var466 = NEW_array__NativeArray(var465, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var466)->values[0] = (val*) var460;
((struct instance_array__NativeArray*)var466)->values[1] = (val*) var_key;
{
((void (*)(val*, val*, long))(var464->class->vft[COLOR_array__Array__with_native]))(var464, var466, var465) /* with_native on <var464:Array[Object]>*/;
}
}
{
var467 = ((val* (*)(val*))(var464->class->vft[COLOR_string__Object__to_s]))(var464) /* to_s on <var464:Array[Object]>*/;
}
{
file__Object__print(self, var467); /* Direct call file#Object#print on <self:MakefileToolchain>*/
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 308);
show_backtrace(1);
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var_compiler) on <var_compiler:AbstractCompiler> */
var470 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var_compiler:AbstractCompiler> */
if (unlikely(var470 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
show_backtrace(1);
}
var468 = var470;
RET_LABEL469:(void)0;
}
}
{
var471 = hash_collection__HashMap___91d_93d(var468, var_key);
}
{
file__OFStream__write(var_hfile, var471); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
if (varonce472) {
var473 = varonce472;
} else {
var474 = "\n";
var475 = 1;
var476 = string__NativeString__to_s_with_length(var474, var475);
var473 = var476;
varonce472 = var473;
}
{
file__OFStream__write(var_hfile, var473); /* Direct call file#OFStream#write on <var_hfile:nullable OFStream(OFStream)>*/
}
{
((void (*)(val*))(var_431->class->vft[COLOR_abstract_collection__Iterator__next]))(var_431) /* next on <var_431:Iterator[String]>*/;
}
} else {
goto BREAK_label477;
}
}
BREAK_label477: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_431) on <var_431:Iterator[String]> */
RET_LABEL478:(void)0;
}
}
{
file__OFStream__close(var_hfile); /* Direct call file#OFStream#close on <var_hfile:nullable OFStream(OFStream)>*/
}
BREAK_label386: (void)0;
{
list__ListIterator__next(var_197); /* Direct call list#ListIterator#next on <var_197:ListIterator[CodeFile]>*/
}
} else {
goto BREAK_label479;
}
}
BREAK_label479: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_197) on <var_197:ListIterator[CodeFile]> */
RET_LABEL480:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var483 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var483 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var481 = var483;
RET_LABEL482:(void)0;
}
}
if (varonce484) {
var485 = varonce484;
} else {
var486 = "Total C source files to compile: ";
var487 = 33;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
{
{ /* Inline array#AbstractArrayRead#length (var_cfiles) on <var_cfiles:Array[String]> */
var491 = var_cfiles->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_cfiles:Array[String]> */
var489 = var491;
RET_LABEL490:(void)0;
}
}
var492 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var492 = array_instance Array[Object] */
var493 = 2;
var494 = NEW_array__NativeArray(var493, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var494)->values[0] = (val*) var485;
var495 = BOX_kernel__Int(var489); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var494)->values[1] = (val*) var495;
{
((void (*)(val*, val*, long))(var492->class->vft[COLOR_array__Array__with_native]))(var492, var494, var493) /* with_native on <var492:Array[Object]>*/;
}
}
{
var496 = ((val* (*)(val*))(var492->class->vft[COLOR_string__Object__to_s]))(var492) /* to_s on <var492:Array[Object]>*/;
}
var497 = 2;
{
toolcontext__ToolContext__info(var481, var496, var497); /* Direct call toolcontext#ToolContext#info on <var481:ToolContext>*/
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
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
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
val* var_res /* var res: String */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : POSetElement[MModule] */;
val* var9 /* : POSetElement[MModule] */;
val* var10 /* : Collection[Object] */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
val* var14 /* : String */;
var_mainmodule = p0;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var3 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
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
var6 = var_mainmodule->attrs[COLOR_mmodule__MModule___is_fictive].s; /* _is_fictive on <var_mainmodule:MModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var9 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = poset__POSetElement__direct_greaters(var7);
}
{
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__first]))(var10) /* first on <var10:Collection[Object](Collection[MModule])>*/;
}
var_mainmodule = var11;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var14 = var_mainmodule->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 29);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 31);
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
val* var8 /* : String */;
val* var_outpath /* var outpath: String */;
val* var9 /* : String */;
val* var_makename /* var makename: String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var_makepath /* var makepath: String */;
val* var18 /* : OFStream */;
val* var_makefile /* var makefile: OFStream */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var_cc_includes /* var cc_includes: String */;
val* var24 /* : Array[String] */;
val* var26 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var27 /* : ArrayIterator[nullable Object] */;
val* var_28 /* var : ArrayIterator[String] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var45 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var46 /* : POSetElement[MModule] */;
val* var48 /* : POSetElement[MModule] */;
val* var49 /* : Collection[Object] */;
val* var_50 /* var : Collection[MModule] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : Iterator[MModule] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var55 /* : nullable Set[String] */;
val* var_libs /* var libs: nullable Set[String] */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
val* var90 /* : ToolContext */;
val* var92 /* : ToolContext */;
val* var93 /* : OptionString */;
val* var95 /* : OptionString */;
val* var96 /* : nullable Object */;
val* var98 /* : nullable Object */;
val* var_ost /* var ost: nullable String */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var_108 /* var : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_116 /* var : Bool */;
short int var117 /* : Bool */;
val* var118 /* : null */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
short int var122 /* : Bool */;
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
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
val* var172 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var173 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var_174 /* var : Array[String] */;
val* var175 /* : ArrayIterator[nullable Object] */;
val* var_176 /* var : ArrayIterator[String] */;
short int var177 /* : Bool */;
val* var178 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : String */;
val* var_o /* var o: String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
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
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
val* var217 /* : Array[ExternFile] */;
val* var_java_files /* var java_files: Array[ExternFile] */;
val* var218 /* : Array[ExternFile] */;
val* var220 /* : Array[ExternFile] */;
val* var_221 /* var : Array[ExternFile] */;
val* var222 /* : ArrayIterator[nullable Object] */;
val* var_223 /* var : ArrayIterator[ExternFile] */;
short int var224 /* : Bool */;
val* var225 /* : nullable Object */;
val* var_f226 /* var f: ExternFile */;
val* var227 /* : String */;
val* var_o228 /* var o: String */;
val* var229 /* : String */;
val* var231 /* : String */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : FlatString */;
val* var237 /* : String */;
val* var_ff /* var ff: String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : FlatString */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : FlatString */;
val* var248 /* : Array[Object] */;
long var249 /* : Int */;
val* var250 /* : NativeArray[Object] */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : FlatString */;
val* var263 /* : Array[Object] */;
long var264 /* : Int */;
val* var265 /* : NativeArray[Object] */;
val* var266 /* : String */;
val* var267 /* : String */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
val* var279 /* : Array[Object] */;
long var280 /* : Int */;
val* var281 /* : NativeArray[Object] */;
val* var282 /* : String */;
val* var_jar_file /* var jar_file: String */;
val* var283 /* : Array[String] */;
val* var_class_files_array /* var class_files_array: Array[String] */;
val* var_284 /* var : Array[ExternFile] */;
val* var285 /* : ArrayIterator[nullable Object] */;
val* var_286 /* var : ArrayIterator[ExternFile] */;
short int var287 /* : Bool */;
val* var288 /* : nullable Object */;
val* var_f289 /* var f: ExternFile */;
val* var290 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
val* var298 /* : String */;
val* var_class_files /* var class_files: String */;
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
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : FlatString */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : FlatString */;
val* var328 /* : Array[Object] */;
long var329 /* : Int */;
val* var330 /* : NativeArray[Object] */;
val* var331 /* : String */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : NativeString */;
long var335 /* : Int */;
val* var336 /* : FlatString */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
long var340 /* : Int */;
val* var341 /* : FlatString */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : FlatString */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
long var351 /* : Int */;
val* var352 /* : FlatString */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
long var356 /* : Int */;
val* var357 /* : FlatString */;
val* var358 /* : String */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : FlatString */;
val* var364 /* : Array[Object] */;
long var365 /* : Int */;
val* var366 /* : NativeArray[Object] */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
long var371 /* : Int */;
val* var372 /* : FlatString */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
long var376 /* : Int */;
val* var377 /* : FlatString */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : FlatString */;
val* var384 /* : Array[Object] */;
long var385 /* : Int */;
val* var386 /* : NativeArray[Object] */;
val* var387 /* : String */;
val* var388 /* : ToolContext */;
val* var390 /* : ToolContext */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : FlatString */;
val* var396 /* : Array[Object] */;
long var397 /* : Int */;
val* var398 /* : NativeArray[Object] */;
val* var399 /* : String */;
long var400 /* : Int */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
val* var406 /* : Array[Object] */;
long var407 /* : Int */;
val* var408 /* : NativeArray[Object] */;
val* var409 /* : String */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
{
var8 = file__String__relpath(var_compile_dir, var_outname);
}
var_outpath = var8;
{
var9 = abstract_compiler__MakefileToolchain__makefile_name(self, var_mainmodule);
}
var_makename = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "/";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var_makename;
{
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
}
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
}
var_makepath = var17;
var18 = NEW_file__OFStream(&type_file__OFStream);
{
file__OFStream__open(var18, var_makepath); /* Direct call file#OFStream#open on <var18:OFStream>*/
}
var_makefile = var18;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "";
var22 = 0;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var_cc_includes = var20;
{
{ /* Inline abstract_compiler#MakefileToolchain#cc_paths (self) on <self:MakefileToolchain> */
var26 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val; /* _cc_paths on <self:MakefileToolchain> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cc_paths");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 154);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
{
var27 = array__AbstractArrayRead__iterator(var_);
}
var_28 = var27;
for(;;) {
{
var29 = array__ArrayIterator__is_ok(var_28);
}
if (var29){
{
var30 = array__ArrayIterator__item(var_28);
}
var_p = var30;
if (varonce31) {
var32 = varonce31;
} else {
var33 = " -I \"";
var34 = 5;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var36 = string__FlatString___43d(var32, var_p);
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "\"";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
var42 = string__FlatString___43d(var36, var38);
}
{
var43 = string__FlatString___43d(var_cc_includes, var42);
}
var_cc_includes = var43;
{
array__ArrayIterator__next(var_28); /* Direct call array#ArrayIterator#next on <var_28:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_28) on <var_28:ArrayIterator[String]> */
RET_LABEL44:(void)0;
}
}
var45 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
{
((void (*)(val*))(var45->class->vft[COLOR_kernel__Object__init]))(var45) /* init on <var45:HashSet[String]>*/;
}
var_linker_options = var45;
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var48 = var_mainmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = poset__POSetElement__greaters(var46);
}
var_50 = var49;
{
var51 = ((val* (*)(val*))(var_50->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_50) /* iterator on <var_50:Collection[MModule]>*/;
}
var_52 = var51;
for(;;) {
{
var53 = ((short int (*)(val*))(var_52->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_52) /* is_ok on <var_52:Iterator[MModule]>*/;
}
if (var53){
{
var54 = ((val* (*)(val*))(var_52->class->vft[COLOR_abstract_collection__Iterator__item]))(var_52) /* item on <var_52:Iterator[MModule]>*/;
}
var_m = var54;
{
var55 = abstract_compiler__MModule__collect_linker_libs(var_m);
}
var_libs = var55;
var56 = NULL;
if (var_libs == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_libs,var56) on <var_libs:nullable Set[String]> */
var_other = var56;
{
var61 = ((short int (*)(val*, val*))(var_libs->class->vft[COLOR_kernel__Object___61d_61d]))(var_libs, var_other) /* == on <var_libs:nullable Set[String](Set[String])>*/;
var60 = var61;
}
var62 = !var60;
var58 = var62;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
abstract_collection__SimpleCollection__add_all(var_linker_options, var_libs); /* Direct call abstract_collection#SimpleCollection#add_all on <var_linker_options:HashSet[String]>*/
}
} else {
}
{
((void (*)(val*))(var_52->class->vft[COLOR_abstract_collection__Iterator__next]))(var_52) /* next on <var_52:Iterator[MModule]>*/;
}
} else {
goto BREAK_label63;
}
}
BREAK_label63: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_52) on <var_52:Iterator[MModule]> */
RET_LABEL64:(void)0;
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "CC = ccache cc\nCXX = ccache c++\nCFLAGS = -g -O2 -Wno-unused-value -Wno-switch\nCINCL = ";
var68 = 86;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc ";
var73 = 33;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = " ";
var78 = 1;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
var80 = string__Collection__join(var_linker_options, var76);
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\n\n";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 5;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var66;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var_cc_includes;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var71;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var80;
((struct instance_array__NativeArray*)var88)->values[4] = (val*) var82;
{
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var89); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var92 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_stacktrace (var90) on <var90:ToolContext> */
var95 = var90->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val; /* _opt_stacktrace on <var90:ToolContext> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stacktrace");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 67);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline opts#Option#value (var93) on <var93:OptionString> */
var98 = var93->attrs[COLOR_opts__Option___value].val; /* _value on <var93:OptionString> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
var_ost = var96;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "libunwind";
var104 = 9;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (var_ost == NULL) {
var106 = 0; /* <var102:String> cannot be null */
} else {
var107 = string__FlatString___61d_61d(var_ost, var102);
var106 = var107;
}
var_108 = var106;
if (var106){
var100 = var_108;
} else {
if (varonce109) {
var110 = varonce109;
} else {
var111 = "nitstack";
var112 = 8;
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
var100 = var114;
}
var_116 = var100;
if (var100){
var118 = NULL;
if (var_platform == NULL) {
var119 = 1; /* is null */
} else {
var119 = 0; /* arg is null but recv is not */
}
if (0) {
var120 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___61d_61d]))(var_platform, var118) /* == on <var_platform:nullable Platform>*/;
var119 = var120;
}
var_121 = var119;
if (var119){
var117 = var_121;
} else {
{
var122 = ((short int (*)(val*))(var_platform->class->vft[COLOR_platform__Platform__supports_libunwind]))(var_platform) /* supports_libunwind on <var_platform:nullable Platform(Platform)>*/;
}
var117 = var122;
}
var99 = var117;
} else {
var99 = var_116;
}
if (var99){
if (varonce123) {
var124 = varonce123;
} else {
var125 = "NEED_LIBUNWIND := YesPlease\n";
var126 = 28;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
file__OFStream__write(var_makefile, var124); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
} else {
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "uname_S := $(shell sh -c \'uname -s 2>/dev/null || echo not\')\n";
var131 = 61;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
{
file__OFStream__write(var_makefile, var129); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "ifeq ($(uname_S),Darwin)\n";
var136 = 25;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
{
file__OFStream__write(var_makefile, var134); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "\11NEED_LIBUNWIND :=\n";
var141 = 19;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
file__OFStream__write(var_makefile, var139); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = "endif\n\n";
var146 = 7;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
{
file__OFStream__write(var_makefile, var144); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = "clang_check := $(shell sh -c \'$(CC) -v 2>&1 | grep -q clang; echo $$?\')\nifeq ($(clang_check), 0)\n\11CFLAGS += -Qunused-arguments\nendif\n";
var151 = 133;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
{
file__OFStream__write(var_makefile, var149); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "ifdef NEED_LIBUNWIND\n\11LDLIBS += -lunwind\nendif\n";
var156 = 47;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
file__OFStream__write(var_makefile, var154); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = "all: ";
var161 = 5;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "\n\n";
var166 = 2;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 3;
var170 = NEW_array__NativeArray(var169, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var170)->values[0] = (val*) var159;
((struct instance_array__NativeArray*)var170)->values[1] = (val*) var_outpath;
((struct instance_array__NativeArray*)var170)->values[2] = (val*) var164;
{
((void (*)(val*, val*, long))(var168->class->vft[COLOR_array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
}
{
var171 = ((val* (*)(val*))(var168->class->vft[COLOR_string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var171); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
var172 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var172->class->vft[COLOR_kernel__Object__init]))(var172) /* init on <var172:Array[String]>*/;
}
var_ofiles = var172;
var173 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var173->class->vft[COLOR_kernel__Object__init]))(var173) /* init on <var173:Array[String]>*/;
}
var_dep_rules = var173;
var_174 = var_cfiles;
{
var175 = array__AbstractArrayRead__iterator(var_174);
}
var_176 = var175;
for(;;) {
{
var177 = array__ArrayIterator__is_ok(var_176);
}
if (var177){
{
var178 = array__ArrayIterator__item(var_176);
}
var_f = var178;
if (varonce179) {
var180 = varonce179;
} else {
var181 = ".c";
var182 = 2;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
var184 = file__String__strip_extension(var_f, var180);
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = ".o";
var188 = 2;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
var190 = string__FlatString___43d(var184, var186);
}
var_o = var190;
if (varonce191) {
var192 = varonce191;
} else {
var193 = ": ";
var194 = 2;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "\n\11$(CC) $(CFLAGS) $(CINCL) -c -o ";
var199 = 33;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = " ";
var204 = 1;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = "\n\n";
var209 = 2;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 8;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var_o;
((struct instance_array__NativeArray*)var213)->values[1] = (val*) var192;
((struct instance_array__NativeArray*)var213)->values[2] = (val*) var_f;
((struct instance_array__NativeArray*)var213)->values[3] = (val*) var197;
((struct instance_array__NativeArray*)var213)->values[4] = (val*) var_o;
((struct instance_array__NativeArray*)var213)->values[5] = (val*) var202;
((struct instance_array__NativeArray*)var213)->values[6] = (val*) var_f;
((struct instance_array__NativeArray*)var213)->values[7] = (val*) var207;
{
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
var214 = ((val* (*)(val*))(var211->class->vft[COLOR_string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var214); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
array__Array__add(var_ofiles, var_o); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
{
array__Array__add(var_dep_rules, var_o); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
array__ArrayIterator__next(var_176); /* Direct call array#ArrayIterator#next on <var_176:ArrayIterator[String]>*/
}
} else {
goto BREAK_label215;
}
}
BREAK_label215: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_176) on <var_176:ArrayIterator[String]> */
RET_LABEL216:(void)0;
}
}
var217 = NEW_array__Array(&type_array__Arrayc_tools__ExternFile);
{
((void (*)(val*))(var217->class->vft[COLOR_kernel__Object__init]))(var217) /* init on <var217:Array[ExternFile]>*/;
}
var_java_files = var217;
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var_compiler) on <var_compiler:AbstractCompiler> */
var220 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var_compiler:AbstractCompiler> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 901);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
var_221 = var218;
{
var222 = array__AbstractArrayRead__iterator(var_221);
}
var_223 = var222;
for(;;) {
{
var224 = array__ArrayIterator__is_ok(var_223);
}
if (var224){
{
var225 = array__ArrayIterator__item(var_223);
}
var_f226 = var225;
{
var227 = c_tools__ExternCFile__makefile_rule_name(var_f226);
}
var_o228 = var227;
{
{ /* Inline c_tools#ExternFile#filename (var_f226) on <var_f226:ExternFile> */
var231 = var_f226->attrs[COLOR_c_tools__ExternFile___filename].val; /* _filename on <var_f226:ExternFile> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "c_tools.nit", 104);
show_backtrace(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
if (varonce232) {
var233 = varonce232;
} else {
var234 = "";
var235 = 0;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
{
var237 = file__String__basename(var229, var233);
}
var_ff = var237;
if (varonce238) {
var239 = varonce238;
} else {
var240 = ": ";
var241 = 2;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
if (varonce243) {
var244 = varonce243;
} else {
var245 = "\n";
var246 = 1;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
var248 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var248 = array_instance Array[Object] */
var249 = 4;
var250 = NEW_array__NativeArray(var249, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var250)->values[0] = (val*) var_o228;
((struct instance_array__NativeArray*)var250)->values[1] = (val*) var239;
((struct instance_array__NativeArray*)var250)->values[2] = (val*) var_ff;
((struct instance_array__NativeArray*)var250)->values[3] = (val*) var244;
{
((void (*)(val*, val*, long))(var248->class->vft[COLOR_array__Array__with_native]))(var248, var250, var249) /* with_native on <var248:Array[Object]>*/;
}
}
{
var251 = ((val* (*)(val*))(var248->class->vft[COLOR_string__Object__to_s]))(var248) /* to_s on <var248:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var251); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = "\11";
var255 = 1;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
{
var257 = c_tools__ExternCFile__makefile_rule_content(var_f226);
}
if (varonce258) {
var259 = varonce258;
} else {
var260 = "\n\n";
var261 = 2;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
var263 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var263 = array_instance Array[Object] */
var264 = 3;
var265 = NEW_array__NativeArray(var264, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var265)->values[0] = (val*) var253;
((struct instance_array__NativeArray*)var265)->values[1] = (val*) var257;
((struct instance_array__NativeArray*)var265)->values[2] = (val*) var259;
{
((void (*)(val*, val*, long))(var263->class->vft[COLOR_array__Array__with_native]))(var263, var265, var264) /* with_native on <var263:Array[Object]>*/;
}
}
{
var266 = ((val* (*)(val*))(var263->class->vft[COLOR_string__Object__to_s]))(var263) /* to_s on <var263:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var266); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
var267 = c_tools__ExternCFile__makefile_rule_name(var_f226);
}
{
array__Array__add(var_dep_rules, var267); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
var268 = c_tools__ExternCFile__compiles_to_o_file(var_f226);
}
if (var268){
{
array__Array__add(var_ofiles, var_o228); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
} else {
}
{
var269 = c_tools__ExternFile__add_to_jar(var_f226);
}
if (var269){
{
array__Array__add(var_java_files, var_f226); /* Direct call array#Array#add on <var_java_files:Array[ExternFile]>*/
}
} else {
}
{
array__ArrayIterator__next(var_223); /* Direct call array#ArrayIterator#next on <var_223:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label270;
}
}
BREAK_label270: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_223) on <var_223:ArrayIterator[ExternFile]> */
RET_LABEL271:(void)0;
}
}
{
var272 = array__AbstractArrayRead__is_empty(var_java_files);
}
var273 = !var272;
if (var273){
if (varonce274) {
var275 = varonce274;
} else {
var276 = ".jar";
var277 = 4;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
var279 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var279 = array_instance Array[Object] */
var280 = 2;
var281 = NEW_array__NativeArray(var280, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var281)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var281)->values[1] = (val*) var275;
{
((void (*)(val*, val*, long))(var279->class->vft[COLOR_array__Array__with_native]))(var279, var281, var280) /* with_native on <var279:Array[Object]>*/;
}
}
{
var282 = ((val* (*)(val*))(var279->class->vft[COLOR_string__Object__to_s]))(var279) /* to_s on <var279:Array[Object]>*/;
}
var_jar_file = var282;
var283 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var283->class->vft[COLOR_kernel__Object__init]))(var283) /* init on <var283:Array[String]>*/;
}
var_class_files_array = var283;
var_284 = var_java_files;
{
var285 = array__AbstractArrayRead__iterator(var_284);
}
var_286 = var285;
for(;;) {
{
var287 = array__ArrayIterator__is_ok(var_286);
}
if (var287){
{
var288 = array__ArrayIterator__item(var_286);
}
var_f289 = var288;
{
var290 = c_tools__ExternCFile__makefile_rule_name(var_f289);
}
{
array__Array__add(var_class_files_array, var290); /* Direct call array#Array#add on <var_class_files_array:Array[String]>*/
}
{
array__ArrayIterator__next(var_286); /* Direct call array#ArrayIterator#next on <var_286:ArrayIterator[ExternFile]>*/
}
} else {
goto BREAK_label291;
}
}
BREAK_label291: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_286) on <var_286:ArrayIterator[ExternFile]> */
RET_LABEL292:(void)0;
}
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = " ";
var296 = 1;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
{
var298 = string__Collection__join(var_class_files_array, var294);
}
var_class_files = var298;
if (varonce299) {
var300 = varonce299;
} else {
var301 = ": ";
var302 = 2;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = "\n";
var307 = 1;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
var309 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 4;
var311 = NEW_array__NativeArray(var310, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var311)->values[0] = (val*) var_jar_file;
((struct instance_array__NativeArray*)var311)->values[1] = (val*) var300;
((struct instance_array__NativeArray*)var311)->values[2] = (val*) var_class_files;
((struct instance_array__NativeArray*)var311)->values[3] = (val*) var305;
{
((void (*)(val*, val*, long))(var309->class->vft[COLOR_array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
}
{
var312 = ((val* (*)(val*))(var309->class->vft[COLOR_string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var312); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = "\11jar cf ";
var316 = 8;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
if (varonce318) {
var319 = varonce318;
} else {
var320 = " ";
var321 = 1;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
if (varonce323) {
var324 = varonce323;
} else {
var325 = "\n\n";
var326 = 2;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
var328 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var328 = array_instance Array[Object] */
var329 = 5;
var330 = NEW_array__NativeArray(var329, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var330)->values[0] = (val*) var314;
((struct instance_array__NativeArray*)var330)->values[1] = (val*) var_jar_file;
((struct instance_array__NativeArray*)var330)->values[2] = (val*) var319;
((struct instance_array__NativeArray*)var330)->values[3] = (val*) var_class_files;
((struct instance_array__NativeArray*)var330)->values[4] = (val*) var324;
{
((void (*)(val*, val*, long))(var328->class->vft[COLOR_array__Array__with_native]))(var328, var330, var329) /* with_native on <var328:Array[Object]>*/;
}
}
{
var331 = ((val* (*)(val*))(var328->class->vft[COLOR_string__Object__to_s]))(var328) /* to_s on <var328:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var331); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
array__Array__add(var_dep_rules, var_jar_file); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
} else {
}
if (varonce332) {
var333 = varonce332;
} else {
var334 = ": ";
var335 = 2;
var336 = string__NativeString__to_s_with_length(var334, var335);
var333 = var336;
varonce332 = var333;
}
if (varonce337) {
var338 = varonce337;
} else {
var339 = " ";
var340 = 1;
var341 = string__NativeString__to_s_with_length(var339, var340);
var338 = var341;
varonce337 = var338;
}
{
var342 = string__Collection__join(var_dep_rules, var338);
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "\n\11$(CC) $(LDFLAGS) -o ";
var346 = 22;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
if (varonce348) {
var349 = varonce348;
} else {
var350 = " ";
var351 = 1;
var352 = string__NativeString__to_s_with_length(var350, var351);
var349 = var352;
varonce348 = var349;
}
if (varonce353) {
var354 = varonce353;
} else {
var355 = " ";
var356 = 1;
var357 = string__NativeString__to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
{
var358 = string__Collection__join(var_ofiles, var354);
}
if (varonce359) {
var360 = varonce359;
} else {
var361 = " $(LDLIBS)\n\n";
var362 = 12;
var363 = string__NativeString__to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
var364 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var364 = array_instance Array[Object] */
var365 = 8;
var366 = NEW_array__NativeArray(var365, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var366)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var366)->values[1] = (val*) var333;
((struct instance_array__NativeArray*)var366)->values[2] = (val*) var342;
((struct instance_array__NativeArray*)var366)->values[3] = (val*) var344;
((struct instance_array__NativeArray*)var366)->values[4] = (val*) var_outpath;
((struct instance_array__NativeArray*)var366)->values[5] = (val*) var349;
((struct instance_array__NativeArray*)var366)->values[6] = (val*) var358;
((struct instance_array__NativeArray*)var366)->values[7] = (val*) var360;
{
((void (*)(val*, val*, long))(var364->class->vft[COLOR_array__Array__with_native]))(var364, var366, var365) /* with_native on <var364:Array[Object]>*/;
}
}
{
var367 = ((val* (*)(val*))(var364->class->vft[COLOR_string__Object__to_s]))(var364) /* to_s on <var364:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var367); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
if (varonce368) {
var369 = varonce368;
} else {
var370 = "clean:\n\11rm ";
var371 = 11;
var372 = string__NativeString__to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
if (varonce373) {
var374 = varonce373;
} else {
var375 = " ";
var376 = 1;
var377 = string__NativeString__to_s_with_length(var375, var376);
var374 = var377;
varonce373 = var374;
}
{
var378 = string__Collection__join(var_ofiles, var374);
}
if (varonce379) {
var380 = varonce379;
} else {
var381 = " 2>/dev/null\n\n";
var382 = 14;
var383 = string__NativeString__to_s_with_length(var381, var382);
var380 = var383;
varonce379 = var380;
}
var384 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var384 = array_instance Array[Object] */
var385 = 3;
var386 = NEW_array__NativeArray(var385, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var386)->values[0] = (val*) var369;
((struct instance_array__NativeArray*)var386)->values[1] = (val*) var378;
((struct instance_array__NativeArray*)var386)->values[2] = (val*) var380;
{
((void (*)(val*, val*, long))(var384->class->vft[COLOR_array__Array__with_native]))(var384, var386, var385) /* with_native on <var384:Array[Object]>*/;
}
}
{
var387 = ((val* (*)(val*))(var384->class->vft[COLOR_string__Object__to_s]))(var384) /* to_s on <var384:Array[Object]>*/;
}
{
file__OFStream__write(var_makefile, var387); /* Direct call file#OFStream#write on <var_makefile:OFStream>*/
}
{
file__OFStream__close(var_makefile); /* Direct call file#OFStream#close on <var_makefile:OFStream>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var390 = self->attrs[COLOR_abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var390 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
show_backtrace(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = "Generated makefile: ";
var394 = 20;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
var396 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var396 = array_instance Array[Object] */
var397 = 2;
var398 = NEW_array__NativeArray(var397, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var398)->values[0] = (val*) var392;
((struct instance_array__NativeArray*)var398)->values[1] = (val*) var_makepath;
{
((void (*)(val*, val*, long))(var396->class->vft[COLOR_array__Array__with_native]))(var396, var398, var397) /* with_native on <var396:Array[Object]>*/;
}
}
{
var399 = ((val* (*)(val*))(var396->class->vft[COLOR_string__Object__to_s]))(var396) /* to_s on <var396:Array[Object]>*/;
}
var400 = 2;
{
toolcontext__ToolContext__info(var388, var399, var400); /* Direct call toolcontext#ToolContext#info on <var388:ToolContext>*/
}
if (varonce401) {
var402 = varonce401;
} else {
var403 = "/Makefile";
var404 = 9;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
var406 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var406 = array_instance Array[Object] */
var407 = 2;
var408 = NEW_array__NativeArray(var407, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var408)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var408)->values[1] = (val*) var402;
{
((void (*)(val*, val*, long))(var406->class->vft[COLOR_array__Array__with_native]))(var406, var408, var407) /* with_native on <var406:Array[Object]>*/;
}
}
{
var409 = ((val* (*)(val*))(var406->class->vft[COLOR_string__Object__to_s]))(var406) /* to_s on <var406:Array[Object]>*/;
}
{
file__String__file_copy_to(var_makepath, var409); /* Direct call file#String#file_copy_to on <var_makepath:String>*/
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 140);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 467);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 467);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
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
val* var24 /* : String */;
val* var_f /* var f: CodeFile */;
val* var25 /* : List[CodeFile] */;
val* var27 /* : List[CodeFile] */;
val* var28 /* : List[CodeFile] */;
val* var30 /* : List[CodeFile] */;
val* var31 /* : nullable Object */;
val* var32 /* : CodeFile */;
val* var_f33 /* var f: CodeFile */;
val* var34 /* : List[CodeFile] */;
val* var36 /* : List[CodeFile] */;
var_name = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 43);
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
var13 = ((struct instance_kernel__Bool*)var10)->value; /* autounbox from nullable Object to Bool */;
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var16 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = list__List__is_empty(var14);
}
if (var17){
var18 = NEW_abstract_compiler__CodeFile(&type_abstract_compiler__CodeFile);
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var21 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var19) on <var19:MModule> */
var24 = var19->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var19:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
((void (*)(val*, val*))(var18->class->vft[COLOR_abstract_compiler__CodeFile__name_61d]))(var18, var22) /* name= on <var18:CodeFile>*/;
}
{
((void (*)(val*))(var18->class->vft[COLOR_kernel__Object__init]))(var18) /* init on <var18:CodeFile>*/;
}
var_f = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
abstract_collection__Sequence__add(var25, var_f); /* Direct call abstract_collection#Sequence#add on <var25:List[CodeFile]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var30 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = list__List__first(var28);
}
var = var31;
goto RET_LABEL;
} else {
}
var32 = NEW_abstract_compiler__CodeFile(&type_abstract_compiler__CodeFile);
{
((void (*)(val*, val*))(var32->class->vft[COLOR_abstract_compiler__CodeFile__name_61d]))(var32, var_name) /* name= on <var32:CodeFile>*/;
}
{
((void (*)(val*))(var32->class->vft[COLOR_kernel__Object__init]))(var32) /* init on <var32:CodeFile>*/;
}
var_f33 = var32;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var36 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
abstract_collection__Sequence__add(var34, var_f33); /* Direct call abstract_collection#Sequence#add on <var34:List[CodeFile]>*/
}
var = var_f33;
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 499);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 513);
show_backtrace(1);
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 518);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 520);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 520);
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
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : HashMap[String, String] */;
val* var96 /* : HashMap[String, String] */;
val* var97 /* : nullable Object */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
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
val* var119 /* : HashMap[String, String] */;
val* var121 /* : HashMap[String, String] */;
long var122 /* : Int */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : Object */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : OFStream */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
val* var179 /* : Array[Object] */;
long var180 /* : Int */;
val* var181 /* : NativeArray[Object] */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[ExternFile] */;
val* var190 /* : Array[ExternFile] */;
val* var191 /* : ExternCFile */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
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
{ /* Inline abstract_compiler#ModelBuilder#compile_dir (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_abstract_compiler__ModelBuilder___compile_dir].val; /* _compile_dir on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compile_dir");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 117);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_ = var77;
{
var80 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:RemovableCollection[String]>*/;
}
var_81 = var80;
for(;;) {
{
var82 = ((short int (*)(val*))(var_81->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_81) /* is_ok on <var_81:Iterator[String]>*/;
}
if (var82){
{
var83 = ((val* (*)(val*))(var_81->class->vft[COLOR_abstract_collection__Iterator__item]))(var_81) /* item on <var_81:Iterator[String]>*/;
}
var_i = var83;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "{\"";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
file__OFStream__write(var_stream, var85); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
file__OFStream__write(var_stream, var_i); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "\",\"";
var92 = 3;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
file__OFStream__write(var_stream, var90); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var96 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = hash_collection__HashMap___91d_93d(var94, var_i);
}
{
file__OFStream__write(var_stream, var97); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "\"},\n";
var101 = 4;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
file__OFStream__write(var_stream, var99); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
((void (*)(val*))(var_81->class->vft[COLOR_abstract_collection__Iterator__next]))(var_81) /* next on <var_81:Iterator[String]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_81) on <var_81:Iterator[String]> */
RET_LABEL103:(void)0;
}
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "};\n";
var107 = 3;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
{
file__OFStream__write(var_stream, var105); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = "int i;";
var112 = 6;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
{
file__OFStream__write(var_stream, var110); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = "for(i = 0; i < ";
var117 = 15;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var121 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = hash_collection__HashMap__length(var119);
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "; i++){";
var126 = 7;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 3;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var115;
var131 = BOX_kernel__Int(var122); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var131;
((struct instance_array__NativeArray*)var130)->values[2] = (val*) var124;
{
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
}
{
var132 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
}
{
file__OFStream__write(var_stream, var132); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "if(strcmp(procname,map[i].name) == 0){";
var136 = 38;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
{
file__OFStream__write(var_stream, var134); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "free(procname);";
var141 = 15;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
file__OFStream__write(var_stream, var139); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = "return map[i].nit_name;";
var146 = 23;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
{
file__OFStream__write(var_stream, var144); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = "}";
var151 = 1;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
{
file__OFStream__write(var_stream, var149); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "}";
var156 = 1;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
file__OFStream__write(var_stream, var154); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = "free(procname);";
var161 = 15;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
{
file__OFStream__write(var_stream, var159); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "return NULL;";
var166 = 12;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
{
file__OFStream__write(var_stream, var164); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "}\n";
var171 = 2;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
{
file__OFStream__write(var_stream, var169); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
file__OFStream__close(var_stream); /* Direct call file#OFStream#close on <var_stream:OFStream>*/
}
var173 = NEW_file__OFStream(&type_file__OFStream);
if (varonce174) {
var175 = varonce174;
} else {
var176 = "/c_functions_hash.h";
var177 = 19;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
var179 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var179 = array_instance Array[Object] */
var180 = 2;
var181 = NEW_array__NativeArray(var180, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var181)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var181)->values[1] = (val*) var175;
{
((void (*)(val*, val*, long))(var179->class->vft[COLOR_array__Array__with_native]))(var179, var181, var180) /* with_native on <var179:Array[Object]>*/;
}
}
{
var182 = ((val* (*)(val*))(var179->class->vft[COLOR_string__Object__to_s]))(var179) /* to_s on <var179:Array[Object]>*/;
}
{
file__OFStream__open(var173, var182); /* Direct call file#OFStream#open on <var173:OFStream>*/
}
var_stream = var173;
if (varonce183) {
var184 = varonce183;
} else {
var185 = "const char* get_nit_name(register const char* procname, register unsigned int len);\n";
var186 = 84;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
file__OFStream__write(var_stream, var184); /* Direct call file#OFStream#write on <var_stream:OFStream>*/
}
{
file__OFStream__close(var_stream); /* Direct call file#OFStream#close on <var_stream:OFStream>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (self) on <self:AbstractCompiler> */
var190 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 901);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
var191 = NEW_c_tools__ExternCFile(&type_c_tools__ExternCFile);
if (varonce192) {
var193 = varonce192;
} else {
var194 = "/c_functions_hash.c";
var195 = 19;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 2;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var193;
{
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = "";
var204 = 0;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
{
c_tools__ExternCFile__init(var191, var200, var202); /* Direct call c_tools#ExternCFile#init on <var191:ExternCFile>*/
}
{
array__Array__add(var188, var191); /* Direct call array#Array#add on <var188:Array[ExternFile]>*/
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
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var4 = "#include <stdlib.h>";
var5 = 19;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
abstract_compiler__CodeWriter__add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var12 = "#include <stdio.h>";
var13 = 18;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
abstract_compiler__CodeWriter__add_decl(var7, var11); /* Direct call abstract_compiler#CodeWriter#add_decl on <var7:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var17 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var20 = "#include <string.h>";
var21 = 19;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
abstract_compiler__CodeWriter__add_decl(var15, var19); /* Direct call abstract_compiler#CodeWriter#add_decl on <var15:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var28 = "#include \"gc_chooser.h\"";
var29 = 23;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
abstract_compiler__CodeWriter__add_decl(var23, var27); /* Direct call abstract_compiler#CodeWriter#add_decl on <var23:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var36 = "#ifdef ANDROID";
var37 = 14;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
abstract_compiler__CodeWriter__add_decl(var31, var35); /* Direct call abstract_compiler#CodeWriter#add_decl on <var31:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var41 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
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
var44 = "\11#include <android/log.h>";
var45 = 25;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
abstract_compiler__CodeWriter__add_decl(var39, var43); /* Direct call abstract_compiler#CodeWriter#add_decl on <var39:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var49 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
abstract_compiler__CodeWriter__add_decl(var47, var51); /* Direct call abstract_compiler#CodeWriter#add_decl on <var47:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
abstract_compiler__CodeWriter__add_decl(var55, var59); /* Direct call abstract_compiler#CodeWriter#add_decl on <var55:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var65 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
abstract_compiler__CodeWriter__add_decl(var63, var67); /* Direct call abstract_compiler#CodeWriter#add_decl on <var63:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var73 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
abstract_compiler__CodeWriter__add_decl(var71, var75); /* Direct call abstract_compiler#CodeWriter#add_decl on <var71:CodeWriter>*/
}
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header_structs]))(self) /* compile_header_structs on <self:AbstractCompiler>*/;
}
{
separate_compiler__SeparateCompiler__compile_nitni_structs(self); /* Direct call separate_compiler#SeparateCompiler#compile_nitni_structs on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var81 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var79) on <var79:ModelBuilder> */
var84 = var79->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var79:ModelBuilder> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (var82) on <var82:ToolContext> */
var87 = var82->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var82:ToolContext> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 69);
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
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = array__AbstractArrayRead__has(var_gccd_disable, var93);
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
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
var103 = array__AbstractArrayRead__has(var_gccd_disable, var99);
}
var91 = var103;
}
if (var91){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var106 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
abstract_compiler__CodeWriter__add_decl(var104, var108); /* Direct call abstract_compiler#CodeWriter#add_decl on <var104:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var114 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
abstract_compiler__CodeWriter__add_decl(var112, var116); /* Direct call abstract_compiler#CodeWriter#add_decl on <var112:CodeWriter>*/
}
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "likely";
var124 = 6;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
{
var126 = array__AbstractArrayRead__has(var_gccd_disable, var122);
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
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
{
var133 = array__AbstractArrayRead__has(var_gccd_disable, var129);
}
var120 = var133;
}
if (var120){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var136 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
{
abstract_compiler__CodeWriter__add_decl(var134, var138); /* Direct call abstract_compiler#CodeWriter#add_decl on <var134:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var144 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
abstract_compiler__CodeWriter__add_decl(var142, var146); /* Direct call abstract_compiler#CodeWriter#add_decl on <var142:CodeWriter>*/
}
} else {
if (varonce150) {
var151 = varonce150;
} else {
var152 = "correct-likely";
var153 = 14;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
var155 = array__AbstractArrayRead__has(var_gccd_disable, var151);
}
if (var155){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var158 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
abstract_compiler__CodeWriter__add_decl(var156, var160); /* Direct call abstract_compiler#CodeWriter#add_decl on <var156:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var166 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
{
abstract_compiler__CodeWriter__add_decl(var164, var168); /* Direct call abstract_compiler#CodeWriter#add_decl on <var164:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var174 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
abstract_compiler__CodeWriter__add_decl(var172, var176); /* Direct call abstract_compiler#CodeWriter#add_decl on <var172:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var182 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
abstract_compiler__CodeWriter__add_decl(var180, var184); /* Direct call abstract_compiler#CodeWriter#add_decl on <var180:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var190 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
abstract_compiler__CodeWriter__add_decl(var188, var192); /* Direct call abstract_compiler#CodeWriter#add_decl on <var188:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var198 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
{
abstract_compiler__CodeWriter__add_decl(var196, var200); /* Direct call abstract_compiler#CodeWriter#add_decl on <var196:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var206 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 506);
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
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
abstract_compiler__CodeWriter__add_decl(var204, var208); /* Direct call abstract_compiler#CodeWriter#add_decl on <var204:CodeWriter>*/
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
/* method abstract_compiler#AbstractCompiler#compile_finalizer_function for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_finalizer_function(val* self) {
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
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = model__MModule__finalizable_type(var);
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
var13 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
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
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var20 = var_finalizable_type->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = model__MModule__try_get_primitive_method(var11, var14, var18);
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
var31 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var29) on <var29:ModelBuilder> */
var34 = var29->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var29:ModelBuilder> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
toolcontext__ToolContext__error(var32, var35, var37); /* Direct call toolcontext#ToolContext#error on <var32:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var41 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
}
var_v = var41;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "void gc_finalize (void *obj, void *client_data) {";
var45 = 49;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "obj";
var50 = 3;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
var52 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var48, var_finalizable_type);
}
var_recv = var52;
var53 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var54 = 1;
{
array__Array__with_capacity(var53, var54); /* Direct call array#Array#with_capacity on <var53:Array[RuntimeVariable]>*/
}
var_ = var53;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var55 = separate_compiler__SeparateCompilerVisitor__send(var_v, var_finalize_meth, var_);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "}";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_finalizer_function for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_finalizer_function(val* self) {
abstract_compiler__AbstractCompiler__compile_finalizer_function(self); /* Direct call abstract_compiler#AbstractCompiler#compile_finalizer_function on <self:Object(AbstractCompiler)>*/
RET_LABEL:;
}
