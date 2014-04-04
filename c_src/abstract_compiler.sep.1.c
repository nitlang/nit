#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val; /* @opt_output on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_output");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 29);
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
var1 = abstract_compiler__ToolContext__opt_output(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_output= for (self: ToolContext, OptionString) */
void abstract_compiler__ToolContext__opt_output_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val = p0; /* @opt_output on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_output= for (self: Object, OptionString) */
void VIRTUAL_abstract_compiler__ToolContext__opt_output_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_output_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_cc for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_cc(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_cc].val; /* @opt_no_cc on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_cc");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 31);
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
var1 = abstract_compiler__ToolContext__opt_no_cc(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_cc= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_cc_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_cc].val = p0; /* @opt_no_cc on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_cc= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_cc_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_cc_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_cc_path for (self: ToolContext): OptionArray */
val* abstract_compiler__ToolContext__opt_cc_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_cc_path].val; /* @opt_cc_path on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_cc_path");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 33);
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
var1 = abstract_compiler__ToolContext__opt_cc_path(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_cc_path= for (self: ToolContext, OptionArray) */
void abstract_compiler__ToolContext__opt_cc_path_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_cc_path].val = p0; /* @opt_cc_path on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_cc_path= for (self: Object, OptionArray) */
void VIRTUAL_abstract_compiler__ToolContext__opt_cc_path_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_cc_path_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_make_flags for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_make_flags(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_make_flags].val; /* @opt_make_flags on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_make_flags");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 35);
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
var1 = abstract_compiler__ToolContext__opt_make_flags(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_make_flags= for (self: ToolContext, OptionString) */
void abstract_compiler__ToolContext__opt_make_flags_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_make_flags].val = p0; /* @opt_make_flags on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_make_flags= for (self: Object, OptionString) */
void VIRTUAL_abstract_compiler__ToolContext__opt_make_flags_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_make_flags_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_compile_dir for (self: ToolContext): OptionString */
val* abstract_compiler__ToolContext__opt_compile_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_compile_dir].val; /* @opt_compile_dir on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_compile_dir");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 37);
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
var1 = abstract_compiler__ToolContext__opt_compile_dir(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_compile_dir= for (self: ToolContext, OptionString) */
void abstract_compiler__ToolContext__opt_compile_dir_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_compile_dir].val = p0; /* @opt_compile_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_compile_dir= for (self: Object, OptionString) */
void VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_compile_dir_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_hardening for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_hardening(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_hardening].val; /* @opt_hardening on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_hardening");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 39);
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
var1 = abstract_compiler__ToolContext__opt_hardening(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_hardening= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_hardening_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_hardening].val = p0; /* @opt_hardening on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_hardening= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_hardening_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_hardening_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_shortcut_range for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_shortcut_range].val; /* @opt_no_shortcut_range on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_shortcut_range");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 41);
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
var1 = abstract_compiler__ToolContext__opt_no_shortcut_range(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_shortcut_range= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_shortcut_range_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_shortcut_range].val = p0; /* @opt_no_shortcut_range on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_shortcut_range= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_shortcut_range_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_covariance(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_covariance].val; /* @opt_no_check_covariance on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_check_covariance");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 43);
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
var1 = abstract_compiler__ToolContext__opt_no_check_covariance(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_check_covariance_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_covariance].val = p0; /* @opt_no_check_covariance on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_check_covariance_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_initialization for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_initialization(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_initialization].val; /* @opt_no_check_initialization on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_check_initialization");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 45);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_initialization for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_check_initialization(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = abstract_compiler__ToolContext__opt_no_check_initialization(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_initialization= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_check_initialization_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_initialization].val = p0; /* @opt_no_check_initialization on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_initialization= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_check_initialization_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_check_initialization_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_assert(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_assert].val; /* @opt_no_check_assert on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_check_assert");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 47);
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
var1 = abstract_compiler__ToolContext__opt_no_check_assert(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_check_assert_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_assert].val = p0; /* @opt_no_check_assert on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_check_assert_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_autocast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_autocast].val; /* @opt_no_check_autocast on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_check_autocast");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 49);
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
var1 = abstract_compiler__ToolContext__opt_no_check_autocast(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_check_autocast_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_autocast].val = p0; /* @opt_no_check_autocast on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_check_autocast_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_other for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_check_other(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_other].val; /* @opt_no_check_other on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_check_other");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 51);
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
var1 = abstract_compiler__ToolContext__opt_no_check_other(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_other= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_check_other_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_other].val = p0; /* @opt_no_check_other on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_check_other= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_check_other_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_typing_test_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_typing_test_metrics].val; /* @opt_typing_test_metrics on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_typing_test_metrics");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 53);
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
var1 = abstract_compiler__ToolContext__opt_typing_test_metrics(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_typing_test_metrics_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_typing_test_metrics].val = p0; /* @opt_typing_test_metrics on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_typing_test_metrics_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_stacktrace for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_no_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_stacktrace].val; /* @opt_no_stacktrace on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_stacktrace");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 55);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_stacktrace for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_no_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = abstract_compiler__ToolContext__opt_no_stacktrace(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_stacktrace= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_no_stacktrace_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_stacktrace].val = p0; /* @opt_no_stacktrace on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_no_stacktrace= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_no_stacktrace_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_no_stacktrace_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_stacktrace for (self: ToolContext): OptionBool */
val* abstract_compiler__ToolContext__opt_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_stacktrace].val; /* @opt_stacktrace on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_stacktrace");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_stacktrace for (self: Object): OptionBool */
val* VIRTUAL_abstract_compiler__ToolContext__opt_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = abstract_compiler__ToolContext__opt_stacktrace(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_stacktrace= for (self: ToolContext, OptionBool) */
void abstract_compiler__ToolContext__opt_stacktrace_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_stacktrace].val = p0; /* @opt_stacktrace on <self:ToolContext> */
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#opt_stacktrace= for (self: Object, OptionBool) */
void VIRTUAL_abstract_compiler__ToolContext__opt_stacktrace_61d(val* self, val* p0) {
abstract_compiler__ToolContext__opt_stacktrace_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#init for (self: ToolContext) */
void abstract_compiler__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionString */;
val* var2 /* : OptionBool */;
val* var3 /* : OptionString */;
val* var4 /* : OptionString */;
val* var5 /* : OptionBool */;
val* var6 /* : OptionBool */;
val* var7 /* : Array[Option] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Option] */;
val* var10 /* : OptionContext */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : Array[Option] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Option] */;
val* var19 /* : OptionContext */;
val* var20 /* : OptionBool */;
val* var21 /* : Array[Option] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Option] */;
val* var24 /* : OptionContext */;
val* var25 /* : OptionBool */;
val* var26 /* : Array[Option] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Option] */;
val* var29 /* : OptionContext */;
val* var30 /* : OptionBool */;
val* var31 /* : Array[Option] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Option] */;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_output]))(self) /* opt_output on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_cc]))(self) /* opt_no_cc on <self:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_make_flags]))(self) /* opt_make_flags on <self:ToolContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_compile_dir]))(self) /* opt_compile_dir on <self:ToolContext>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_hardening]))(self) /* opt_hardening on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_shortcut_range]))(self) /* opt_no_shortcut_range on <self:ToolContext>*/;
var7 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var7 = array_instance Array[Option] */
var8 = 6;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var9)->values[2] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[3] = (val*) var4;
((struct instance_array__NativeArray*)var9)->values[4] = (val*) var5;
((struct instance_array__NativeArray*)var9)->values[5] = (val*) var6;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Option]>*/;
}
((void (*)(val*, val*))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var7) /* add_option on <var:OptionContext>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_covariance]))(self) /* opt_no_check_covariance on <self:ToolContext>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_initialization]))(self) /* opt_no_check_initialization on <self:ToolContext>*/;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_assert]))(self) /* opt_no_check_assert on <self:ToolContext>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_autocast]))(self) /* opt_no_check_autocast on <self:ToolContext>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_other]))(self) /* opt_no_check_other on <self:ToolContext>*/;
var16 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var16 = array_instance Array[Option] */
var17 = 5;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var12;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var13;
((struct instance_array__NativeArray*)var18)->values[3] = (val*) var14;
((struct instance_array__NativeArray*)var18)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Option]>*/;
}
((void (*)(val*, val*))(var10->class->vft[COLOR_opts__OptionContext__add_option]))(var10, var16) /* add_option on <var10:OptionContext>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(self) /* opt_typing_test_metrics on <self:ToolContext>*/;
var21 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var21 = array_instance Array[Option] */
var22 = 1;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var20;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Option]>*/;
}
((void (*)(val*, val*))(var19->class->vft[COLOR_opts__OptionContext__add_option]))(var19, var21) /* add_option on <var19:OptionContext>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(self) /* opt_stacktrace on <self:ToolContext>*/;
var26 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var26 = array_instance Array[Option] */
var27 = 1;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var25;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Option]>*/;
}
((void (*)(val*, val*))(var24->class->vft[COLOR_opts__OptionContext__add_option]))(var24, var26) /* add_option on <var24:OptionContext>*/;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(self) /* opt_no_stacktrace on <self:ToolContext>*/;
var31 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var31 = array_instance Array[Option] */
var32 = 1;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var30;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Option]>*/;
}
((void (*)(val*, val*))(var29->class->vft[COLOR_opts__OptionContext__add_option]))(var29, var31) /* add_option on <var29:OptionContext>*/;
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#init for (self: Object) */
void VIRTUAL_abstract_compiler__ToolContext__init(val* self) {
abstract_compiler__ToolContext__init(self);
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#init for (self: ModelBuilder, Model, ToolContext) */
void abstract_compiler__ModelBuilder__init(val* self, val* p0, val* p1) {
val* var_model /* var model: Model */;
val* var_toolcontext /* var toolcontext: ToolContext */;
short int var /* : Bool */;
val* var1 /* : OptionBool */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : OptionBool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
long var11 /* : Int */;
var_model = p0;
var_toolcontext = p1;
var1 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var_toolcontext) /* opt_no_stacktrace on <var_toolcontext:ToolContext>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_opts__Option__value]))(var1) /* value on <var1:OptionBool>*/;
var3 = ((struct instance_kernel__Bool*)var2)->value; /* autounbox from nullable Object to Bool */;
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var_toolcontext) /* opt_stacktrace on <var_toolcontext:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_opts__Option__value]))(var4) /* value on <var4:OptionBool>*/;
var6 = ((struct instance_kernel__Bool*)var5)->value; /* autounbox from nullable Object to Bool */;
var = var6;
} else {
var = var_;
}
if (var){
if (varonce) {
var7 = varonce;
} else {
var8 = "Cannot use --nit-stacktrace when --no-stacktrace is activated";
var9 = 61;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var7) /* print on <self:ModelBuilder>*/;
var11 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var11) /* exit on <self:ModelBuilder>*/;
} else {
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__init]))(self, p0, p1) /* init on <self:ModelBuilder>*/;
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#init for (self: Object, Model, ToolContext) */
void VIRTUAL_abstract_compiler__ModelBuilder__init(val* self, val* p0, val* p1) {
abstract_compiler__ModelBuilder__init(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#compile_dir for (self: ModelBuilder): String */
val* abstract_compiler__ModelBuilder__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__ModelBuilder___64dcompile_dir].val; /* @compile_dir on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @compile_dir");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 82);
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
var1 = abstract_compiler__ModelBuilder__compile_dir(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ModelBuilder#compile_dir= for (self: ModelBuilder, String) */
void abstract_compiler__ModelBuilder__compile_dir_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ModelBuilder___64dcompile_dir].val = p0; /* @compile_dir on <self:ModelBuilder> */
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#compile_dir= for (self: Object, String) */
void VIRTUAL_abstract_compiler__ModelBuilder__compile_dir_61d(val* self, val* p0) {
abstract_compiler__ModelBuilder__compile_dir_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: ModelBuilder, AbstractCompiler) */
void abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : MModule */;
val* var1 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MakefileToolchain */;
val* var5 /* : ToolContext */;
val* var_toolchain /* var toolchain: nullable Object */;
val* var6 /* : ToolContext */;
val* var7 /* : Toolchain */;
val* var8 /* : String */;
var_compiler = p0;
var = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_platform__MModule__target_platform]))(var) /* target_platform on <var:MModule>*/;
var_platform = var1;
var2 = NULL;
if (var_platform == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NEW_abstract_compiler__MakefileToolchain(&type_abstract_compiler__MakefileToolchain);
var5 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_compiler__Toolchain__init]))(var4, var5) /* init on <var4:MakefileToolchain>*/;
var_toolchain = var4;
} else {
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var_platform->class->vft[COLOR_abstract_compiler__Platform__toolchain]))(var_platform, var6) /* toolchain on <var_platform:nullable Platform(Platform)>*/;
var_toolchain = var7;
}
var8 = ((val* (*)(val*))(var_toolchain->class->vft[COLOR_abstract_compiler__Toolchain__compile_dir]))(var_toolchain) /* compile_dir on <var_toolchain:nullable Object(Toolchain)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__compile_dir_61d]))(self, var8) /* compile_dir= on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var_toolchain->class->vft[COLOR_abstract_compiler__Toolchain__write_and_make]))(var_toolchain, var_compiler) /* write_and_make on <var_toolchain:nullable Object(Toolchain)>*/;
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0) {
abstract_compiler__ModelBuilder__write_and_make(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Platform#toolchain for (self: Platform, ToolContext): Toolchain */
val* abstract_compiler__Platform__toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "toolchain", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 101);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#Platform#toolchain for (self: Object, ToolContext): Toolchain */
val* VIRTUAL_abstract_compiler__Platform__toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
val* var1 /* : Toolchain */;
var1 = abstract_compiler__Platform__toolchain(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext for (self: Toolchain): ToolContext */
val* abstract_compiler__Toolchain__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_abstract_compiler__Toolchain___64dtoolcontext].val; /* @toolcontext on <self:Toolchain> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 105);
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
var1 = abstract_compiler__Toolchain__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext= for (self: Toolchain, ToolContext) */
void abstract_compiler__Toolchain__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Toolchain___64dtoolcontext].val = p0; /* @toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_abstract_compiler__Toolchain__toolcontext_61d(val* self, val* p0) {
abstract_compiler__Toolchain__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#compile_dir for (self: Toolchain): String */
val* abstract_compiler__Toolchain__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionString */;
val* var3 /* : nullable Object */;
val* var_compile_dir /* var compile_dir: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:Toolchain>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__ToolContext__opt_compile_dir]))(var1) /* opt_compile_dir on <var1:ToolContext>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_opts__Option__value]))(var2) /* value on <var2:OptionString>*/;
var_compile_dir = var3;
var4 = NULL;
if (var_compile_dir == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (var5){
if (varonce) {
var6 = varonce;
} else {
var7 = ".nit_compile";
var8 = 12;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var_compile_dir = var6;
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
/* method abstract_compiler#Toolchain#write_and_make for (self: Toolchain, AbstractCompiler) */
void abstract_compiler__Toolchain__write_and_make(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "write_and_make", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 114);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__Toolchain__write_and_make(val* self, val* p0) {
abstract_compiler__Toolchain__write_and_make(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#init for (self: Toolchain, ToolContext) */
void abstract_compiler__Toolchain__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Toolchain___64dtoolcontext].val = p0; /* @toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#init for (self: Object, ToolContext) */
void VIRTUAL_abstract_compiler__Toolchain__init(val* self, val* p0) {
abstract_compiler__Toolchain__init(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#cc_paths for (self: MakefileToolchain): Array[String] */
val* abstract_compiler__MakefileToolchain__cc_paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__MakefileToolchain___64dcc_paths].val; /* @cc_paths on <self:MakefileToolchain> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cc_paths");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 119);
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
var1 = abstract_compiler__MakefileToolchain__cc_paths(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#cc_paths= for (self: MakefileToolchain, Array[String]) */
void abstract_compiler__MakefileToolchain__cc_paths_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MakefileToolchain___64dcc_paths].val = p0; /* @cc_paths on <self:MakefileToolchain> */
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#cc_paths= for (self: Object, Array[String]) */
void VIRTUAL_abstract_compiler__MakefileToolchain__cc_paths_61d(val* self, val* p0) {
abstract_compiler__MakefileToolchain__cc_paths_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#gather_cc_paths for (self: MakefileToolchain) */
void abstract_compiler__MakefileToolchain__gather_cc_paths(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_path_env /* var path_env: String */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var_libname /* var libname: String */;
short int var20 /* : Bool */;
val* var21 /* : Array[String] */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var_24 /* var : Array[Object] */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : Sys */;
val* var31 /* : String */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var_libname39 /* var libname: String */;
short int var40 /* : Bool */;
val* var41 /* : Array[String] */;
val* var42 /* : String */;
val* var43 /* : Array[String] */;
short int var44 /* : Bool */;
val* var45 /* : ToolContext */;
val* var46 /* : null */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : Array[String] */;
val* var53 /* : ToolContext */;
val* var54 /* : OptionArray */;
val* var55 /* : nullable Object */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : Array[String] */;
char var65 /* : Char */;
val* var66 /* : Array[String] */;
val* var67 /* : Pattern */;
if (varonce) {
var = varonce;
} else {
var1 = "NIT_DIR";
var2 = 7;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(var->class->vft[COLOR_environ__String__environ]))(var) /* environ on <var:String>*/;
var_path_env = var4;
var5 = ((short int (*)(val*))(var_path_env->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path_env) /* is_empty on <var_path_env:String>*/;
var6 = !var5;
if (var6){
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
var8 = 3;
((void (*)(val*, long))(var7->class->vft[COLOR_array__Array__with_capacity]))(var7, var8) /* with_capacity on <var7:Array[Object]>*/;
var_ = var7;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "";
var12 = 0;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_path_env) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "/clib";
var17 = 5;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_libname = var19;
var20 = ((short int (*)(val*))(var_libname->class->vft[COLOR_file__String__file_exists]))(var_libname) /* file_exists on <var_libname:String>*/;
if (var20){
var21 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var21, var_libname) /* add on <var21:Array[String]>*/;
} else {
}
} else {
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
var23 = 3;
((void (*)(val*, long))(var22->class->vft[COLOR_array__Array__with_capacity]))(var22, var23) /* with_capacity on <var22:Array[Object]>*/;
var_24 = var22;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "";
var28 = 0;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_24->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_24, var26) /* add on <var_24:Array[Object]>*/;
var30 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:MakefileToolchain>*/;
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Sys__program_name]))(var30) /* program_name on <var30:Sys>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_file__String__dirname]))(var31) /* dirname on <var31:String>*/;
((void (*)(val*, val*))(var_24->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_24, var32) /* add on <var_24:Array[Object]>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "/../clib";
var36 = 8;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
((void (*)(val*, val*))(var_24->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_24, var34) /* add on <var_24:Array[Object]>*/;
var38 = ((val* (*)(val*))(var_24->class->vft[COLOR_string__Object__to_s]))(var_24) /* to_s on <var_24:Array[Object]>*/;
var_libname39 = var38;
var40 = ((short int (*)(val*))(var_libname39->class->vft[COLOR_file__String__file_exists]))(var_libname39) /* file_exists on <var_libname39:String>*/;
if (var40){
var41 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var42 = ((val* (*)(val*))(var_libname39->class->vft[COLOR_file__String__simplify_path]))(var_libname39) /* simplify_path on <var_libname39:String>*/;
((void (*)(val*, val*))(var41->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var41, var42) /* add on <var41:Array[String]>*/;
} else {
}
var43 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var43) /* is_empty on <var43:Array[String]>*/;
if (var44){
var45 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var46 = NULL;
if (varonce47) {
var48 = varonce47;
} else {
var49 = "Cannot determine the nit clib path. define envvar NIT_DIR.";
var50 = 58;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
((void (*)(val*, val*, val*))(var45->class->vft[COLOR_toolcontext__ToolContext__error]))(var45, var46, var48) /* error on <var45:ToolContext>*/;
} else {
}
var52 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var53 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_abstract_compiler__ToolContext__opt_cc_path]))(var53) /* opt_cc_path on <var53:ToolContext>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_opts__Option__value]))(var54) /* value on <var54:OptionArray>*/;
((void (*)(val*, val*))(var52->class->vft[COLOR_abstract_collection__Sequence__append]))(var52, var55) /* append on <var52:Array[String]>*/;
if (varonce56) {
var57 = varonce56;
} else {
var58 = "NIT_CC_PATH";
var59 = 11;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = ((val* (*)(val*))(var57->class->vft[COLOR_environ__String__environ]))(var57) /* environ on <var57:String>*/;
var_path_env = var61;
var62 = ((short int (*)(val*))(var_path_env->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path_env) /* is_empty on <var_path_env:String>*/;
var63 = !var62;
if (var63){
var64 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var65 = ':';
var67 = BOX_kernel__Char(var65); /* autobox from Char to Pattern */
var66 = ((val* (*)(val*, val*))(var_path_env->class->vft[COLOR_string_search__String__split_with]))(var_path_env, var67) /* split_with on <var_path_env:String>*/;
((void (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__Sequence__append]))(var64, var66) /* append on <var64:Array[String]>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#gather_cc_paths for (self: Object) */
void VIRTUAL_abstract_compiler__MakefileToolchain__gather_cc_paths(val* self) {
abstract_compiler__MakefileToolchain__gather_cc_paths(self);
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: MakefileToolchain, AbstractCompiler) */
void abstract_compiler__MakefileToolchain__write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
long var2 /* : Int */;
long var_time0 /* var time0: Int */;
val* var3 /* : ToolContext */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
val* var9 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
long var10 /* : Int */;
long var_time1 /* var time1: Int */;
val* var11 /* : ToolContext */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
long var17 /* : Int */;
long var19 /* : Int */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : Object */;
val* var29 /* : String */;
long var30 /* : Int */;
val* var31 /* : ToolContext */;
val* var32 /* : OptionBool */;
val* var33 /* : nullable Object */;
short int var34 /* : Bool */;
val* var35 /* : ToolContext */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
long var41 /* : Int */;
long var42 /* : Int */;
val* var43 /* : ToolContext */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
long var49 /* : Int */;
long var51 /* : Int */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : Object */;
val* var61 /* : String */;
long var62 /* : Int */;
var_compiler = p0;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__gather_cc_paths]))(self) /* gather_cc_paths on <self:MakefileToolchain>*/;
var = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var_mainmodule = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__compile_dir]))(self) /* compile_dir on <self:MakefileToolchain>*/;
var_compile_dir = var1;
var2 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:MakefileToolchain>*/;
var_time0 = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "*** WRITING C ***";
var6 = 17;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = 1;
((void (*)(val*, val*, long))(var3->class->vft[COLOR_toolcontext__ToolContext__info]))(var3, var4, var8) /* info on <var3:ToolContext>*/;
((void (*)(val*))(var_compile_dir->class->vft[COLOR_file__String__mkdir]))(var_compile_dir) /* mkdir on <var_compile_dir:String>*/;
var9 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[String]>*/;
var_cfiles = var9;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__write_files]))(self, var_compiler, var_compile_dir, var_cfiles) /* write_files on <self:MakefileToolchain>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__write_makefile]))(self, var_compiler, var_compile_dir, var_cfiles) /* write_makefile on <self:MakefileToolchain>*/;
var10 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:MakefileToolchain>*/;
var_time1 = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "*** END WRITING C: ";
var15 = 19;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var19 = var_time1 - var_time0;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " ***";
var23 = 4;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var13;
var28 = BOX_kernel__Int(var17); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var28;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var29 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
var30 = 2;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_toolcontext__ToolContext__info]))(var11, var29, var30) /* info on <var11:ToolContext>*/;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_cc]))(var31) /* opt_no_cc on <var31:ToolContext>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_opts__Option__value]))(var32) /* value on <var32:OptionBool>*/;
var34 = ((struct instance_kernel__Bool*)var33)->value; /* autounbox from nullable Object to Bool */;
if (var34){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "*** COMPILING C ***";
var39 = 19;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = 1;
((void (*)(val*, val*, long))(var35->class->vft[COLOR_toolcontext__ToolContext__info]))(var35, var37, var41) /* info on <var35:ToolContext>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__compile_c_code]))(self, var_compiler, var_compile_dir) /* compile_c_code on <self:MakefileToolchain>*/;
var42 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:MakefileToolchain>*/;
var_time1 = var42;
var43 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "*** END COMPILING C: ";
var47 = 21;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var51 = var_time1 - var_time0;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = " ***";
var55 = 4;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 3;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var45;
var60 = BOX_kernel__Int(var49); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var60;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var53;
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
var61 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
var62 = 2;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_toolcontext__ToolContext__info]))(var43, var61, var62) /* info on <var43:ToolContext>*/;
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__MakefileToolchain__write_and_make(val* self, val* p0) {
abstract_compiler__MakefileToolchain__write_and_make(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: MakefileToolchain, AbstractCompiler, String, Array[String]) */
void abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : ToolContext */;
val* var1 /* : OptionBool */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
val* var4 /* : ExternCFile */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
val* var14 /* : Array[ExternFile] */;
val* var15 /* : Array[String] */;
val* var16 /* : Array[String] */;
val* var17 /* : nullable Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
val* var27 /* : Array[String] */;
val* var28 /* : Array[String] */;
val* var29 /* : nullable Object */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
val* var39 /* : ToolContext */;
val* var40 /* : ModelBuilder */;
val* var41 /* : HashMap[MModule, AModule] */;
val* var_m2m /* var m2m: HashMap[MModule, AModule] */;
val* var42 /* : MModule */;
val* var43 /* : POSetElement[MModule] */;
val* var44 /* : Collection[Object] */;
val* var45 /* : Iterator[nullable Object] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var48 /* : Collection[Object] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_amodule /* var amodule: AModule */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var_ /* var : Bool */;
short int var53 /* : Bool */;
val* var54 /* : Array[String] */;
val* var55 /* : Iterator[nullable Object] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_src /* var src: String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var_basename /* var basename: String */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var_66 /* var : Array[Object] */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var_dst /* var dst: String */;
val* var84 /* : CodeWriter */;
val* var85 /* : CodeFile */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var_hfilename /* var hfilename: String */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var_95 /* var : Array[Object] */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var112 /* : OFStream */;
val* var_h /* var h: OFStream */;
val* var113 /* : CodeWriter */;
val* var114 /* : List[String] */;
val* var115 /* : Iterator[nullable Object] */;
short int var116 /* : Bool */;
val* var117 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var124 /* : CodeWriter */;
val* var125 /* : List[String] */;
val* var126 /* : Iterator[nullable Object] */;
short int var127 /* : Bool */;
val* var128 /* : nullable Object */;
val* var_l129 /* var l: String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
val* var136 /* : List[CodeFile] */;
val* var137 /* : Iterator[nullable Object] */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var140 /* : Int */;
long var_i /* var i: Int */;
val* var141 /* : null */;
val* var_hfile /* var hfile: nullable OFStream */;
long var142 /* : Int */;
long var_count /* var count: Int */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var_145 /* var : Array[Object] */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var_cfilename /* var cfilename: String */;
val* var158 /* : Array[Object] */;
long var159 /* : Int */;
val* var_160 /* var : Array[Object] */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var177 /* : OFStream */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : String */;
val* var192 /* : HashSet[String] */;
val* var193 /* : Iterator[nullable Object] */;
short int var194 /* : Bool */;
val* var195 /* : nullable Object */;
val* var_key /* var key: String */;
val* var196 /* : HashMap[String, String] */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
val* var199 /* : HashMap[String, ANode] */;
val* var200 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
val* var201 /* : null */;
short int var202 /* : Bool */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : String */;
val* var208 /* : Array[Object] */;
long var209 /* : Int */;
val* var210 /* : NativeArray[Object] */;
val* var211 /* : String */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
long var215 /* : Int */;
val* var216 /* : String */;
val* var217 /* : Array[Object] */;
long var218 /* : Int */;
val* var219 /* : NativeArray[Object] */;
val* var220 /* : String */;
val* var221 /* : HashMap[String, String] */;
val* var222 /* : nullable Object */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
val* var229 /* : null */;
val* var_file /* var file: nullable OFStream */;
val* var230 /* : Array[CodeWriter] */;
val* var231 /* : Iterator[nullable Object] */;
short int var232 /* : Bool */;
val* var233 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var234 /* : CodeWriter */;
short int var235 /* : Bool */;
val* var237 /* : List[String] */;
long var238 /* : Int */;
val* var239 /* : List[String] */;
long var240 /* : Int */;
long var241 /* : Int */;
long var243 /* : Int */;
long var_total_lines /* var total_lines: Int */;
long var244 /* : Int */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
long var248 /* : Int */;
long var250 /* : Int */;
short int var251 /* : Bool */;
val* var252 /* : null */;
short int var253 /* : Bool */;
short int var_254 /* var : Bool */;
long var255 /* : Int */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var259 /* : Bool */;
long var260 /* : Int */;
long var261 /* : Int */;
long var263 /* : Int */;
val* var264 /* : null */;
short int var265 /* : Bool */;
val* var266 /* : Array[Object] */;
long var267 /* : Int */;
val* var_268 /* var : Array[Object] */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : String */;
val* var274 /* : String */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : String */;
val* var280 /* : nullable Object */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : String */;
val* var286 /* : String */;
val* var287 /* : Array[Object] */;
long var288 /* : Int */;
val* var_289 /* var : Array[Object] */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : String */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : String */;
val* var305 /* : String */;
val* var306 /* : ToolContext */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : String */;
val* var312 /* : Array[Object] */;
long var313 /* : Int */;
val* var314 /* : NativeArray[Object] */;
val* var315 /* : String */;
long var316 /* : Int */;
val* var317 /* : OFStream */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : String */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
val* var329 /* : Array[Object] */;
long var330 /* : Int */;
val* var331 /* : NativeArray[Object] */;
val* var332 /* : String */;
val* var333 /* : List[String] */;
val* var334 /* : Iterator[nullable Object] */;
short int var335 /* : Bool */;
val* var336 /* : nullable Object */;
val* var_l337 /* var l: String */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : String */;
val* var344 /* : List[String] */;
val* var345 /* : Iterator[nullable Object] */;
short int var346 /* : Bool */;
val* var347 /* : nullable Object */;
val* var_l348 /* var l: String */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
long var352 /* : Int */;
val* var353 /* : String */;
val* var355 /* : null */;
short int var356 /* : Bool */;
val* var358 /* : ToolContext */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : String */;
long var364 /* : Int */;
val* var365 /* : Array[Object] */;
long var366 /* : Int */;
val* var367 /* : NativeArray[Object] */;
val* var368 /* : Object */;
val* var369 /* : String */;
long var370 /* : Int */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var) /* opt_stacktrace on <var:ToolContext>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_opts__Option__value]))(var1) /* value on <var1:OptionBool>*/;
var3 = ((struct instance_kernel__Bool*)var2)->value; /* autounbox from nullable Object to Bool */;
if (var3){
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings]))(var_compiler) /* build_c_to_nit_bindings on <var_compiler:AbstractCompiler>*/;
} else {
}
var4 = NEW_c__ExternCFile(&type_c__ExternCFile);
if (varonce) {
var5 = varonce;
} else {
var6 = "gc_chooser.c";
var7 = 12;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "-DWITH_LIBGC";
var12 = 12;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_c__ExternCFile__init]))(var4, var5, var10) /* init on <var4:ExternCFile>*/;
var_gc_chooser = var4;
var14 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var14, var_gc_chooser) /* add on <var14:Array[ExternFile]>*/;
var15 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files_to_copy]))(var_compiler) /* files_to_copy on <var_compiler:AbstractCompiler>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__first]))(var16) /* first on <var16:Array[String]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "/gc_chooser.c";
var21 = 13;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var15, var26) /* add on <var15:Array[String]>*/;
var27 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files_to_copy]))(var_compiler) /* files_to_copy on <var_compiler:AbstractCompiler>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__first]))(var28) /* first on <var28:Array[String]>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "/gc_chooser.h";
var33 = 13;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 2;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var31;
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
var38 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
((void (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var27, var38) /* add on <var27:Array[String]>*/;
var39 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var39) /* modelbuilder on <var39:ToolContext>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var40) /* mmodule2nmodule on <var40:ModelBuilder>*/;
var_m2m = var41;
var42 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_mmodule__MModule__in_importation]))(var42) /* in_importation on <var42:MModule>*/;
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_poset__POSetElement__greaters]))(var43) /* greaters on <var43:POSetElement[MModule]>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Collection__iterator]))(var44) /* iterator on <var44:Collection[Object](Collection[MModule])>*/;
for(;;) {
var46 = ((short int (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var45) /* is_ok on <var45:Iterator[nullable Object]>*/;
if(!var46) break;
var47 = ((val* (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__item]))(var45) /* item on <var45:Iterator[nullable Object]>*/;
var_m = var47;
var48 = ((val* (*)(val*))(var_m2m->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_m2m) /* keys on <var_m2m:HashMap[MModule, AModule]>*/;
var49 = ((short int (*)(val*, val*))(var48->class->vft[COLOR_abstract_collection__Collection__has]))(var48, var_m) /* has on <var48:Collection[Object](HashMapKeys[MModule, AModule])>*/;
if (var49){
var50 = ((val* (*)(val*, val*))(var_m2m->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_m2m, var_m) /* [] on <var_m2m:HashMap[MModule, AModule]>*/;
var_amodule = var50;
var52 = ((short int (*)(val*))(var_m->class->vft[COLOR_common_ffi__MModule__uses_ffi]))(var_m) /* uses_ffi on <var_m:MModule>*/;
var_ = var52;
if (var52){
var51 = var_;
} else {
var53 = ((short int (*)(val*))(var_amodule->class->vft[COLOR_abstract_compiler__AModule__uses_legacy_ni]))(var_amodule) /* uses_legacy_ni on <var_amodule:AModule>*/;
var51 = var53;
}
if (var51){
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(var_compiler, var_amodule) /* finalize_ffi_for_module on <var_compiler:AbstractCompiler>*/;
} else {
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var45->class->vft[COLOR_abstract_collection__Iterator__next]))(var45) /* next on <var45:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var54 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files_to_copy]))(var_compiler) /* files_to_copy on <var_compiler:AbstractCompiler>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_abstract_collection__Collection__iterator]))(var54) /* iterator on <var54:Array[String]>*/;
for(;;) {
var56 = ((short int (*)(val*))(var55->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var55) /* is_ok on <var55:Iterator[nullable Object]>*/;
if(!var56) break;
var57 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_collection__Iterator__item]))(var55) /* item on <var55:Iterator[nullable Object]>*/;
var_src = var57;
if (varonce58) {
var59 = varonce58;
} else {
var60 = "";
var61 = 0;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*, val*))(var_src->class->vft[COLOR_file__String__basename]))(var_src, var59) /* basename on <var_src:String>*/;
var_basename = var63;
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
var65 = 5;
((void (*)(val*, long))(var64->class->vft[COLOR_array__Array__with_capacity]))(var64, var65) /* with_capacity on <var64:Array[Object]>*/;
var_66 = var64;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "";
var70 = 0;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
((void (*)(val*, val*))(var_66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_66, var68) /* add on <var_66:Array[Object]>*/;
((void (*)(val*, val*))(var_66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_66, var_compile_dir) /* add on <var_66:Array[Object]>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "/";
var75 = 1;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
((void (*)(val*, val*))(var_66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_66, var73) /* add on <var_66:Array[Object]>*/;
((void (*)(val*, val*))(var_66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_66, var_basename) /* add on <var_66:Array[Object]>*/;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "";
var80 = 0;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
((void (*)(val*, val*))(var_66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_66, var78) /* add on <var_66:Array[Object]>*/;
var82 = ((val* (*)(val*))(var_66->class->vft[COLOR_string__Object__to_s]))(var_66) /* to_s on <var_66:Array[Object]>*/;
var_dst = var82;
((void (*)(val*, val*))(var_src->class->vft[COLOR_file__String__file_copy_to]))(var_src, var_dst) /* file_copy_to on <var_src:String>*/;
CONTINUE_label83: (void)0;
((void (*)(val*))(var55->class->vft[COLOR_abstract_collection__Iterator__next]))(var55) /* next on <var55:Iterator[nullable Object]>*/;
}
BREAK_label83: (void)0;
var84 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_abstract_compiler__CodeWriter__file]))(var84) /* file on <var84:CodeWriter>*/;
var86 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var85) /* name on <var85:CodeFile>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = ".h";
var90 = 2;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = ((val* (*)(val*, val*))(var86->class->vft[COLOR_string__String___43d]))(var86, var88) /* + on <var86:String>*/;
var_hfilename = var92;
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
var94 = 5;
((void (*)(val*, long))(var93->class->vft[COLOR_array__Array__with_capacity]))(var93, var94) /* with_capacity on <var93:Array[Object]>*/;
var_95 = var93;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "";
var99 = 0;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
((void (*)(val*, val*))(var_95->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_95, var97) /* add on <var_95:Array[Object]>*/;
((void (*)(val*, val*))(var_95->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_95, var_compile_dir) /* add on <var_95:Array[Object]>*/;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "/";
var104 = 1;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
((void (*)(val*, val*))(var_95->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_95, var102) /* add on <var_95:Array[Object]>*/;
((void (*)(val*, val*))(var_95->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_95, var_hfilename) /* add on <var_95:Array[Object]>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "";
var109 = 0;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
((void (*)(val*, val*))(var_95->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_95, var107) /* add on <var_95:Array[Object]>*/;
var111 = ((val* (*)(val*))(var_95->class->vft[COLOR_string__Object__to_s]))(var_95) /* to_s on <var_95:Array[Object]>*/;
var_hfilepath = var111;
var112 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var112->class->vft[COLOR_file__OFStream__open]))(var112, var_hfilepath) /* open on <var112:OFStream>*/;
var_h = var112;
var113 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var114 = ((val* (*)(val*))(var113->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var113) /* decl_lines on <var113:CodeWriter>*/;
var115 = ((val* (*)(val*))(var114->class->vft[COLOR_abstract_collection__Collection__iterator]))(var114) /* iterator on <var114:List[String]>*/;
for(;;) {
var116 = ((short int (*)(val*))(var115->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var115) /* is_ok on <var115:Iterator[nullable Object]>*/;
if(!var116) break;
var117 = ((val* (*)(val*))(var115->class->vft[COLOR_abstract_collection__Iterator__item]))(var115) /* item on <var115:Iterator[nullable Object]>*/;
var_l = var117;
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var_l) /* write on <var_h:OFStream>*/;
if (varonce118) {
var119 = varonce118;
} else {
var120 = "\n";
var121 = 1;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var119) /* write on <var_h:OFStream>*/;
CONTINUE_label123: (void)0;
((void (*)(val*))(var115->class->vft[COLOR_abstract_collection__Iterator__next]))(var115) /* next on <var115:Iterator[nullable Object]>*/;
}
BREAK_label123: (void)0;
var124 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var125 = ((val* (*)(val*))(var124->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var124) /* lines on <var124:CodeWriter>*/;
var126 = ((val* (*)(val*))(var125->class->vft[COLOR_abstract_collection__Collection__iterator]))(var125) /* iterator on <var125:List[String]>*/;
for(;;) {
var127 = ((short int (*)(val*))(var126->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var126) /* is_ok on <var126:Iterator[nullable Object]>*/;
if(!var127) break;
var128 = ((val* (*)(val*))(var126->class->vft[COLOR_abstract_collection__Iterator__item]))(var126) /* item on <var126:Iterator[nullable Object]>*/;
var_l129 = var128;
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var_l129) /* write on <var_h:OFStream>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "\n";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(var_h->class->vft[COLOR_stream__OStream__write]))(var_h, var131) /* write on <var_h:OFStream>*/;
CONTINUE_label135: (void)0;
((void (*)(val*))(var126->class->vft[COLOR_abstract_collection__Iterator__next]))(var126) /* next on <var126:Iterator[nullable Object]>*/;
}
BREAK_label135: (void)0;
((void (*)(val*))(var_h->class->vft[COLOR_stream__IOS__close]))(var_h) /* close on <var_h:OFStream>*/;
var136 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files]))(var_compiler) /* files on <var_compiler:AbstractCompiler>*/;
var137 = ((val* (*)(val*))(var136->class->vft[COLOR_abstract_collection__Collection__iterator]))(var136) /* iterator on <var136:List[CodeFile]>*/;
for(;;) {
var138 = ((short int (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var137) /* is_ok on <var137:Iterator[nullable Object]>*/;
if(!var138) break;
var139 = ((val* (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__item]))(var137) /* item on <var137:Iterator[nullable Object]>*/;
var_f = var139;
var140 = 0;
var_i = var140;
var141 = NULL;
var_hfile = var141;
var142 = 0;
var_count = var142;
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
var144 = 3;
((void (*)(val*, long))(var143->class->vft[COLOR_array__Array__with_capacity]))(var143, var144) /* with_capacity on <var143:Array[Object]>*/;
var_145 = var143;
if (varonce146) {
var147 = varonce146;
} else {
var148 = "";
var149 = 0;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
((void (*)(val*, val*))(var_145->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_145, var147) /* add on <var_145:Array[Object]>*/;
var151 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
((void (*)(val*, val*))(var_145->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_145, var151) /* add on <var_145:Array[Object]>*/;
if (varonce152) {
var153 = varonce152;
} else {
var154 = ".0.h";
var155 = 4;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
((void (*)(val*, val*))(var_145->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_145, var153) /* add on <var_145:Array[Object]>*/;
var157 = ((val* (*)(val*))(var_145->class->vft[COLOR_string__Object__to_s]))(var_145) /* to_s on <var_145:Array[Object]>*/;
var_cfilename = var157;
var158 = NEW_array__Array(&type_array__Arraykernel__Object);
var159 = 5;
((void (*)(val*, long))(var158->class->vft[COLOR_array__Array__with_capacity]))(var158, var159) /* with_capacity on <var158:Array[Object]>*/;
var_160 = var158;
if (varonce161) {
var162 = varonce161;
} else {
var163 = "";
var164 = 0;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
((void (*)(val*, val*))(var_160->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_160, var162) /* add on <var_160:Array[Object]>*/;
((void (*)(val*, val*))(var_160->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_160, var_compile_dir) /* add on <var_160:Array[Object]>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = "/";
var169 = 1;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
((void (*)(val*, val*))(var_160->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_160, var167) /* add on <var_160:Array[Object]>*/;
((void (*)(val*, val*))(var_160->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_160, var_cfilename) /* add on <var_160:Array[Object]>*/;
if (varonce171) {
var172 = varonce171;
} else {
var173 = "";
var174 = 0;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
((void (*)(val*, val*))(var_160->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_160, var172) /* add on <var_160:Array[Object]>*/;
var176 = ((val* (*)(val*))(var_160->class->vft[COLOR_string__Object__to_s]))(var_160) /* to_s on <var_160:Array[Object]>*/;
var_cfilepath = var176;
var177 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var177->class->vft[COLOR_file__OFStream__open]))(var177, var_cfilepath) /* open on <var177:OFStream>*/;
var_hfile = var177;
if (varonce178) {
var179 = varonce178;
} else {
var180 = "#include \"";
var181 = 10;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "\"\n";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 3;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var179;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var_hfilename;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var184;
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
var191 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var191) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
var192 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__required_declarations]))(var_f) /* required_declarations on <var_f:CodeFile>*/;
var193 = ((val* (*)(val*))(var192->class->vft[COLOR_abstract_collection__Collection__iterator]))(var192) /* iterator on <var192:HashSet[String]>*/;
for(;;) {
var194 = ((short int (*)(val*))(var193->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var193) /* is_ok on <var193:Iterator[nullable Object]>*/;
if(!var194) break;
var195 = ((val* (*)(val*))(var193->class->vft[COLOR_abstract_collection__Iterator__item]))(var193) /* item on <var193:Iterator[nullable Object]>*/;
var_key = var195;
var196 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(var_compiler) /* provided_declarations on <var_compiler:AbstractCompiler>*/;
var197 = ((short int (*)(val*, val*))(var196->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var196, var_key) /* has_key on <var196:HashMap[String, String]>*/;
var198 = !var197;
if (var198){
var199 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__requirers_of_declarations]))(var_compiler) /* requirers_of_declarations on <var_compiler:AbstractCompiler>*/;
var200 = ((val* (*)(val*, val*))(var199->class->vft[COLOR_abstract_collection__MapRead__get_or_null]))(var199, var_key) /* get_or_null on <var199:HashMap[String, ANode]>*/;
var_node = var200;
var201 = NULL;
if (var_node == NULL) {
var202 = 0; /* is null */
} else {
var202 = 1; /* arg is null and recv is not */
}
if (var202){
if (varonce203) {
var204 = varonce203;
} else {
var205 = "No provided declaration for ";
var206 = 28;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var208 = array_instance Array[Object] */
var209 = 2;
var210 = NEW_array__NativeArray(var209, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var210)->values[0] = (val*) var204;
((struct instance_array__NativeArray*)var210)->values[1] = (val*) var_key;
((void (*)(val*, val*, long))(var208->class->vft[COLOR_array__Array__with_native]))(var208, var210, var209) /* with_native on <var208:Array[Object]>*/;
}
var211 = ((val* (*)(val*))(var208->class->vft[COLOR_string__Object__to_s]))(var208) /* to_s on <var208:Array[Object]>*/;
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__debug]))(var_node, var211) /* debug on <var_node:nullable ANode(ANode)>*/;
} else {
if (varonce212) {
var213 = varonce212;
} else {
var214 = "No provided declaration for ";
var215 = 28;
var216 = string__NativeString__to_s_with_length(var214, var215);
var213 = var216;
varonce212 = var213;
}
var217 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var217 = array_instance Array[Object] */
var218 = 2;
var219 = NEW_array__NativeArray(var218, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var219)->values[0] = (val*) var213;
((struct instance_array__NativeArray*)var219)->values[1] = (val*) var_key;
((void (*)(val*, val*, long))(var217->class->vft[COLOR_array__Array__with_native]))(var217, var219, var218) /* with_native on <var217:Array[Object]>*/;
}
var220 = ((val* (*)(val*))(var217->class->vft[COLOR_string__Object__to_s]))(var217) /* to_s on <var217:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var220) /* print on <self:MakefileToolchain>*/;
}
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 245);
show_backtrace(1);
} else {
}
var221 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(var_compiler) /* provided_declarations on <var_compiler:AbstractCompiler>*/;
var222 = ((val* (*)(val*, val*))(var221->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var221, var_key) /* [] on <var221:HashMap[String, String]>*/;
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var222) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
if (varonce223) {
var224 = varonce223;
} else {
var225 = "\n";
var226 = 1;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
((void (*)(val*, val*))(var_hfile->class->vft[COLOR_stream__OStream__write]))(var_hfile, var224) /* write on <var_hfile:nullable OFStream(OFStream)>*/;
CONTINUE_label228: (void)0;
((void (*)(val*))(var193->class->vft[COLOR_abstract_collection__Iterator__next]))(var193) /* next on <var193:Iterator[nullable Object]>*/;
}
BREAK_label228: (void)0;
((void (*)(val*))(var_hfile->class->vft[COLOR_stream__IOS__close]))(var_hfile) /* close on <var_hfile:nullable OFStream(OFStream)>*/;
var229 = NULL;
var_file = var229;
var230 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__writers]))(var_f) /* writers on <var_f:CodeFile>*/;
var231 = ((val* (*)(val*))(var230->class->vft[COLOR_abstract_collection__Collection__iterator]))(var230) /* iterator on <var230:Array[CodeWriter]>*/;
for(;;) {
var232 = ((short int (*)(val*))(var231->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var231) /* is_ok on <var231:Iterator[nullable Object]>*/;
if(!var232) break;
var233 = ((val* (*)(val*))(var231->class->vft[COLOR_abstract_collection__Iterator__item]))(var231) /* item on <var231:Iterator[nullable Object]>*/;
var_vis = var233;
var234 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:AbstractCompiler>*/;
var235 = ((short int (*)(val*, val*))(var_vis->class->vft[COLOR_kernel__Object___61d_61d]))(var_vis, var234) /* == on <var_vis:CodeWriter>*/;
if (var235){
goto CONTINUE_label236;
} else {
}
var237 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var_vis) /* lines on <var_vis:CodeWriter>*/;
var238 = ((long (*)(val*))(var237->class->vft[COLOR_abstract_collection__Collection__length]))(var237) /* length on <var237:List[String]>*/;
var239 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var_vis) /* decl_lines on <var_vis:CodeWriter>*/;
var240 = ((long (*)(val*))(var239->class->vft[COLOR_abstract_collection__Collection__length]))(var239) /* length on <var239:List[String]>*/;
{ /* Inline kernel#Int#+ (var238,var240) */
var243 = var238 + var240;
var241 = var243;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var_total_lines = var241;
var244 = 0;
{ /* Inline kernel#Int#== (var_total_lines,var244) */
var247 = var_total_lines == var244;
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
if (var245){
goto CONTINUE_label236;
} else {
}
{ /* Inline kernel#Int#+ (var_count,var_total_lines) */
var250 = var_count + var_total_lines;
var248 = var250;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var_count = var248;
var252 = NULL;
if (var_file == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
var_254 = var253;
if (var253){
var251 = var_254;
} else {
var255 = 10000;
{ /* Inline kernel#Int#> (var_count,var255) */
/* Covariant cast for argument 0 (i) <var255:Int> isa OTHER */
/* <var255:Int> isa OTHER */
var258 = 1; /* easy <var255:Int> isa OTHER*/
if (!var258) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var259 = var_count > var255;
var256 = var259;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
var251 = var256;
}
if (var251){
var260 = 1;
{ /* Inline kernel#Int#+ (var_i,var260) */
var263 = var_i + var260;
var261 = var263;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var_i = var261;
var264 = NULL;
if (var_file == NULL) {
var265 = 0; /* is null */
} else {
var265 = 1; /* arg is null and recv is not */
}
if (var265){
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:nullable OFStream(OFStream)>*/;
} else {
}
var266 = NEW_array__Array(&type_array__Arraykernel__Object);
var267 = 5;
((void (*)(val*, long))(var266->class->vft[COLOR_array__Array__with_capacity]))(var266, var267) /* with_capacity on <var266:Array[Object]>*/;
var_268 = var266;
if (varonce269) {
var270 = varonce269;
} else {
var271 = "";
var272 = 0;
var273 = string__NativeString__to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
((void (*)(val*, val*))(var_268->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_268, var270) /* add on <var_268:Array[Object]>*/;
var274 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
((void (*)(val*, val*))(var_268->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_268, var274) /* add on <var_268:Array[Object]>*/;
if (varonce275) {
var276 = varonce275;
} else {
var277 = ".";
var278 = 1;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
((void (*)(val*, val*))(var_268->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_268, var276) /* add on <var_268:Array[Object]>*/;
var280 = BOX_kernel__Int(var_i); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_268->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_268, var280) /* add on <var_268:Array[Object]>*/;
if (varonce281) {
var282 = varonce281;
} else {
var283 = ".c";
var284 = 2;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
((void (*)(val*, val*))(var_268->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_268, var282) /* add on <var_268:Array[Object]>*/;
var286 = ((val* (*)(val*))(var_268->class->vft[COLOR_string__Object__to_s]))(var_268) /* to_s on <var_268:Array[Object]>*/;
var_cfilename = var286;
var287 = NEW_array__Array(&type_array__Arraykernel__Object);
var288 = 5;
((void (*)(val*, long))(var287->class->vft[COLOR_array__Array__with_capacity]))(var287, var288) /* with_capacity on <var287:Array[Object]>*/;
var_289 = var287;
if (varonce290) {
var291 = varonce290;
} else {
var292 = "";
var293 = 0;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_289, var291) /* add on <var_289:Array[Object]>*/;
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_289, var_compile_dir) /* add on <var_289:Array[Object]>*/;
if (varonce295) {
var296 = varonce295;
} else {
var297 = "/";
var298 = 1;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_289, var296) /* add on <var_289:Array[Object]>*/;
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_289, var_cfilename) /* add on <var_289:Array[Object]>*/;
if (varonce300) {
var301 = varonce300;
} else {
var302 = "";
var303 = 0;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_289, var301) /* add on <var_289:Array[Object]>*/;
var305 = ((val* (*)(val*))(var_289->class->vft[COLOR_string__Object__to_s]))(var_289) /* to_s on <var_289:Array[Object]>*/;
var_cfilepath = var305;
var306 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce307) {
var308 = varonce307;
} else {
var309 = "new C source files to compile: ";
var310 = 31;
var311 = string__NativeString__to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
var312 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var312 = array_instance Array[Object] */
var313 = 2;
var314 = NEW_array__NativeArray(var313, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var314)->values[0] = (val*) var308;
((struct instance_array__NativeArray*)var314)->values[1] = (val*) var_cfilepath;
((void (*)(val*, val*, long))(var312->class->vft[COLOR_array__Array__with_native]))(var312, var314, var313) /* with_native on <var312:Array[Object]>*/;
}
var315 = ((val* (*)(val*))(var312->class->vft[COLOR_string__Object__to_s]))(var312) /* to_s on <var312:Array[Object]>*/;
var316 = 3;
((void (*)(val*, val*, long))(var306->class->vft[COLOR_toolcontext__ToolContext__info]))(var306, var315, var316) /* info on <var306:ToolContext>*/;
((void (*)(val*, val*))(var_cfiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cfiles, var_cfilename) /* add on <var_cfiles:Array[String]>*/;
var317 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var317->class->vft[COLOR_file__OFStream__open]))(var317, var_cfilepath) /* open on <var317:OFStream>*/;
var_file = var317;
if (varonce318) {
var319 = varonce318;
} else {
var320 = "#include \"";
var321 = 10;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
var323 = ((val* (*)(val*))(var_f->class->vft[COLOR_abstract_compiler__CodeFile__name]))(var_f) /* name on <var_f:CodeFile>*/;
if (varonce324) {
var325 = varonce324;
} else {
var326 = ".0.h\"\n";
var327 = 6;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
var329 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var329 = array_instance Array[Object] */
var330 = 3;
var331 = NEW_array__NativeArray(var330, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var331)->values[0] = (val*) var319;
((struct instance_array__NativeArray*)var331)->values[1] = (val*) var323;
((struct instance_array__NativeArray*)var331)->values[2] = (val*) var325;
((void (*)(val*, val*, long))(var329->class->vft[COLOR_array__Array__with_native]))(var329, var331, var330) /* with_native on <var329:Array[Object]>*/;
}
var332 = ((val* (*)(val*))(var329->class->vft[COLOR_string__Object__to_s]))(var329) /* to_s on <var329:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var332) /* write on <var_file:nullable OFStream(OFStream)>*/;
var_count = var_total_lines;
} else {
}
var333 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var_vis) /* decl_lines on <var_vis:CodeWriter>*/;
var334 = ((val* (*)(val*))(var333->class->vft[COLOR_abstract_collection__Collection__iterator]))(var333) /* iterator on <var333:List[String]>*/;
for(;;) {
var335 = ((short int (*)(val*))(var334->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var334) /* is_ok on <var334:Iterator[nullable Object]>*/;
if(!var335) break;
var336 = ((val* (*)(val*))(var334->class->vft[COLOR_abstract_collection__Iterator__item]))(var334) /* item on <var334:Iterator[nullable Object]>*/;
var_l337 = var336;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var_l337) /* write on <var_file:nullable OFStream(OFStream)>*/;
if (varonce338) {
var339 = varonce338;
} else {
var340 = "\n";
var341 = 1;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var339) /* write on <var_file:nullable OFStream(OFStream)>*/;
CONTINUE_label343: (void)0;
((void (*)(val*))(var334->class->vft[COLOR_abstract_collection__Iterator__next]))(var334) /* next on <var334:Iterator[nullable Object]>*/;
}
BREAK_label343: (void)0;
var344 = ((val* (*)(val*))(var_vis->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var_vis) /* lines on <var_vis:CodeWriter>*/;
var345 = ((val* (*)(val*))(var344->class->vft[COLOR_abstract_collection__Collection__iterator]))(var344) /* iterator on <var344:List[String]>*/;
for(;;) {
var346 = ((short int (*)(val*))(var345->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var345) /* is_ok on <var345:Iterator[nullable Object]>*/;
if(!var346) break;
var347 = ((val* (*)(val*))(var345->class->vft[COLOR_abstract_collection__Iterator__item]))(var345) /* item on <var345:Iterator[nullable Object]>*/;
var_l348 = var347;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var_l348) /* write on <var_file:nullable OFStream(OFStream)>*/;
if (varonce349) {
var350 = varonce349;
} else {
var351 = "\n";
var352 = 1;
var353 = string__NativeString__to_s_with_length(var351, var352);
var350 = var353;
varonce349 = var350;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var350) /* write on <var_file:nullable OFStream(OFStream)>*/;
CONTINUE_label354: (void)0;
((void (*)(val*))(var345->class->vft[COLOR_abstract_collection__Iterator__next]))(var345) /* next on <var345:Iterator[nullable Object]>*/;
}
BREAK_label354: (void)0;
CONTINUE_label236: (void)0;
((void (*)(val*))(var231->class->vft[COLOR_abstract_collection__Iterator__next]))(var231) /* next on <var231:Iterator[nullable Object]>*/;
}
BREAK_label236: (void)0;
var355 = NULL;
if (var_file == NULL) {
var356 = 0; /* is null */
} else {
var356 = 1; /* arg is null and recv is not */
}
if (var356){
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:nullable OFStream(OFStream)>*/;
} else {
}
CONTINUE_label357: (void)0;
((void (*)(val*))(var137->class->vft[COLOR_abstract_collection__Iterator__next]))(var137) /* next on <var137:Iterator[nullable Object]>*/;
}
BREAK_label357: (void)0;
var358 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce359) {
var360 = varonce359;
} else {
var361 = "Total C source files to compile: ";
var362 = 33;
var363 = string__NativeString__to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
var364 = ((long (*)(val*))(var_cfiles->class->vft[COLOR_abstract_collection__Collection__length]))(var_cfiles) /* length on <var_cfiles:Array[String]>*/;
var365 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var365 = array_instance Array[Object] */
var366 = 2;
var367 = NEW_array__NativeArray(var366, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var367)->values[0] = (val*) var360;
var368 = BOX_kernel__Int(var364); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var367)->values[1] = (val*) var368;
((void (*)(val*, val*, long))(var365->class->vft[COLOR_array__Array__with_native]))(var365, var367, var366) /* with_native on <var365:Array[Object]>*/;
}
var369 = ((val* (*)(val*))(var365->class->vft[COLOR_string__Object__to_s]))(var365) /* to_s on <var365:Array[Object]>*/;
var370 = 2;
((void (*)(val*, val*, long))(var358->class->vft[COLOR_toolcontext__ToolContext__info]))(var358, var369, var370) /* info on <var358:ToolContext>*/;
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: Object, AbstractCompiler, String, Array[String]) */
void VIRTUAL_abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__MakefileToolchain__write_files(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: MakefileToolchain, AbstractCompiler, String, Array[String]) */
void abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionString */;
val* var3 /* : nullable Object */;
val* var_outname /* var outname: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var_orig_dir /* var orig_dir: String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var_outpath /* var outpath: String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var_28 /* var : Array[Object] */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var_makename /* var makename: String */;
val* var41 /* : Array[Object] */;
long var42 /* : Int */;
val* var_43 /* var : Array[Object] */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var_makepath /* var makepath: String */;
val* var60 /* : OFStream */;
val* var_makefile /* var makefile: OFStream */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var_cc_includes /* var cc_includes: String */;
val* var66 /* : Array[String] */;
val* var67 /* : Iterator[nullable Object] */;
short int var68 /* : Bool */;
val* var69 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var84 /* : ToolContext */;
val* var85 /* : ModelBuilder */;
val* var86 /* : HashMap[MModule, AModule] */;
val* var_m2m /* var m2m: HashMap[MModule, AModule] */;
val* var87 /* : POSetElement[MModule] */;
val* var88 /* : Collection[Object] */;
val* var89 /* : Iterator[nullable Object] */;
short int var90 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var92 /* : Collection[Object] */;
short int var93 /* : Bool */;
val* var94 /* : nullable Object */;
val* var_amod /* var amod: AModule */;
val* var95 /* : String */;
val* var97 /* : ToolContext */;
val* var98 /* : OptionBool */;
val* var99 /* : nullable Object */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : String */;
val* var146 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var147 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var148 /* : Iterator[nullable Object] */;
short int var149 /* : Bool */;
val* var150 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var_o /* var o: String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
val* var183 /* : Array[Object] */;
long var184 /* : Int */;
val* var185 /* : NativeArray[Object] */;
val* var186 /* : String */;
val* var188 /* : Array[ExternFile] */;
val* var189 /* : Iterator[nullable Object] */;
short int var190 /* : Bool */;
val* var191 /* : nullable Object */;
val* var_f192 /* var f: ExternFile */;
short int var193 /* : Bool */;
int cltype;
int idtype;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : String */;
val* var200 /* : String */;
val* var_basename /* var basename: String */;
val* var201 /* : Array[Object] */;
long var202 /* : Int */;
val* var_203 /* var : Array[Object] */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var_o215 /* var o: String */;
val* var216 /* : String */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
long var220 /* : Int */;
val* var221 /* : String */;
val* var222 /* : String */;
val* var_ff /* var ff: String */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : String */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : String */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : String */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : String */;
val* var249 /* : Array[Object] */;
long var250 /* : Int */;
val* var251 /* : NativeArray[Object] */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var_o254 /* var o: String */;
val* var255 /* : String */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
long var259 /* : Int */;
val* var260 /* : String */;
val* var261 /* : String */;
val* var_ff262 /* var ff: String */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : String */;
val* var273 /* : Array[Object] */;
long var274 /* : Int */;
val* var275 /* : NativeArray[Object] */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : String */;
val* var282 /* : String */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : String */;
val* var288 /* : Array[Object] */;
long var289 /* : Int */;
val* var290 /* : NativeArray[Object] */;
val* var291 /* : String */;
val* var292 /* : String */;
short int var293 /* : Bool */;
int cltype294;
int idtype295;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
long var300 /* : Int */;
val* var301 /* : String */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : String */;
val* var307 /* : String */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : String */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : String */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
val* var329 /* : Array[Object] */;
long var330 /* : Int */;
val* var331 /* : NativeArray[Object] */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : NativeString */;
long var336 /* : Int */;
val* var337 /* : String */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : String */;
val* var343 /* : String */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
long var347 /* : Int */;
val* var348 /* : String */;
val* var349 /* : Array[Object] */;
long var350 /* : Int */;
val* var351 /* : NativeArray[Object] */;
val* var352 /* : String */;
val* var353 /* : ToolContext */;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
long var357 /* : Int */;
val* var358 /* : String */;
val* var359 /* : Array[Object] */;
long var360 /* : Int */;
val* var361 /* : NativeArray[Object] */;
val* var362 /* : String */;
long var363 /* : Int */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
var = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var_mainmodule = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__ToolContext__opt_output]))(var1) /* opt_output on <var1:ToolContext>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_opts__Option__value]))(var2) /* value on <var2:OptionString>*/;
var_outname = var3;
var4 = NULL;
if (var_outname == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (var5){
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
var7 = 3;
((void (*)(val*, long))(var6->class->vft[COLOR_array__Array__with_capacity]))(var6, var7) /* with_capacity on <var6:Array[Object]>*/;
var_ = var6;
if (varonce) {
var8 = varonce;
} else {
var9 = "";
var10 = 0;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "";
var16 = 0;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
var18 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_outname = var18;
} else {
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "..";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var_orig_dir = var20;
var24 = ((val* (*)(val*, val*))(var_orig_dir->class->vft[COLOR_file__String__join_path]))(var_orig_dir, var_outname) /* join_path on <var_orig_dir:String>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_file__String__simplify_path]))(var24) /* simplify_path on <var24:String>*/;
var_outpath = var25;
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
var27 = 3;
((void (*)(val*, long))(var26->class->vft[COLOR_array__Array__with_capacity]))(var26, var27) /* with_capacity on <var26:Array[Object]>*/;
var_28 = var26;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "";
var32 = 0;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_28->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_28, var30) /* add on <var_28:Array[Object]>*/;
var34 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
((void (*)(val*, val*))(var_28->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_28, var34) /* add on <var_28:Array[Object]>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = ".mk";
var38 = 3;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
((void (*)(val*, val*))(var_28->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_28, var36) /* add on <var_28:Array[Object]>*/;
var40 = ((val* (*)(val*))(var_28->class->vft[COLOR_string__Object__to_s]))(var_28) /* to_s on <var_28:Array[Object]>*/;
var_makename = var40;
var41 = NEW_array__Array(&type_array__Arraykernel__Object);
var42 = 5;
((void (*)(val*, long))(var41->class->vft[COLOR_array__Array__with_capacity]))(var41, var42) /* with_capacity on <var41:Array[Object]>*/;
var_43 = var41;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "";
var47 = 0;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
((void (*)(val*, val*))(var_43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_43, var45) /* add on <var_43:Array[Object]>*/;
((void (*)(val*, val*))(var_43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_43, var_compile_dir) /* add on <var_43:Array[Object]>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = "/";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
((void (*)(val*, val*))(var_43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_43, var50) /* add on <var_43:Array[Object]>*/;
((void (*)(val*, val*))(var_43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_43, var_makename) /* add on <var_43:Array[Object]>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "";
var57 = 0;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
((void (*)(val*, val*))(var_43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_43, var55) /* add on <var_43:Array[Object]>*/;
var59 = ((val* (*)(val*))(var_43->class->vft[COLOR_string__Object__to_s]))(var_43) /* to_s on <var_43:Array[Object]>*/;
var_makepath = var59;
var60 = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var60->class->vft[COLOR_file__OFStream__open]))(var60, var_makepath) /* open on <var60:OFStream>*/;
var_makefile = var60;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "";
var64 = 0;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var_cc_includes = var62;
var66 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MakefileToolchain__cc_paths]))(self) /* cc_paths on <self:MakefileToolchain>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_collection__Collection__iterator]))(var66) /* iterator on <var66:Array[String]>*/;
for(;;) {
var68 = ((short int (*)(val*))(var67->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var67) /* is_ok on <var67:Iterator[nullable Object]>*/;
if(!var68) break;
var69 = ((val* (*)(val*))(var67->class->vft[COLOR_abstract_collection__Iterator__item]))(var67) /* item on <var67:Iterator[nullable Object]>*/;
var_p = var69;
if (varonce70) {
var71 = varonce70;
} else {
var72 = " -I \"";
var73 = 5;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = ((val* (*)(val*, val*))(var71->class->vft[COLOR_string__String___43d]))(var71, var_p) /* + on <var71:String>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "\"";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = ((val* (*)(val*, val*))(var75->class->vft[COLOR_string__String___43d]))(var75, var77) /* + on <var75:String>*/;
var82 = ((val* (*)(val*, val*))(var_cc_includes->class->vft[COLOR_string__String___43d]))(var_cc_includes, var81) /* + on <var_cc_includes:String>*/;
var_cc_includes = var82;
CONTINUE_label: (void)0;
((void (*)(val*))(var67->class->vft[COLOR_abstract_collection__Iterator__next]))(var67) /* next on <var67:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var83 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var83->class->vft[COLOR_hash_collection__HashSet__init]))(var83) /* init on <var83:HashSet[String]>*/;
var_linker_options = var83;
var84 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var84) /* modelbuilder on <var84:ToolContext>*/;
var86 = ((val* (*)(val*))(var85->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var85) /* mmodule2nmodule on <var85:ModelBuilder>*/;
var_m2m = var86;
var87 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mainmodule) /* in_importation on <var_mainmodule:MModule>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_poset__POSetElement__greaters]))(var87) /* greaters on <var87:POSetElement[MModule]>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_abstract_collection__Collection__iterator]))(var88) /* iterator on <var88:Collection[Object](Collection[MModule])>*/;
for(;;) {
var90 = ((short int (*)(val*))(var89->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var89) /* is_ok on <var89:Iterator[nullable Object]>*/;
if(!var90) break;
var91 = ((val* (*)(val*))(var89->class->vft[COLOR_abstract_collection__Iterator__item]))(var89) /* item on <var89:Iterator[nullable Object]>*/;
var_m = var91;
var92 = ((val* (*)(val*))(var_m2m->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_m2m) /* keys on <var_m2m:HashMap[MModule, AModule]>*/;
var93 = ((short int (*)(val*, val*))(var92->class->vft[COLOR_abstract_collection__Collection__has]))(var92, var_m) /* has on <var92:Collection[Object](HashMapKeys[MModule, AModule])>*/;
if (var93){
var94 = ((val* (*)(val*, val*))(var_m2m->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_m2m, var_m) /* [] on <var_m2m:HashMap[MModule, AModule]>*/;
var_amod = var94;
var95 = ((val* (*)(val*))(var_amod->class->vft[COLOR_c__AModule__c_linker_options]))(var_amod) /* c_linker_options on <var_amod:AModule>*/;
((void (*)(val*, val*))(var_linker_options->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_linker_options, var95) /* add on <var_linker_options:HashSet[String]>*/;
} else {
}
CONTINUE_label96: (void)0;
((void (*)(val*))(var89->class->vft[COLOR_abstract_collection__Iterator__next]))(var89) /* next on <var89:Iterator[nullable Object]>*/;
}
BREAK_label96: (void)0;
var97 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var98 = ((val* (*)(val*))(var97->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var97) /* opt_no_stacktrace on <var97:ToolContext>*/;
var99 = ((val* (*)(val*))(var98->class->vft[COLOR_opts__Option__value]))(var98) /* value on <var98:OptionBool>*/;
var100 = ((struct instance_kernel__Bool*)var99)->value; /* autounbox from nullable Object to Bool */;
var101 = !var100;
if (var101){
if (varonce102) {
var103 = varonce102;
} else {
var104 = "-lunwind";
var105 = 8;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(var_linker_options->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_linker_options, var103) /* add on <var_linker_options:HashSet[String]>*/;
} else {
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "CC = ccache cc\nCFLAGS = -g -O2\nCINCL = ";
var110 = 39;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc ";
var115 = 33;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = " ";
var120 = 1;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = ((val* (*)(val*, val*))(var_linker_options->class->vft[COLOR_string__Collection__join]))(var_linker_options, var118) /* join on <var_linker_options:HashSet[String]>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "\n\n";
var126 = 2;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 5;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var_cc_includes;
((struct instance_array__NativeArray*)var130)->values[2] = (val*) var113;
((struct instance_array__NativeArray*)var130)->values[3] = (val*) var122;
((struct instance_array__NativeArray*)var130)->values[4] = (val*) var124;
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
var131 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var131) /* write on <var_makefile:OFStream>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "all: ";
var135 = 5;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "\n\n";
var140 = 2;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 3;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var133;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var_outpath;
((struct instance_array__NativeArray*)var144)->values[2] = (val*) var138;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
var145 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var145) /* write on <var_makefile:OFStream>*/;
var146 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var146->class->vft[COLOR_array__Array__init]))(var146) /* init on <var146:Array[String]>*/;
var_ofiles = var146;
var147 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var147->class->vft[COLOR_array__Array__init]))(var147) /* init on <var147:Array[String]>*/;
var_dep_rules = var147;
var148 = ((val* (*)(val*))(var_cfiles->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_cfiles) /* iterator on <var_cfiles:Array[String]>*/;
for(;;) {
var149 = ((short int (*)(val*))(var148->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var148) /* is_ok on <var148:Iterator[nullable Object]>*/;
if(!var149) break;
var150 = ((val* (*)(val*))(var148->class->vft[COLOR_abstract_collection__Iterator__item]))(var148) /* item on <var148:Iterator[nullable Object]>*/;
var_f = var150;
if (varonce151) {
var152 = varonce151;
} else {
var153 = ".c";
var154 = 2;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = ((val* (*)(val*, val*))(var_f->class->vft[COLOR_file__String__strip_extension]))(var_f, var152) /* strip_extension on <var_f:String>*/;
if (varonce157) {
var158 = varonce157;
} else {
var159 = ".o";
var160 = 2;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = ((val* (*)(val*, val*))(var156->class->vft[COLOR_string__String___43d]))(var156, var158) /* + on <var156:String>*/;
var_o = var162;
if (varonce163) {
var164 = varonce163;
} else {
var165 = ": ";
var166 = 2;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "\n\11$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o ";
var171 = 45;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = " ";
var176 = 1;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = "\n\n";
var181 = 2;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
var183 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var183 = array_instance Array[Object] */
var184 = 8;
var185 = NEW_array__NativeArray(var184, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var185)->values[0] = (val*) var_o;
((struct instance_array__NativeArray*)var185)->values[1] = (val*) var164;
((struct instance_array__NativeArray*)var185)->values[2] = (val*) var_f;
((struct instance_array__NativeArray*)var185)->values[3] = (val*) var169;
((struct instance_array__NativeArray*)var185)->values[4] = (val*) var_o;
((struct instance_array__NativeArray*)var185)->values[5] = (val*) var174;
((struct instance_array__NativeArray*)var185)->values[6] = (val*) var_f;
((struct instance_array__NativeArray*)var185)->values[7] = (val*) var179;
((void (*)(val*, val*, long))(var183->class->vft[COLOR_array__Array__with_native]))(var183, var185, var184) /* with_native on <var183:Array[Object]>*/;
}
var186 = ((val* (*)(val*))(var183->class->vft[COLOR_string__Object__to_s]))(var183) /* to_s on <var183:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var186) /* write on <var_makefile:OFStream>*/;
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o) /* add on <var_ofiles:Array[String]>*/;
((void (*)(val*, val*))(var_dep_rules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_dep_rules, var_o) /* add on <var_dep_rules:Array[String]>*/;
CONTINUE_label187: (void)0;
((void (*)(val*))(var148->class->vft[COLOR_abstract_collection__Iterator__next]))(var148) /* next on <var148:Iterator[nullable Object]>*/;
}
BREAK_label187: (void)0;
var188 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
var189 = ((val* (*)(val*))(var188->class->vft[COLOR_abstract_collection__Collection__iterator]))(var188) /* iterator on <var188:Array[ExternFile]>*/;
for(;;) {
var190 = ((short int (*)(val*))(var189->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var189) /* is_ok on <var189:Iterator[nullable Object]>*/;
if(!var190) break;
var191 = ((val* (*)(val*))(var189->class->vft[COLOR_abstract_collection__Iterator__item]))(var189) /* item on <var189:Iterator[nullable Object]>*/;
var_f192 = var191;
/* <var_f192:ExternFile> isa ExternCFile */
cltype = type_c__ExternCFile.color;
idtype = type_c__ExternCFile.id;
if(cltype >= var_f192->type->table_size) {
var193 = 0;
} else {
var193 = var_f192->type->type_table[cltype] == idtype;
}
if (var193){
var194 = ((val* (*)(val*))(var_f192->class->vft[COLOR_ffi_base__ExternFile__filename]))(var_f192) /* filename on <var_f192:ExternFile(ExternCFile)>*/;
if (varonce195) {
var196 = varonce195;
} else {
var197 = ".c";
var198 = 2;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
var200 = ((val* (*)(val*, val*))(var194->class->vft[COLOR_file__String__basename]))(var194, var196) /* basename on <var194:String>*/;
var_basename = var200;
var201 = NEW_array__Array(&type_array__Arraykernel__Object);
var202 = 3;
((void (*)(val*, long))(var201->class->vft[COLOR_array__Array__with_capacity]))(var201, var202) /* with_capacity on <var201:Array[Object]>*/;
var_203 = var201;
if (varonce204) {
var205 = varonce204;
} else {
var206 = "";
var207 = 0;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
((void (*)(val*, val*))(var_203->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_203, var205) /* add on <var_203:Array[Object]>*/;
((void (*)(val*, val*))(var_203->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_203, var_basename) /* add on <var_203:Array[Object]>*/;
if (varonce209) {
var210 = varonce209;
} else {
var211 = ".extern.o";
var212 = 9;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
((void (*)(val*, val*))(var_203->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_203, var210) /* add on <var_203:Array[Object]>*/;
var214 = ((val* (*)(val*))(var_203->class->vft[COLOR_string__Object__to_s]))(var_203) /* to_s on <var_203:Array[Object]>*/;
var_o215 = var214;
var216 = ((val* (*)(val*))(var_f192->class->vft[COLOR_ffi_base__ExternFile__filename]))(var_f192) /* filename on <var_f192:ExternFile(ExternCFile)>*/;
if (varonce217) {
var218 = varonce217;
} else {
var219 = "";
var220 = 0;
var221 = string__NativeString__to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
var222 = ((val* (*)(val*, val*))(var216->class->vft[COLOR_file__String__basename]))(var216, var218) /* basename on <var216:String>*/;
var_ff = var222;
if (varonce223) {
var224 = varonce223;
} else {
var225 = ": ";
var226 = 2;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = "\n\11$(CC) $(CFLAGS) -D NONITCNI ";
var231 = 30;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
var233 = ((val* (*)(val*))(var_f192->class->vft[COLOR_c__ExternCFile__cflags]))(var_f192) /* cflags on <var_f192:ExternFile(ExternCFile)>*/;
if (varonce234) {
var235 = varonce234;
} else {
var236 = " -c -o ";
var237 = 7;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = " ";
var242 = 1;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
if (varonce244) {
var245 = varonce244;
} else {
var246 = "\n\n";
var247 = 2;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
var249 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var249 = array_instance Array[Object] */
var250 = 10;
var251 = NEW_array__NativeArray(var250, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var251)->values[0] = (val*) var_o215;
((struct instance_array__NativeArray*)var251)->values[1] = (val*) var224;
((struct instance_array__NativeArray*)var251)->values[2] = (val*) var_ff;
((struct instance_array__NativeArray*)var251)->values[3] = (val*) var229;
((struct instance_array__NativeArray*)var251)->values[4] = (val*) var233;
((struct instance_array__NativeArray*)var251)->values[5] = (val*) var235;
((struct instance_array__NativeArray*)var251)->values[6] = (val*) var_o215;
((struct instance_array__NativeArray*)var251)->values[7] = (val*) var240;
((struct instance_array__NativeArray*)var251)->values[8] = (val*) var_ff;
((struct instance_array__NativeArray*)var251)->values[9] = (val*) var245;
((void (*)(val*, val*, long))(var249->class->vft[COLOR_array__Array__with_native]))(var249, var251, var250) /* with_native on <var249:Array[Object]>*/;
}
var252 = ((val* (*)(val*))(var249->class->vft[COLOR_string__Object__to_s]))(var249) /* to_s on <var249:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var252) /* write on <var_makefile:OFStream>*/;
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o215) /* add on <var_ofiles:Array[String]>*/;
((void (*)(val*, val*))(var_dep_rules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_dep_rules, var_o215) /* add on <var_dep_rules:Array[String]>*/;
} else {
var253 = ((val* (*)(val*))(var_f192->class->vft[COLOR_ffi_base__ExternFile__makefile_rule_name]))(var_f192) /* makefile_rule_name on <var_f192:ExternFile>*/;
var_o254 = var253;
var255 = ((val* (*)(val*))(var_f192->class->vft[COLOR_ffi_base__ExternFile__filename]))(var_f192) /* filename on <var_f192:ExternFile>*/;
if (varonce256) {
var257 = varonce256;
} else {
var258 = "";
var259 = 0;
var260 = string__NativeString__to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
var261 = ((val* (*)(val*, val*))(var255->class->vft[COLOR_file__String__basename]))(var255, var257) /* basename on <var255:String>*/;
var_ff262 = var261;
if (varonce263) {
var264 = varonce263;
} else {
var265 = ": ";
var266 = 2;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
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
var273 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var273 = array_instance Array[Object] */
var274 = 4;
var275 = NEW_array__NativeArray(var274, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var275)->values[0] = (val*) var_o254;
((struct instance_array__NativeArray*)var275)->values[1] = (val*) var264;
((struct instance_array__NativeArray*)var275)->values[2] = (val*) var_ff262;
((struct instance_array__NativeArray*)var275)->values[3] = (val*) var269;
((void (*)(val*, val*, long))(var273->class->vft[COLOR_array__Array__with_native]))(var273, var275, var274) /* with_native on <var273:Array[Object]>*/;
}
var276 = ((val* (*)(val*))(var273->class->vft[COLOR_string__Object__to_s]))(var273) /* to_s on <var273:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var276) /* write on <var_makefile:OFStream>*/;
if (varonce277) {
var278 = varonce277;
} else {
var279 = "\11";
var280 = 1;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
var282 = ((val* (*)(val*))(var_f192->class->vft[COLOR_ffi_base__ExternFile__makefile_rule_content]))(var_f192) /* makefile_rule_content on <var_f192:ExternFile>*/;
if (varonce283) {
var284 = varonce283;
} else {
var285 = "\n";
var286 = 1;
var287 = string__NativeString__to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
var288 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var288 = array_instance Array[Object] */
var289 = 3;
var290 = NEW_array__NativeArray(var289, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var290)->values[0] = (val*) var278;
((struct instance_array__NativeArray*)var290)->values[1] = (val*) var282;
((struct instance_array__NativeArray*)var290)->values[2] = (val*) var284;
((void (*)(val*, val*, long))(var288->class->vft[COLOR_array__Array__with_native]))(var288, var290, var289) /* with_native on <var288:Array[Object]>*/;
}
var291 = ((val* (*)(val*))(var288->class->vft[COLOR_string__Object__to_s]))(var288) /* to_s on <var288:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var291) /* write on <var_makefile:OFStream>*/;
var292 = ((val* (*)(val*))(var_f192->class->vft[COLOR_ffi_base__ExternFile__makefile_rule_name]))(var_f192) /* makefile_rule_name on <var_f192:ExternFile>*/;
((void (*)(val*, val*))(var_dep_rules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_dep_rules, var292) /* add on <var_dep_rules:Array[String]>*/;
/* <var_f192:ExternFile> isa ExternCppFile */
cltype294 = type_cpp__ExternCppFile.color;
idtype295 = type_cpp__ExternCppFile.id;
if(cltype294 >= var_f192->type->table_size) {
var293 = 0;
} else {
var293 = var_f192->type->type_table[cltype294] == idtype295;
}
if (var293){
((void (*)(val*, val*))(var_ofiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ofiles, var_o254) /* add on <var_ofiles:Array[String]>*/;
} else {
}
}
CONTINUE_label296: (void)0;
((void (*)(val*))(var189->class->vft[COLOR_abstract_collection__Iterator__next]))(var189) /* next on <var189:Iterator[nullable Object]>*/;
}
BREAK_label296: (void)0;
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
var304 = " ";
var305 = 1;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
var307 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var303) /* join on <var_ofiles:Array[String]>*/;
if (varonce308) {
var309 = varonce308;
} else {
var310 = "\n\11$(CC) $(LDFLAGS) -o ";
var311 = 22;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = " ";
var316 = 1;
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
var323 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var319) /* join on <var_ofiles:Array[String]>*/;
if (varonce324) {
var325 = varonce324;
} else {
var326 = " $(LDLIBS)\n\n";
var327 = 12;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
var329 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var329 = array_instance Array[Object] */
var330 = 8;
var331 = NEW_array__NativeArray(var330, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var331)->values[0] = (val*) var_outpath;
((struct instance_array__NativeArray*)var331)->values[1] = (val*) var298;
((struct instance_array__NativeArray*)var331)->values[2] = (val*) var307;
((struct instance_array__NativeArray*)var331)->values[3] = (val*) var309;
((struct instance_array__NativeArray*)var331)->values[4] = (val*) var_outpath;
((struct instance_array__NativeArray*)var331)->values[5] = (val*) var314;
((struct instance_array__NativeArray*)var331)->values[6] = (val*) var323;
((struct instance_array__NativeArray*)var331)->values[7] = (val*) var325;
((void (*)(val*, val*, long))(var329->class->vft[COLOR_array__Array__with_native]))(var329, var331, var330) /* with_native on <var329:Array[Object]>*/;
}
var332 = ((val* (*)(val*))(var329->class->vft[COLOR_string__Object__to_s]))(var329) /* to_s on <var329:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var332) /* write on <var_makefile:OFStream>*/;
if (varonce333) {
var334 = varonce333;
} else {
var335 = "clean:\n\11rm ";
var336 = 11;
var337 = string__NativeString__to_s_with_length(var335, var336);
var334 = var337;
varonce333 = var334;
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = " ";
var341 = 1;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
var343 = ((val* (*)(val*, val*))(var_ofiles->class->vft[COLOR_string__Collection__join]))(var_ofiles, var339) /* join on <var_ofiles:Array[String]>*/;
if (varonce344) {
var345 = varonce344;
} else {
var346 = " 2>/dev/null\n\n";
var347 = 14;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
var349 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var349 = array_instance Array[Object] */
var350 = 3;
var351 = NEW_array__NativeArray(var350, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var351)->values[0] = (val*) var334;
((struct instance_array__NativeArray*)var351)->values[1] = (val*) var343;
((struct instance_array__NativeArray*)var351)->values[2] = (val*) var345;
((void (*)(val*, val*, long))(var349->class->vft[COLOR_array__Array__with_native]))(var349, var351, var350) /* with_native on <var349:Array[Object]>*/;
}
var352 = ((val* (*)(val*))(var349->class->vft[COLOR_string__Object__to_s]))(var349) /* to_s on <var349:Array[Object]>*/;
((void (*)(val*, val*))(var_makefile->class->vft[COLOR_stream__OStream__write]))(var_makefile, var352) /* write on <var_makefile:OFStream>*/;
((void (*)(val*))(var_makefile->class->vft[COLOR_stream__IOS__close]))(var_makefile) /* close on <var_makefile:OFStream>*/;
var353 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce354) {
var355 = varonce354;
} else {
var356 = "Generated makefile: ";
var357 = 20;
var358 = string__NativeString__to_s_with_length(var356, var357);
var355 = var358;
varonce354 = var355;
}
var359 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var359 = array_instance Array[Object] */
var360 = 2;
var361 = NEW_array__NativeArray(var360, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var361)->values[0] = (val*) var355;
((struct instance_array__NativeArray*)var361)->values[1] = (val*) var_makepath;
((void (*)(val*, val*, long))(var359->class->vft[COLOR_array__Array__with_native]))(var359, var361, var360) /* with_native on <var359:Array[Object]>*/;
}
var362 = ((val* (*)(val*))(var359->class->vft[COLOR_string__Object__to_s]))(var359) /* to_s on <var359:Array[Object]>*/;
var363 = 2;
((void (*)(val*, val*, long))(var353->class->vft[COLOR_toolcontext__ToolContext__info]))(var353, var362, var363) /* info on <var353:ToolContext>*/;
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: Object, AbstractCompiler, String, Array[String]) */
void VIRTUAL_abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__MakefileToolchain__write_makefile(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: MakefileToolchain, AbstractCompiler, String) */
void abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0, val* p1) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var /* : Array[Object] */;
long var1 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MModule */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_makename /* var makename: String */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionString */;
val* var16 /* : nullable Object */;
val* var_makeflags /* var makeflags: nullable String */;
val* var17 /* : null */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : ToolContext */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
long var44 /* : Int */;
val* var45 /* : ToolContext */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var51 /* : Bool */;
val* var52 /* : Sys */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
long var77 /* : Int */;
val* var78 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var79 /* : Sys */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
long var104 /* : Int */;
val* var105 /* : nullable Object */;
long var106 /* : Int */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
long var110 /* : Int */;
short int var111 /* : Bool */;
val* var112 /* : ToolContext */;
val* var113 /* : null */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
val* var124 /* : Array[Object] */;
long var125 /* : Int */;
val* var126 /* : NativeArray[Object] */;
val* var127 /* : String */;
var_compiler = p0;
var_compile_dir = p1;
var = NEW_array__Array(&type_array__Arraykernel__Object);
var1 = 3;
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var1) /* with_capacity on <var:Array[Object]>*/;
var_ = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var2) /* add on <var_:Array[Object]>*/;
var6 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_mmodule__MModule__name]))(var6) /* name on <var6:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = ".mk";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_makename = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_compiler__ToolContext__opt_make_flags]))(var14) /* opt_make_flags on <var14:ToolContext>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_opts__Option__value]))(var15) /* value on <var15:OptionString>*/;
var_makeflags = var16;
var17 = NULL;
if (var_makeflags == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (var18){
if (varonce19) {
var20 = varonce19;
} else {
var21 = "";
var22 = 0;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var_makeflags = var20;
} else {
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "make -B -C ";
var28 = 11;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = " -f ";
var33 = 4;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " -j 4 ";
var38 = 6;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 6;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var31;
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var42)->values[4] = (val*) var36;
((struct instance_array__NativeArray*)var42)->values[5] = (val*) var_makeflags;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
var44 = 2;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_toolcontext__ToolContext__info]))(var24, var43, var44) /* info on <var24:ToolContext>*/;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var46 = ((long (*)(val*))(var45->class->vft[COLOR_toolcontext__ToolContext__verbose_level]))(var45) /* verbose_level on <var45:ToolContext>*/;
var47 = 3;
{ /* Inline kernel#Int#>= (var46,var47) */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (!var50) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var51 = var46 >= var47;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
if (var48){
var52 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:MakefileToolchain>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "make -B -C ";
var56 = 11;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = " -f ";
var61 = 4;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " -j 4 ";
var66 = 6;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = " 2>&1";
var71 = 5;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 7;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var75)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var75)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var75)->values[4] = (val*) var64;
((struct instance_array__NativeArray*)var75)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var75)->values[6] = (val*) var69;
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
var76 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
var77 = ((long (*)(val*, val*))(var52->class->vft[COLOR_exec__Sys__system]))(var52, var76) /* system on <var52:Sys>*/;
var78 = BOX_kernel__Int(var77); /* autobox from Int to nullable Object */
var_res = var78;
} else {
var79 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:MakefileToolchain>*/;
if (varonce80) {
var81 = varonce80;
} else {
var82 = "make -B -C ";
var83 = 11;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = " -f ";
var88 = 4;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = " -j 4 ";
var93 = 6;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = " 2>&1 >/dev/null";
var98 = 16;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 7;
var102 = NEW_array__NativeArray(var101, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var102)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var102)->values[1] = (val*) var_compile_dir;
((struct instance_array__NativeArray*)var102)->values[2] = (val*) var86;
((struct instance_array__NativeArray*)var102)->values[3] = (val*) var_makename;
((struct instance_array__NativeArray*)var102)->values[4] = (val*) var91;
((struct instance_array__NativeArray*)var102)->values[5] = (val*) var_makeflags;
((struct instance_array__NativeArray*)var102)->values[6] = (val*) var96;
((void (*)(val*, val*, long))(var100->class->vft[COLOR_array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
var104 = ((long (*)(val*, val*))(var79->class->vft[COLOR_exec__Sys__system]))(var79, var103) /* system on <var79:Sys>*/;
var105 = BOX_kernel__Int(var104); /* autobox from Int to nullable Object */
var_res = var105;
}
var106 = 0;
{ /* Inline kernel#Int#!= (var_res,var106) */
var109 = (var_res != NULL) && (var_res->class == &class_kernel__Int);
if (var109) {
var110 = ((struct instance_kernel__Int*)var_res)->value; /* autounbox from nullable Object to Int */;
var109 = (var110 == var106);
}
var111 = !var109;
var107 = var111;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
if (var107){
var112 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:MakefileToolchain>*/;
var113 = NULL;
if (varonce114) {
var115 = varonce114;
} else {
var116 = "make failed! Error code: ";
var117 = 25;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = ".";
var122 = 1;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var124 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var124 = array_instance Array[Object] */
var125 = 3;
var126 = NEW_array__NativeArray(var125, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var126)->values[0] = (val*) var115;
((struct instance_array__NativeArray*)var126)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var126)->values[2] = (val*) var120;
((void (*)(val*, val*, long))(var124->class->vft[COLOR_array__Array__with_native]))(var124, var126, var125) /* with_native on <var124:Array[Object]>*/;
}
var127 = ((val* (*)(val*))(var124->class->vft[COLOR_string__Object__to_s]))(var124) /* to_s on <var124:Array[Object]>*/;
((void (*)(val*, val*, val*))(var112->class->vft[COLOR_toolcontext__ToolContext__error]))(var112, var113, var127) /* error on <var112:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: Object, AbstractCompiler, String) */
void VIRTUAL_abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0, val* p1) {
abstract_compiler__MakefileToolchain__compile_c_code(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#names for (self: AbstractCompiler): HashMap[String, String] */
val* abstract_compiler__AbstractCompiler__names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dnames].val; /* @names on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 377);
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
var1 = abstract_compiler__AbstractCompiler__names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#names= for (self: AbstractCompiler, HashMap[String, String]) */
void abstract_compiler__AbstractCompiler__names_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dnames].val = p0; /* @names on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#names= for (self: Object, HashMap[String, String]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__names_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__names_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#mainmodule for (self: AbstractCompiler): MModule */
val* abstract_compiler__AbstractCompiler__mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 380);
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
var1 = abstract_compiler__AbstractCompiler__mainmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule= for (self: AbstractCompiler, MModule) */
void abstract_compiler__AbstractCompiler__mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val = p0; /* @mainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#mainmodule= for (self: Object, MModule) */
void VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__mainmodule_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule for (self: AbstractCompiler): MModule */
val* abstract_compiler__AbstractCompiler__realmainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @realmainmodule");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 384);
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
var1 = abstract_compiler__AbstractCompiler__realmainmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule= for (self: AbstractCompiler, MModule) */
void abstract_compiler__AbstractCompiler__realmainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val = p0; /* @realmainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule= for (self: Object, MModule) */
void VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__realmainmodule_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder for (self: AbstractCompiler): ModelBuilder */
val* abstract_compiler__AbstractCompiler__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelbuilder");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 387);
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
var1 = abstract_compiler__AbstractCompiler__modelbuilder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder= for (self: AbstractCompiler, ModelBuilder) */
void abstract_compiler__AbstractCompiler__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val = p0; /* @modelbuilder on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__modelbuilder_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#hardening for (self: AbstractCompiler): Bool */
short int abstract_compiler__AbstractCompiler__hardening(val* self) {
short int var /* : Bool */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_hardening]))(var2) /* opt_hardening on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#hardening for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__AbstractCompiler__hardening(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AbstractCompiler__hardening(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init for (self: AbstractCompiler, MModule, ModelBuilder) */
void abstract_compiler__AbstractCompiler__init(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_mainmodule = p0;
var_modelbuilder = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(self, var_mainmodule) /* mainmodule= on <self:AbstractCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__realmainmodule_61d]))(self, var_mainmodule) /* realmainmodule= on <self:AbstractCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder_61d]))(self, var_modelbuilder) /* modelbuilder= on <self:AbstractCompiler>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#init for (self: Object, MModule, ModelBuilder) */
void VIRTUAL_abstract_compiler__AbstractCompiler__init(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompiler__init(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#new_file for (self: AbstractCompiler, String): CodeFile */
val* abstract_compiler__AbstractCompiler__new_file(val* self, val* p0) {
val* var /* : CodeFile */;
val* var_name /* var name: String */;
val* var1 /* : CodeFile */;
val* var_f /* var f: CodeFile */;
val* var2 /* : List[CodeFile] */;
var_name = p0;
var1 = NEW_abstract_compiler__CodeFile(&type_abstract_compiler__CodeFile);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__CodeFile__init]))(var1, var_name) /* init on <var1:CodeFile>*/;
var_f = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__files]))(self) /* files on <self:AbstractCompiler>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_f) /* add on <var2:List[CodeFile]>*/;
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
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val; /* @files on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @files");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 409);
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
var1 = abstract_compiler__AbstractCompiler__files(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files= for (self: AbstractCompiler, List[CodeFile]) */
void abstract_compiler__AbstractCompiler__files_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = p0; /* @files on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#files= for (self: Object, List[CodeFile]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__files_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__files_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#new_visitor for (self: AbstractCompiler): AbstractCompilerVisitor */
val* abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "new_visitor", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 413);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#new_visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : AbstractCompilerVisitor */;
var1 = abstract_compiler__AbstractCompiler__new_visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header for (self: AbstractCompiler): CodeWriter */
val* abstract_compiler__AbstractCompiler__header(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 416);
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
var1 = abstract_compiler__AbstractCompiler__header(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header= for (self: AbstractCompiler, CodeWriter) */
void abstract_compiler__AbstractCompiler__header_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val = p0; /* @header on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#header= for (self: Object, CodeWriter) */
void VIRTUAL_abstract_compiler__AbstractCompiler__header_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__header_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provide_declaration for (self: AbstractCompiler, String, String) */
void abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_s /* var s: String */;
val* var /* : HashMap[String, String] */;
short int var1 /* : Bool */;
val* var2 /* : HashMap[String, String] */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[String, String] */;
var_key = p0;
var_s = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(self) /* provided_declarations on <self:AbstractCompiler>*/;
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var, var_key) /* has_key on <var:HashMap[String, String]>*/;
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(self) /* provided_declarations on <self:AbstractCompiler>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var2, var_key) /* [] on <var2:HashMap[String, String]>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var_s) /* == on <var3:nullable Object(String)>*/;
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 423);
show_backtrace(1);
}
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provided_declarations]))(self) /* provided_declarations on <self:AbstractCompiler>*/;
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var5, var_key, var_s) /* []= on <var5:HashMap[String, String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provide_declaration for (self: Object, String, String) */
void VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompiler__provide_declaration(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations for (self: AbstractCompiler): HashMap[String, String] */
val* abstract_compiler__AbstractCompiler__provided_declarations(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val; /* @provided_declarations on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @provided_declarations");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 428);
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
var1 = abstract_compiler__AbstractCompiler__provided_declarations(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations= for (self: AbstractCompiler, HashMap[String, String]) */
void abstract_compiler__AbstractCompiler__provided_declarations_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = p0; /* @provided_declarations on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations= for (self: Object, HashMap[String, String]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__provided_declarations_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations for (self: AbstractCompiler): HashMap[String, ANode] */
val* abstract_compiler__AbstractCompiler__requirers_of_declarations(val* self) {
val* var /* : HashMap[String, ANode] */;
val* var1 /* : HashMap[String, ANode] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drequirers_of_declarations].val; /* @requirers_of_declarations on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @requirers_of_declarations");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 430);
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
var1 = abstract_compiler__AbstractCompiler__requirers_of_declarations(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations= for (self: AbstractCompiler, HashMap[String, ANode]) */
void abstract_compiler__AbstractCompiler__requirers_of_declarations_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drequirers_of_declarations].val = p0; /* @requirers_of_declarations on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations= for (self: Object, HashMap[String, ANode]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__requirers_of_declarations_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var2 /* : OFStream */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_stream /* var stream: OFStream */;
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
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : HashMap[String, String] */;
val* var41 /* : Collection[Object] */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_i /* var i: String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : HashMap[String, String] */;
val* var51 /* : nullable Object */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : OFStream */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var_70 /* var : Array[Object] */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : Process */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var_100 /* var : Array[Object] */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : Array[Object] */;
long var123 /* : Int */;
val* var_124 /* var : Array[Object] */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
val* var141 /* : Array[String] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[String] */;
val* var_x /* var x: Process */;
val* var144 /* : Array[ExternFile] */;
val* var145 /* : ExternCFile */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var_148 /* var : Array[Object] */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__ModelBuilder__compile_dir]))(var) /* compile_dir on <var:ModelBuilder>*/;
var_compile_dir = var1;
var2 = NEW_file__OFStream(&type_file__OFStream);
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
var4 = 3;
((void (*)(val*, long))(var3->class->vft[COLOR_array__Array__with_capacity]))(var3, var4) /* with_capacity on <var3:Array[Object]>*/;
var_ = var3;
if (varonce) {
var5 = varonce;
} else {
var6 = "";
var7 = 0;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var5) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_compile_dir) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "/C_fun_names";
var12 = 12;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_file__OFStream__open]))(var2, var14) /* open on <var2:OFStream>*/;
var_stream = var2;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "%{\n#include \"c_functions_hash.h\"\n%}\n";
var18 = 36;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var16) /* write on <var_stream:OFStream>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "%define lookup-function-name get_nit_name\n";
var23 = 42;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var21) /* write on <var_stream:OFStream>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "struct C_Nit_Names;\n";
var28 = 20;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var26) /* write on <var_stream:OFStream>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "%%\n";
var33 = 3;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var31) /* write on <var_stream:OFStream>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "####\n";
var38 = 5;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var36) /* write on <var_stream:OFStream>*/;
var40 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(self) /* names on <self:AbstractCompiler>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__MapRead__keys]))(var40) /* keys on <var40:HashMap[String, String]>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__iterator]))(var41) /* iterator on <var41:Collection[Object](HashMapKeys[String, String])>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var_i = var44;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var_i) /* write on <var_stream:OFStream>*/;
if (varonce45) {
var46 = varonce45;
} else {
var47 = ",\11\"";
var48 = 3;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var46) /* write on <var_stream:OFStream>*/;
var50 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(self) /* names on <self:AbstractCompiler>*/;
var51 = ((val* (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var50, var_i) /* [] on <var50:HashMap[String, String]>*/;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var51) /* write on <var_stream:OFStream>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "\"\n";
var55 = 2;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var53) /* write on <var_stream:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "####\n";
var60 = 5;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var58) /* write on <var_stream:OFStream>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "%%\n";
var65 = 3;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var63) /* write on <var_stream:OFStream>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
var67 = NEW_file__OFStream(&type_file__OFStream);
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
var69 = 3;
((void (*)(val*, long))(var68->class->vft[COLOR_array__Array__with_capacity]))(var68, var69) /* with_capacity on <var68:Array[Object]>*/;
var_70 = var68;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "";
var74 = 0;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
((void (*)(val*, val*))(var_70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_70, var72) /* add on <var_70:Array[Object]>*/;
((void (*)(val*, val*))(var_70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_70, var_compile_dir) /* add on <var_70:Array[Object]>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "/c_functions_hash.h";
var79 = 19;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
((void (*)(val*, val*))(var_70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_70, var77) /* add on <var_70:Array[Object]>*/;
var81 = ((val* (*)(val*))(var_70->class->vft[COLOR_string__Object__to_s]))(var_70) /* to_s on <var_70:Array[Object]>*/;
((void (*)(val*, val*))(var67->class->vft[COLOR_file__OFStream__open]))(var67, var81) /* open on <var67:OFStream>*/;
var_stream = var67;
if (varonce82) {
var83 = varonce82;
} else {
var84 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var85 = 68;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var83) /* write on <var_stream:OFStream>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = "const struct C_Nit_Names* get_nit_name(register const char *str, register unsigned int len);\n";
var90 = 93;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var88) /* write on <var_stream:OFStream>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
var92 = NEW_exec__Process(&type_exec__Process);
if (varonce93) {
var94 = varonce93;
} else {
var95 = "gperf";
var96 = 5;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
var99 = 3;
((void (*)(val*, long))(var98->class->vft[COLOR_array__Array__with_capacity]))(var98, var99) /* with_capacity on <var98:Array[Object]>*/;
var_100 = var98;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "";
var104 = 0;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
((void (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_100, var102) /* add on <var_100:Array[Object]>*/;
((void (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_100, var_compile_dir) /* add on <var_100:Array[Object]>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "/C_fun_names";
var109 = 12;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
((void (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_100, var107) /* add on <var_100:Array[Object]>*/;
var111 = ((val* (*)(val*))(var_100->class->vft[COLOR_string__Object__to_s]))(var_100) /* to_s on <var_100:Array[Object]>*/;
if (varonce112) {
var113 = varonce112;
} else {
var114 = "-t";
var115 = 2;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "-7";
var120 = 2;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
var123 = 3;
((void (*)(val*, long))(var122->class->vft[COLOR_array__Array__with_capacity]))(var122, var123) /* with_capacity on <var122:Array[Object]>*/;
var_124 = var122;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "--output-file=";
var128 = 14;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var126) /* add on <var_124:Array[Object]>*/;
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var_compile_dir) /* add on <var_124:Array[Object]>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "/c_functions_hash.c";
var133 = 19;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(var_124->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_124, var131) /* add on <var_124:Array[Object]>*/;
var135 = ((val* (*)(val*))(var_124->class->vft[COLOR_string__Object__to_s]))(var_124) /* to_s on <var_124:Array[Object]>*/;
if (varonce136) {
var137 = varonce136;
} else {
var138 = "-C";
var139 = 2;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var141 = array_instance Array[String] */
var142 = 5;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var113;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var118;
((struct instance_array__NativeArray*)var143)->values[3] = (val*) var135;
((struct instance_array__NativeArray*)var143)->values[4] = (val*) var137;
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var92->class->vft[COLOR_exec__Process__init]))(var92, var94, var141) /* init on <var92:Process>*/;
var_x = var92;
((void (*)(val*))(var_x->class->vft[COLOR_exec__Process__wait]))(var_x) /* wait on <var_x:Process>*/;
var144 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(self) /* extern_bodies on <self:AbstractCompiler>*/;
var145 = NEW_c__ExternCFile(&type_c__ExternCFile);
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
var147 = 3;
((void (*)(val*, long))(var146->class->vft[COLOR_array__Array__with_capacity]))(var146, var147) /* with_capacity on <var146:Array[Object]>*/;
var_148 = var146;
if (varonce149) {
var150 = varonce149;
} else {
var151 = "";
var152 = 0;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
((void (*)(val*, val*))(var_148->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_148, var150) /* add on <var_148:Array[Object]>*/;
((void (*)(val*, val*))(var_148->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_148, var_compile_dir) /* add on <var_148:Array[Object]>*/;
if (varonce154) {
var155 = varonce154;
} else {
var156 = "/c_functions_hash.c";
var157 = 19;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
((void (*)(val*, val*))(var_148->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_148, var155) /* add on <var_148:Array[Object]>*/;
var159 = ((val* (*)(val*))(var_148->class->vft[COLOR_string__Object__to_s]))(var_148) /* to_s on <var_148:Array[Object]>*/;
if (varonce160) {
var161 = varonce160;
} else {
var162 = "";
var163 = 0;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
((void (*)(val*, val*, val*))(var145->class->vft[COLOR_c__ExternCFile__init]))(var145, var159, var161) /* init on <var145:ExternCFile>*/;
((void (*)(val*, val*))(var144->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var144, var145) /* add on <var144:Array[ExternFile]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(val* self) {
abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_header(val* self) {
val* var /* : CodeWriter */;
val* var_v /* var v: CodeWriter */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var_toolctx /* var toolctx: ToolContext */;
val* var3 /* : CodeWriter */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : CodeWriter */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : CodeWriter */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : CodeWriter */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : CodeWriter */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : CodeWriter */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : CodeWriter */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : CodeWriter */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
var_v = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var_toolctx = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "#include <stdlib.h>";
var6 = 19;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var3, var4) /* add_decl on <var3:CodeWriter>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "#include <stdio.h>";
var12 = 18;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var8->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var8, var10) /* add_decl on <var8:CodeWriter>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "#include <string.h>";
var18 = 19;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var14, var16) /* add_decl on <var14:CodeWriter>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "#include \"gc_chooser.h\"";
var24 = 23;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var20, var22) /* add_decl on <var20:CodeWriter>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header_structs]))(self) /* compile_header_structs on <self:AbstractCompiler>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self) /* compile_nitni_structs on <self:AbstractCompiler>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "void show_backtrace(int);";
var30 = 25;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var26->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var26, var28) /* add_decl on <var26:CodeWriter>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "extern int glob_argc;";
var36 = 21;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
((void (*)(val*, val*))(var32->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var32, var34) /* add_decl on <var32:CodeWriter>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "extern char **glob_argv;";
var42 = 24;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
((void (*)(val*, val*))(var38->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var38, var40) /* add_decl on <var38:CodeWriter>*/;
var44 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:AbstractCompiler>*/;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "extern val *glob_sys;";
var48 = 21;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var44->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var44, var46) /* add_decl on <var44:CodeWriter>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_header(val* self) {
abstract_compiler__AbstractCompiler__compile_header(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header_structs for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_header_structs", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 487);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
abstract_compiler__AbstractCompiler__compile_header_structs(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_structs for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_nitni_structs", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 490);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_structs for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
abstract_compiler__AbstractCompiler__compile_nitni_structs(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
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
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : ModelBuilder */;
val* var47 /* : ToolContext */;
val* var48 /* : OptionBool */;
val* var49 /* : nullable Object */;
short int var50 /* : Bool */;
val* var51 /* : Array[String] */;
val* var52 /* : Iterator[nullable Object] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_tag /* var tag: String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
val* var97 /* : AbstractCompiler */;
val* var98 /* : CodeWriter */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
val* var113 /* : AbstractCompiler */;
val* var114 /* : CodeWriter */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
val* var129 /* : AbstractCompiler */;
val* var130 /* : CodeWriter */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[Object] */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : ModelBuilder */;
val* var171 /* : ToolContext */;
val* var172 /* : OptionBool */;
val* var173 /* : nullable Object */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : String */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : String */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : String */;
val* var241 /* : ModelBuilder */;
val* var242 /* : ToolContext */;
val* var243 /* : OptionBool */;
val* var244 /* : nullable Object */;
short int var245 /* : Bool */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : String */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
long var259 /* : Int */;
val* var260 /* : String */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
long var264 /* : Int */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
long var269 /* : Int */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : String */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : String */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
long var319 /* : Int */;
val* var320 /* : String */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : String */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : String */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
long var344 /* : Int */;
val* var345 /* : String */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : String */;
val* var356 /* : MModule */;
val* var357 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
val* var358 /* : null */;
short int var359 /* : Bool */;
val* var360 /* : AbstractCompiler */;
val* var361 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var362 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
long var366 /* : Int */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
long var371 /* : Int */;
val* var372 /* : String */;
val* var373 /* : Array[Object] */;
long var374 /* : Int */;
val* var375 /* : NativeArray[Object] */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : String */;
val* var382 /* : MClass */;
val* var383 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
val* var384 /* : null */;
short int var385 /* : Bool */;
val* var386 /* : Array[RuntimeVariable] */;
long var387 /* : Int */;
val* var388 /* : NativeArray[RuntimeVariable] */;
val* var389 /* : nullable RuntimeVariable */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : String */;
val* var395 /* : MClass */;
val* var396 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
val* var397 /* : null */;
short int var398 /* : Bool */;
val* var399 /* : Array[RuntimeVariable] */;
long var400 /* : Int */;
val* var401 /* : NativeArray[RuntimeVariable] */;
val* var402 /* : nullable RuntimeVariable */;
val* var403 /* : ModelBuilder */;
val* var404 /* : ToolContext */;
val* var405 /* : OptionBool */;
val* var406 /* : nullable Object */;
short int var407 /* : Bool */;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : NativeString */;
long var411 /* : Int */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : String */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
long var421 /* : Int */;
val* var422 /* : String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : String */;
val* var428 /* : Array[String] */;
val* var429 /* : Iterator[nullable Object] */;
short int var430 /* : Bool */;
val* var431 /* : nullable Object */;
val* var_tag432 /* var tag: String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
long var436 /* : Int */;
val* var437 /* : String */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : String */;
val* var443 /* : Array[Object] */;
long var444 /* : Int */;
val* var445 /* : NativeArray[Object] */;
val* var446 /* : String */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : String */;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
long var455 /* : Int */;
val* var456 /* : String */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
long var460 /* : Int */;
val* var461 /* : String */;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : NativeString */;
long var465 /* : Int */;
val* var466 /* : String */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
long var470 /* : Int */;
val* var471 /* : String */;
val* var472 /* : Array[Object] */;
long var473 /* : Int */;
val* var474 /* : NativeArray[Object] */;
val* var475 /* : String */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : String */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
long var484 /* : Int */;
val* var485 /* : String */;
val* var486 /* : Array[Object] */;
long var487 /* : Int */;
val* var488 /* : NativeArray[Object] */;
val* var489 /* : String */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : String */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : String */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : String */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
long var507 /* : Int */;
val* var508 /* : String */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : NativeString */;
long var512 /* : Int */;
val* var513 /* : String */;
val* var514 /* : Array[Object] */;
long var515 /* : Int */;
val* var516 /* : NativeArray[Object] */;
val* var517 /* : String */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
long var521 /* : Int */;
val* var522 /* : String */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
long var526 /* : Int */;
val* var527 /* : String */;
val* var528 /* : Array[Object] */;
long var529 /* : Int */;
val* var530 /* : NativeArray[Object] */;
val* var531 /* : String */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : NativeString */;
long var536 /* : Int */;
val* var537 /* : String */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
long var541 /* : Int */;
val* var542 /* : String */;
val* var543 /* : Array[String] */;
val* var544 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
long var548 /* : Int */;
val* var549 /* : String */;
val* var550 /* : Iterator[nullable Object] */;
short int var551 /* : Bool */;
val* var552 /* : nullable Object */;
val* var_tag553 /* var tag: String */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : NativeString */;
long var557 /* : Int */;
val* var558 /* : String */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : NativeString */;
long var562 /* : Int */;
val* var563 /* : String */;
val* var564 /* : Array[Object] */;
long var565 /* : Int */;
val* var566 /* : NativeArray[Object] */;
val* var567 /* : String */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : NativeString */;
long var571 /* : Int */;
val* var572 /* : String */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
long var576 /* : Int */;
val* var577 /* : String */;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : NativeString */;
long var581 /* : Int */;
val* var582 /* : String */;
val* var583 /* : Array[Object] */;
long var584 /* : Int */;
val* var585 /* : NativeArray[Object] */;
val* var586 /* : String */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : String */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
long var595 /* : Int */;
val* var596 /* : String */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : String */;
val* var602 /* : Array[Object] */;
long var603 /* : Int */;
val* var604 /* : NativeArray[Object] */;
val* var605 /* : String */;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : NativeString */;
long var609 /* : Int */;
val* var610 /* : String */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : String */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
long var619 /* : Int */;
val* var620 /* : String */;
val* var621 /* : Array[Object] */;
long var622 /* : Int */;
val* var623 /* : NativeArray[Object] */;
val* var624 /* : String */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
long var628 /* : Int */;
val* var629 /* : String */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : NativeString */;
long var633 /* : Int */;
val* var634 /* : String */;
static val* varonce635;
val* var636 /* : String */;
char* var637 /* : NativeString */;
long var638 /* : Int */;
val* var639 /* : String */;
val* var640 /* : Array[Object] */;
long var641 /* : Int */;
val* var642 /* : NativeArray[Object] */;
val* var643 /* : String */;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : NativeString */;
long var648 /* : Int */;
val* var649 /* : String */;
static val* varonce650;
val* var651 /* : String */;
char* var652 /* : NativeString */;
long var653 /* : Int */;
val* var654 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
var_v = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var2) /* opt_stacktrace on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var5){
if (varonce) {
var6 = varonce;
} else {
var7 = "#include \"c_functions_hash.h\"";
var8 = 29;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var6) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "#include <signal.h>";
var13 = 19;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var11) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var15) /* toolcontext on <var15:ModelBuilder>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var16) /* opt_no_stacktrace on <var16:ToolContext>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_opts__Option__value]))(var17) /* value on <var17:OptionBool>*/;
var19 = ((struct instance_kernel__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
var20 = !var19;
if (var20){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "#define UNW_LOCAL_ONLY";
var24 = 22;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var22) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "#include <libunwind.h>";
var29 = 22;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var27) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "int glob_argc;";
var34 = 14;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var32) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "char **glob_argv;";
var39 = 17;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var37) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "val *glob_sys;";
var44 = 14;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var42) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var46 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var46) /* toolcontext on <var46:ModelBuilder>*/;
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var47) /* opt_typing_test_metrics on <var47:ToolContext>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_opts__Option__value]))(var48) /* value on <var48:OptionBool>*/;
var50 = ((struct instance_kernel__Bool*)var49)->value; /* autounbox from nullable Object to Bool */;
if (var50){
var51 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_abstract_collection__Collection__iterator]))(var51) /* iterator on <var51:Array[String]>*/;
for(;;) {
var53 = ((short int (*)(val*))(var52->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var52) /* is_ok on <var52:Iterator[nullable Object]>*/;
if(!var53) break;
var54 = ((val* (*)(val*))(var52->class->vft[COLOR_abstract_collection__Iterator__item]))(var52) /* item on <var52:Iterator[nullable Object]>*/;
var_tag = var54;
if (varonce55) {
var56 = varonce55;
} else {
var57 = "long count_type_test_resolved_";
var58 = 30;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = ";";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 3;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var61;
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var68) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "long count_type_test_unresolved_";
var72 = 32;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = ";";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 3;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var70;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var81)->values[2] = (val*) var75;
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var82) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "long count_type_test_skipped_";
var86 = 29;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = ";";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 3;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var95)->values[2] = (val*) var89;
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var96) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var97 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var98 = ((val* (*)(val*))(var97->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var97) /* header on <var97:AbstractCompiler>*/;
if (varonce99) {
var100 = varonce99;
} else {
var101 = "extern long count_type_test_resolved_";
var102 = 37;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = ";";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 3;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var100;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var105;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
((void (*)(val*, val*))(var98->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var98, var112) /* add_decl on <var98:CodeWriter>*/;
var113 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var114 = ((val* (*)(val*))(var113->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var113) /* header on <var113:AbstractCompiler>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "extern long count_type_test_unresolved_";
var118 = 39;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ";";
var123 = 1;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 3;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var116;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var121;
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
((void (*)(val*, val*))(var114->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var114, var128) /* add_decl on <var114:CodeWriter>*/;
var129 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var130 = ((val* (*)(val*))(var129->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var129) /* header on <var129:AbstractCompiler>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = "extern long count_type_test_skipped_";
var134 = 36;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = ";";
var139 = 1;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 3;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var132;
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var137;
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
var144 = ((val* (*)(val*))(var141->class->vft[COLOR_string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
((void (*)(val*, val*))(var130->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var130, var144) /* add_decl on <var130:CodeWriter>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var52->class->vft[COLOR_abstract_collection__Iterator__next]))(var52) /* next on <var52:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "void sig_handler(int signo){";
var148 = 28;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var146) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce150) {
var151 = varonce150;
} else {
var152 = "printf(\"Caught signal : %s\\n\", strsignal(signo));";
var153 = 49;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var151) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce155) {
var156 = varonce155;
} else {
var157 = "show_backtrace(signo);";
var158 = 22;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var156) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce160) {
var161 = varonce160;
} else {
var162 = "}";
var163 = 1;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var161) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce165) {
var166 = varonce165;
} else {
var167 = "void show_backtrace (int signo) {";
var168 = 33;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var166) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var170 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var171 = ((val* (*)(val*))(var170->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var170) /* toolcontext on <var170:ModelBuilder>*/;
var172 = ((val* (*)(val*))(var171->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_stacktrace]))(var171) /* opt_no_stacktrace on <var171:ToolContext>*/;
var173 = ((val* (*)(val*))(var172->class->vft[COLOR_opts__Option__value]))(var172) /* value on <var172:OptionBool>*/;
var174 = ((struct instance_kernel__Bool*)var173)->value; /* autounbox from nullable Object to Bool */;
var175 = !var174;
if (var175){
if (varonce176) {
var177 = varonce176;
} else {
var178 = "char* opt = getenv(\"NIT_NO_STACK\");";
var179 = 35;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var177) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce181) {
var182 = varonce181;
} else {
var183 = "unw_cursor_t cursor;";
var184 = 20;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var182) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce186) {
var187 = varonce186;
} else {
var188 = "if(opt==NULL){";
var189 = 14;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var187) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "unw_context_t uc;";
var194 = 17;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var192) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce196) {
var197 = varonce196;
} else {
var198 = "unw_word_t ip;";
var199 = 14;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var197) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce201) {
var202 = varonce201;
} else {
var203 = "char* procname = malloc(sizeof(char) * 100);";
var204 = 44;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var202) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce206) {
var207 = varonce206;
} else {
var208 = "unw_getcontext(&uc);";
var209 = 20;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var207) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce211) {
var212 = varonce211;
} else {
var213 = "unw_init_local(&cursor, &uc);";
var214 = 29;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var212) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce216) {
var217 = varonce216;
} else {
var218 = "printf(\"-------------------------------------------------\\n\");";
var219 = 62;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var217) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce221) {
var222 = varonce221;
} else {
var223 = "printf(\"--   Stack Trace   ------------------------------\\n\");";
var224 = 62;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var222) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce226) {
var227 = varonce226;
} else {
var228 = "printf(\"-------------------------------------------------\\n\");";
var229 = 62;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var227) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce231) {
var232 = varonce231;
} else {
var233 = "while (unw_step(&cursor) > 0) {";
var234 = 31;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var232) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce236) {
var237 = varonce236;
} else {
var238 = "\11unw_get_proc_name(&cursor, procname, 100, &ip);";
var239 = 48;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var237) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var241 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var242 = ((val* (*)(val*))(var241->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var241) /* toolcontext on <var241:ModelBuilder>*/;
var243 = ((val* (*)(val*))(var242->class->vft[COLOR_abstract_compiler__ToolContext__opt_stacktrace]))(var242) /* opt_stacktrace on <var242:ToolContext>*/;
var244 = ((val* (*)(val*))(var243->class->vft[COLOR_opts__Option__value]))(var243) /* value on <var243:OptionBool>*/;
var245 = ((struct instance_kernel__Bool*)var244)->value; /* autounbox from nullable Object to Bool */;
if (var245){
if (varonce246) {
var247 = varonce246;
} else {
var248 = "\11const C_Nit_Names* recv = get_nit_name(procname, strlen(procname));";
var249 = 68;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var247) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce251) {
var252 = varonce251;
} else {
var253 = "\11if (recv != 0){";
var254 = 16;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var252) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce256) {
var257 = varonce256;
} else {
var258 = "\11\11printf(\"` %s\\n\", recv->nit_name);";
var259 = 35;
var260 = string__NativeString__to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var257) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce261) {
var262 = varonce261;
} else {
var263 = "\11}else{";
var264 = 7;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var262) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce266) {
var267 = varonce266;
} else {
var268 = "\11\11printf(\"` %s\\n\", procname);";
var269 = 29;
var270 = string__NativeString__to_s_with_length(var268, var269);
var267 = var270;
varonce266 = var267;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var267) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce271) {
var272 = varonce271;
} else {
var273 = "\11}";
var274 = 2;
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var272) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce276) {
var277 = varonce276;
} else {
var278 = "\11printf(\"` %s \\n\",procname);";
var279 = 28;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var277) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = "}";
var284 = 1;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var282) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce286) {
var287 = varonce286;
} else {
var288 = "printf(\"-------------------------------------------------\\n\");";
var289 = 62;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var287) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = "free(procname);";
var294 = 15;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var292) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce296) {
var297 = varonce296;
} else {
var298 = "}";
var299 = 1;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var297) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "exit(signo);";
var304 = 12;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var302) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce306) {
var307 = varonce306;
} else {
var308 = "}";
var309 = 1;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var307) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce311) {
var312 = varonce311;
} else {
var313 = "int main(int argc, char** argv) {";
var314 = 33;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var312) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce316) {
var317 = varonce316;
} else {
var318 = "signal(SIGABRT, sig_handler);";
var319 = 29;
var320 = string__NativeString__to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var317) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce321) {
var322 = varonce321;
} else {
var323 = "signal(SIGFPE, sig_handler);";
var324 = 28;
var325 = string__NativeString__to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var322) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce326) {
var327 = varonce326;
} else {
var328 = "signal(SIGILL, sig_handler);";
var329 = 28;
var330 = string__NativeString__to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var327) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = "signal(SIGINT, sig_handler);";
var334 = 28;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var332) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce336) {
var337 = varonce336;
} else {
var338 = "signal(SIGTERM, sig_handler);";
var339 = 29;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var337) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce341) {
var342 = varonce341;
} else {
var343 = "signal(SIGSEGV, sig_handler);";
var344 = 29;
var345 = string__NativeString__to_s_with_length(var343, var344);
var342 = var345;
varonce341 = var342;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var342) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce346) {
var347 = varonce346;
} else {
var348 = "glob_argc = argc; glob_argv = argv;";
var349 = 35;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var347) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce351) {
var352 = varonce351;
} else {
var353 = "initialize_gc_option();";
var354 = 23;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var352) /* add on <var_v:AbstractCompilerVisitor>*/;
var356 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
var357 = ((val* (*)(val*))(var356->class->vft[COLOR_model__MModule__sys_type]))(var356) /* sys_type on <var356:MModule>*/;
var_main_type = var357;
var358 = NULL;
if (var_main_type == NULL) {
var359 = 0; /* is null */
} else {
var359 = 1; /* arg is null and recv is not */
}
if (var359){
var360 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var361 = ((val* (*)(val*))(var360->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var360) /* mainmodule on <var360:AbstractCompiler>*/;
var_mainmodule = var361;
var362 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_glob_sys = var362;
if (varonce363) {
var364 = varonce363;
} else {
var365 = "glob_sys = ";
var366 = 11;
var367 = string__NativeString__to_s_with_length(var365, var366);
var364 = var367;
varonce363 = var364;
}
if (varonce368) {
var369 = varonce368;
} else {
var370 = ";";
var371 = 1;
var372 = string__NativeString__to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
var373 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var373 = array_instance Array[Object] */
var374 = 3;
var375 = NEW_array__NativeArray(var374, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var375)->values[0] = (val*) var364;
((struct instance_array__NativeArray*)var375)->values[1] = (val*) var_glob_sys;
((struct instance_array__NativeArray*)var375)->values[2] = (val*) var369;
((void (*)(val*, val*, long))(var373->class->vft[COLOR_array__Array__with_native]))(var373, var375, var374) /* with_native on <var373:Array[Object]>*/;
}
var376 = ((val* (*)(val*))(var373->class->vft[COLOR_string__Object__to_s]))(var373) /* to_s on <var373:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var376) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce377) {
var378 = varonce377;
} else {
var379 = "init";
var380 = 4;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
var382 = ((val* (*)(val*))(var_main_type->class->vft[COLOR_model__MClassType__mclass]))(var_main_type) /* mclass on <var_main_type:nullable MClassType(MClassType)>*/;
var383 = ((val* (*)(val*, val*, val*))(var_mainmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mainmodule, var378, var382) /* try_get_primitive_method on <var_mainmodule:MModule>*/;
var_main_init = var383;
var384 = NULL;
if (var_main_init == NULL) {
var385 = 0; /* is null */
} else {
var385 = 1; /* arg is null and recv is not */
}
if (var385){
var386 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var386 = array_instance Array[RuntimeVariable] */
var387 = 1;
var388 = NEW_array__NativeArray(var387, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var388)->values[0] = (val*) var_glob_sys;
((void (*)(val*, val*, long))(var386->class->vft[COLOR_array__Array__with_native]))(var386, var388, var387) /* with_native on <var386:Array[RuntimeVariable]>*/;
}
var389 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_init, var386) /* send on <var_v:AbstractCompilerVisitor>*/;
var389;
} else {
}
if (varonce390) {
var391 = varonce390;
} else {
var392 = "main";
var393 = 4;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
var395 = ((val* (*)(val*))(var_main_type->class->vft[COLOR_model__MClassType__mclass]))(var_main_type) /* mclass on <var_main_type:nullable MClassType(MClassType)>*/;
var396 = ((val* (*)(val*, val*, val*))(var_mainmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mainmodule, var391, var395) /* try_get_primitive_method on <var_mainmodule:MModule>*/;
var_main_method = var396;
var397 = NULL;
if (var_main_method == NULL) {
var398 = 0; /* is null */
} else {
var398 = 1; /* arg is null and recv is not */
}
if (var398){
var399 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var399 = array_instance Array[RuntimeVariable] */
var400 = 1;
var401 = NEW_array__NativeArray(var400, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var401)->values[0] = (val*) var_glob_sys;
((void (*)(val*, val*, long))(var399->class->vft[COLOR_array__Array__with_native]))(var399, var401, var400) /* with_native on <var399:Array[RuntimeVariable]>*/;
}
var402 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_method, var399) /* send on <var_v:AbstractCompilerVisitor>*/;
var402;
} else {
}
} else {
}
var403 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var404 = ((val* (*)(val*))(var403->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var403) /* toolcontext on <var403:ModelBuilder>*/;
var405 = ((val* (*)(val*))(var404->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var404) /* opt_typing_test_metrics on <var404:ToolContext>*/;
var406 = ((val* (*)(val*))(var405->class->vft[COLOR_opts__Option__value]))(var405) /* value on <var405:OptionBool>*/;
var407 = ((struct instance_kernel__Bool*)var406)->value; /* autounbox from nullable Object to Bool */;
if (var407){
if (varonce408) {
var409 = varonce408;
} else {
var410 = "long count_type_test_resolved_total = 0;";
var411 = 40;
var412 = string__NativeString__to_s_with_length(var410, var411);
var409 = var412;
varonce408 = var409;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var409) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce413) {
var414 = varonce413;
} else {
var415 = "long count_type_test_unresolved_total = 0;";
var416 = 42;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var414) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce418) {
var419 = varonce418;
} else {
var420 = "long count_type_test_skipped_total = 0;";
var421 = 39;
var422 = string__NativeString__to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var419) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce423) {
var424 = varonce423;
} else {
var425 = "long count_type_test_total_total = 0;";
var426 = 37;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var424) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var428 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var429 = ((val* (*)(val*))(var428->class->vft[COLOR_abstract_collection__Collection__iterator]))(var428) /* iterator on <var428:Array[String]>*/;
for(;;) {
var430 = ((short int (*)(val*))(var429->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var429) /* is_ok on <var429:Iterator[nullable Object]>*/;
if(!var430) break;
var431 = ((val* (*)(val*))(var429->class->vft[COLOR_abstract_collection__Iterator__item]))(var429) /* item on <var429:Iterator[nullable Object]>*/;
var_tag432 = var431;
if (varonce433) {
var434 = varonce433;
} else {
var435 = "long count_type_test_total_";
var436 = 27;
var437 = string__NativeString__to_s_with_length(var435, var436);
var434 = var437;
varonce433 = var434;
}
if (varonce438) {
var439 = varonce438;
} else {
var440 = ";";
var441 = 1;
var442 = string__NativeString__to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
var443 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var443 = array_instance Array[Object] */
var444 = 3;
var445 = NEW_array__NativeArray(var444, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var445)->values[0] = (val*) var434;
((struct instance_array__NativeArray*)var445)->values[1] = (val*) var_tag432;
((struct instance_array__NativeArray*)var445)->values[2] = (val*) var439;
((void (*)(val*, val*, long))(var443->class->vft[COLOR_array__Array__with_native]))(var443, var445, var444) /* with_native on <var443:Array[Object]>*/;
}
var446 = ((val* (*)(val*))(var443->class->vft[COLOR_string__Object__to_s]))(var443) /* to_s on <var443:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var446) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce447) {
var448 = varonce447;
} else {
var449 = "count_type_test_total_";
var450 = 22;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
if (varonce452) {
var453 = varonce452;
} else {
var454 = " = count_type_test_resolved_";
var455 = 28;
var456 = string__NativeString__to_s_with_length(var454, var455);
var453 = var456;
varonce452 = var453;
}
if (varonce457) {
var458 = varonce457;
} else {
var459 = " + count_type_test_unresolved_";
var460 = 30;
var461 = string__NativeString__to_s_with_length(var459, var460);
var458 = var461;
varonce457 = var458;
}
if (varonce462) {
var463 = varonce462;
} else {
var464 = " + count_type_test_skipped_";
var465 = 27;
var466 = string__NativeString__to_s_with_length(var464, var465);
var463 = var466;
varonce462 = var463;
}
if (varonce467) {
var468 = varonce467;
} else {
var469 = ";";
var470 = 1;
var471 = string__NativeString__to_s_with_length(var469, var470);
var468 = var471;
varonce467 = var468;
}
var472 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var472 = array_instance Array[Object] */
var473 = 9;
var474 = NEW_array__NativeArray(var473, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var474)->values[0] = (val*) var448;
((struct instance_array__NativeArray*)var474)->values[1] = (val*) var_tag432;
((struct instance_array__NativeArray*)var474)->values[2] = (val*) var453;
((struct instance_array__NativeArray*)var474)->values[3] = (val*) var_tag432;
((struct instance_array__NativeArray*)var474)->values[4] = (val*) var458;
((struct instance_array__NativeArray*)var474)->values[5] = (val*) var_tag432;
((struct instance_array__NativeArray*)var474)->values[6] = (val*) var463;
((struct instance_array__NativeArray*)var474)->values[7] = (val*) var_tag432;
((struct instance_array__NativeArray*)var474)->values[8] = (val*) var468;
((void (*)(val*, val*, long))(var472->class->vft[COLOR_array__Array__with_native]))(var472, var474, var473) /* with_native on <var472:Array[Object]>*/;
}
var475 = ((val* (*)(val*))(var472->class->vft[COLOR_string__Object__to_s]))(var472) /* to_s on <var472:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var475) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce476) {
var477 = varonce476;
} else {
var478 = "count_type_test_resolved_total += count_type_test_resolved_";
var479 = 59;
var480 = string__NativeString__to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
if (varonce481) {
var482 = varonce481;
} else {
var483 = ";";
var484 = 1;
var485 = string__NativeString__to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
var486 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var486 = array_instance Array[Object] */
var487 = 3;
var488 = NEW_array__NativeArray(var487, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var488)->values[0] = (val*) var477;
((struct instance_array__NativeArray*)var488)->values[1] = (val*) var_tag432;
((struct instance_array__NativeArray*)var488)->values[2] = (val*) var482;
((void (*)(val*, val*, long))(var486->class->vft[COLOR_array__Array__with_native]))(var486, var488, var487) /* with_native on <var486:Array[Object]>*/;
}
var489 = ((val* (*)(val*))(var486->class->vft[COLOR_string__Object__to_s]))(var486) /* to_s on <var486:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var489) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce490) {
var491 = varonce490;
} else {
var492 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var493 = 63;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = ";";
var498 = 1;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 3;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var491;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var_tag432;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var496;
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var503) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce504) {
var505 = varonce504;
} else {
var506 = "count_type_test_skipped_total += count_type_test_skipped_";
var507 = 57;
var508 = string__NativeString__to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
if (varonce509) {
var510 = varonce509;
} else {
var511 = ";";
var512 = 1;
var513 = string__NativeString__to_s_with_length(var511, var512);
var510 = var513;
varonce509 = var510;
}
var514 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var514 = array_instance Array[Object] */
var515 = 3;
var516 = NEW_array__NativeArray(var515, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var516)->values[0] = (val*) var505;
((struct instance_array__NativeArray*)var516)->values[1] = (val*) var_tag432;
((struct instance_array__NativeArray*)var516)->values[2] = (val*) var510;
((void (*)(val*, val*, long))(var514->class->vft[COLOR_array__Array__with_native]))(var514, var516, var515) /* with_native on <var514:Array[Object]>*/;
}
var517 = ((val* (*)(val*))(var514->class->vft[COLOR_string__Object__to_s]))(var514) /* to_s on <var514:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var517) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce518) {
var519 = varonce518;
} else {
var520 = "count_type_test_total_total += count_type_test_total_";
var521 = 53;
var522 = string__NativeString__to_s_with_length(var520, var521);
var519 = var522;
varonce518 = var519;
}
if (varonce523) {
var524 = varonce523;
} else {
var525 = ";";
var526 = 1;
var527 = string__NativeString__to_s_with_length(var525, var526);
var524 = var527;
varonce523 = var524;
}
var528 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var528 = array_instance Array[Object] */
var529 = 3;
var530 = NEW_array__NativeArray(var529, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var530)->values[0] = (val*) var519;
((struct instance_array__NativeArray*)var530)->values[1] = (val*) var_tag432;
((struct instance_array__NativeArray*)var530)->values[2] = (val*) var524;
((void (*)(val*, val*, long))(var528->class->vft[COLOR_array__Array__with_native]))(var528, var530, var529) /* with_native on <var528:Array[Object]>*/;
}
var531 = ((val* (*)(val*))(var528->class->vft[COLOR_string__Object__to_s]))(var528) /* to_s on <var528:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var531) /* add on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label532: (void)0;
((void (*)(val*))(var429->class->vft[COLOR_abstract_collection__Iterator__next]))(var429) /* next on <var429:Iterator[nullable Object]>*/;
}
BREAK_label532: (void)0;
if (varonce533) {
var534 = varonce533;
} else {
var535 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var536 = 48;
var537 = string__NativeString__to_s_with_length(var535, var536);
var534 = var537;
varonce533 = var534;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var534) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce538) {
var539 = varonce538;
} else {
var540 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var541 = 51;
var542 = string__NativeString__to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var539) /* add on <var_v:AbstractCompilerVisitor>*/;
var543 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var544 = ((val* (*)(val*))(var543->class->vft[COLOR_array__Collection__to_a]))(var543) /* to_a on <var543:Array[String]>*/;
var_tags = var544;
if (varonce545) {
var546 = varonce545;
} else {
var547 = "total";
var548 = 5;
var549 = string__NativeString__to_s_with_length(var547, var548);
var546 = var549;
varonce545 = var546;
}
((void (*)(val*, val*))(var_tags->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tags, var546) /* add on <var_tags:Array[String]>*/;
var550 = ((val* (*)(val*))(var_tags->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_tags) /* iterator on <var_tags:Array[String]>*/;
for(;;) {
var551 = ((short int (*)(val*))(var550->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var550) /* is_ok on <var550:Iterator[nullable Object]>*/;
if(!var551) break;
var552 = ((val* (*)(val*))(var550->class->vft[COLOR_abstract_collection__Iterator__item]))(var550) /* item on <var550:Iterator[nullable Object]>*/;
var_tag553 = var552;
if (varonce554) {
var555 = varonce554;
} else {
var556 = "printf(\"";
var557 = 8;
var558 = string__NativeString__to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
if (varonce559) {
var560 = varonce559;
} else {
var561 = "\");";
var562 = 3;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var564 = array_instance Array[Object] */
var565 = 3;
var566 = NEW_array__NativeArray(var565, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var566)->values[0] = (val*) var555;
((struct instance_array__NativeArray*)var566)->values[1] = (val*) var_tag553;
((struct instance_array__NativeArray*)var566)->values[2] = (val*) var560;
((void (*)(val*, val*, long))(var564->class->vft[COLOR_array__Array__with_native]))(var564, var566, var565) /* with_native on <var564:Array[Object]>*/;
}
var567 = ((val* (*)(val*))(var564->class->vft[COLOR_string__Object__to_s]))(var564) /* to_s on <var564:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var567) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce568) {
var569 = varonce568;
} else {
var570 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var571 = 50;
var572 = string__NativeString__to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
if (varonce573) {
var574 = varonce573;
} else {
var575 = ", 100.0*count_type_test_resolved_";
var576 = 33;
var577 = string__NativeString__to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
if (varonce578) {
var579 = varonce578;
} else {
var580 = "/count_type_test_total_total);";
var581 = 30;
var582 = string__NativeString__to_s_with_length(var580, var581);
var579 = var582;
varonce578 = var579;
}
var583 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var583 = array_instance Array[Object] */
var584 = 5;
var585 = NEW_array__NativeArray(var584, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var585)->values[0] = (val*) var569;
((struct instance_array__NativeArray*)var585)->values[1] = (val*) var_tag553;
((struct instance_array__NativeArray*)var585)->values[2] = (val*) var574;
((struct instance_array__NativeArray*)var585)->values[3] = (val*) var_tag553;
((struct instance_array__NativeArray*)var585)->values[4] = (val*) var579;
((void (*)(val*, val*, long))(var583->class->vft[COLOR_array__Array__with_native]))(var583, var585, var584) /* with_native on <var583:Array[Object]>*/;
}
var586 = ((val* (*)(val*))(var583->class->vft[COLOR_string__Object__to_s]))(var583) /* to_s on <var583:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var586) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce587) {
var588 = varonce587;
} else {
var589 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var590 = 52;
var591 = string__NativeString__to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
if (varonce592) {
var593 = varonce592;
} else {
var594 = ", 100.0*count_type_test_unresolved_";
var595 = 35;
var596 = string__NativeString__to_s_with_length(var594, var595);
var593 = var596;
varonce592 = var593;
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = "/count_type_test_total_total);";
var600 = 30;
var601 = string__NativeString__to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
var602 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var602 = array_instance Array[Object] */
var603 = 5;
var604 = NEW_array__NativeArray(var603, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var604)->values[0] = (val*) var588;
((struct instance_array__NativeArray*)var604)->values[1] = (val*) var_tag553;
((struct instance_array__NativeArray*)var604)->values[2] = (val*) var593;
((struct instance_array__NativeArray*)var604)->values[3] = (val*) var_tag553;
((struct instance_array__NativeArray*)var604)->values[4] = (val*) var598;
((void (*)(val*, val*, long))(var602->class->vft[COLOR_array__Array__with_native]))(var602, var604, var603) /* with_native on <var602:Array[Object]>*/;
}
var605 = ((val* (*)(val*))(var602->class->vft[COLOR_string__Object__to_s]))(var602) /* to_s on <var602:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var605) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce606) {
var607 = varonce606;
} else {
var608 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var609 = 49;
var610 = string__NativeString__to_s_with_length(var608, var609);
var607 = var610;
varonce606 = var607;
}
if (varonce611) {
var612 = varonce611;
} else {
var613 = ", 100.0*count_type_test_skipped_";
var614 = 32;
var615 = string__NativeString__to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
if (varonce616) {
var617 = varonce616;
} else {
var618 = "/count_type_test_total_total);";
var619 = 30;
var620 = string__NativeString__to_s_with_length(var618, var619);
var617 = var620;
varonce616 = var617;
}
var621 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var621 = array_instance Array[Object] */
var622 = 5;
var623 = NEW_array__NativeArray(var622, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var623)->values[0] = (val*) var607;
((struct instance_array__NativeArray*)var623)->values[1] = (val*) var_tag553;
((struct instance_array__NativeArray*)var623)->values[2] = (val*) var612;
((struct instance_array__NativeArray*)var623)->values[3] = (val*) var_tag553;
((struct instance_array__NativeArray*)var623)->values[4] = (val*) var617;
((void (*)(val*, val*, long))(var621->class->vft[COLOR_array__Array__with_native]))(var621, var623, var622) /* with_native on <var621:Array[Object]>*/;
}
var624 = ((val* (*)(val*))(var621->class->vft[COLOR_string__Object__to_s]))(var621) /* to_s on <var621:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var624) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce625) {
var626 = varonce625;
} else {
var627 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var628 = 49;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
if (varonce630) {
var631 = varonce630;
} else {
var632 = ", 100.0*count_type_test_total_";
var633 = 30;
var634 = string__NativeString__to_s_with_length(var632, var633);
var631 = var634;
varonce630 = var631;
}
if (varonce635) {
var636 = varonce635;
} else {
var637 = "/count_type_test_total_total);";
var638 = 30;
var639 = string__NativeString__to_s_with_length(var637, var638);
var636 = var639;
varonce635 = var636;
}
var640 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var640 = array_instance Array[Object] */
var641 = 5;
var642 = NEW_array__NativeArray(var641, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var642)->values[0] = (val*) var626;
((struct instance_array__NativeArray*)var642)->values[1] = (val*) var_tag553;
((struct instance_array__NativeArray*)var642)->values[2] = (val*) var631;
((struct instance_array__NativeArray*)var642)->values[3] = (val*) var_tag553;
((struct instance_array__NativeArray*)var642)->values[4] = (val*) var636;
((void (*)(val*, val*, long))(var640->class->vft[COLOR_array__Array__with_native]))(var640, var642, var641) /* with_native on <var640:Array[Object]>*/;
}
var643 = ((val* (*)(val*))(var640->class->vft[COLOR_string__Object__to_s]))(var640) /* to_s on <var640:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var643) /* add on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label644: (void)0;
((void (*)(val*))(var550->class->vft[COLOR_abstract_collection__Iterator__next]))(var550) /* next on <var550:Iterator[nullable Object]>*/;
}
BREAK_label644: (void)0;
} else {
}
if (varonce645) {
var646 = varonce645;
} else {
var647 = "return 0;";
var648 = 9;
var649 = string__NativeString__to_s_with_length(var647, var648);
var646 = var649;
varonce645 = var646;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var646) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce650) {
var651 = varonce650;
} else {
var652 = "}";
var653 = 1;
var654 = string__NativeString__to_s_with_length(var652, var653);
var651 = var654;
varonce650 = var651;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var651) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function(val* self) {
abstract_compiler__AbstractCompiler__compile_main_function(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* abstract_compiler__AbstractCompiler__extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val; /* @extern_bodies on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @extern_bodies");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 618);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: Object): Array[ExternFile] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = abstract_compiler__AbstractCompiler__extern_bodies(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies= for (self: AbstractCompiler, Array[ExternFile]) */
void abstract_compiler__AbstractCompiler__extern_bodies_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = p0; /* @extern_bodies on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies= for (self: Object, Array[ExternFile]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__extern_bodies_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: AbstractCompiler): Array[String] */
val* abstract_compiler__AbstractCompiler__files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles_to_copy].val; /* @files_to_copy on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @files_to_copy");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 621);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: Object): Array[String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = abstract_compiler__AbstractCompiler__files_to_copy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy= for (self: AbstractCompiler, Array[String]) */
void abstract_compiler__AbstractCompiler__files_to_copy_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles_to_copy].val = p0; /* @files_to_copy on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy= for (self: Object, Array[String]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__files_to_copy_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* abstract_compiler__AbstractCompiler__seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val; /* @seen_extern on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @seen_extern");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 624);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: Object): ArraySet[String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = abstract_compiler__AbstractCompiler__seen_extern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern= for (self: AbstractCompiler, ArraySet[String]) */
void abstract_compiler__AbstractCompiler__seen_extern_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = p0; /* @seen_extern on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#seen_extern= for (self: Object, ArraySet[String]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__seen_extern_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MModule */;
val* var2 /* : Set[MClassDef] */;
val* var3 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var4 /* : MModule */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var8 /* : ModelBuilder */;
val* var9 /* : HashMap[MClassDef, AClassdef] */;
val* var10 /* : nullable Object */;
val* var_n /* var n: AClassdef */;
val* var11 /* : ANodes[APropdef] */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 627);
show_backtrace(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
var2 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var1) /* collect_mclassdefs on <var_mtype:MClassType>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_array__Collection__to_a]))(var2) /* to_a on <var2:Set[MClassDef]>*/;
var_cds = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_model__MModule__linearize_mclassdefs]))(var4, var_cds) /* linearize_mclassdefs on <var4:MModule>*/;
var5 = ((val* (*)(val*))(var_cds->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_cds) /* iterator on <var_cds:Array[MClassDef]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_cd = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var8) /* mclassdef2nclassdef on <var8:ModelBuilder>*/;
var10 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var9, var_cd) /* [] on <var9:HashMap[MClassDef, AClassdef]>*/;
var_n = var10;
var11 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_n) /* n_propdefs on <var_n:AClassdef>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__iterator]))(var11) /* iterator on <var11:ANodes[APropdef]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var_npropdef = var14;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype16 = type_parser_nodes__AAttrPropdef.color;
idtype17 = type_parser_nodes__AAttrPropdef.id;
if(cltype16 >= var_npropdef->type->table_size) {
var15 = 0;
} else {
var15 = var_npropdef->type->type_table[cltype16] == idtype17;
}
if (var15){
((void (*)(val*, val*, val*))(var_npropdef->class->vft[COLOR_abstract_compiler__AAttrPropdef__init_expr]))(var_npropdef, var_v, var_recv) /* init_expr on <var_npropdef:APropdef(AAttrPropdef)>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label18: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label18: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: Object, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompiler__generate_init_attr(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#generate_check_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void abstract_compiler__AbstractCompiler__generate_check_attr(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MModule */;
val* var2 /* : Set[MClassDef] */;
val* var3 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var4 /* : MModule */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var8 /* : ModelBuilder */;
val* var9 /* : HashMap[MClassDef, AClassdef] */;
val* var10 /* : nullable Object */;
val* var_n /* var n: AClassdef */;
val* var11 /* : ANodes[APropdef] */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 642);
show_backtrace(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
var2 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var1) /* collect_mclassdefs on <var_mtype:MClassType>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_array__Collection__to_a]))(var2) /* to_a on <var2:Set[MClassDef]>*/;
var_cds = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:AbstractCompiler>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_model__MModule__linearize_mclassdefs]))(var4, var_cds) /* linearize_mclassdefs on <var4:MModule>*/;
var5 = ((val* (*)(val*))(var_cds->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_cds) /* iterator on <var_cds:Array[MClassDef]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_cd = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var8) /* mclassdef2nclassdef on <var8:ModelBuilder>*/;
var10 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var9, var_cd) /* [] on <var9:HashMap[MClassDef, AClassdef]>*/;
var_n = var10;
var11 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_n) /* n_propdefs on <var_n:AClassdef>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__iterator]))(var11) /* iterator on <var11:ANodes[APropdef]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var_npropdef = var14;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype16 = type_parser_nodes__AAttrPropdef.color;
idtype17 = type_parser_nodes__AAttrPropdef.id;
if(cltype16 >= var_npropdef->type->table_size) {
var15 = 0;
} else {
var15 = var_npropdef->type->type_table[cltype16] == idtype17;
}
if (var15){
((void (*)(val*, val*, val*))(var_npropdef->class->vft[COLOR_abstract_compiler__AAttrPropdef__check_expr]))(var_npropdef, var_v, var_recv) /* check_expr on <var_npropdef:APropdef(AAttrPropdef)>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label18: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label18: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#generate_check_attr for (self: Object, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompiler__generate_check_attr(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* abstract_compiler__AbstractCompiler__count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val; /* @count_type_test_tags on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @count_type_test_tags");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 659);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: Object): Array[String] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = abstract_compiler__AbstractCompiler__count_type_test_tags(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags= for (self: AbstractCompiler, Array[String]) */
void abstract_compiler__AbstractCompiler__count_type_test_tags_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = p0; /* @count_type_test_tags on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags= for (self: Object, Array[String]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__count_type_test_tags_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val; /* @count_type_test_resolved on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @count_type_test_resolved");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 660);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = abstract_compiler__AbstractCompiler__count_type_test_resolved(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved= for (self: AbstractCompiler, HashMap[String, Int]) */
void abstract_compiler__AbstractCompiler__count_type_test_resolved_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = p0; /* @count_type_test_resolved on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved= for (self: Object, HashMap[String, Int]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__count_type_test_resolved_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val; /* @count_type_test_unresolved on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @count_type_test_unresolved");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 661);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = abstract_compiler__AbstractCompiler__count_type_test_unresolved(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved= for (self: AbstractCompiler, HashMap[String, Int]) */
void abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = p0; /* @count_type_test_unresolved on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved= for (self: Object, HashMap[String, Int]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val; /* @count_type_test_skipped on <self:AbstractCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @count_type_test_skipped");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 662);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = abstract_compiler__AbstractCompiler__count_type_test_skipped(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped= for (self: AbstractCompiler, HashMap[String, Int]) */
void abstract_compiler__AbstractCompiler__count_type_test_skipped_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = p0; /* @count_type_test_skipped on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped= for (self: Object, HashMap[String, Int]) */
void VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d(val* self, val* p0) {
abstract_compiler__AbstractCompiler__count_type_test_skipped_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* abstract_compiler__AbstractCompiler__init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var_res /* var res: HashMap[String, Int] */;
val* var2 /* : Array[String] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_tag /* var tag: String */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringkernel__Int);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, Int]>*/;
var_res = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[String]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_tag = var5;
var6 = 0;
var7 = BOX_kernel__Int(var6); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_res->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_res, var_tag, var7) /* []= on <var_res:HashMap[String, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: Object): HashMap[String, Int] */
val* VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#display_stats for (self: AbstractCompiler) */
void abstract_compiler__AbstractCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ToolContext */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var15 /* : HashMap[String, Int] */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
long var21 /* : Int */;
val* var22 /* : nullable Object */;
val* var23 /* : HashMap[String, Int] */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
long var29 /* : Int */;
val* var30 /* : nullable Object */;
val* var31 /* : HashMap[String, Int] */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
long var37 /* : Int */;
val* var38 /* : nullable Object */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
val* var46 /* : Array[String] */;
val* var47 /* : Iterator[nullable Object] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var50 /* : HashMap[String, Int] */;
val* var51 /* : nullable Object */;
val* var52 /* : HashMap[String, Int] */;
val* var53 /* : nullable Object */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
long var58 /* : Int */;
val* var59 /* : HashMap[String, Int] */;
val* var60 /* : nullable Object */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
val* var65 /* : nullable Object */;
val* var66 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var_72 /* var : String */;
val* var73 /* : nullable Object */;
val* var74 /* : HashMap[String, Int] */;
val* var75 /* : nullable Object */;
long var76 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
val* var81 /* : nullable Object */;
val* var82 /* : HashMap[String, Int] */;
val* var_83 /* var : HashMap[String, Int] */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var_89 /* var : String */;
val* var90 /* : nullable Object */;
val* var91 /* : HashMap[String, Int] */;
val* var92 /* : nullable Object */;
long var93 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
long var97 /* : Int */;
val* var98 /* : nullable Object */;
val* var99 /* : HashMap[String, Int] */;
val* var_100 /* var : HashMap[String, Int] */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var_106 /* var : String */;
val* var107 /* : nullable Object */;
val* var108 /* : HashMap[String, Int] */;
val* var109 /* : nullable Object */;
long var110 /* : Int */;
long var112 /* : Int */;
long var113 /* : Int */;
long var114 /* : Int */;
val* var115 /* : nullable Object */;
val* var_116 /* var : HashMap[String, Int] */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var_122 /* var : String */;
val* var123 /* : nullable Object */;
val* var124 /* : nullable Object */;
long var125 /* : Int */;
long var127 /* : Int */;
long var128 /* : Int */;
long var129 /* : Int */;
val* var130 /* : nullable Object */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : nullable Object */;
long var137 /* : Int */;
long var_count_type_test /* var count_type_test: Int */;
val* var138 /* : Array[String] */;
val* var139 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
val* var145 /* : Iterator[nullable Object] */;
short int var146 /* : Bool */;
val* var147 /* : nullable Object */;
val* var_tag148 /* var tag: String */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : HashMap[String, Int] */;
val* var158 /* : nullable Object */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : HashMap[String, Int] */;
val* var165 /* : nullable Object */;
val* var166 /* : String */;
long var167 /* : Int */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
val* var177 /* : Array[Object] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[Object] */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
val* var185 /* : HashMap[String, Int] */;
val* var186 /* : nullable Object */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : String */;
val* var192 /* : HashMap[String, Int] */;
val* var193 /* : nullable Object */;
val* var194 /* : String */;
long var195 /* : Int */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : String */;
val* var201 /* : Array[Object] */;
long var202 /* : Int */;
val* var203 /* : NativeArray[Object] */;
val* var204 /* : String */;
val* var205 /* : Array[Object] */;
long var206 /* : Int */;
val* var207 /* : NativeArray[Object] */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : String */;
val* var213 /* : HashMap[String, Int] */;
val* var214 /* : nullable Object */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : String */;
val* var220 /* : HashMap[String, Int] */;
val* var221 /* : nullable Object */;
val* var222 /* : String */;
long var223 /* : Int */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : String */;
val* var229 /* : Array[Object] */;
long var230 /* : Int */;
val* var231 /* : NativeArray[Object] */;
val* var232 /* : String */;
val* var233 /* : Array[Object] */;
long var234 /* : Int */;
val* var235 /* : NativeArray[Object] */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : String */;
val* var241 /* : nullable Object */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
val* var247 /* : nullable Object */;
val* var248 /* : String */;
long var249 /* : Int */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : String */;
val* var255 /* : Array[Object] */;
long var256 /* : Int */;
val* var257 /* : NativeArray[Object] */;
val* var258 /* : String */;
val* var259 /* : Array[Object] */;
long var260 /* : Int */;
val* var261 /* : NativeArray[Object] */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var) /* toolcontext on <var:ModelBuilder>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var1) /* opt_typing_test_metrics on <var1:ToolContext>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_opts__Option__value]))(var2) /* value on <var2:OptionBool>*/;
var4 = ((struct instance_kernel__Bool*)var3)->value; /* autounbox from nullable Object to Bool */;
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "# static count_type_test";
var7 = 24;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var5) /* print on <self:AbstractCompiler>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "\11resolved:\11unresolved\11skipped\11total";
var12 = 35;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var10) /* print on <self:AbstractCompiler>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:AbstractCompiler>*/;
var_count_type_test_total = var14;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(self) /* count_type_test_resolved on <self:AbstractCompiler>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "total";
var19 = 5;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = 0;
var22 = BOX_kernel__Int(var21); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var15, var17, var22) /* []= on <var15:HashMap[String, Int]>*/;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(self) /* count_type_test_unresolved on <self:AbstractCompiler>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "total";
var27 = 5;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = 0;
var30 = BOX_kernel__Int(var29); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var23->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var23, var25, var30) /* []= on <var23:HashMap[String, Int]>*/;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(self) /* count_type_test_skipped on <self:AbstractCompiler>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "total";
var35 = 5;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = 0;
var38 = BOX_kernel__Int(var37); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var31->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var31, var33, var38) /* []= on <var31:HashMap[String, Int]>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "total";
var42 = 5;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = 0;
var45 = BOX_kernel__Int(var44); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_count_type_test_total->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_count_type_test_total, var40, var45) /* []= on <var_count_type_test_total:HashMap[String, Int]>*/;
var46 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_abstract_collection__Collection__iterator]))(var46) /* iterator on <var46:Array[String]>*/;
for(;;) {
var48 = ((short int (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var47) /* is_ok on <var47:Iterator[nullable Object]>*/;
if(!var48) break;
var49 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__item]))(var47) /* item on <var47:Iterator[nullable Object]>*/;
var_tag = var49;
var50 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(self) /* count_type_test_resolved on <self:AbstractCompiler>*/;
var51 = ((val* (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var50, var_tag) /* [] on <var50:HashMap[String, Int]>*/;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(self) /* count_type_test_unresolved on <self:AbstractCompiler>*/;
var53 = ((val* (*)(val*, val*))(var52->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var52, var_tag) /* [] on <var52:HashMap[String, Int]>*/;
{ /* Inline kernel#Int#+ (var51,var53) */
var56 = ((struct instance_kernel__Int*)var51)->value; /* autounbox from nullable Object to Int */;
var57 = ((struct instance_kernel__Int*)var53)->value; /* autounbox from nullable Object to Int */;
var58 = var56 + var57;
var54 = var58;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var59 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(self) /* count_type_test_skipped on <self:AbstractCompiler>*/;
var60 = ((val* (*)(val*, val*))(var59->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var59, var_tag) /* [] on <var59:HashMap[String, Int]>*/;
{ /* Inline kernel#Int#+ (var54,var60) */
var63 = ((struct instance_kernel__Int*)var60)->value; /* autounbox from nullable Object to Int */;
var64 = var54 + var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var65 = BOX_kernel__Int(var61); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_count_type_test_total->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_count_type_test_total, var_tag, var65) /* []= on <var_count_type_test_total:HashMap[String, Int]>*/;
var66 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(self) /* count_type_test_resolved on <self:AbstractCompiler>*/;
var_ = var66;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "total";
var70 = 5;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var_72 = var68;
var73 = ((val* (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_, var_72) /* [] on <var_:HashMap[String, Int]>*/;
var74 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(self) /* count_type_test_resolved on <self:AbstractCompiler>*/;
var75 = ((val* (*)(val*, val*))(var74->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var74, var_tag) /* [] on <var74:HashMap[String, Int]>*/;
{ /* Inline kernel#Int#+ (var73,var75) */
var78 = ((struct instance_kernel__Int*)var73)->value; /* autounbox from nullable Object to Int */;
var79 = ((struct instance_kernel__Int*)var75)->value; /* autounbox from nullable Object to Int */;
var80 = var78 + var79;
var76 = var80;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var81 = BOX_kernel__Int(var76); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_, var_72, var81) /* []= on <var_:HashMap[String, Int]>*/;
var82 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(self) /* count_type_test_unresolved on <self:AbstractCompiler>*/;
var_83 = var82;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "total";
var87 = 5;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var_89 = var85;
var90 = ((val* (*)(val*, val*))(var_83->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_83, var_89) /* [] on <var_83:HashMap[String, Int]>*/;
var91 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(self) /* count_type_test_unresolved on <self:AbstractCompiler>*/;
var92 = ((val* (*)(val*, val*))(var91->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var91, var_tag) /* [] on <var91:HashMap[String, Int]>*/;
{ /* Inline kernel#Int#+ (var90,var92) */
var95 = ((struct instance_kernel__Int*)var90)->value; /* autounbox from nullable Object to Int */;
var96 = ((struct instance_kernel__Int*)var92)->value; /* autounbox from nullable Object to Int */;
var97 = var95 + var96;
var93 = var97;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var98 = BOX_kernel__Int(var93); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_83->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_83, var_89, var98) /* []= on <var_83:HashMap[String, Int]>*/;
var99 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(self) /* count_type_test_skipped on <self:AbstractCompiler>*/;
var_100 = var99;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "total";
var104 = 5;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var_106 = var102;
var107 = ((val* (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_100, var_106) /* [] on <var_100:HashMap[String, Int]>*/;
var108 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(self) /* count_type_test_skipped on <self:AbstractCompiler>*/;
var109 = ((val* (*)(val*, val*))(var108->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var108, var_tag) /* [] on <var108:HashMap[String, Int]>*/;
{ /* Inline kernel#Int#+ (var107,var109) */
var112 = ((struct instance_kernel__Int*)var107)->value; /* autounbox from nullable Object to Int */;
var113 = ((struct instance_kernel__Int*)var109)->value; /* autounbox from nullable Object to Int */;
var114 = var112 + var113;
var110 = var114;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
var115 = BOX_kernel__Int(var110); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_100->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_100, var_106, var115) /* []= on <var_100:HashMap[String, Int]>*/;
var_116 = var_count_type_test_total;
if (varonce117) {
var118 = varonce117;
} else {
var119 = "total";
var120 = 5;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var_122 = var118;
var123 = ((val* (*)(val*, val*))(var_116->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_116, var_122) /* [] on <var_116:HashMap[String, Int]>*/;
var124 = ((val* (*)(val*, val*))(var_count_type_test_total->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_count_type_test_total, var_tag) /* [] on <var_count_type_test_total:HashMap[String, Int]>*/;
{ /* Inline kernel#Int#+ (var123,var124) */
var127 = ((struct instance_kernel__Int*)var123)->value; /* autounbox from nullable Object to Int */;
var128 = ((struct instance_kernel__Int*)var124)->value; /* autounbox from nullable Object to Int */;
var129 = var127 + var128;
var125 = var129;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var130 = BOX_kernel__Int(var125); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_116->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_116, var_122, var130) /* []= on <var_116:HashMap[String, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__next]))(var47) /* next on <var47:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce131) {
var132 = varonce131;
} else {
var133 = "total";
var134 = 5;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = ((val* (*)(val*, val*))(var_count_type_test_total->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_count_type_test_total, var132) /* [] on <var_count_type_test_total:HashMap[String, Int]>*/;
var137 = ((struct instance_kernel__Int*)var136)->value; /* autounbox from nullable Object to Int */;
var_count_type_test = var137;
var138 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_tags]))(self) /* count_type_test_tags on <self:AbstractCompiler>*/;
var139 = ((val* (*)(val*))(var138->class->vft[COLOR_array__Collection__to_a]))(var138) /* to_a on <var138:Array[String]>*/;
var_tags = var139;
if (varonce140) {
var141 = varonce140;
} else {
var142 = "total";
var143 = 5;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
((void (*)(val*, val*))(var_tags->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tags, var141) /* add on <var_tags:Array[String]>*/;
var145 = ((val* (*)(val*))(var_tags->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_tags) /* iterator on <var_tags:Array[String]>*/;
for(;;) {
var146 = ((short int (*)(val*))(var145->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var145) /* is_ok on <var145:Iterator[nullable Object]>*/;
if(!var146) break;
var147 = ((val* (*)(val*))(var145->class->vft[COLOR_abstract_collection__Iterator__item]))(var145) /* item on <var145:Iterator[nullable Object]>*/;
var_tag148 = var147;
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 1;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var_tag148;
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__printn]))(self, var149) /* printn on <self:AbstractCompiler>*/;
if (varonce152) {
var153 = varonce152;
} else {
var154 = "\11";
var155 = 1;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(self) /* count_type_test_resolved on <self:AbstractCompiler>*/;
var158 = ((val* (*)(val*, val*))(var157->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var157, var_tag148) /* [] on <var157:HashMap[String, Int]>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = " (";
var162 = 2;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(self) /* count_type_test_resolved on <self:AbstractCompiler>*/;
var165 = ((val* (*)(val*, val*))(var164->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var164, var_tag148) /* [] on <var164:HashMap[String, Int]>*/;
var167 = ((struct instance_kernel__Int*)var165)->value; /* autounbox from nullable Object to Int */;
var166 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__div]))(self, var167, var_count_type_test) /* div on <self:AbstractCompiler>*/;
if (varonce168) {
var169 = varonce168;
} else {
var170 = "%)";
var171 = 2;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 5;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var153;
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var158;
((struct instance_array__NativeArray*)var175)->values[2] = (val*) var160;
((struct instance_array__NativeArray*)var175)->values[3] = (val*) var166;
((struct instance_array__NativeArray*)var175)->values[4] = (val*) var169;
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
var177 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var177 = array_instance Array[Object] */
var178 = 1;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var176;
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[Object]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__printn]))(self, var177) /* printn on <self:AbstractCompiler>*/;
if (varonce180) {
var181 = varonce180;
} else {
var182 = "\11";
var183 = 1;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(self) /* count_type_test_unresolved on <self:AbstractCompiler>*/;
var186 = ((val* (*)(val*, val*))(var185->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var185, var_tag148) /* [] on <var185:HashMap[String, Int]>*/;
if (varonce187) {
var188 = varonce187;
} else {
var189 = " (";
var190 = 2;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(self) /* count_type_test_unresolved on <self:AbstractCompiler>*/;
var193 = ((val* (*)(val*, val*))(var192->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var192, var_tag148) /* [] on <var192:HashMap[String, Int]>*/;
var195 = ((struct instance_kernel__Int*)var193)->value; /* autounbox from nullable Object to Int */;
var194 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__div]))(self, var195, var_count_type_test) /* div on <self:AbstractCompiler>*/;
if (varonce196) {
var197 = varonce196;
} else {
var198 = "%)";
var199 = 2;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
var201 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var201 = array_instance Array[Object] */
var202 = 5;
var203 = NEW_array__NativeArray(var202, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var203)->values[0] = (val*) var181;
((struct instance_array__NativeArray*)var203)->values[1] = (val*) var186;
((struct instance_array__NativeArray*)var203)->values[2] = (val*) var188;
((struct instance_array__NativeArray*)var203)->values[3] = (val*) var194;
((struct instance_array__NativeArray*)var203)->values[4] = (val*) var197;
((void (*)(val*, val*, long))(var201->class->vft[COLOR_array__Array__with_native]))(var201, var203, var202) /* with_native on <var201:Array[Object]>*/;
}
var204 = ((val* (*)(val*))(var201->class->vft[COLOR_string__Object__to_s]))(var201) /* to_s on <var201:Array[Object]>*/;
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 1;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var204;
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__printn]))(self, var205) /* printn on <self:AbstractCompiler>*/;
if (varonce208) {
var209 = varonce208;
} else {
var210 = "\11";
var211 = 1;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
var213 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(self) /* count_type_test_skipped on <self:AbstractCompiler>*/;
var214 = ((val* (*)(val*, val*))(var213->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var213, var_tag148) /* [] on <var213:HashMap[String, Int]>*/;
if (varonce215) {
var216 = varonce215;
} else {
var217 = " (";
var218 = 2;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(self) /* count_type_test_skipped on <self:AbstractCompiler>*/;
var221 = ((val* (*)(val*, val*))(var220->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var220, var_tag148) /* [] on <var220:HashMap[String, Int]>*/;
var223 = ((struct instance_kernel__Int*)var221)->value; /* autounbox from nullable Object to Int */;
var222 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__div]))(self, var223, var_count_type_test) /* div on <self:AbstractCompiler>*/;
if (varonce224) {
var225 = varonce224;
} else {
var226 = "%)";
var227 = 2;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
var229 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var229 = array_instance Array[Object] */
var230 = 5;
var231 = NEW_array__NativeArray(var230, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var231)->values[0] = (val*) var209;
((struct instance_array__NativeArray*)var231)->values[1] = (val*) var214;
((struct instance_array__NativeArray*)var231)->values[2] = (val*) var216;
((struct instance_array__NativeArray*)var231)->values[3] = (val*) var222;
((struct instance_array__NativeArray*)var231)->values[4] = (val*) var225;
((void (*)(val*, val*, long))(var229->class->vft[COLOR_array__Array__with_native]))(var229, var231, var230) /* with_native on <var229:Array[Object]>*/;
}
var232 = ((val* (*)(val*))(var229->class->vft[COLOR_string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
var233 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var233 = array_instance Array[Object] */
var234 = 1;
var235 = NEW_array__NativeArray(var234, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var235)->values[0] = (val*) var232;
((void (*)(val*, val*, long))(var233->class->vft[COLOR_array__Array__with_native]))(var233, var235, var234) /* with_native on <var233:Array[Object]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__printn]))(self, var233) /* printn on <self:AbstractCompiler>*/;
if (varonce236) {
var237 = varonce236;
} else {
var238 = "\11";
var239 = 1;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
var241 = ((val* (*)(val*, val*))(var_count_type_test_total->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_count_type_test_total, var_tag148) /* [] on <var_count_type_test_total:HashMap[String, Int]>*/;
if (varonce242) {
var243 = varonce242;
} else {
var244 = " (";
var245 = 2;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
var247 = ((val* (*)(val*, val*))(var_count_type_test_total->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_count_type_test_total, var_tag148) /* [] on <var_count_type_test_total:HashMap[String, Int]>*/;
var249 = ((struct instance_kernel__Int*)var247)->value; /* autounbox from nullable Object to Int */;
var248 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__div]))(self, var249, var_count_type_test) /* div on <self:AbstractCompiler>*/;
if (varonce250) {
var251 = varonce250;
} else {
var252 = "%)";
var253 = 2;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
var255 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var255 = array_instance Array[Object] */
var256 = 5;
var257 = NEW_array__NativeArray(var256, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var257)->values[0] = (val*) var237;
((struct instance_array__NativeArray*)var257)->values[1] = (val*) var241;
((struct instance_array__NativeArray*)var257)->values[2] = (val*) var243;
((struct instance_array__NativeArray*)var257)->values[3] = (val*) var248;
((struct instance_array__NativeArray*)var257)->values[4] = (val*) var251;
((void (*)(val*, val*, long))(var255->class->vft[COLOR_array__Array__with_native]))(var255, var257, var256) /* with_native on <var255:Array[Object]>*/;
}
var258 = ((val* (*)(val*))(var255->class->vft[COLOR_string__Object__to_s]))(var255) /* to_s on <var255:Array[Object]>*/;
var259 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var259 = array_instance Array[Object] */
var260 = 1;
var261 = NEW_array__NativeArray(var260, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var261)->values[0] = (val*) var258;
((void (*)(val*, val*, long))(var259->class->vft[COLOR_array__Array__with_native]))(var259, var261, var260) /* with_native on <var259:Array[Object]>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__printn]))(self, var259) /* printn on <self:AbstractCompiler>*/;
if (varonce262) {
var263 = varonce262;
} else {
var264 = "";
var265 = 0;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var263) /* print on <self:AbstractCompiler>*/;
CONTINUE_label267: (void)0;
((void (*)(val*))(var145->class->vft[COLOR_abstract_collection__Iterator__next]))(var145) /* next on <var145:Iterator[nullable Object]>*/;
}
BREAK_label267: (void)0;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#display_stats for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompiler__display_stats(val* self) {
abstract_compiler__AbstractCompiler__display_stats(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#div for (self: AbstractCompiler, Int, Int): String */
val* abstract_compiler__AbstractCompiler__div(val* self, long p0, long p1) {
val* var /* : String */;
long var_a /* var a: Int */;
long var_b /* var b: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
double var16 /* : Float */;
double var18 /* : Float */;
double var19 /* : Float */;
double var20 /* : Float */;
double var22 /* : Float */;
long var23 /* : Int */;
val* var24 /* : String */;
var_a = p0;
var_b = p1;
var1 = 0;
{ /* Inline kernel#Int#== (var_b,var1) */
var4 = var_b == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
if (varonce) {
var5 = varonce;
} else {
var6 = "n/a";
var7 = 3;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
var9 = 10000;
{ /* Inline kernel#Int#* (var_a,var9) */
var12 = var_a * var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
{ /* Inline kernel#Int#/ (var10,var_b) */
var15 = var10 / var_b;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
{ /* Inline kernel#Int#to_f (var13) */
var18 = (double)var13;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var19 = 100.0;
{ /* Inline kernel#Float#/ (var16,var19) */
var22 = var16 / var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var23 = 2;
var24 = string__Float__to_precision(var20, var23);
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#div for (self: Object, Int, Int): String */
val* VIRTUAL_abstract_compiler__AbstractCompiler__div(val* self, long p0, long p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompiler__div(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: AbstractCompiler, AModule) */
void abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : AbstractCompilerVisitor */;
val* var_visitor /* var visitor: AbstractCompilerVisitor */;
val* var1 /* : ModelBuilder */;
var_nmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:AbstractCompiler>*/;
var_visitor = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:AbstractCompiler>*/;
((void (*)(val*, val*, val*))(var_nmodule->class->vft[COLOR_abstract_compiler__AModule__finalize_ffi]))(var_nmodule, var_visitor, var1) /* finalize_ffi on <var_nmodule:AModule>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_abstract_compiler__AModule__finalize_nitni]))(var_nmodule, var_visitor) /* finalize_nitni on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: Object, AModule) */
void VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
abstract_compiler__AbstractCompiler__finalize_ffi_for_module(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* abstract_compiler__CodeFile__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___64dname].val; /* @name on <self:CodeFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 730);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name for (self: Object): String */
val* VIRTUAL_abstract_compiler__CodeFile__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__CodeFile__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name= for (self: CodeFile, String) */
void abstract_compiler__CodeFile__name_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeFile___64dname].val = p0; /* @name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#name= for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeFile__name_61d(val* self, val* p0) {
abstract_compiler__CodeFile__name_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#writers for (self: CodeFile): Array[CodeWriter] */
val* abstract_compiler__CodeFile__writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___64dwriters].val; /* @writers on <self:CodeFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @writers");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 731);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#writers for (self: Object): Array[CodeWriter] */
val* VIRTUAL_abstract_compiler__CodeFile__writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = abstract_compiler__CodeFile__writers(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#writers= for (self: CodeFile, Array[CodeWriter]) */
void abstract_compiler__CodeFile__writers_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeFile___64dwriters].val = p0; /* @writers on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#writers= for (self: Object, Array[CodeWriter]) */
void VIRTUAL_abstract_compiler__CodeFile__writers_61d(val* self, val* p0) {
abstract_compiler__CodeFile__writers_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: CodeFile): HashSet[String] */
val* abstract_compiler__CodeFile__required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeFile___64drequired_declarations].val; /* @required_declarations on <self:CodeFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @required_declarations");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 732);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: Object): HashSet[String] */
val* VIRTUAL_abstract_compiler__CodeFile__required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = abstract_compiler__CodeFile__required_declarations(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations= for (self: CodeFile, HashSet[String]) */
void abstract_compiler__CodeFile__required_declarations_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeFile___64drequired_declarations].val = p0; /* @required_declarations on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#required_declarations= for (self: Object, HashSet[String]) */
void VIRTUAL_abstract_compiler__CodeFile__required_declarations_61d(val* self, val* p0) {
abstract_compiler__CodeFile__required_declarations_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile, String) */
void abstract_compiler__CodeFile__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeFile___64dname].val = p0; /* @name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#init for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeFile__init(val* self, val* p0) {
abstract_compiler__CodeFile__init(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file for (self: CodeWriter): CodeFile */
val* abstract_compiler__CodeWriter__file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_abstract_compiler__CodeWriter___64dfile].val; /* @file on <self:CodeWriter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @file");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 737);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file for (self: Object): CodeFile */
val* VIRTUAL_abstract_compiler__CodeWriter__file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = abstract_compiler__CodeWriter__file(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file= for (self: CodeWriter, CodeFile) */
void abstract_compiler__CodeWriter__file_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeWriter___64dfile].val = p0; /* @file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file= for (self: Object, CodeFile) */
void VIRTUAL_abstract_compiler__CodeWriter__file_61d(val* self, val* p0) {
abstract_compiler__CodeWriter__file_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#lines for (self: CodeWriter): List[String] */
val* abstract_compiler__CodeWriter__lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeWriter___64dlines].val; /* @lines on <self:CodeWriter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @lines");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 738);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#lines for (self: Object): List[String] */
val* VIRTUAL_abstract_compiler__CodeWriter__lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = abstract_compiler__CodeWriter__lines(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#lines= for (self: CodeWriter, List[String]) */
void abstract_compiler__CodeWriter__lines_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeWriter___64dlines].val = p0; /* @lines on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#lines= for (self: Object, List[String]) */
void VIRTUAL_abstract_compiler__CodeWriter__lines_61d(val* self, val* p0) {
abstract_compiler__CodeWriter__lines_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: CodeWriter): List[String] */
val* abstract_compiler__CodeWriter__decl_lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = self->attrs[COLOR_abstract_compiler__CodeWriter___64ddecl_lines].val; /* @decl_lines on <self:CodeWriter> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @decl_lines");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 739);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: Object): List[String] */
val* VIRTUAL_abstract_compiler__CodeWriter__decl_lines(val* self) {
val* var /* : List[String] */;
val* var1 /* : List[String] */;
var1 = abstract_compiler__CodeWriter__decl_lines(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines= for (self: CodeWriter, List[String]) */
void abstract_compiler__CodeWriter__decl_lines_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__CodeWriter___64ddecl_lines].val = p0; /* @decl_lines on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#decl_lines= for (self: Object, List[String]) */
void VIRTUAL_abstract_compiler__CodeWriter__decl_lines_61d(val* self, val* p0) {
abstract_compiler__CodeWriter__decl_lines_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#add for (self: CodeWriter, String) */
void abstract_compiler__CodeWriter__add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(self) /* lines on <self:CodeWriter>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var_s) /* add on <var:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#add for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeWriter__add(val* self, val* p0) {
abstract_compiler__CodeWriter__add(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: CodeWriter, String) */
void abstract_compiler__CodeWriter__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(self) /* decl_lines on <self:CodeWriter>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var_s) /* add on <var:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__CodeWriter__add_decl(val* self, val* p0) {
abstract_compiler__CodeWriter__add_decl(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: CodeWriter, CodeFile) */
void abstract_compiler__CodeWriter__init(val* self, val* p0) {
val* var_file /* var file: CodeFile */;
val* var /* : Array[CodeWriter] */;
var_file = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__CodeWriter__file_61d]))(self, var_file) /* file= on <self:CodeWriter>*/;
var = ((val* (*)(val*))(var_file->class->vft[COLOR_abstract_compiler__CodeFile__writers]))(var_file) /* writers on <var_file:CodeFile>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, self) /* add on <var:Array[CodeWriter]>*/;
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: Object, CodeFile) */
void VIRTUAL_abstract_compiler__CodeWriter__init(val* self, val* p0) {
abstract_compiler__CodeWriter__init(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* abstract_compiler__AbstractCompilerVisitor__compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @compiler");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 760);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: Object): AbstractCompiler */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = abstract_compiler__AbstractCompilerVisitor__compiler(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void abstract_compiler__AbstractCompilerVisitor__compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 760);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val = p0; /* @compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__compiler_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* abstract_compiler__AbstractCompilerVisitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val; /* @current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: Object): nullable ANode */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = abstract_compiler__AbstractCompilerVisitor__current_node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void abstract_compiler__AbstractCompilerVisitor__current_node_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = p0; /* @current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: Object, nullable ANode) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__current_node_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: AbstractCompilerVisitor): nullable Frame */
val* abstract_compiler__AbstractCompilerVisitor__frame(val* self) {
val* var /* : nullable Frame */;
val* var1 /* : nullable Frame */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: Object): nullable Frame */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame(val* self) {
val* var /* : nullable Frame */;
val* var1 /* : nullable Frame */;
var1 = abstract_compiler__AbstractCompilerVisitor__frame(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: AbstractCompilerVisitor, nullable Frame) */
void abstract_compiler__AbstractCompilerVisitor__frame_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val = p0; /* @frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: Object, nullable Frame) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__frame_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: AbstractCompilerVisitor): MClassType */
val* abstract_compiler__AbstractCompilerVisitor__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : MModule */;
val* var3 /* : MClassType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var1) /* mainmodule on <var1:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MModule__object_type]))(var2) /* object_type on <var2:MModule>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: AbstractCompilerVisitor): MClassType */
val* abstract_compiler__AbstractCompilerVisitor__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : MModule */;
val* var3 /* : MClassType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var1) /* mainmodule on <var1:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MModule__bool_type]))(var2) /* bool_type on <var2:MModule>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: AbstractCompilerVisitor): CodeWriter */
val* abstract_compiler__AbstractCompilerVisitor__writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @writer");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 775);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: Object): CodeWriter */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = abstract_compiler__AbstractCompilerVisitor__writer(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void abstract_compiler__AbstractCompilerVisitor__writer_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val = p0; /* @writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: Object, CodeWriter) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__writer_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: AbstractCompilerVisitor, AbstractCompiler) */
void abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : CodeWriter */;
val* var2 /* : List[CodeFile] */;
val* var3 /* : nullable Object */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 777);
show_backtrace(1);
}
var_compiler = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(self, var_compiler) /* compiler= on <self:AbstractCompilerVisitor>*/;
var1 = NEW_abstract_compiler__CodeWriter(&type_abstract_compiler__CodeWriter);
var2 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__files]))(var_compiler) /* files on <var_compiler:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var2) /* last on <var2:List[CodeFile]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__CodeWriter__init]))(var1, var3) /* init on <var1:CodeWriter>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer_61d]))(self, var1) /* writer= on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__init(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_class for (self: AbstractCompilerVisitor, String): MClass */
val* abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0) {
val* var /* : MClass */;
val* var_name /* var name: String */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : MModule */;
val* var3 /* : MClass */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var1) /* mainmodule on <var1:AbstractCompiler>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_model__MModule__get_primitive_class]))(var2, var_name) /* get_primitive_class on <var2:MModule>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_class for (self: Object, String): MClass */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_class(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* abstract_compiler__AbstractCompilerVisitor__get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var4 /* : nullable ANode */;
val* var5 /* : MClass */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : MModule */;
val* var8 /* : MMethod */;
var_name = p0;
var_recv = p1;
/* <var_recv:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 789);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 790);
show_backtrace(1);
}
var5 = ((val* (*)(val*))(var_recv->class->vft[COLOR_model__MClassType__mclass]))(var_recv) /* mclass on <var_recv:MType(MClassType)>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var6) /* mainmodule on <var6:AbstractCompiler>*/;
var8 = ((val* (*)(val*, val*, val*, val*, val*))(var3->class->vft[COLOR_modelbuilder__ModelBuilder__force_get_primitive_method]))(var3, var4, var_name, var5, var7) /* force_get_primitive_method on <var3:ModelBuilder>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: Object, String, MType): MMethod */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_property(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MMethod */;
val* var2 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
var1 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:CallSite>*/;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var1, var_args) /* send on <self:AbstractCompilerVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: Object, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__compile_callsite(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#calloc_array for (self: AbstractCompilerVisitor, MType, Array[RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "calloc_array", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 798);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#calloc_array for (self: Object, MType, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompilerVisitor__calloc_array(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#native_array_def for (self: AbstractCompilerVisitor, String, nullable MType, Array[RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "native_array_def", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 800);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#native_array_def for (self: Object, String, nullable MType, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__native_array_def(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MPropDef, MSignature, Array[RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2) {
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_msignature /* var msignature: MSignature */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var1 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
val* var_rawargs /* var rawargs: Array[RuntimeVariable] */;
val* var20 /* : Array[RuntimeVariable] */;
val* var21 /* : nullable Object */;
val* var22 /* : Range[Int] */;
long var23 /* : Int */;
val* var24 /* : Discrete */;
val* var25 /* : Discrete */;
val* var26 /* : Iterator[nullable Object] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
long var_i /* var i: Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
long var_vararg_lastrank /* var vararg_lastrank: Int */;
val* var47 /* : Array[RuntimeVariable] */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var48 /* : Range[Int] */;
val* var49 /* : Discrete */;
val* var50 /* : Discrete */;
val* var51 /* : Iterator[nullable Object] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
long var_i54 /* var i: Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
val* var60 /* : nullable Object */;
val* var62 /* : Array[MParameter] */;
val* var63 /* : nullable Object */;
val* var64 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var65 /* : RuntimeVariable */;
val* var66 /* : Range[Int] */;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
long var75 /* : Int */;
val* var76 /* : Discrete */;
val* var77 /* : Discrete */;
val* var78 /* : Iterator[nullable Object] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
long var_i81 /* var i: Int */;
long var82 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
long var86 /* : Int */;
val* var87 /* : nullable Object */;
var_mpropdef = p0;
var_msignature = p1;
var_args = p2;
var = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var_recv = var;
var1 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:MSignature>*/;
var_vararg_rank = var1;
var2 = 0;
{ /* Inline kernel#Int#>= (var_vararg_rank,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var6 = var_vararg_rank >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
var8 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var9 = 1;
{ /* Inline kernel#Int#+ (var8,var9) */
var12 = var8 + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
{ /* Inline kernel#Int#>= (var7,var10) */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var15 = 1; /* easy <var10:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var19 = var7 >= var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 810);
show_backtrace(1);
}
var_rawargs = var_args;
var20 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var20->class->vft[COLOR_array__Array__init]))(var20) /* init on <var20:Array[RuntimeVariable]>*/;
var_args = var20;
var21 = ((val* (*)(val*))(var_rawargs->class->vft[COLOR_abstract_collection__Collection__first]))(var_rawargs) /* first on <var_rawargs:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var21) /* add on <var_args:Array[RuntimeVariable]>*/;
var22 = NEW_range__Range(&type_range__Rangekernel__Int);
var23 = 0;
var24 = BOX_kernel__Int(var23); /* autobox from Int to Discrete */
var25 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var22->class->vft[COLOR_range__Range__without_last]))(var22, var24, var25) /* without_last on <var22:Range[Int]>*/;
var26 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var22) /* iterator on <var22:Range[Int]>*/;
for(;;) {
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[nullable Object]>*/;
if(!var27) break;
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[nullable Object]>*/;
var29 = ((struct instance_kernel__Int*)var28)->value; /* autounbox from nullable Object to Int */;
var_i = var29;
var30 = 1;
{ /* Inline kernel#Int#+ (var_i,var30) */
var33 = var_i + var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var34 = ((val* (*)(val*, long))(var_rawargs->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_rawargs, var31) /* [] on <var_rawargs:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var34) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var35 = ((long (*)(val*))(var_rawargs->class->vft[COLOR_abstract_collection__Collection__length]))(var_rawargs) /* length on <var_rawargs:Array[RuntimeVariable]>*/;
{ /* Inline kernel#Int#+ (var_vararg_rank,var35) */
var38 = var_vararg_rank + var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var39 = 1;
{ /* Inline kernel#Int#- (var36,var39) */
var42 = var36 - var39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var43 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#- (var40,var43) */
var46 = var40 - var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var_vararg_lastrank = var44;
var47 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var47->class->vft[COLOR_array__Array__init]))(var47) /* init on <var47:Array[RuntimeVariable]>*/;
var_vararg = var47;
var48 = NEW_range__Range(&type_range__Rangekernel__Int);
var49 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
var50 = BOX_kernel__Int(var_vararg_lastrank); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var48->class->vft[COLOR_range__Range__init]))(var48, var49, var50) /* init on <var48:Range[Int]>*/;
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Collection__iterator]))(var48) /* iterator on <var48:Range[Int]>*/;
for(;;) {
var52 = ((short int (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var51) /* is_ok on <var51:Iterator[nullable Object]>*/;
if(!var52) break;
var53 = ((val* (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__item]))(var51) /* item on <var51:Iterator[nullable Object]>*/;
var55 = ((struct instance_kernel__Int*)var53)->value; /* autounbox from nullable Object to Int */;
var_i54 = var55;
var56 = 1;
{ /* Inline kernel#Int#+ (var_i54,var56) */
var59 = var_i54 + var56;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var60 = ((val* (*)(val*, long))(var_rawargs->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_rawargs, var57) /* [] on <var_rawargs:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_vararg->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_vararg, var60) /* add on <var_vararg:Array[RuntimeVariable]>*/;
CONTINUE_label61: (void)0;
((void (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__next]))(var51) /* next on <var51:Iterator[nullable Object]>*/;
}
BREAK_label61: (void)0;
var62 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var63 = ((val* (*)(val*, long))(var62->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var62, var_vararg_rank) /* [] on <var62:Array[MParameter]>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_model__MParameter__mtype]))(var63) /* mtype on <var63:nullable Object(MParameter)>*/;
var_elttype = var64;
var65 = ((val* (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__vararg_instance]))(self, var_mpropdef, var_recv, var_vararg, var_elttype) /* vararg_instance on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var65) /* add on <var_args:Array[RuntimeVariable]>*/;
var66 = NEW_range__Range(&type_range__Rangekernel__Int);
var67 = 1;
{ /* Inline kernel#Int#+ (var_vararg_lastrank,var67) */
var70 = var_vararg_lastrank + var67;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var71 = ((long (*)(val*))(var_rawargs->class->vft[COLOR_abstract_collection__Collection__length]))(var_rawargs) /* length on <var_rawargs:Array[RuntimeVariable]>*/;
var72 = 1;
{ /* Inline kernel#Int#- (var71,var72) */
var75 = var71 - var72;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var76 = BOX_kernel__Int(var68); /* autobox from Int to Discrete */
var77 = BOX_kernel__Int(var73); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var66->class->vft[COLOR_range__Range__without_last]))(var66, var76, var77) /* without_last on <var66:Range[Int]>*/;
var78 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_collection__Collection__iterator]))(var66) /* iterator on <var66:Range[Int]>*/;
for(;;) {
var79 = ((short int (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var78) /* is_ok on <var78:Iterator[nullable Object]>*/;
if(!var79) break;
var80 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__item]))(var78) /* item on <var78:Iterator[nullable Object]>*/;
var82 = ((struct instance_kernel__Int*)var80)->value; /* autounbox from nullable Object to Int */;
var_i81 = var82;
var83 = 1;
{ /* Inline kernel#Int#+ (var_i81,var83) */
var86 = var_i81 + var83;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var87 = ((val* (*)(val*, long))(var_rawargs->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_rawargs, var84) /* [] on <var_rawargs:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var87) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label88: (void)0;
((void (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__next]))(var78) /* next on <var78:Iterator[nullable Object]>*/;
}
BREAK_label88: (void)0;
((void (*)(val*))(var_rawargs->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var_rawargs) /* clear on <var_rawargs:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_rawargs->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_rawargs, var_args) /* add_all on <var_rawargs:Array[RuntimeVariable]>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: Object, MPropDef, MSignature, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__varargize(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: AbstractCompilerVisitor, MType): MType */
val* abstract_compiler__AbstractCompilerVisitor__anchor(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var5 /* : nullable Frame */;
val* var6 /* : MClassType */;
val* var7 /* : MType */;
var_mtype = p0;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var3) /* mainmodule on <var3:AbstractCompiler>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:AbstractCompilerVisitor>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 843);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_compiler__Frame__receiver]))(var5) /* receiver on <var5:nullable Frame>*/;
}
var7 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var4, var6) /* anchor_to on <var_mtype:MType>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: Object, MType): MType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor(val* self, val* p0) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__AbstractCompilerVisitor__anchor(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* abstract_compiler__AbstractCompilerVisitor__resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_recv /* var recv: RuntimeVariable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : nullable Frame */;
val* var5 /* : MClassType */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : MModule */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
var_mtype = p0;
var_recv = p1;
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_recv) /* mcasttype on <var_recv:RuntimeVariable>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 849);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__Frame__receiver]))(var4) /* receiver on <var4:nullable Frame>*/;
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var6) /* mainmodule on <var6:AbstractCompiler>*/;
var8 = 1;
var9 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var3, var5, var7, var8) /* resolve_for on <var_mtype:MType>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: Object, MType, RuntimeVariable): MType */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__AbstractCompilerVisitor__resolve_for(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var_valmtype /* var valmtype: MType */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var9 /* : MType */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : MModule */;
val* var12 /* : null */;
short int var13 /* : Bool */;
val* var14 /* : RuntimeVariable */;
val* var15 /* : String */;
val* var16 /* : MType */;
val* var_res /* var res: RuntimeVariable */;
val* var17 /* : RuntimeVariable */;
val* var18 /* : String */;
val* var_res19 /* var res: RuntimeVariable */;
var_value = p0;
var_mtype = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var1;
var2 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
var_valmtype = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var3) /* mainmodule on <var3:AbstractCompiler>*/;
var5 = NULL;
var6 = ((short int (*)(val*, val*, val*, val*))(var_valmtype->class->vft[COLOR_model__MType__is_subtype]))(var_valmtype, var4, var5, var_mtype) /* is_subtype on <var_valmtype:MType>*/;
if (var6){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var8 = 0;
} else {
var8 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var8;
if (var8){
var9 = ((val* (*)(val*))(var_valmtype->class->vft[COLOR_model__MNullableType__mtype]))(var_valmtype) /* mtype on <var_valmtype:MType(MNullableType)>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var10) /* mainmodule on <var10:AbstractCompiler>*/;
var12 = NULL;
var13 = ((short int (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_model__MType__is_subtype]))(var9, var11, var12, var_mtype) /* is_subtype on <var9:MType>*/;
var7 = var13;
} else {
var7 = var_;
}
if (var7){
var14 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var15 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_value) /* name on <var_value:RuntimeVariable>*/;
var16 = ((val* (*)(val*))(var_valmtype->class->vft[COLOR_model__MNullableType__mtype]))(var_valmtype) /* mtype on <var_valmtype:MType(MNullableType)>*/;
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var14, var15, var_valmtype, var16) /* init on <var14:RuntimeVariable>*/;
var_res = var14;
var = var_res;
goto RET_LABEL;
} else {
var17 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var18 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(var_value) /* name on <var_value:RuntimeVariable>*/;
((void (*)(val*, val*, val*, val*))(var17->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var17, var18, var_valmtype, var_mtype) /* init on <var17:RuntimeVariable>*/;
var_res19 = var17;
var = var_res19;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__autoadapt(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#supercall for (self: AbstractCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "supercall", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 873);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#supercall for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__supercall(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#adapt_signature for (self: AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "adapt_signature", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 876);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#adapt_signature for (self: Object, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#autobox for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "autobox", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 878);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autobox for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__autobox(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#type_test for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "type_test", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 882);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#is_same_type_test for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "is_same_type_test", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 885);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#is_same_type_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__is_same_type_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#equal_test for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "equal_test", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 888);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#equal_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__equal_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#call for (self: AbstractCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "call", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 893);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#call for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#send for (self: AbstractCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "send", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 896);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var3 /* : MModule */;
val* var4 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var5 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 902);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var2) /* mainmodule on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*, val*, val*))(var_m->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var_m, var3, var_t) /* lookup_first_definition on <var_m:MMethod>*/;
var_propdef = var4;
var5 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__call]))(self, var_propdef, var_t, var_args) /* call on <self:AbstractCompilerVisitor>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: Object, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__monomorphic_send(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var3 /* : MModule */;
val* var4 /* : MPropDef */;
val* var5 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 910);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var2) /* mainmodule on <var2:AbstractCompiler>*/;
var4 = ((val* (*)(val*, val*, val*))(var_m->class->vft[COLOR_model__MPropDef__lookup_next_definition]))(var_m, var3, var_t) /* lookup_next_definition on <var_m:MMethodDef>*/;
var_m = var4;
var5 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__call]))(self, var_m, var_t, var_args) /* call on <self:AbstractCompilerVisitor>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: Object, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#isset_attribute for (self: AbstractCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "isset_attribute", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 917);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#isset_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__isset_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#read_attribute for (self: AbstractCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "read_attribute", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 920);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#read_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__read_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#write_attribute for (self: AbstractCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "write_attribute", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 923);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#write_attribute for (self: Object, MAttribute, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__write_attribute(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : AbstractCompiler */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var_maybenull /* var maybenull: Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
var_recv = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var) /* modelbuilder on <var:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_other]))(var2) /* opt_no_check_other on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var5){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_recv) /* mcasttype on <var_recv:RuntimeVariable>*/;
/* <var7:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
var_ = var8;
if (var8){
var6 = var_;
} else {
var9 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_recv) /* mcasttype on <var_recv:RuntimeVariable>*/;
/* <var9:MType> isa MNullType */
cltype11 = type_model__MNullType.color;
idtype12 = type_model__MNullType.id;
if(cltype11 >= var9->type->table_size) {
var10 = 0;
} else {
var10 = var9->type->type_table[cltype11] == idtype12;
}
var6 = var10;
}
var_maybenull = var6;
if (var_maybenull){
if (varonce) {
var13 = varonce;
} else {
var14 = "if (";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " == NULL) {";
var20 = 11;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var25) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Receiver is null";
var29 = 16;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var27) /* add_abort on <self:AbstractCompilerVisitor>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "}";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var32) /* add on <self:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, p0);
RET_LABEL:;
}
